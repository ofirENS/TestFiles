function [u,r]= TestBemHeatEq_optimized(sigIn,regOrder,lambda,alpha,numSpacePoints,initCond,plotFlag)
% Solve the inveerse heat equation with an unknown source
% u_t(x,t) = ku_{xx}(x,y) +r(t)*f(x,t)
% with 0<=x<=1, 0<=t<=T
% subject to the boundary conditions u(0,t) = u(1,t)
% and u_x(0,t)+alpha*u(0,t)=0
% and initial condition
% u(x,0) = phi(x) =u0, 0<=x<=1
% In this problem we take f(x,t) =1 for all x and t
% lambda    regularization constant (affects smoothness of source solution)
% regOrder  Tikhonov regularization term order, [0,1,or 2]
% initCond= 1 or 2, for initCond=1, the h0 and h1 function are sigIn
% for initCond = 2, the h0=h1=0, and the energy drops linearly to 0

% The convention for most matrices is that rows are time, columns are space
% alpha    = -1e-14; % for the boundary condition

if mod(numSpacePoints+1,2)~=0
    numSpacePoints=numSpacePoints+1;% make it odd
end
N0 = numSpacePoints; % space points;
N  = numel(sigIn);   % time points


if initCond==1
E  = (sigIn);      % int(u(x,t)dx) is a time function of size 1xN % assuming the temp drops to 0 at the boundaries linearly
f  = zeros(N,N0);    % function of N time points over N0 space points
f(:,1) = 1; % the source is only active at the mid point x=0.5;

% determine initial wave u(x,0) is the Phi function

u0m      = max(sigIn(1:min(10,numel(sigIn)))); % take the max value 
u0       = u0m*ones(1,N0); % u(x,0)

% Determine the boundary and initial functions
% du/dn(0,t) = q0j
q0j = zeros(N,1); % the flux 
%du/dn(1,t) = q1j
q1j = zeros(N,1); % the flux 
% u(0,t) = h0j
h0j = sigIn;%zeros(N,1);
% u(1,t) = h1j
h1j = sigIn;% zeros(N,1);

elseif initCond==2   
E  = (sigIn)/2;      % int(u(x,t)dx) is a time function of size 1xN % assuming the temp drops to 0 at the boundaries linearly
f  = zeros(N,N0);    % function of N time points over N0 space points
f(:,1) = 1; % the source is only active at the mid point x=0.5;
% determine initial wave u(x,0) is the Phi function
u0       = zeros(1,numSpacePoints);
midPoint = ceil(numSpacePoints/2);
u0m      = max(sigIn(1:min(10,numel(sigIn)))); % take the max value 
% u0       = u0m*ones(1,N0); % u(x,0)
% linearly decrease to zero to match with boundary conditions
u0(midPoint)       = u0m;
u0(1:midPoint-1)   = ((0:(midPoint-2))./midPoint)*u0m;
u0(midPoint+1:end) = (((midPoint-2):-1:0)./midPoint)*u0m;
 
% Determine the boundary and initial functions
% du/dn(0,t) = q0j
q0j = zeros(N,1); % the flux 
%du/dn(1,t) = q1j
q1j = zeros(N,1); % the flux 
% u(0,t) = h0j
h0j =  zeros(N,1);
% u(1,t) = h1j
h1j =  zeros(N,1); 
elseif initCond==3
E  = (sigIn)*N0;     % int(u(x,t)dx) is a time function of size 1xN % assuming the temp drops to 0 at the boundaries linearly
% set f to be active only in the initial point 
f  = zeros(N,N0);    % function of N time points over N0 space points
% determine initial wave u(x,0) is the Phi function
f(:,1) = 1;
u0m      = max(sigIn(1:min(10,numel(sigIn)))); % take the max value 
u0       = (u0m*ones(1,N0));%exp(-10*linspace(0,1,N0)));%ones(1,N0); % u(x,0)

% Determine the boundary and initial functions
% du/dn(0,t) = q0j
q0j = zeros(N,1); % the flux in
%du/dn(1,t) = q1j
q1j = zeros(N,1); % the flux out
% u(0,t) = h0j
h0j = sigIn;%zeros(N,1);
% u(1,t) = h1j
h1j = sigIn;%.*exp(-10*1);

else
    error('unsupported condition')
end

% Discretize the time domain
T      = numel(sigIn);   % max time;
gridT  = (0:(N)).*(T/N); % N+1 boundary time points 
t      = zeros(1,N);     % the points on which the solution will be calculated
for tIdx = 1:N
    t(tIdx) = (gridT(tIdx)+gridT(tIdx+1))/2;
end
% Discretize the space domain
gridX = (0:(N0))./N0; % N0+1 space points
x     = zeros(1,N0);  % the points on which the solution will be calculated
for xIdx = 1:numel(x)
    x(xIdx) = (gridX(xIdx+1)+gridX(xIdx))/2;
end

%===========================
% Calculate the Boundary Elements

% Calculate A and B, B*, and D
[A,B,Bstar,D] = CalculateABBStarD(N,t,gridT,x,f);% call the mex

% Calculate C
C = CalculateC(N,N0,t,gridX);

% Solve the equation
% r =((X'*X+lambda*regTerm)^-1)*X'Y, with r the source and X and Y are to be
% calculated

% Calculate the components of X and Y
[X,Y]= CalculateXY(N,N0,t,gridT,x,gridX,E,A,B,Bstar,C,D,u0,f,alpha);

% get the regularization term 
regTerm = GetRegularizationTerm(N,regOrder); % get RregTerm= 'R term

% The source solution with regularization coefficient lambda
r   = ((X')*X+lambda*regTerm)\(X'*Y);

% Calculate the solution u(x,t)
u  = CalculateHeatSolution(N0,N,t,gridT,x,u0,q0j,q1j,h0j,h1j,f,r);


% plot source, signal and solution
if all(plotFlag)
  PlotResults(t,sigIn,u,r);
end
end

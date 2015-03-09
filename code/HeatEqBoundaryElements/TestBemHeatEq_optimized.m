function [u,r]= TestBemHeatEq_optimized(sigIn,regOrder,lambda,plotFlag)
% Solve the inveerse heat equation with an unknown source
% u_t(x,t) = ku_{xx}(x,y) +r(t)*f(x,t)
% with 0<=x<=1, 0<=t<=T
% subject to the boundary conditions u(0,t) = u(1,t)
% and u_x(0,t)+alpha*u(0,t)=0
% and initial condition
% u(x,0) = phi(x) =u0, 0<=x<=1
% In this problem we take f(x,t) =1 for all x and t


% The convention for most matrices is that rows are time, columns are space
alpha    = -1; % for the boundary condition
% lambda   = 1.7; % regularization constant (affects smoothness of source solution)
% regOrder = 2;  % Tikhonov regularization term order, [0,1,or 2]

% if ~exist('sigIn','var')
%     N0     = 3;   % space points
%     N      = 150; % time points
%     % test signal
%     sigIn      = (3*cos((1:N) *pi/8)./N+0.5*randn(1,N));% a vector of N points is the integral of the solution over the space
%     E          = sigIn;
% else
    N0 = 3;        % space points;
    E  = (sigIn);  % int(u(x,t)dx) is a time function of size 1xN
    N  = numel(E); % time points
% end
f      = 1*ones(N,N0); % function of N time points over N0 space points
u0     = max(E(1:min(10,numel(E))))*ones(1,N0); % is the phi function

% Discretize the time and space domain
T      = numel(E);         % max time;
gridT  = (0:(N)).*(T/N);% N+1 points
t      = zeros(1,N);
for tIdx = 1:N
    t(tIdx) = (gridT(tIdx)+gridT(tIdx+1))/2;
end
gridX = (0:(N0))./N0;
x     = zeros(1,N0);
for xIdx = 1:numel(x)
    x(xIdx) = (gridX(xIdx+1)+gridX(xIdx))/2;
end

% Determine the boundary and initial functions
% u(0,t) = h0j
h0j = zeros(N,1);
% u(1,t) = h1j
h1j = zeros(N,1);
% du/dn(0,t) = q0j
q0j = zeros(N,1);
%du/dn(1,t) = q1j
q1j = zeros(N,1);

%===========================
% Calculate the matrix for the Acoeff,Bcoeff, BStar, D, C to be used later
% for A,B,C,D

% the spatial domain for the calculation is the [0, x, 1]
% xPoints   = [0, x, 1]; % add boundary points to the intermidiate ones
% Nx        = numel(xPoints);
% aCoeffMat0 = zeros(N,Nx);
% aCoeffMat1 = zeros(N,Nx);
% bCoeffMat0 = zeros(N,Nx);
% bCoeffMat1 = zeros(N,Nx);
% for j=1:numel(xPoints)
%     for i=1:N
%         aCoeffMat0(i,j) = Acoeff(0,xPoints(j),t(i),gridT(i:i+1));
%         aCoeffMat1(i,j) = Acoeff(1,xPoints(j),t(i),gridT(i:i+1));
%         bCoeffMat0(i,j) = Bcoeff(0,xPoints(j),t(i),gridT(i:i+1));
%         bCoeffMat1(i,j) = Bcoeff(1,xPoints(j),t(i),gridT(i:i+1));
%     end
% end


% Calculate the Boundary Elements

% Calculate A and B, B*, and D
A      = zeros(2*N,2*N);
B      = zeros(2*N,2*N);
Bstar  = zeros(2*N,2*N);
D      = zeros(2*N,N);
for j = 1:N % time
    for i = 1:N % time
        deltaij = double(i==j);
%         A(2*i-1:2*i,2*j-1:2*j) = [aCoeffMat0(1,i), aCoeffMat1(1,i);...
%                                   aCoeffMat0(end,i), aCoeffMat1(end,i)];
        A(2*i-1:2*i,2*j-1:2*j) = [Acoeff(0,j,0,t(i),gridT), Acoeff(1,j,0,t(i),gridT);...
                                  Acoeff(0,j,1,t(i),gridT), Acoeff(1,j,1,t(i),gridT)];
        % temp terms
        b1j0i = Bcoeff(1,j,0,t(i),gridT);
        b1j1i = Bcoeff(1,j,1,t(i),gridT);
        
        B(2*i-1:2*i,2*j-1:2*j) = [Bcoeff(0,j,0,t(i),gridT)+0.5*deltaij, b1j0i;...
                                  Bcoeff(0,j,1,t(i),gridT), b1j1i+0.5*deltaij];
        
        Bstar(2*i-1:2*i,2*j-1:2*j) = [b1j0i,            -b1j0i;...
                                      b1j1i+deltaij/2, -b1j1i-0.5*deltaij];
        
        D(2*i-1:2*i,j)=[Dcoeff(x,j,0,t(i),gridT,f(i,:));...
                        Dcoeff(x,j,1,t(i),gridT,f(i,:))];
    end
end

% Calculate C
C = zeros(2*N,N0);
for k = 1:N0% space
    for i=1:N% time
        C(2*i-1:2*i,k) = [Ccoeff(k,0,t(i),gridX);
                          Ccoeff(k,1,t(i),gridX)];
    end
end

% Solve the equation
% r =((X'*X+lambda*regTerm)^-1)*X'Y, with r the source and X and Y are to be
% calculated

% Calculate the components of X and Y
s1 = zeros(N,N,N0);
s2 = zeros(N,N0);
for k = 1:N0% space variable
    % components of X
    a1k = Aone(k,x,t,gridT);
    b1k = Bone(k,x,t,gridT);
    b1s = BoneStar(k,x,t,gridT); 
    ax  = (a1k-(1/alpha)*(b1k-b1s))/...
         (A-(1/alpha)*(B+Bstar));
    s1(:,:,k) = (1/N0).*(-ax*D + Done(k,x,t,gridT,f));
    
    % components of Y
    ay = (a1k-(1/alpha)*(b1k+b1s))/...
         (A-(1/alpha)*(B+Bstar));
    s2(:,k) = (1/N0)*(ay*C-Cone(x,gridX,t))*u0' ;
end

X = sum(s1,3);

Y = E'+sum(s2,2);

regTerm = GetRegularizationTerm(N,regOrder); % get RregTerm= 'R term
% The source solution with regularization coefficient lambda is
r   = ((X')*X+lambda*regTerm)\(X'*Y);

% Calculate the solution u(x,t)
eta     = ones(1,N0);
eta(1)  = 0.5;
eta(N0) = 0.5;
u       = zeros(N,N0);
for j=1:N0    % space index
    for i=1:N % time index
        sTime   = 0;% cumulative sums
        sSpace  = 0;
        
        for stIdx = 1:N % time index
            sTime = sTime+ Acoeff(0,stIdx,x(j),t(i),gridT)*q0j(stIdx) + Acoeff(1,stIdx,x(j),t(i), gridT)*q1j(stIdx)-...
                Bcoeff(0,stIdx,x(j),t(i),gridT)*h0j(stIdx) - Bcoeff(1,stIdx,x(j),t(i), gridT)*h1j(stIdx)+...
                Dcoeff(x,stIdx,x(j),t(i),gridT,f(i,:))*r(stIdx);
        end
        
        for ssIdx = 1:N0 % space index
            sSpace = sSpace +Ccoeff(ssIdx,x(j),t(i),gridT)*u0(ssIdx);
        end
        u(i,j) = (sTime+sSpace)*eta(j);
    end
end
if all(plotFlag)
PlotResults(t,sigIn,u,r);
end
end

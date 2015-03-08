function [u,r]= TestBemHeatEq(sigIn)
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
lambda   = 30; % regularization constant (affects smoothness of source solution)
regOrder = 2;  % Tikhonov regularization term order, [0,1,or 2]

if ~exist('sigIn','var')
    N0     = 3;  % space points
    N      = 150;  % time points
    % test signal
    sigIn      = cumsum(3*cos((1:N) *pi/10)./N+0.5*randn(1,N));% a vector of N points is the integral of the solution over the space
    E          = sigIn;
else
    N0 = 3;        % space points;
    E  = (sigIn);  % int(u(x,t)dx) is a time function of size 1xN
    N  = numel(E); % time points
end
f      = 1*ones(N,N0); % function of N time points over N0 space points
u0     = max(E(1:10))*ones(1,N0); % is the phi function

% Discretize the time and space domain
T           = numel(E);         % max time;
timePoints  = (0:(N)).*(T/N);% N+1 points
t           = timePoints+0.5; % calculate time at the middle of the interval, N points
t           = t(1:N); % mid points
spacePoints = (0:(N0))./N0;
x           = spacePoints+0.5;
x           = x(1:N0);

% Determine the boundary and initial functions
% u(0,t) = h0j
h0j = zeros(N,1);
% u(1,t) = h1j
h1j = zeros(N,1);
% du/dn(0,t) = q0j
q0j = zeros(N,1);
%du/dn(1,t) = q1j
q1j = zeros(N,1);

% Calculate the Boundary Elements

% Calculate A and B, B*, and D
A      = zeros(2*N,2*N);
B      = zeros(2*N,2*N);
Bstar  = zeros(2*N,2*N);
D      = zeros(2*N,N);
for j = 1:N % space
    for i = 1:N
        deltaij = double(i==j);
        A(2*i-1:2*i,2*j-1:2*j) = [Acoeff(0,j,0,t(i),timePoints), Acoeff(1,j,0,t(i),timePoints);...
            Acoeff(0,j,1,t(i),timePoints), Acoeff(1,j,1,t(i),timePoints)];
        % temp terms
        b1j0i = Bcoeff(1,j,0,t(i),timePoints);
        b1j1i = Bcoeff(1,j,1,t(i),timePoints);
        
        B(2*i-1:2*i,2*j-1:2*j) = [Bcoeff(0,j,0,t(i),timePoints)+0.5*deltaij, b1j0i;...
            Bcoeff(0,j,1,t(i),timePoints), b1j1i+0.5*deltaij];
        
        Bstar(2*i-1:2*i,2*j-1:2*j) = [b1j0i,            -b1j0i;...
            b1j1i+deltaij/2, -b1j1i-0.5*deltaij];
        
        D(2*i-1:2*i,j)=[Dcoeff(x,j,0,t(i),timePoints,f(i,:));...
            Dcoeff(x,j,1,t(i),timePoints,f(i,:))];
    end
end

% Calculate C
C = zeros(2*N,N0);
for k = 1:N0% space
    for i=1:N% time
        C(2*i-1:2*i,k) = [Ccoeff(k,0,t(i),spacePoints);
            Ccoeff(k,1,t(i),spacePoints)];
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
    ax = (Aone(k,x,t,timePoints)-(1/alpha)*(Bone(k,x,t,timePoints)-BoneStar(k,x,t,timePoints)))/...
        (A-(1/alpha)*(B+Bstar));
    s1(:,:,k) = (1/N0).*(-ax*D + Done(k,x,t,timePoints,f));
    
    % components of Y
    ay = (Aone(k,x,t,timePoints)-(1/alpha)*(Bone(k,x,t,timePoints)+BoneStar(k,x,t,timePoints)))/...
        (A-(1/alpha)*(B+Bstar));
    s2(:,k) = (1/N0)*(ay*C-Cone(x,spacePoints,t))*u0' ;
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
            sTime = sTime+ Acoeff(0,stIdx,x(j),t(i),timePoints)*q0j(stIdx) + Acoeff(1,stIdx,x(j),t(i), timePoints)*q1j(stIdx)-...
                Bcoeff(0,stIdx,x(j),t(i),timePoints)*h0j(stIdx) - Bcoeff(1,stIdx,x(j),t(i), timePoints)*h1j(stIdx)+...
                Dcoeff(x,stIdx,x(j),t(i),timePoints,f(i,:))*r(stIdx);
        end
        
        for ssIdx = 1:N0 % space index
            sSpace = sSpace +Ccoeff(ssIdx,x(j),t(i),timePoints)*u0(ssIdx);
        end
        u(i,j) = (sTime+sSpace)*eta(j);
    end
end

PlotResults(t,sigIn,u,r);

end


function vals = Acoeff(ksi,j,x,t,timePoints)
% evaluate the coefficient A at the  boundary ksi=0 or ksi=1;
% for the index j which describes the time steps timePoints_j, at time t and space
% point x
% timePoints is a vector describing the time descritized domain
if t<=timePoints(j)
    vals=0;
elseif t>timePoints(j) && t<= timePoints(j+1) && x==ksi
    vals = sqrt((t-timePoints(j))/pi);
elseif t>timePoints(j) && t<= timePoints(j+1) && x~=ksi
    z0 = abs(x-ksi)/(2*sqrt(t-timePoints(j)));
    vals = abs(x-ksi)/(2*sqrt(pi)) *(exp(-z0^2)/z0 - sqrt(pi)*(erfc(z0)));
elseif t>timePoints(j+1) && x==ksi
    vals = sqrt((t-timePoints(j))/pi)-sqrt((t-timePoints(j+1))/pi);
elseif t>timePoints(j+1) && x~=ksi
    z0 = abs(x-ksi)/(2*sqrt(t-timePoints(j)));
    z1 = abs(x-ksi)/(2*sqrt(t-timePoints(j+1)));
    vals = abs(x-ksi)/(2*sqrt(pi)) *(exp(-(z0^2))/z0 - exp(-(z1^2))/z1 +sqrt(pi)*(erf(z0)-erf(z1)));
end
end

function vals = Bcoeff(ksi,j,x,t,timePoints)
% evaluate the coefficient B at the  boundary ksi=0 or ksi=1;
% for the index j which describes the time steps timePoints_j, at time t and space
% point x
% timePoints is a vector describing the time descritized domain

if t<=timePoints(j)
    vals = 0;
elseif t>timePoints(j) && t<= timePoints(j+1) && x==ksi
    vals = 0;
elseif t>timePoints(j) && t<= timePoints(j+1) && x~=ksi
    z0   = abs(x-ksi)/(2*sqrt(t-timePoints(j)));
    vals = -(erfc(z0))/2;
elseif t>timePoints(j+1)
    z0   = abs(x-ksi)/(2*sqrt(t-timePoints(j)));
    z1   = abs(x-ksi)/(2*sqrt(t-timePoints(j+1)));
    vals = (erf(z0)-erf(z1))/2;
end
end

function vals = Ccoeff(k,x,t,spacePoints)
% evaluate the coefficient C for index k which describes the discretization
% of the space variable spacePoints in [0 1], at time t
vals = 0.5*(erf((x-spacePoints(k))/(2*sqrt(t)))-erf((x-spacePoints(k+1))/(2*sqrt(t))));
end

function vals = Dcoeff(y,j,x,t,timePoints,f)
% Calculate the integral int_0^1(f(y,t_j)*A_{yj}(x,t)dy) by midpoint
% integration rule
% the spatial integration of all points y at time t_j
a        = zeros(1,numel(y));
vals = 0;
a(1) = Acoeff(y(1),j,x,t,timePoints);
for aIdx = 2:numel(y);
    a(aIdx) = Acoeff(y(aIdx),j,x,t,timePoints);
    vals = vals+ 0.5*(a(aIdx)*f(aIdx)+a(aIdx-1)*f(aIdx-1))*(y(aIdx)-y(aIdx-1));
end
end

function vals = Aone(k,spacePoints,t,timePoints)
% calculate the matrix Aone for a specific space point x_k, for all times
% t_i in A
% points x_k=1:numel(spacePoints)
vals = zeros(numel(t),2*numel(t));
for j = 1:numel(t)
    for i = 1:numel(t)
        vals(j,2*i-1:2*i) =[Acoeff(0,j,spacePoints(k),t(i),timePoints),...
            Acoeff(1,j,spacePoints(k),t(i),timePoints)];
    end
end

end

function vals = Bone(k,spacePoints,t,timePoints)
% Calculate the matrix Aone for a specific space point x_k, for all times
% t_i in A
% points x_k=1:numel(spacePoints)
vals = zeros(numel(t),2*numel(t));
for j = 1:numel(t)
    for i = 1:numel(t)
        vals(j,2*i-1:2*i) =[Bcoeff(0,j,spacePoints(k),t(i),timePoints),...
            Bcoeff(1,j,spacePoints(k),t(i),timePoints)];
    end
end
end

function vals = BoneStar(k,spacePoints,t,timePoints)
% Calculate the matrix Aone for a specific space point x_k, for all times
% t_i in A
% points x_k=1:numel(spacePoints)
vals = zeros(numel(t),2*numel(t));
for j = 1:numel(t)
    for i = 1:numel(t)
        vals(j,2*i-1:2*i) =[Bcoeff(1,j,spacePoints(k),t(i),timePoints),...
            -Bcoeff(1,j,spacePoints(k),t(i),timePoints)];
    end
end

end

function vals = Cone(x,spacePoints,t)
% calculate the matrix Cone for a specific space point x_k, for all times
% t_i in A
% points x_k=1:numel(spacePoints)
vals = zeros(numel(t),numel(x));
for l = 1:numel(x)
    for i=1:numel(t)
        vals(l,:) =Ccoeff(l,x,t(i),spacePoints);
    end
end

end

function vals = Done(k,spacePoints,t,timePoints,f)
vals = zeros(numel(t), numel(t));
for j=1:numel(t)
    for i=1:numel(t)
        vals(j,i) = Dcoeff(spacePoints,j,spacePoints(k),t(i),timePoints,f(i,:));
    end
end

end

function regTerm = GetRegularizationTerm(N,order)
% Get regularization term of order=order
if order==0
    regTerm = eye(N);
elseif order==1
    regTerm      = 2*eye(N);
    regTerm      = regTerm-diag(ones(1,N-1),-1)-diag(ones(1,N-1),1);
    regTerm(1,1) = 1;
    regTerm(N,N) = 1;
elseif order==2
    regTerm = zeros(N);
    regTerm = regTerm-4*diag(ones(1,N-1),-1)-4*diag(ones(1,N-1),1);
    regTerm = regTerm +diag(ones(1,N-2),-2)+diag(ones(1,N-2),2);
    regTerm(1,2) = -2; regTerm(2,1) = -2;
    regTerm(N,N-1) = -2; regTerm(N-1,N) = -2;
    
    regTerm=regTerm- diag(sum(regTerm,2));
else
    error('order not supported')
end
end

function PlotResults(t,sigIn,u,r)
% plot the input signal as a function of time, the solution u(x,t) and the
% source solution r(t)

fig = figure;
ax = axes('Parent',fig,'nextPlot','Add');
line('XData',t,'YData',r,'DisplayName','Source','Color','r','Parent',ax);
line('XData',t,'YData',sigIn,'DisplayName','heat energy','Color','b','parent',ax);
legend(get(ax,'Children'));
line('XData',t,'YData',u(:,2),'DisplayName','u(t)','Color','g','parent',ax);
legend(get(ax,'Children'));

end
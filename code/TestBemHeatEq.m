function TestBemHeatEq
% Solve the inveerse heat equation with an unknown source 
% u_t(x,t) = ku_{xx}(x,y) +r(t)*f(x,t)
% with 0<=x<=1, 0<=t<=T
% subject to the boundary conditions u(0,t) = u(1,t)
% and u_x(0,t)+alpha*u(0,t)=0
% and initial condition 
% u(x,0) = phi(x) 0<=x<=1
% In this problem we take f(x,t) =1 for all x and t

N0     = 15;  % space points
N      = 35;  % time points
alpha  = 1;   % for the boundary condition 
lambda = 0.9; % regularization constant
f      = ones(N,N0); % function of N time points over N0 space points
E      = cumsum(4*cos((1:N) *pi/2)./N+randn(1,N));% a vector of N points is the integral of the solution over the space
u0     = 5*ones(1,N0); % is the phi function 

% Discretize the time and space domain 
T      = 10;         % max time;
timePoints = (0:(N)).*(T/N);% N+1 points
t      = timePoints+0.5; % calculate time at the middle of the interval, N points
t      = t(1:N);
spacePoints = (0:(N0))./N0;
x      = spacePoints+0.5;
x      = x(1:N0);

A      = zeros(2*N,2*N);
B      = zeros(2*N,2*N);
Bstar  = zeros(2*N,2*N);

% Calculate A and B, and B*
for j = 1:N
  for i = 1:N
    deltaij = double(i==j);
    A(2*j-1:2*j,2*i-1:2*i) = [Acoeff(0,j,0,t(i),timePoints), Acoeff(1,j,0,t(i),timePoints);...
                              Acoeff(0,j,1,t(i),timePoints), Acoeff(1,j,1,t(i),timePoints)];
    B(2*j-1:2*j,2*i-1:2*i) = [Bcoeff(0,j,0,t(i),timePoints)+0.5*deltaij, Bcoeff(1,j,0,t(i),timePoints);...
                              Bcoeff(0,j,1,t(i),timePoints), Bcoeff(1,j,1,t(i),timePoints)+0.5*deltaij];
    Bstar(2*j-1:2*j,2*i-1:2*i) = [Bcoeff(1,j,0,t(i),timePoints), -Bcoeff(1,j,0,t(i),timePoints);...
                                  Bcoeff(1,j,1,t(i),timePoints)+deltaij/2. -Bcoeff(1,j,1,t(i),timePoints)-0.5*deltaij];
 end
end

% Calculate C
C = zeros(2*N,N0);
for k = 1:N0
    for i=1:N
        C(2*i-1:2*i,k) = Ccoeff(k,0,t(i),spacePoints);
    end
end


% Calculate D
D = zeros(2*N,N);
for j=1:N
    for i=1:N
        D(2*j-1:2*j,i)=[Dcoeff(x,j,0,t(i),timePoints,f(i,:));...
                        Dcoeff(x,j,1,t(i),timePoints,f(i,:))];
    end
end

% Calculate the components of X 
s1 = zeros(N,N,N0);
for k = 1:N0
    a = (Aone(k,x,t,timePoints)-(1/alpha)*(Bone(k,x,t,timePoints)-BoneStar(k,x,t,timePoints)))*...
           inv(A-(1/alpha)*(B+Bstar));
    s1(:,:,k) = (1/N0).*(-a*D + Done(k,x,t,timePoints,f));
end

X = sum(s1,3);
   
% calculate the components of Y
s2 = zeros(N,N0);
for k=1:N0
    a = (Aone(k,x,t,timePoints)-(1/alpha)*(Bone(k,x,t,timePoints)+BoneStar(k,x,t,timePoints)))*...
        inv(A-(1/alpha)*(B+Bstar));
    s2(:,k) = (1/N0)*(a*C-Cone(k,x,spacePoints,t,timePoints))*u0' ;
end
   Y = E'+sum(s2,2);
   
regTerm = GetRegularizationTerm(N,2); % get RregTerm= 'R term 
% The solution with regularization coefficient lambda is 
   r = inv((X')*X+lambda*regTerm)*(X'*Y);
   figure, plot(t,r,'b',t,E,'r'), 
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
    vals = abs(x-ksi)/(2*sqrt(pi)) *(exp(-z0^2)/z0 - sqrt(pi)*(1-erf(z0)));
elseif t>timePoints(j+1) && x==ksi
    vals = sqrt((t-timePoints(j))/pi)-sqrt((t-timePoints(j+1))/pi);
elseif t>timePoints(j+1) && x~=ksi
    z0 = abs(x-ksi)/(2*sqrt(t-timePoints(j)));    
    z1 = abs(x-ksi)/(2*sqrt(t-timePoints(j+1)));    
    vals = abs(x-ksi)/(2*sqrt(pi)) *(exp(-z0^2)/z0 - exp(-z1^2)/z1 +sqrt(pi)*(erf(z0)-erf(z1)));
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
    vals = -(1-erf(z0))/2;
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
for aIdx = 1:numel(y);
  a(aIdx) = Acoeff(y(aIdx),j,x,t,timePoints);  
end
vals = trapz(y,a.*f);

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

function vals = Cone(k,x,spacePoints,t,timePoints)
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
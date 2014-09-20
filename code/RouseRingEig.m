% scr Rouse ring eigenvalues and eigen vectors
% p = 0:N-1

% Build the Rouse ring's kirchhoff matrix
numBeads = 10;
R        = RouseMatrix(numBeads);
R(1,1)               = 2;
R(numBeads,numBeads) = 2;% connect the ends 
R(1,numBeads)        = -1;
R(numBeads,1)        = -1;

theta = @(p,N)  2*pi*p./N;
t     = theta((0:numBeads-1),numBeads); 
%==============================================
f1 = @(t,N) 2*(2*cos(2*t).*cos(t)+cos((N-1)*t))./(4*(cos(t).^2) -1);
f2 = @(t,N) 2*(2*cos(2*t)+cos(t).*cos((N-1)*t))./(4*(cos(t).^2) -1);
A  = @(t,N) sqrt(1./(f1(t,N).^2 +f2(t,N).^2 + 4*sum(cos((2:(N-1))*t).^2)));

E = zeros(numBeads);
for pIdx = 0:numBeads-1
    t                 = theta(pIdx,numBeads); % set the angle
    E(1,pIdx+1)       = A(t,numBeads)*f1(t,numBeads);% set first value
    E(end,pIdx+1)     = A(t,numBeads)*f2(t,numBeads);% set end value
    E(2:end-1,pIdx+1) = 2*A(t,numBeads).*cos((2:numBeads-1)*t);    
end
E
[e,v] = eig(R)
%===============================================================
% % the eignvalues 
% B = @(p,N) 1./(2*exp(-1i.*theta(p,N).*N./2).*(sum(cos(((1:N)-N/2).*theta(p,N)).^2))^(0.5));
% A = @(p,N) exp(-1i.*theta(p,N).*N).*B(p,N);
% 
% c = @(p,N) (A(p,N).*exp(1i.*(1:N).*theta(p,N)) +B(p,N).*exp(-1i.*(1:N).*theta(p,N)))';
% 
% % the eigenvetor matrix
% E = zeros(numBeads);
% for pIdx = 0:numBeads-1
%  E(:,pIdx+1) = c(pIdx,numBeads);
% end
% lambda = sort(2*(1-cos(theta(1:numBeads,numBeads))))';
% E

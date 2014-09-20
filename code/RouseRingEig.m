% scr Rouse ring eigenvalues and eigen vectors
% p = 0:N-1

% Build the Rouse ring's kirchhoff matrix
numBeads = 10;
R        = RouseMatrix(numBeads);
R(1,1)               = 2;
R(numBeads,numBeads) = 2;
R(1,numBeads)        = -1;
R(numBeads,1)        = -1;

theta = @(p,N)  2*pi*p./N;

% the eign values 
B = @(p,N) 1./(2*exp(-1i.*theta(p,N).*N./2).*(sum(cos(((1:N)-N/2).*theta(p,N)).^2))^(0.5));
A = @(p,N) exp(-1i.*theta(p,N).*N).*B(p,N);

c = @(p,N) (A(p,N).*exp(1i.*(1:N).*theta(p,N)) +B(p,N).*exp(-1i.*(1:N).*theta(p,N)))';

% the eigenvetor matrix
E = zeros(numBeads);
for pIdx = 0:numBeads-1
 E(:,pIdx+1) = c(pIdx,numBeads);
end
lambda = sort(2*(1-cos(theta(1:numBeads,numBeads))))';
E

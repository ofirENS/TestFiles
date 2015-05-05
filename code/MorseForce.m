function [force] = MorseForce(De,alpha, re, edgesVector, particleDistance)
% calculate the Morse force, derived from the Morse potential
% u = De*(exp(-2*a(r-re)) -2*exp(-a*(r-re)))
% and the force 
% F = dv/dr = De*(-2*a*exp(-2*a*(r-re)) +2*a*exp(-a*(r-re)))

% re is the equilibrium bond distance 
% De is the well depth
% alpha is the width of the potential
tic
% dim   = size(edgesVector,3);
force = De*(-2*alpha*exp(-2*alpha*(particleDistance -re)) +2*alpha*exp(-alpha*(particleDistance-re)));
force = sum(force,2);
% normalize the mean direction vectors 
numParticles = size(edgesVector,2);
dim          = size(edgesVector,3);
dirVec       = zeros(numParticles,dim);
for dIdx = 1:dim
    dirVec(:,dIdx) = sqrt(sum(edgesVector(:,:,dIdx),2).^2);
end
dirVec = bsxfun(@rdivide, dirVec,sqrt(sum(dirVec.^2,2)));
force  = bsxfun(@times,force,dirVec);
toc
% scr test the probability of sums in the diagonal of random matrices with
% alpha connectivity level.
% This experiment is done to test the expected diagonal value in a Rouse
% matrix with extra connectors 
clear all 
close all 

N              = 30; % num cells
m              = 12;  % expected sum
alpha          = 0.1;
numAlphas      = 20;
numExperiments = 500;
s              = zeros(N-1,numAlphas);
sMat           = zeros(N,N,numAlphas);
for alphaIdx = 1:numAlphas
    
 numConnectors = floor(0.01*alphaIdx*(N-1)*(N/2-1));
 diagSum       = zeros(N,numExperiments);
% choose random cells in the upper triangular matrix removing the super
% diagonal

for expIdx =1:numExperiments
    z     = zeros(1,(N-1)*(N/2-1));
    rp    = randperm((N-1)*(N/2 -1));
    rp    = rp(1:numConnectors);
    z(rp) = 1;
    % translate the choices into the matrix
    mat = zeros(N);
    for mIdx = 1:N-2
        mat(mIdx,mIdx+2:end) = z(1:N-mIdx-1);
        z = z(N-mIdx:end);
    end
    mat                = (mat+mat');
    diagSum(:,expIdx)  = sum(mat,2);
    sMat(:,:,alphaIdx) = sMat(:,:,alphaIdx)+mat;
end

% calculate the fraction of times the sum equals m

for mIdx = 1:N-3
  s(mIdx,alphaIdx) = sum(diagSum(:)==mIdx)/(N*numExperiments);
end
diagEqn =  @(N,nc,n) nchoosek((N-2)*(N-1)/2 -(N-3),nc-n).*nchoosek(N-3,n)./nchoosek((N-2)*(N-1)/2, nc);

for mIdx = 1:N-3
    if mIdx<=numConnectors
     gs(mIdx,alphaIdx) = diagEqn(N,numConnectors,mIdx);
    end
end

end

% diagEqn = @(N,n,alpha) (nchoosek(N-1,n)./nchoosek((N-1).*(N./2 -1),floor(alpha.*(N-1).*(N./2 -1))));%.*((1./((N-1).*(N./2 -1))).^(n)) .*((1-(1/((N-1)*(N/2 -1)))).^(N-1-n))
diagEqn =  @(N,nc,n) nchoosek((N-2)*(N-1)/2 -(N-3),nc-n).*nchoosek(N-3,n)./nchoosek((N-2)*(N-1)/2, nc);
for mIdx = 1:N-3
    gs(mIdx) = diagEqn(N,numConnectors,mIdx);
end

figure, plot(s), 
figure, plot(gs)

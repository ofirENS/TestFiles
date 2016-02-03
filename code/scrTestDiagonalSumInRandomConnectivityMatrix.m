% scr test the probability of sums in the diagonal of random matrices with
% alpha connectivity level.
% This experiment is done to test the expected diagonal value in a Rouse
% matrix with extra connectors 
clear all 
close all 

N              = 50; % num cells
m              = 12;  % expected sum
alpha          = 0.1;
numAlphas      = 10;
numExperiments = 100;
s              = zeros(N-1,numAlphas);
sMat           = zeros(N,N,numAlphas);
gs             = zeros(N-1,numAlphas);
meanGs         = zeros(1,numAlphas);
meanGsTheoretical = zeros(1,numAlphas);
meanGsTheoreticalEndMonomers = zeros(1,numAlphas);
B              = zeros(N,N,numAlphas);
% Theoretical distribution of the sum of the diagonal entries 
diagEqn =  @(N,nc,n) nchoosek((N-2)*(N-1)/2 -(N-3),nc-n).*nchoosek(N-3,n)./nchoosek((N-2)*(N-1)/2, nc);
for alphaIdx = 1:numAlphas
    
 numConnectors = floor(0.01*alphaIdx*(N-1)*(N/2-1));
 diagSum       = zeros(N,numExperiments);
% choose random cells in the upper triangular matrix removing the super
% diagonal

for expIdx = 1:numExperiments
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

% Calculate the fraction of times the sum equals m

for mIdx = 1:N-3
  s(mIdx,alphaIdx) = sum(diagSum(:)==mIdx)/(N*numExperiments);
end

% Theoretical result
for mIdx = 1:N-3
    if mIdx<=numConnectors
     gs(mIdx,alphaIdx) = diagEqn(N,numConnectors,mIdx);     
    end
    
end
meanGs(alphaIdx) = trapz(1:size(gs,1),(1:size(gs,1)).*gs(:,alphaIdx)');
meanGsTheoretical(alphaIdx)            = (N-3)*numConnectors/((N-2)*(N-1)/2);
meanGsTheoreticalEndMonomers(alphaIdx) = (N-2)*numConnectors/((N-2)*(N-1)/2);

% construct the average matrix from the mean 
temp = zeros(N);
for tIdx = 2:N-1
    temp(tIdx,2:N-1) = -meanGsTheoretical(alphaIdx)./(N-3);
end

temp(1,:)   = -meanGsTheoreticalEndMonomers(alphaIdx)/(N-2);
temp(end,:) = -meanGsTheoreticalEndMonomers(alphaIdx)/(N-2);
temp(:,1)   = -meanGsTheoreticalEndMonomers(alphaIdx)/(N-2);
temp(:,end) = -meanGsTheoreticalEndMonomers(alphaIdx)/(N-2);

temp(diag(true(1,N-1),1) | diag(true(1,N-1),-1) | diag(true(1,N),0)) = 0;
temp(diag(true(1,N),0)) = -sum(temp,2);
B(:,:,alphaIdx)         = temp;
end

% Get Rouse matrix with eigenvalues and vectors (m file in test files) 
[rouseMat, rouseEigenVec, rouseEigenVal] = RouseMatrixSimple(N);


figure, plot(s),  title('simulation derived distribution')
figure, plot(gs), title('theoretical distribution')
figure, plot(0.01*numAlphas.*(1:size(meanGsTheoretical,2)),meanGsTheoretical,'og','DisplayName','theoretical expected values'), title('expected number of connectors')
xlabel('connectivity level, \alpha'), ylabel('exp num connectors')
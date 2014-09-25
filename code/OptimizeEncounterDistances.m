function optimDists = OptimizeEncounterDistances(observedProb)
% assuming encounter frequencies follow a*d^(-1.5) model 
% and given the observed encounter probabilities, find the distances which
% optimize the error between the model and observed data 
close all
numObs = numel(observedProb);% umber of observations 
beta   = 1.05;
MyFun  = @(x) sum((((x.^(-beta))-sum(x.^(-beta)).*observedProb).^2)./sum(x.^(-beta))^2);
[optimDists,fVal] = fminsearch(MyFun,[1:numObs],optimset('TolFun',1e-16,'TolX',1e-16,'MaxIter',1e6));

figure, plot(1:numObs,optimDists)
end

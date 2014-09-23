function opimtDists = OptimizeEncounterDistances(observedProb)
% assuming encounter frequencies follow a*d^(-1.5) model 
% and given the observed encounter probabilities, find the distances which
% optimize the error between the model and observed data 

numObs = numel(observedProb);% umber of observations 
optimdists = fminsearch(@MyFun,[1:numObs]);

end

function valsout = MuFun(x)

end
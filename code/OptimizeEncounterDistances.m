function outStruct = OptimizeEncounterDistances(observedProb)
% assuming encounter frequencies follow a*d^(-1.5) model 
% and given the observed encounter probabilities, find the distances which
% optimize the error between the model and observed data 
% close all
observedProb       = (1:64).^(-1.5);
observedProb       =(observedProb+fliplr(observedProb))/2;
observedProb(1:32) = (observedProb(1:32)+fliplr(observedProb(1:32)))/2; 
observedProb(33:64)= observedProb(1:32); 
observedProb(41:48) = (observedProb(41:48)+fliplr(observedProb(41:48)))/2; 
% observedProb(41:64)= observedProb(1:32); 
observedProb       = observedProb/sum(observedProb);

numObs = numel(observedProb);% number of observations 
p      = (pdist2(observedProb', observedProb'));
p((tril(ones(size(p))))~=0)=NaN;
thresh   = 1e-3;
Aeq      = double(p<thresh);
beq      = zeros(numObs,1);

% Set the initial condition such that similar encounter probability reflects
% similar bead distance
initCond = 1:numObs;
for oIdx = 1:numObs
    init = find(Aeq(:,oIdx),1,'first');
    if ~isempty(init)
       initCond(oIdx) = init;      
    end
end

% create constraints on the values such that beas with equal probability
% lies in the same distance 
for oIdx = 1:numObs
    s = sum(Aeq(oIdx,:));
    if s~=0
     Aeq(oIdx,:)    = Aeq(oIdx,:)./s;
     Aeq(oIdx,oIdx) = -1;             
    else 
%         if diagonal remains zero
    end
end

setappdata(0,'obs', observedProb);


% MyFun  = @(x) sum(((x(1:end).^(-beta)/sum(x(1:end).^(-beta)))-(observedProb)).^2);
MyFun = @(x) sum((abs(diff(x(1:end-1)))-ones(1,numObs-1)).^2);
beta  = 1.5;
Aeq(end+1,end+1) = 1;% added for the beta value 
beq(end+1) = 1;
[vals,outStruct.fVal,outStruct.exitflag,outStruct.output] = fmincon(MyFun,[initCond,0],...
                eye(numObs+1),...
                [initCond,0],...
                Aeq,...
                beq,...
                [ones(numObs,1);0],...
                [ones(numObs,1)*numObs;1],...
                @MyCon,...             
                optimoptions('fmincon','Algorithm','sqp',...
                'TolFun',1e-12,...
                'TolX',1e-12,...
                'TolCon',1e-5,...
                'MaxIter',1e7,...
                'MaxFunEvals',1e5));
% [vals,outStruct.fVal,outStruct.exitflag,outStruct.output] = ga(MyFun,...
%                 numObs,...
%                 eye(numObs),...
%                 1:numObs,...
%                 [],...
%                 [],...
%                 [ones(numObs,1)],...
%                 [numObs*ones(numObs,1)],...
%                 @MyCon,...
%                 [1:numObs],...
%                 gaoptimset('TolCon',1e-10,'TolFun',1e-10,'Generations',1e4,'HybridFcn',@fmincon));
                           
outStruct.optimDists = vals(1:end-1);
outStruct.exp        = vals(end);
figure, plot(1:numObs,outStruct.optimDists)
hold on, plot(1:numObs,smooth((outStruct.optimDists),10),'r')
figure, plot(1:numObs,(1/(sum(outStruct.optimDists.^(-1.5))))*outStruct.optimDists.^(-1.5),'r'),
hold on 
plot(1:numObs,observedProb)
end

function [c,ceq] = MyCon(x)
beta         = 1.5;
observedProb = getappdata(0,'obs');
 ceq = sum(((x(1:end-1).^(-beta+x(1))/sum(x(1:end-1).^(-beta+x(1))))-(observedProb)).^2);
 c   = sum((abs(diff(x(2:end)))-ones(1,numel(x)-2)).^2);% force neighboring beads to have a bead distance of 1
%  c   = sum((abs(diff(x(1:end)))./exp(x(2:end)-round(x(2:end)))-ones(1,numel(x(2:end)))).^2);
% c  = sum(abs(diff(atan(diff(x)))));
% c = sum((exp(abs(diff(x))/numel(x))-exp(1/numel(x))*ones(1,numel(x)-1)).^2);

% % sorted unique distance values should have consecutive indices
% % this constrints tries to make shure there exist a path for every distance 
% k = sort(unique(round(x(1:end-1))));
% d = diff(k);
% c = sum((abs(d)-ones(size(d))).^2);
end

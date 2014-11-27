function [dists,histK,beta] = CalculateBeadDistancesByRouseModel
load('savedAnalysisTADDAndE')
% set bead range for TAD D
br.bead1      = 1:30;
br.bead2      = 1:30;
smoothingSpan = 2;
numDistances  = 5;
distToAnalyze = 3; % can be a vector of integers

[~,~,encounterMat,~] = a.ProcessEncounters(br,'average');
% Truncate the encounter matrix 
encounterMat = encounterMat(br.bead1,br.bead2(1:(end-1))-br.bead1(1)+1);

% fit a model to get the mean beta values 
model   = fittype('(1/sum(x.^(-beta))).*x.^(-beta)');
% bDists = 1:numel(meanSig);
fitOpt = fitoptions(model);
set(fitOpt,'Lower',0,'Upper',1.5,'StartPoint',1,'Robust','off');
% take the mean beta as a reference for histogram odf distances.
% [fitStruct] = fit(bDists',meanSig',model);

% preallocations
above = cell(1,numel(br.bead1));
dists = cell(size(encounterMat,1),size(encounterMat,2));
histK = cell(size(encounterMat,1),size(encounterMat,2));
beta  = zeros(size(encounterMat,1),1);
% construct a binary connection matrix for a specific distance
eMat = false(numel(br.bead1),numel(br.bead2),numDistances);
di   = diag(ones(1,size(eMat,2)-1),1)+diag(ones(1,size(eMat,2)-1),-1);% include nearest neighbors by default 


for bIdx = 1:size(encounterMat,1);
 observedProb = smooth(encounterMat(bIdx,~isnan(encounterMat(bIdx,:))),smoothingSpan)';
 % if the first observed probability is much lower than the second, compare
 % them 

 if ~all(isnan(observedProb))
%   if observedProb(1)<observedProb(2)
%      observedProb(1)= observedProb(2);
%   end
 observedProb = observedProb/sum(observedProb);
%   mO          = max(observedProb);
 % Divide the probabilites into distances according to axis given by the
 % mean model 
%  sig1        = encounterMat(bIdx,:)';
 inds        = find(~isnan(observedProb));
%  [fitStruct] = fit(inds',observedProb(inds)',model,fitOpt);
 beta(bIdx)  = 1.5;%fitStruct.beta;
 k           =  model(beta(bIdx),inds);
 % normalize to match the nerest neighbor encounter probability 
 if mod(bIdx,10)==0 
   PlotBeadClusteringByDistance(observedProb,inds,k);
   title(num2str(bIdx))
 end
 % Calculate the histogram 
 above{bIdx} = find(observedProb>k(1));
 for kIdx = 1:numel(k)-1
  dists{bIdx,kIdx} = find(observedProb>k(kIdx+1) & observedProb<=k(kIdx));
  % add the terms "above" to the dist 1 neighbors
  histK{bIdx,kIdx} = numel(dists{bIdx,kIdx});
  if kIdx ==1
      dists{bIdx,kIdx} = [dists{bIdx,kIdx} above{bIdx}];
  end
 end
end
end

for dIdx = distToAnalyze
    eMat(:,:,dIdx) = eMat(:,:,dIdx)|di;
  for b1Idx = 1:size(encounterMat,1)
    % collect all beads at distance 1
     inds1 = b1Idx+dists{b1Idx,dIdx};
     inds1 = inds1(inds1<numel(br.bead2));
     inds2 = b1Idx-dists{b1Idx,dIdx};
     inds2 = inds2(inds2>=1);
     eMat(b1Idx,[inds1 inds2],dIdx)= true;
  end
end


DisplayConnectivityGraph(eMat,above,distToAnalyze,5);

 
end

function m = MeanIgnoreNaN(sigIn)
 sigIn(isnan(sigIn)) = 0;
 m = mean(sigIn);
 m = m./sum(m);
end

function PlotBeadClusteringByDistance(observedProb,inds, k)
figure,
plot(inds,observedProb,'bo',1:numel(k),k,'r','Linewidth',4,'MarkerSize',6), 
set(gca,'FontSize',35,'NextPlot','Add');%,'XScale','log','YScale','log'),
xlabel('Distance [beads]'), 
ylabel('encoutner Prob.')

% add patches to represent the  distance by probability, given the model 
cMap = rand(numel(inds),3);
for kIdx = 1:numel(inds)-1
patch([inds(1) inds(end), inds(end), inds(1)], [k(kIdx) k(kIdx), k(kIdx+1), k(kIdx+1)],...
    'r','FaceAlpha',0.25,'FaceColor',cMap(kIdx,:));    
end
set(gca,'XLim',[1 inds(end)])
end

function DisplayConnectivityGraph(eMat,above,distToAnalyze,beadToAnalyze)
% construct a graph 
if ~exist('beadToAnalyze','var')
    beadToAnalyze = 1:size(eMat,1);
end
connectivityMat = triu(eMat(:,:,distToAnalyze));
inds = setdiff(beadToAnalyze,1:size(eMat,1));
connectivityMat(inds,:) = false;
b = biograph(connectivityMat);
set(b,'LayoutType','hierarchical','EdgeType','straight');

% mark edges between nodes that have higher probability than nearest
% neighbor with red 
for aIdx = 1:size(eMat,1)
    set(b.Nodes(aIdx),'Label',['Bead ' num2str(aIdx)]);
  for a1Idx = 1:numel(above{aIdx})
      sourceNode = ['Node ' num2str(aIdx)];
      if (aIdx +a1Idx)<=numel(br.bead2)
      sinkNode =  ['Node ' num2str(aIdx+a1Idx)];
      else
       sinkNode = ['Node ' num2str(aIdx-a1Idx)];
      end
      
    f = b.getedgesbynodeid(sourceNode,sinkNode);
    set(f,'LineColor',[1 0 0]);
  end
end

 view(b)
end


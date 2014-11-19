function [dists,histK] = CalculateBeadDistancesByRouseModel
load('savedAnalysisTADDAndE')
% set bead range for TAD D
br.bead1    = 1:40;
br.bead2    = 1:40;
[~,~,encounterMat,~] = a.ProcessEncounters(br,'average');
% truncate the matrix 
encounterMat = encounterMat(br.bead1,br.bead2);
meanSig      = MeanIgnoreNaN(encounterMat);
% fit a model to get the mean beta values 
model = fittype('(1/sum(x.^(-beta))).*x.^(-beta)');
bDists = 1:numel(meanSig);
[fitStruct] = fit(bDists',meanSig',model);% take the mean beta as a reference for histogram odf distances.

% preallocations
above = cell(1,size(encounterMat,1));
dists = cell(size(encounterMat,1),size(encounterMat,2));
histK = cell(size(encounterMat,1),size(encounterMat,2));

for bIdx = 1:size(encounterMat,1);
 observedProb = smooth(encounterMat(bIdx,~isnan(encounterMat(bIdx,:))),3)';
 % if the first observed probability is much lower than the second, compare
 % them 
 if ~all(isnan(observedProb))
 if observedProb(1)<observedProb(2)
     observedProb(1)= observedProb(2);
 end
 observedProb = observedProb/sum(observedProb);
 
 % Divide the probabilites into distances according to axis given by the
 % mean model 
 k = (1:numel(observedProb)).^(-fitStruct.beta);
 k = k./sum(k);
 k = k./(k(1)) * observedProb(1);% normalize tomatch the nerest neighbor encounter probability 
 
 % calculate the histogram 
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

% construct a binary connection matrix for a specific distance
eMat = false(numel(br.bead1),numel(br.bead2),2);
for dIdx = 1:2
  for bIdx = 1:size(encounterMat,1)
    % collect all beads at distance 1
     inds1 = bIdx+dists{bIdx,dIdx};
     inds1 = inds1(inds1<numel(br.bead2));
     inds2 = bIdx-dists{bIdx,dIdx};
     inds2 = inds2(inds2>=1);
     eMat(bIdx,[inds1 inds2],dIdx)= true;
  end
end

% construct a graph 
b = biograph(triu(eMat(:,:,1)));
set(b,'LayoutType','hierarchical','EdgeType','straight');

% mark edges between nodes that have higher probability than nearest
% neighbor with red 
for aIdx = 1:numel(above)
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
end
 view(b)
 
end

function m = MeanIgnoreNaN(sigIn)
 sigIn(isnan(sigIn)) = 0;
 m = mean(sigIn);
 m = m./sum(m);
end





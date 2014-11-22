classdef CalculateBeadDistancesByRouseModel<handle
    
properties 
encounterMat    
beadRange       % set bead range for TAD D
smoothingSpan   % smoothing span for the encounter probability signal
numDistances    % for how many distances to perform analysis for connectivity 
distToAnalyze   % can be a vector of integers, for what disance to show the analysis
beadsToAnalyze  % for what beads to show the connectivity graphs 
model          
fitOpt       
dataFolder
dataFileName
end

methods    
    
function obj = CalculateBeadDistancesByRouseModel
   obj.SetDefaultParams;
 end
        
function SetDefaultParams(obj)
    obj.beadRange      = struct('bead1',1:30,...
                                'bead2',1:30);
    obj.smoothingSpan  = 3;
    obj.numDistances   = 5; % for how many distances to perform analysis for connectivity 
    obj.distToAnalyze  = 3; % can be a vector of integers, for what disance to show the analysis
    obj.beadsToAnalyze = 10; % for what beads to show the connectivity graphs 
    obj.model          = fittype('(1/sum(x.^(-beta))).*x.^(-beta)');
    obj.fitOpt         = fitoptions(obj.model);
    set(obj.fitOpt,'Lower',0,'Upper',1.5,'StartPoint',1,'Robust','off');
    obj.dataFolder     = 'D:\Ofir\ENS\PolymerChainDynamics\Code\ExperimentDataAnalysis';
    obj.dataFileName   = 'savedAnalysisTADDAndE';
 end
 
function Initialize(obj)
 load(fullfile(obj.dataFolder,obj.dataFileName))
[~,~,obj.encounterMat,~] = a.ProcessEncounters(obj.beadRange,'average');
% Truncate the encounter matrix 
obj.encounterMat = obj.encounterMat(obj.beadRange.bead1,obj.beadRange.bead2(1:(end-1))-obj.beadRange.bead1(1)+1);

% preallocations
above = cell(1,numel(obj.beadRange.bead1));% save indices of distances falling above the nearest neighor encounter probability
dists = cell(size(obj.encounterMat,1),size(obj.encounterMat,2));
histK = cell(size(obj.encounterMat,1),size(obj.encounterMat,2));
beta  = zeros(size(obj.encounterMat,1),1);
% construct a binary connection matrix for a specific distance
eMat = false(numel(obj.beadRange.bead1),numel(obj.beadRange.bead2),obj.numDistances);
di   = diag(ones(1,size(eMat,2)-1),1)+diag(ones(1,size(eMat,2)-1),-1);% include nearest neighbors by default 


for bIdx = 1:size(obj.encounterMat,1);
 observedProb = smooth(obj.encounterMat(bIdx,~isnan(obj.encounterMat(bIdx,:))),obj.smoothingSpan)';

 if ~all(isnan(observedProb))

 observedProb = observedProb/sum(observedProb);

 % Divide the probabilites into distances according to a division given by the
 % expected model 
 inds        = find(~isnan(observedProb));
%  [fitStruct] = fit(inds',observedProb(inds)',model,fitOpt);
 beta(bIdx)  = 1.5;%fitStruct.beta;
 k           =  obj.model(beta(bIdx),inds);
 % normalize to match the nerest neighbor encounter probability 
 if mod(bIdx,10)==0 
   obj.PlotBeadClusteringByDistance(observedProb,inds,k);
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

for dIdx = obj.distToAnalyze
    eMat(:,:,dIdx) = eMat(:,:,dIdx)|di;
  for b1Idx = 1:size(obj.encounterMat,1)
    % collect all beads at distance 1
     inds1 = b1Idx+dists{b1Idx,dIdx};
     inds1 = inds1(inds1<numel(obj.beadRange.bead2));
     inds2 = b1Idx-dists{b1Idx,dIdx};
     inds2 = inds2(inds2>=1);
     eMat(b1Idx,[inds1 inds2],dIdx)= true;
  end
end


obj.DisplayConnectivityGraph(eMat,above,obj.distToAnalyze,obj.beadsToAnalyze);

end

function GetDistanceDistribution(obj,dist)
    % calculate the distribution for a specifind distance
    figure,hold on
    for dIdx = 1:numel(dist)
    d     = obj.encounterMat(:,dist(dIdx));
    d     = d(~isnan(d));
    d     = d(d~=0);
    d     = (d-mean(d));
    s     = std(d);
    if s~=0
        d=d./s;
        
    [v,e] = ecdf(d);
    line('XData',e,...
        'YData',v,...
        'DisplayName',num2str(dist(dIdx)),...
        'Color',rand(1,3),...
        'LineWidth',4);
    end
    
    end
    legend(get(gca,'Children'));
    
end

function DisplayConnectivityGraph(obj,eMat,above,distToAnalyze,beadToAnalyze)
% construct a graph 
if ~exist('beadToAnalyze','var')
    beadToAnalyze = 1:size(eMat,1);
end
connectivityMat         = triu(eMat(:,:,distToAnalyze));
inds                    = setdiff(beadToAnalyze,1:size(eMat,1));
connectivityMat(inds,:) = false;
b                       = biograph(connectivityMat);
set(b,'LayoutType','hierarchical','EdgeType','straight','NodeCallback',@obj.NodeCallback);

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

function NodeCallback(obj,varargin)
    disp('node')
    node = varargin{1};
    a = node.getancestors;
    d = node.getdescendants;
    for aIdx = 1:numel(a);
     a(aIdx).Color=[0 1 0];
     a(aIdx).display
    end
    
    for dIdx = 1:numel(d)
        d(dIdx).Color=[0 1 0];
        d(dIdx).display
    end
   
end

end

methods (Static)
    
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

end

end
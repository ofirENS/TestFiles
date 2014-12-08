%scr Test PeakCalling
close all 
% add utils folder 
addpath(genpath(fullfile(pwd,'..','..','Utils')))
% set seed 
s          = rng(15); % randomm seed

% construct synthetic example
numSignals = 100;
noiseStd   = 0.1; 
c          = 0.7; % peak magnification factor
p          = 0.01; % Bernoulli prob.
k          = zeros(numSignals);
for kIdx = 1:numSignals
    noiseTerm = (1+c*binornd(1,p,[1,numSignals]));
    
%     %----- ex. 01 encounter by Rouse-----------
%     k(kIdx,:) = 1*(1:numSignals).^(-1.5)+ noiseStd*randn(1,numSignals).*noiseTerm;
%     m         = (min(k(kIdx,:)));
%     if m<0
%         k(kIdx,:) = k(kIdx,:)-m;
%     end
%     k(kIdx,:) = k(kIdx,:)./sum(k(kIdx,:));


%    % ---- ex. 02 random signal ------------
%     k(kIdx,:) = noiseStd*rand(1,numSignals).*noiseTerm;
%     k(kIdx,:) = k(kIdx,:)./sum(k(kIdx,:));

%    %---- ex. 03  sine wave-----
%     k(kIdx,:) = sin(linspace(-pi,pi,numSignals)) +noiseStd.*randn(1,numSignals).*(noiseTerm);
  
end
 
 % load encounter signal from data 
 cName = getenv('computername');
 switch lower(cName)
     case 'ofir-hp'
      load(fullfile(pwd,'..','..','Polymer Chain Dynamics','Code','ExperimentDataAnalysis','savedAnalysisTADDAndE.mat'))
 end
%  
 beadRange.bead1 = 108:307;
 beadRange.bead2 = 108:307;
 [~,~,k] = a.ProcessEncounters(beadRange,'Average');
 p                       = PeakCalling();
% Set parameters 
 p.params.fitType        = 'mean';
 p.params.peaksDirection = 'high';
 p.params.smoothingSpan  = ceil(size(k,2)/10);
 p.params.rejectionThresh = 0.99;
 p.params.rejectionTNew   = 0.99;
 p.params.checkPeakForLocalMaximality = false;

 p.FindPeaks(k);
 p.DisplayPeaks
 p.peakList
% p.DisplaySignalDistributions('cdf')
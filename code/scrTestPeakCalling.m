%scr Test PeakCalling
% add utils folder 
addpath(genpath(fullfile(pwd,'..','..','Utils')))
% set seed 
s          = rng(6);
numSignals = 50;
noiseStd   = 0.1; 
k = zeros(numSignals);
close all 
for kIdx = 1:numSignals
%     k(kIdx,:) = 3*(1:numSignals).^(-1.5)+ noiseStd*randn(1,numSignals);
%     m         = (min(k(kIdx,:)));
%     if m<0
%         k(kIdx,:) = k(kIdx,:)-m;
%     end
    k(kIdx,:) = noiseStd*rand(1,numSignals);
%     k(kIdx,:) = sin(linspace(-pi,pi,numSignals)) +noiseStd*randn(1,numSignals)+1;
    k(kIdx,:) = k(kIdx,:)./sum(k(kIdx,:));
end

% Add peaks 
 k(10,10)  = abs(k(10,10))*3;
 k(10,:)   = k(10,:)./sum(k(10,:));
 k(20,20)  = abs(k(20,20))*3;
 k(20,:)   = k(20,:)./sum(k(20,:));
 k(30,30)  = abs(k(30,30))*3;
 k(30,:)   = k(30,:)./sum(k(30,:));
 k(40,40)  = abs(k(40,40))*3; 
 k(40,:)   = k(40,:)./sum(k(40,:));
 k(50,50)  = abs(k(50,50))*3; 
 k(50,:)   = k(50,:)./sum(k(50,:));
 
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
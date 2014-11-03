%scr Test PeakCalling
% add utils folder 
addpath(genpath(fullfile(pwd,'..','..','Utils')))
numSignals = 50;
k = zeros(numSignals);
for kIdx = 1:numSignals
    k(kIdx,:) = 4*(1:numSignals).^(-1.2)+ 0.05*randn(1,numSignals);
    m         = (min(k(kIdx,:)));
    if m<0
        k(kIdx,:) = k(kIdx,:)-m;
    end
%     k(kIdx,:) = rand(1,numSignals);
    k(kIdx,:) = k(kIdx,:)./sum(k(kIdx,:));
end

% Add peaks 
 k(1,10)  = k(1,10)*3;
 k(1,:)   = k(1,:)./sum(k(1,:));
 k(10,5) = k(10,5)*3;
 k(10,:)  = k(10,:)./sum(k(10,:));
 
p = PeakCalling();
p.params.fitType='loess';
p.FindPeaks(k);
p.DisplayPeaks
p.DisplaySignalDistributions('cdf')
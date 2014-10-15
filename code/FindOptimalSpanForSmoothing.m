function span = FindOptimalSpanForSmoothing(signalIn)%[unfinished]

% find the optimal span for smoothing the data in signalIn. 
% the algorithm teratively divided the data 2^n equal regions and
% calculates the standad deviation of each section 
numPts = numel(signalIn);
if mod(numPts-1,2)==0
    % trancate the last point so it will be divisible by 2 
    signalIn = signalIn(1:end-1);    
    numPts   = numPts-1;    
end

maxDiv    = floor(log(numPts)/log(2));% max divisions 
figure, hold on
for nIdx = 1:maxDiv
 inds = round([1 , (numPts/2^(nIdx-1))*(1:2^(nIdx-1) -1), 200]);
   for sIdx = 1:numel(inds)-1
      signalSTD{nIdx}(sIdx) = std(signalIn(inds(sIdx):inds(sIdx+1)));      
   end
    line('XData', 1:numel(signalSTD{nIdx}),...
         'YData', signalSTD{nIdx},...
         'Marker','o',...
         'MarkerFaceColor',rand(1,3),...
         'DisplayName',['Subdivision ',num2str(nIdx)]);  
     mSig(nIdx) = mean(signalSTD{nIdx});   % mean signal   
end
figure, plot(mSig,'o')
xlabel('subinterval')
ylabel('std')
span = [];
end
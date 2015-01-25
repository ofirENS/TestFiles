function nTag = TaubinMuLambdaSmoothing(sigIn)
% Implementation of the Taubin lambda/mu smoothing method 
lambda = 0.1:.1:0.9;

sig       = 1.1; 
nTag      = sigIn;
nHoodRad  = 15; % neighborhood radius
% g         = @(x)exp(-(x.^2)./(2*sig^2))./sum(exp(-(x.^2)./(2*sig^2))); % Gaussian normalized
for nIdx = 1:numel(lambda);
  % apply positive factor   
  nTemp = nTag; 
  for sIdx = 1:numel(sigIn)
      % define the neighborhood of each point 
       neighb = sIdx-nHoodRad:sIdx+nHoodRad;
       f      = fspecial('gaussian',[1,numel(neighb)],sig);
       f      = f(neighb>0 & neighb<numel(sigIn));
       neighb = neighb(neighb>0 & neighb<numel(sigIn));
       % apply positive moving filter 
       nTemp(sIdx) = nTag(sIdx)+lambda(nIdx)*sum((nTag(neighb)-nTag(sIdx)).*f);
  end
  
  nTag = nTemp;
  
  for sIdx = 1:numel(sigIn)
      % define the neighborhood of each point 
       neighb = sIdx-nHoodRad:sIdx+nHoodRad;
       f      = fspecial('gaussian',[1,numel(neighb)],sig);
       f      = f(neighb>0 & neighb<numel(sigIn));
       neighb = neighb(neighb>0 & neighb<numel(sigIn));
       % apply positive moving filter 
       nTemp(sIdx) = nTag(sIdx)-(lambda(nIdx)+0.1)*sum((nTag(neighb)-nTag(sIdx)).*f);      
      
  end
  nTag = nTemp;
  
end

figure, plot(sigIn,'r','DisplayName','signal'), hold on, plot(nTag,'b','displayName','smoothed')
legend(get(gca,'Children'))
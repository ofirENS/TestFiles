% experiment 1.0 find the mean first passage time of a random walk in 1D 
% 1. generate a path

b    = 1;
N    = 10;
numSimulations = 10000;
encounterDist  = b/5;
encounterTime  = nan(numSimulations,1);
for nIdx = 1:numSimulations
    runFlag = true;
    step    = 1;
    while runFlag 
    n = b*randn(N-1,1);
    s = sum(n)^2;
    if s<encounterDist
        runFlag            = false;
        encounterTime(nIdx) = step;
    else 
        step = step+1;
    end
    end
end

[h, bins] = hist(encounterTime,linspace(0,max(encounterTime),100));
h = h./sum(h);
% show the pdf
figure, bar(bins,h); title('first encounter pdf')

% calculate the CDF 
[mfptCDF,bCDF] = ecdf(encounterTime,'function','cdf','alpha',0.01);
figure, plot(bCDF,mfptCDF), title('first encounter cdf')

% calculate the survivor function 
[mfptSurvival,bSurvival] = ecdf(encounterTime,'function','survivor','alpha',0.01);
figure, plot(bSurvival,mfptSurvival), title('first encounter survival')

% fit a chi square distributioni 



meanFirstPassagetime = sum(s);
% fit a gamma distribution to the data 



% n step probability in a chain with reflecting boundaries
N          = 100;
startPoint = 50;
endPoint   = 70;
numExperiments  = 500;
numSteps        = zeros(1,numExperiments);

% f =figure;a = axes('Parent',f,'NextPlot','Add');
for expIdx=1:numExperiments
    currentPoint = startPoint;
    reachFlag = false;
    steps     = 0; 
    while ~reachFlag
    steps = steps+1;
    u = rand(1);
    if u>0.5
        currentPoint = currentPoint+1;
    else
        currentPoint = currentPoint-1;
    end
    if currentPoint>N
        currentPoint = N;
    end
    if currentPoint<1
        currentPoint = 1;
    end
    reachFlag = currentPoint==endPoint;
%     line('XData',steps,'YData',currentPoint,'Parent',a); drawnow
    end
    
      numSteps(expIdx) = steps;
end
mean(numSteps)
alpha = 0.1;
N_L = (N-2)*(N-1)/2;
k   = 5;
nchoosek(N,k-1)*(floor(alpha*N_L)/N_L)^(k-1)
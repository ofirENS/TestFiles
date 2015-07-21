function TestLennardJones
numParticles     = 300;
dimension        = 2;
numSteps         = 200;
ljPotentialDepth = 0.1; % epsilon
ljPotentialWidth = 0.15;% distance at which the potential reaches its minimum
ljPotentialType  = 'repulsive'; 

dt               = 1e-1;
diffusionConst   = 0;
noiseSTD         = sqrt(2*diffusionConst*dt);
% initialize positions 
particlePosition = randn(numParticles,dimension);
particlePosition(150:end,1) =particlePosition(150:end,1)+5;
particlePosition(150:end,2) =particlePosition(150:end,2)+5;
f = figure;
b = 7;
a = axes('Parent',f,'NextPlot','ReplaceChildren','XLim',[-b b],'YLim',[-b b]);
for sIdx =1:numSteps
    % plot particles 
    plot(particlePosition(:,1),particlePosition(:,2),'Marker','o','MarkerSize',10,...
        'LineStyle','none','Parent',a);   
    hold on 
       
    % calculate the distance between beads 
     particleDistance = pdist2mex(particlePosition',...
                                  particlePosition','euc',[],[],[]);
    % calculat the force (derivative of potential)
    [force, forceDirection] = LennardJones_mex(particlePosition,particleDistance,ljPotentialWidth,ljPotentialDepth,ljPotentialType);

    title(a,['Step: ' num2str(sIdx)])   
     hold off
     set(a,'XLim',[-10 10],'YLim',[-10 10]);
      drawnow
    % update location 
    particlePosition = particlePosition+force*dt +noiseSTD*randn(numParticles,dimension);
    
end
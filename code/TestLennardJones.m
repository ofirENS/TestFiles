function TestLennardJones
numParticles = 50;
dimension    = 2;
numSteps     = 150;
ljPotentialDepth = .04; % epsilon
rm               = .2; % distance at which the potential reaches its minimum
dt               = 1e-3;
diffusionConst   = 1;
noiseSTD         = sqrt(2*diffusionConst*dt);
% initialize positions 
particlePosition = randn(numParticles,dimension);
f= figure;
a= axes('Parent',f,'NextPlot','ReplaceChildren','XLim',[-5 5],'YLim',[-5 5]);
for sIdx =1:numSteps
    % plot particles 
    plot(particlePosition(:,1),particlePosition(:,2),'Marker','o',...
        'LineStyle','-','Parent',a);   
    drawnow
   
    % calculate the distance between beads 
     particleDistance = pdist2mex(particlePosition',...
                                  particlePosition','euc',[],[],[]);
    % calculat the force (derivative of potential)
    force = LennardJones(particlePosition,particleDistance,rm,ljPotentialDepth);
    % update location 
    particlePosition = particlePosition+force*dt +noiseSTD*randn(numParticles,dimension);
    
end
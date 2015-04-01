function TestLennardJones
numParticles     = 300;
dimension        = 2;
numSteps         = 20;
ljPotentialDepth = 0.5; % epsilon
rm               = 0.05; % distance at which the potential reaches its minimum
dt               = 1e-3;
diffusionConst   = 1e-2;
noiseSTD         = sqrt(2*diffusionConst*dt);
% initialize positions 
particlePosition = randn(numParticles,dimension);
particlePosition(150:end,1) =particlePosition(150:end,1)+5;
particlePosition(150:end,2) =particlePosition(150:end,2)+5;
f= figure;
b = 7;
a= axes('Parent',f,'NextPlot','ReplaceChildren','XLim',[-b b],'YLim',[-b b]);
for sIdx =1:numSteps
    % plot particles 
    plot(particlePosition(:,1),particlePosition(:,2),'Marker','o','MarkerSize',10,...
        'LineStyle','none','Parent',a);   
    hold on 
    
   
    % calculate the distance between beads 
     particleDistance = pdist2mex(particlePosition',...
                                  particlePosition','euc',[],[],[]);
    % calculat the force (derivative of potential)
    [force, forceDirection] = LennardJones_mex(particlePosition,particleDistance,rm,ljPotentialDepth);
% %     add arrows to indicate the force direction    
%     for pIdx = 1:numParticles
%         for p2Idx = 1:numParticles
%           quiver(a,particlePosition(pIdx,1),particlePosition(pIdx,2),forceDirection(pIdx,p2Idx,1),forceDirection(pIdx,p2Idx,2))
%         end
%     end
%    
    title(a,['Step: ' num2str(sIdx)])   
     hold off
     set(a,'XLim',[-5 5],'YLim',[-5 5]);
      drawnow
    % update location 
    particlePosition = particlePosition+force*dt +noiseSTD*randn(numParticles,dimension);
    
end
% scrTestMorseForce
% this script test the Morse force between particles 
close all 



numPart = 10;
cMat    = true(numPart); 
dt      = 0.1;
De      = 1;   % De is the well depth
alpha   = 2;   % alpha is the width of the potential
re      = 0.00; % re is the equilibrium bond distance 
diffusionConst = 0.001;
dimension = 3;
% initial position 
r       = rand(numPart,dimension);
% add random noise 
f  = figure;
a  = axes('Parent',f,'NextPlot','replaceChildren','XLim',[-5 5],'YLim',[-5 5],'ZLim',[-5 5]);
l  = line('XData',r(:,1), 'YData',r(:,2),'ZData',r(:,3),'Marker','o','LineStyle','none','Parent',a);
cameratoolbar
for step = 1:500; 
    particleDist = ForceManager.GetParticleDistance(r); 
    edgesVec     = ForceManager.GetEdgesVectors(r,cMat);
    r            = r+MorseForce(De,alpha,re,edgesVec,particleDist)*dt +sqrt(2*diffusionConst*dt)*randn(numPart,dimension);
    set(l,'XData',r(:,1),'YData',r(:,2),'ZData',r(:,3));
    drawnow;
end
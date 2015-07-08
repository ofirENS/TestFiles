% scrTestMorseForce
% this script test the Morse force between particles 
close all 
profile on 
numPart = 500;
cMat    = true(numPart); % conectivity matrix
dt      = 0.1; % time step
De      = 0.1;   % De is the well depth
alpha   = 0.01;   % alpha is the width of the potential
re      =  2; % re is the equilibrium bond distance 
forceType      = 'attractive'; % [attractive|repulsive|full]
diffusionConst = 1;
dimension      = 3;
% initial position 
r       = rand(numPart,dimension);
% add random noise 
f  = figure;
a  = axes('Parent',f,'NextPlot','replaceChildren','XLim',[-15 15],'YLim',[-15 15],'ZLim',[-15 15]);
l  = line('XData',r(:,1), 'YData',r(:,2),'ZData',r(:,3),'Marker','o','LineStyle','none','Parent',a);
cameratoolbar
for step = 1:500; 
    particleDist = ForceManager.GetParticleDistance(r);
    edgesVec     = ForceManager.GetEdgesVectors(r,cMat);
    tic
    mForce       = MorseForce(De,alpha,re,edgesVec(:,:,1),edgesVec(:,:,2), edgesVec(:,:,3),particleDist,forceType);
    toc
    r            = r+mForce*dt ;%+sqrt(2*diffusionConst*dt)*randn(numPart,dimension);
    set(l,'XData',r(:,1),'YData',r(:,2),'ZData',r(:,3));
    drawnow;
end
profile viewer


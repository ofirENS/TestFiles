function SpiralOnASphere
% Create a spherical helix
radius    = 1;
numPoints = 1e3;
numSpins  = 20;
theta     = linspace(0,pi/2,numPoints);
theta2    = linspace((theta(floor(0.5*numPoints/numSpins))),pi/2,numPoints);
phi       = linspace(0,2*numSpins*pi,numPoints);
z         = radius*sin(theta);
x         = radius*cos(theta).*cos(phi);
y         = radius*cos(theta).*sin(phi);
z2        = radius*sin(theta2);

% plot
close all 
f = figure('Units','norm'); 
a = axes('Parent',f,'color','none','NextPlot','Add'); 
line('XData',x,'YData',y,'ZData',z,'Parent',a,'Color','r'); 
line('XData',x,'YData',y,'ZData',z2,'Parent',a,'Color','b'); 

cameratoolbar(f); 
daspect(a,[1 1 1]);

% create the sphere
[sx,sy,sz] = sphere(49);
sx         = sx*radius;
sy         = sy*radius;
sz         = sz*radius;
mesh(sx(1:end,1:25),sy(1:end,1:25),sz(1:end,1:25),'FaceAlpha',0.2,'FaceColor','y','EdgeColor','none','Parent',a,'FaceLighting','phong'); 
light('Parent',a,'Position',[1 0 1],'Style','infinite')



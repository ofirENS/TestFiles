function DiffuseOnSphere
% random walk on a sphere assuming the directions are indipendent
close all
numSteps       = 500;
radius         = 1;
dt             = 0.01;
diffusionConst = 0.1;
w              = sqrt(2*diffusionConst*dt)/radius;

[sx,sy,sz]  = sphere(20);
sx          = sx*radius;
sy          = sy*radius;
sz          = sz*radius;

% random angle sampling for points on the sphere
u     = 2*randc(1);
v     = 2*randc(1);
phi   = 2*pi*u;
theta = acos(2*v -1);
% phi   = randc(1)*pi*2;
% theta = randc(1)*pi*2;
% tt = w*rand(numSteps-1,1)*2*pi;
% pp = w*rand(numSteps-1,1)*pi;
theta       = cumsum([theta; (w*RandomWrappedNormalOnCircle(0,1,numSteps-1))]);% change the sum of directions to a proper one 
phi         = cumsum([phi; (w*RandomWrappedNormalOnCircle(0,1,numSteps-1))]);
% theta = cumsum([theta;tt]);
% phi  =  cumsum([phi;pp]);
x           = radius*sin(phi).*cos(theta);
y           = radius*sin(phi).*sin(theta);
z           = radius*cos(phi);
points      = [x,y,z];
% for sIdx = 2:numSteps
%     
%     theta = theta+w*RandomWrappedNormalOnCircle(theta,1,1);
%     phi   = phi+w*RandomWrappedNormalOnCircle(phi,1,1);
% 
%     x     = radius*sin(phi)*cos(theta);
%     y     = radius*sin(phi)*sin(theta);
%     z     = radius*cos(phi);
%     points(sIdx,:)= [x,y,z];    
% end

figure, plot(theta,phi), xlabel('\theta'), ylabel('\phi')
figure, mesh(sx,sy,sz,'FaceColor','none','EdgeColor','g'), hold on, 
% color = jet(numSteps);
plot3(points(:,1), points(:,2),points(:,3))
% for i = 1:numSteps-1;
%     line('XData',[points(i,1),points(i+1,1)],'YData',[points(i,2),points(i+1,2)],'ZData',[points(i,3),points(i+1,3)],'Color',color(i,:),'Parent',gca)
% end
cameratoolbar
daspect([1 1 1])

end
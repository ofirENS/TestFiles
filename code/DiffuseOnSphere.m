function DiffuseOnSphere
% random walk on a sphere assuming the directions are indipendent
close all
numSteps       = 500;
radius         = 1;
dt             = 0.0001;
diffusionConst = 1;
% w              = sqrt(2*diffusionConst*dt)/radius;

[sx,sy,sz]  = sphere(20);
sx          = sx*radius;
sy          = sy*radius;
sz          = sz*radius;

% random angle sampling for points on the sphere
u     = rand(1);
v     = rand(1);
phi   = 2*pi*u;
theta = acos(2*v -1);

% dTheta      = RandomWrappedNormalOnCircle(0,1,numSteps-1,-pi:.1:pi);
% dPhi        = RandomWrappedNormalOnCircle(0,1,numSteps-1,-pi:.1:pi);
w          = sqrt(2*diffusionConst*dt)./(radius);
mu         = 0;
dAngles    = w*randn([numSteps-1,2]);%RandomWrappedNormalOnCircle(mu,w,[numSteps-1,2]);
dTheta     = dAngles(:,1);
dPhi       = dAngles(:,2);

theta      = (cumsum([theta;dTheta]));
phi        = (cumsum([phi;dPhi]));
figure, subplot(141),plot(phi),set(gca,'YLim',[-2*pi 2*pi]), title('phi'), 
        subplot(142), plot(theta),set(gca,'YLim',[-2*pi 2*pi]), title('theta')
        x = xcorr(theta,phi);
        subplot(143), plot(x./sum(x))
        dx = xcorr(dTheta,dPhi);
        subplot(144), plot(dx./sum(dx)), title('xcorr dTheta, dPhi')
% theta = cumsum([theta;tt]);
% phi  =  cumsum([phi;pp]);
x           = radius*sin(phi).*cos(theta);
y           = radius*sin(phi).*sin(theta);
z           = radius*cos(phi);
points      = [x,y,z];
% for sIdx = 2:numSteps
%     
%     theta = theta+w*RandomWrappedNormalOnCircle(0,1,1);
%     phi   = phi+w*RandomWrappedNormalOnCircle(0,1,1);
% 
%     x     = radius*sin(phi)*cos(theta);
%     y     = radius*sin(phi)*sin(theta);
%     z     = radius*cos(phi);
%     points(sIdx,:)= [x,y,z];    
% end

figure, plot(theta,phi), xlabel('theta'), ylabel('phi'), set(gca,'XLIm',2*[-pi pi],'YLim',2*[-pi pi])
figure, mesh(sx,sy,sz,'FaceColor','none','EdgeColor','g'), hold on, 
% color = jet(numSteps);
plot3(points(:,1), points(:,2),points(:,3))
line('XData',[0 radius*sin(phi(1)).*cos(theta(1))],...
     'YData',[0 radius*sin(phi(1)).*sin(theta(1))],...
     'ZData',[0 radius*cos(phi(1))],...
     'Color','r')
% for i = 1:numSteps-1;
%     line('XData',[points(i,1),points(i+1,1)],'YData',[points(i,2),points(i+1,2)],'ZData',[points(i,3),points(i+1,3)],'Color',color(i,:),'Parent',gca)
% end
cameratoolbar
daspect([1 1 1])

end
% function MoveOnMeshTest
% move on mesh from an initial position at a random direction to a second
% position, constrained to move on the mesh 
close all

% Make sure Utils folder is in the working path 
% choose mesh 
[faces,vertices, normals] = stlread(uigetfile('*.stl'));
% Display the mesh 

% choose one point on the surface
faceNum = 1;
% get its vertices
verts   = vertices((faceNum-1)*3 +1: (faceNum)*3,:);

% choose the mid point of the triangle 
x0 = mean(verts);
x1 = x0+ 5*randn(size(x0));

% translate the mesh to the origin according to the point chosen
verts(:,1) = verts(:,1)-x0(1);
verts(:,2) = verts(:,2)-x0(2);
verts(:,3) = verts(:,3)-x0(3);
x1 = x1-x0;
normals(:,1) = normals(:,1)-x0(1);
normals(:,2) = normals(:,2)-x0(2);
normals(:,3) = normals(:,3)-x0(3);
x0           = [0 0 0];

f = figure();
a = axes('Parent',f,'Nextplot','Add'); 
patch('Parent',a,'vertices',vertices,'Faces',faces,'EdgeColor','g')
set(a,'color','none')
daspect([1 1 1])

% plot the path
line([x0(1),x1(1)],[x0(2) x1(2)],[x0(3) x1(3)],'Color','c','Marker','*','MarkerSize',20)
plot3(0,0,0,'or','MarkerSize',20)

% For the point x0, choose one vector in the plane perpendicular to the normal, 
% use this vector and the vector x1-x0 to constuct a second plane which
% will be the intersection plane. 
% then, calculate the angle of this second plane, rotate the mesh such that
% the intersection plane is alligned with the x-y plane, and look for zero
% crossing vertices. 

% Calculate the normal to the path and the face normal to give the
% intersection plane
faceNormal = normals(faceNum,:);
dirNormal = cross(faceNormal,x1-x0); % the normal to the surface containing the path and the faceNormal 

% plot direction normal 
% line([x0(1) x0(1)+dirNormal(1)],[x0(2), x0(2)+dirNormal(2)],[x0(3),x0(3)+dirNormal(3)],'Color','m','Parent',a,'LineWidth',4)
% calculate the angle of this normal with the axes
theta = acos(dot(dirNormal,[1 0 0])./norm(dirNormal));% x
rho   = acos(dot(dirNormal,[0 1 0])./norm(dirNormal)); % y
phi   = acos(dot(dirNormal,[0 0 1])./norm(dirNormal)); % z 

% rotate the mesh in theta, phi
% Rx = [1 0 0; 0, cos(theta), -sin(theta); 0, sin(theta), cos(theta)];
% Ry = [cos(rho), 0, sin(rho); 0 1 0;-sin(rho), 0,cos(rho)];
Rz = [cos(phi), -sin(phi), 0 ; sin(phi), cos(phi), 0; 0, 0, 1];

% rotate the mesh 
newPos = (Rz*vertices')';
% patch('vertices',newPos,'faces',faces,'EdgeColor','y','Parent',a)
% rotate the points and display
x0Tag = (Rz*x0')';
x1Tag = (Rz*x1')';
faceNormal = (Rz*faceNormal')';
% dirNormalTag = (Rz*dirNormal')';% rotate the normal
% line([x0Tag(1),x1Tag(1)],[x0Tag(2) x1Tag(2)],[x0Tag(3) x1Tag(3)],'Color','m','Marker','*','MarkerSize',20)
% line([0 dirNormalTag(1)],[0 dirNormalTag(2)],[0 dirNormalTag(3)],'Color','r','MarkerSize',20)
cameratoolbar
box on

% recalculate the angle between the rotated normal and the y axis, and rotate once
% more 
rho    = acos(dot(faceNormal,[0 1 0])./norm(faceNormal)); % y
theta  = acos(dot(faceNormal,[1 0 0])./norm(faceNormal));% x

Rx = [1 0 0; 0, cos(theta), -sin(theta); 0, sin(theta), cos(theta)];
Ry     = [cos(rho), 0, sin(rho); 0 1 0;-sin(rho), 0,cos(rho)];
newPos = (Ry*newPos')';
x0Tag = (Ry*x0Tag')';
x1Tag = (Ry*x1Tag')';
faceNormal = (Ry*faceNormal')';% rotate the normal

patch('vertices',newPos,'faces',faces,'EdgeColor','b','Parent',a)
line([x0Tag(1),x1Tag(1)],[x0Tag(2) x1Tag(2)],[x0Tag(3) x1Tag(3)],'Color','m','Marker','*','MarkerSize',20)
plot3(x0Tag(1),x0Tag(2),x0Tag(3),'r','MarkerSize',20)

% plot positive axis
line([0 8],[0 0], [0 0],'color','r','LineWidth',3);% x positive
line([0 0],[0 8],[0 0],'Color','g','LineWidth',3); % y positive
line([0 0],[0 0],[0 8],'Color','k','LineWidth',3); % z positive
% need to add rotation according to the intersection point of the direction
% plane with the axes and not the center of the mesh 
% end
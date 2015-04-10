function MoveOnMeshTest
% move on mesh from an initial position at a random direction to a second
% position, constrained to move on the mesh 

% Make sure Utils folder is in the working path 
% choose mesh 
[faces,vertices, ~] = stlread(uigetfile('*.stl'));
% Display the mesh 
f = figure();
a = axes('Parent',f,'Nextplot','Add'); 
patch('Parent',a,'vertices',vertices,'Faces',faces,'EdgeColor','g')
set(a,'color','none')
daspect([1 1 1])
% choose one point on the surface
faceNum = 100;
% get its vertices
verts   = vertices((faceNum-1)*3 +1: (faceNum)*3,:);
% choose the mid point of the triangle 
x0 = mean(verts);% [(verts(1)+verts(2))/2, (verts(1)+verts(3))/2, (verts(3)+verts(2))/2];

% choose second point
x1 = x0+ 3*randn(size(x0));

line([x0(1),x1(1)],[x0(2) x1(2)],[x0(3) x1(3)],'Color','c','Marker','*','MarkerSize',20)
plot3(x0(1),x0(2),x0(3),'r*','MarkerSize',20)

% For the point x0, choose one vector in the plane perpendicular to the normal, 
% use this vector and the vector x1-x0 to constuct a second plane which
% will be the intersection plane. 
% then, calculate the angle of this second plane, rotate the mesh such that
% the intersection plane is alligned with the x-y plane, and look for zero
% crossing vertices. 

% the normal for the face where x0 appears 
% faceNorm = normals(faceNum,:);
% choose the vector from verts(1,:) to verts(2,:);
t = verts(2,:)- verts(1,:);
line([verts(1,1) verts(2,1)], [verts(1,2) verts(2,2)],[verts(1,3) verts(2,3)],'Color','y','Parent',a,'LineWidth',5)
% calculate the normal to t and s= x1-x0
s = x1-x0;
dirNormal = cross(t,s); 
% plot direction normal 
% line([x0(1) x0(1)+dirNormal(1)],[x0(2), x0(2)+dirNormal(2)],[x0(3),x0(3)+dirNormal(3)],'Color','m','Parent',a,'LineWidth',4)
% calculate the angle of this normal
theta = acos(dot(dirNormal,[1 0 0])./norm(dirNormal));% x
phi   = acos(dot(dirNormal,[0 0 1])./norm(dirNormal)); % z 
% rho   = acos(dot(dirNormal,[0 0 1])./norm(dirNormal)); % y
% rotate the mesh in theta, phi
Rx = [1 0 0; 0, cos(theta), -sin(theta); 0, sin(theta), cos(theta)];
% Ry = [cos(rho), -sin(rho), 0; 0 1 0;-sin(rho), cos(rho), 0];
Rz = [cos(phi), -sin(phi), 0 ; sin(phi), cos(phi), 0; 0, 0, 1];

% rotate the mesh 
newPos = (Rx*Rz*vertices')';
patch('vertices',newPos,'faces',faces,'EdgeColor','y','Parent',a)
cameratoolbar
% need to add rotation according to the intersection point of the direction
% plane with the axes and not the center of the mesh 
end
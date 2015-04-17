function MoveOnMeshTest
% move on mesh from an initial position at a random direction to a second
% position, constrained to move on the mesh 
close all

% Make sure Utils folder is in the working path 
% choose mesh 
[faces,vertices, ~] = stlread(uigetfile('*.stl'));

% choose one face
faceNum = 1;
% get its vertices
verts   = vertices((faceNum-1)*3 +1: (faceNum)*3,:);

% choose the mid point of the triangle as x0
x0 = mean(verts);
% choose a random second point
x1 = x0+ 5*randn(size(x0));

% translate the mesh to the origin according to the point chosen
x1 = x1-x0;
x0 = [0 0 0];

tic
% calculate the angle between the path and the x axis 
theta = -atan2(x1(2),x1(1));
phi   = pi/2 -acos(dot(x1,[0 0 1])./norm(x1)); % z 

% rotate the mesh in theta, phi
Rz = [cos(theta), -sin(theta), 0 ; sin(theta), cos(theta), 0; 0, 0, 1];
% rotate around y 
% rotate the mesh such that the path aligns with the x-z
rPos = (Rz*vertices')';% rotate about the z axis

% rotate the points 
% x0Tag = (Rz*x0')';
% x1Tag = (Rz*x1')';

Ry     = [cos(phi), 0, sin(phi); 0 1 0;-sin(phi), 0,cos(phi)];
newPos = (Ry*rPos')';% roate about the y axis
% x0Tag  = (Ry*x0Tag')';
% x1Tag  = (Ry*x1Tag')';

sNewPos  = sign(newPos(:,3));

% For each triade of vertices, see if there are some with negative and
% positive z coordinate values
sameSign       = false(numel(sNewPos)/3,1);
vertIndicators = false(numel(sNewPos),1);
cPoints        = [];

for sIdx = 1:numel(sNewPos)/3
    inds = ((sIdx-1)*3 +1):sIdx*3;
    signs = sNewPos(inds);
    sameSign(sIdx)= all(signs==signs(1));
    vertIndicators(inds) = ~sameSign(sIdx);
    % find the intersection of the triangle with the x-y plane        
    
    if ~sameSign(sIdx)
    points = newPos(inds,:);
    
    t = zeros(1,3);
    t(1)     = -points(1,3)/(points(2,3)-points(1,3));
    t(2)     = -points(1,3)/(points(3,3)-points(1,3));
    t(3)     = -points(2,3)/(points(3,3)-points(2,3));
    
    % get the x,y coordinates for the intersection
    p = zeros(3,3);
    p(1,:) = points(1,:)+t(1)*(points(2,:)-points(1,:));
    p(2,:) = points(1,:)+t(2)*(points(3,:)-points(1,:));
    p(3,:) = points(2,:)+t(3)*(points(3,:)-points(2,:));
    p      = p(t>=0 & t<=1,:);
    cPoints = [cPoints;p(1,:);p(2,:)];
    end
end
toc

% extract those places where the signs are not all the same 
zeroCrossVertices  = newPos(vertIndicators,:);
zeroCrossFaces     = reshape((1:size(zeroCrossVertices,1)),3,size(zeroCrossVertices,1)/3)';

f = figure();
a = axes('Parent',f,'Nextplot','Add'); 
patch('Parent',a,'vertices',vertices,'Faces',faces,'EdgeColor','g')
set(a,'color','none')
daspect([1 1 1])

% plot positive axes
line([0 8],[0 0], [0 0],'color','r','LineWidth',3);% x positive
line([0 0],[0 8],[0 0],'Color','g','LineWidth',3); % y positive
line([0 0],[0 0],[0 8],'Color','k','LineWidth',3); % z positive

% plot the path
line([x0(1),x1(1)],[x0(2) x1(2)],[x0(3) x1(3)],'Color','c','Marker','*','MarkerSize',20)
plot3(0,0,0,'or','MarkerSize',20)

% patch('vertices',newPos,'faces',faces,'EdgeColor','b','Parent',a)
% line([x0Tag(1),x1Tag(1)],[x0Tag(2) x1Tag(2)],[x0Tag(3) x1Tag(3)],'Color','m','Marker','*','MarkerSize',20)
% plot3(x0Tag(1),x0Tag(2),x0Tag(3),'r','MarkerSize',20)


% patch('Vertices',zeroCrossVertices,'Faces',zeroCrossFaces,'EdgeColor','y','Parent',a)
plot3(cPoints(:,1),cPoints(:,2),cPoints(:,3),'y.')
cameratoolbar
box on

% rotate the points back 

end


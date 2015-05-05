function [newPos, vert1,vert2] = WalkOnPolygon(prevPos, curPos,vertices,isCircular)
% walk on a polygon curve from prevPos, which should lay on the polygon
% edges, by projecting the [prevPos, curPos] vector on the polygon to give newPos
% prevPos must lay between the first two vertices of the polygon 
% vertices of the polygon should be ordered such that the firt vertex is
% the closest to prevPos.
% is circular is a flag for closed polygon 
% tic
% test that the prevPos is between the first two vertices 
A = [vertices(1,1:2),1; vertices(2,1:2),1 ; prevPos(1,1:2),1];
d = det(A);
if d>eps
    error('prevPos is not on the first edge')
end
% Get the exct position and trim the polygon such that the polygon and the
% path start from the same positon 

% Length of the path
l       = sqrt(sum((curPos-prevPos).^2));
flag    = true;

% find the vertices 
vert1      = 1;
vert2      = 2;
polyLength = 0;
numVert    = size(vertices,1);
while flag 
    % iteratively calculate the length of the polygon 
    % and subtract it from the length of the path 
    r          = sqrt(sum((vertices(vert2,:)-vertices(vert1,:)).^2));  % length of segment
    polyLength = polyLength + r;% cumulative length of polygon 
    d          = l-polyLength; % difference between path length and cumulative polygon length
    if d<0 % if the difference is negative- stop 
        flag = false;
    else
        vert1 = vert2;
        
        if vert2==numVert
         if isCircular 
            vert2 = 1;
         else 
%  quit with no result
             error('the point is not on the specified polygon')
         end
        else 
            vert2 = vert2+1;% advance the index one more 
        end
    end
end

% the actual point 
a      = vertices(vert1,:);
b      = vertices(vert2,:);
dirVec = (b-a)./sqrt(sum((b-a).^2));

t      = (r+d)/r;
% get the new point 
newPos = a+t*(dirVec);

polyVert = vertices;
if isCircular 
    polyVert = [polyVert; vertices(1,:)];
end

% toc
% 
% plot 
figure, hold on 
line('XData',polyVert(:,1), 'YData',polyVert(:,2),'ZData',polyVert(:,3),'color','g','Marker','o','MarkerEdgeColor','m')
line('XData',[prevPos(1) curPos(1)],'YData',[prevPos(2) curPos(2)],'ZData',[prevPos(3) curPos(3)],'Marker','*','color','b');
%plot new position 
line('XData',newPos(1),'YData',newPos(2),'ZData',newPos(3),'Marker','o','MarkerEdgeColor','r','MarkerFaceColor','r')
daspect([1 1 1])
cameratoolbar
end
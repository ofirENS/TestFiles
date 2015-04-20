function newPos = WalkOnPolygon(prevPos, curPos,vertices,isCircular)
% walk on a polygon curve from prevPos, which should lay on the polygon
% edges, by projecting the [prevPos, curPos] vector on the polygon to give newPos
% prevPos must lay between the first two vertices of the polygon 
% vertices of the polygon should be ordered such that the firt vertex is
% the closest to prevPos.
% is circular is a flag for closed polygon 

% newPos = 0;
% test that the prevPos is between the first two vertices 
A = [vertices(1,1:2),1; vertices(2,1:2),1 ; prevPos(1,1:2),1];
d = det(A);
if d>1e-16
    error('prevPos is not on the first vertex')
end
% Get the exct position and trim the polygon such that the polygon and the
% path start from the same positon 
% t = (prevPos(1)-vertices(1,1))/(vertices(2,1)-vertices(1,1));
% intersect
vertices(1,:) = vertices(1,:)- prevPos;
% Length of the path
l       = sqrt(sum((curPos-prevPos).^2));
flag    = true;
% cumNorm = cumsum(sqrt(sum(diff(vertices,1).^2,2)));
% if isCircular
%     cumNorm = [cumNorm; sqrt(sum((vertices(end,:)-vertices(1,:)).^2))];
% end

% d       = l-cumNorm;
% find the vertices 
vert1      = 1;
vert2      = 2;
polyLength = 0;
numVert    = size(vertices,1);
while flag && vert1<=numVert
    % iteratively calculate the length of the polygon 
    % and subtract the length of the path 
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
             flag = false; % quit with no result
         end
        else 
            vert2 = vert2+1;% advance the index one more 
        end
    end
end


if vert1==vert2
    error('the point is not on the specified polygon')
end
% the actal point 
a = vertices(vert1,:);
b = vertices(vert2,:);
dirVec = b-a;
A = (b(1)-a(1))^2 +(b(2)-a(2))^2 +(b(3)-a(3))^2;%  sum((dirVec).^2);
B = 2*(a(1)*(b(1)-a(1))+a(2)*(b(2)-a(2))+a(3)*(b(3)-a(3)));
C = (a(1).^2 +a(2)^2 +a(3)^2)- (r+d)^2;
t(1) = (-B +sqrt(B^2 - 4*A*C))/(2*A);
t(2) = (-B -sqrt(B^2 - 4*A*C))/(2*A);

% take the positive t
t = t(t>=0 & t<=1);
% get the new point 
newPos = a+t*(dirVec);
% plot 
figure, hold on 
polyVert = vertices;
if isCircular 
    polyVert = [polyVert; vertices(1,:)];
end
line('XData',polyVert(:,1), 'YData',polyVert(:,2),'ZData',polyVert(:,3),'color','g')
line('XData',[prevPos(1) curPos(1)],'YData',[prevPos(2) curPos(2)],'ZData',[prevPos(3) curPos(3)],'Marker','*','color','b');
%plot new position 
line('XData',newPos(1),'YData',newPos(2),'ZData',newPos(3),'Marker','o','color','r')

end
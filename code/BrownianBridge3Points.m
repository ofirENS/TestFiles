function BrownianBridge3Points()
N = 100;% num points 
% initial path starts at zero 
p(1,:) = zeros(1,3); % path in 3D
for pIdx = 2:100
    p(pIdx,:) = p(pIdx-1,:)+randn(1,3);
end
tx = 1; % first time 
x  = p(tx,:); % first point 
ty = 20;% second time 
y  = p(ty,:)+randn(1,3);% second point
tk = 80;% third time 
k  = p(tk,:)+randn(1,3);% third point

% beta  = k-(tk/(2*ty))*(p(ty,:)-y+x)-0.5*(p(tk,:)+x);
% alpha = -k -0.5*(x-y+(ty/tk)*(p(tk,:)+x-k)+p(tk,:));
beta  = ((x-k+p(tk,:))/tk -(x-y+p(ty,:))/ty)/2;
alpha = (x-y+p(ty,:))/ty - beta;
w     = zeros(size(p));

for t = 1:N
    w(t,:) = x+p(t,:)-t*alpha-t*beta;
end
figure, plot3(p(:,1),p(:,2),p(:,3),'b'), hold on,
        plot3(w(:,1),w(:,2),w(:,3),'r'); % plot the transformed path
% draw the lines between points 
plot3([p(ty,1),w(ty,1)],[p(ty,2),w(ty,2)],[p(ty,3),w(ty,3)],'g','LineWidth',3)
plot3([p(tk,1),w(tk,1)],[p(tk,2),w(tk,2)],[p(tk,3),w(tk,3)],'g','LineWidth',3)
plot3(x(1),x(2),x(3),'ob');
plot3(y(1),y(2),y(3),'or');
plot3(k(1),k(2),k(3),'og');
daspect([1 1 1]), axis vis3d
cameratoolbar
end
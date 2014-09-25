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
y  = p(ty,:)+3*randn(1,3);% second point
tk = 80;% third time 
k  = p(tk,:)+10*randn(1,3);% third point

% beta  = k-(tk/(2*ty))*(p(ty,:)-y+x)-0.5*(p(tk,:)+x);
alpha = -k -0.5*(x-y+(ty/tk)*(p(tk,:)+x-k)+p(tk,:));
beta  = -y -(tk/ty)*(p(ty,:)+x+k-y+alpha);
w     = zeros(size(p));

for wIdx = 1:N
    w(wIdx,:) = x+p(wIdx,:)-(wIdx/ty)*(p(ty,:)+x-y+k+alpha)-(wIdx/tk)*(p(tk,:)+x-k+y+beta);
end
figure, plot3(p(:,1),p(:,2),p(:,3),'b'), hold on, plot3(w(:,1),w(:,2),w(:,3),'r')
% draw the lines between points 
plot3([p(ty,1),w(ty,1)],[p(ty,2),w(ty,2)],[p(ty,3),w(ty,3)],'g','LineWidth',3)
plot3([p(tk,1),w(tk,1)],[p(tk,2),w(tk,2)],[p(tk,3),w(tk,3)],'g','LineWidth',3)
daspect([1 1 1]), axis vis3d
sum(sum((w-p).^2))
end
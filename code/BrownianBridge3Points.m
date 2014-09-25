function BrownianBridge3Points()
N = 100;% num points 
% initial path starts at zero 
p(1,:) = zeros(1,3); % path in 3D
for pIdx = 2:100
    p(pIdx,:) = p(pIdx-1,:)+randn(1,3);
end
tx = 1; % first time 
x  = p(tx,:); % first point 
ty = 10;% second time 
y  = p(ty,:)+rand(1,3);% second point
tk = 40;% third time 
k  = p(tk,:)+randn(1,3);% third point

beta  = k-(tk/(2*ty))*(p(ty,:)-y+x)-0.5*(p(tk,:)+x);
alpha = (ty/tk)*(p(tk,:)+x-k+beta)-y; 
w= zeros(size(p));
for wIdx = 1:N
    w(wIdx,:) = x+p(wIdx,:)-(wIdx/ty)*(p(ty,:)+x-y+alpha)-(wIdx/tk)*(p(tk,:)+x-k+beta);
end
figure, plot3(p(:,1),p(:,2),p(:,3),'b'), hold on, plot3(w(:,1),w(:,2),w(:,3),'r')
end
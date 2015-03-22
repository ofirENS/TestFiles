function vals = Done(k,x,gridX,t,gridT,f)
vals = zeros(numel(t), numel(t));
y= gridX;% linspace(0,1,numel(x));
for i=1:numel(t)
    for j=1:numel(t)
        vals(i,j) = Dcoeff(y,j,x(k),t(i),gridT,f(i,:));
    end
end
end
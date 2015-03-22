function vals = Cone(k,x,gridX,t)
% calculate the matrix Cone for a specific space point x_k, for all times
% t_i in A
% points x_k=1:numel(spacePoints)
vals = zeros(numel(t),numel(x));
for i=1:numel(t)
    for l = 1:numel(x)    
        vals(i,l) = Ccoeff(l,x(k),t(i),gridX);
    end
end
end
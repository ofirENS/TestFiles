function vals = Cone(x,spacePoints,t)
% calculate the matrix Cone for a specific space point x_k, for all times
% t_i in A
% points x_k=1:numel(spacePoints)
vals = zeros(numel(t),numel(x));
for l = 1:numel(x)
    for i=1:numel(t)
        vals(l,:) = Ccoeff(l,x,t(i),spacePoints);
    end
end
end
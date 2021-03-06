function vals = Bone(k,spacePoints,t,timePoints)
% Calculate the matrix Aone for a specific space point x_k, for all times
% t_i in A
% points x_k=1:numel(spacePoints)
vals = zeros(numel(t),2*numel(t));
for j = 1:numel(t)
    for i = 1:numel(t)
        vals(j,2*i-1:2*i) =[Bcoeff(0,j,spacePoints(k),t(i),timePoints),...
                            Bcoeff(1,j,spacePoints(k),t(i),timePoints)];
    end
end
end
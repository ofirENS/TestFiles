
function vals = Done(k,spacePoints,t,timePoints,f)
vals = zeros(numel(t), numel(t));
for j=1:numel(t)
    for i=1:numel(t)
        vals(j,i) = Dcoeff(spacePoints,j,spacePoints(k),t(i),timePoints,f(i,:));
    end
end

end
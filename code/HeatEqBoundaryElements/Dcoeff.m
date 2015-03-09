function vals = Dcoeff(y,j,x,t,timePoints,f)
% Calculate the integral int_0^1(f(y,t_j)*A_{yj}(x,t)dy) by midpoint
% integration rule
% the spatial integration of all points y at time t_j
a        = zeros(1,numel(y));
vals = 0;
a(1) = Acoeff(y(1),j,x,t,timePoints);
for aIdx = 2:numel(y);
    a(aIdx) = Acoeff(y(aIdx),j,x,t,timePoints);
    vals = vals+ 0.5*(a(aIdx)*f(aIdx)+a(aIdx-1)*f(aIdx-1))*(y(aIdx)-y(aIdx-1));
end
end
function vals = Ccoeff(k,x,t,spacePoints)
% evaluate the coefficient C for index k which describes the discretization
% of the space variable spacePoints in [0 1], at time t
vals = 0.5*(erf((x-spacePoints(k))/(2*sqrt(t)))-erf((x-spacePoints(k+1))/(2*sqrt(t))));
end
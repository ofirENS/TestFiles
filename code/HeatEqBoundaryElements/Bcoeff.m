function vals = Bcoeff(ksi,j,x,t,timePoints)
% evaluate the coefficient B at the  boundary ksi=0 or ksi=1;
% for the index j which describes the time steps timePoints_j, at time t and space
% point x
% timePoints is a vector describing the time descritized domain

if t<=timePoints(j)
    vals = 0;
elseif t>timePoints(j) && t<= timePoints(j+1) && x==ksi
    vals = 0;
elseif t>timePoints(j) && t<= timePoints(j+1) && x~=ksi
    z0   = abs(x-ksi)/(2*sqrt(t-timePoints(j)));
    vals = -(erfc(z0))/2;
elseif t>timePoints(j+1)
    z0   = abs(x-ksi)/(2*sqrt(t-timePoints(j)));
    z1   = abs(x-ksi)/(2*sqrt(t-timePoints(j+1)));
    vals = (erf(z0)-erf(z1))/2;
else 
   vals = 0; 
end
end

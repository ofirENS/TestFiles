function vals = Acoeff(ksi,j,x,t,gridT)
% evaluate the coefficient A at the  boundary ksi=0 or ksi=1;
% for the index j which describes the time steps timePoints_j, at time t and space
% point x
% timePoints is a vector describing the time descritized domain
if t<=gridT(j)
    vals=0;
elseif all([t>gridT(j), t<= gridT(j+1), x==ksi])
    vals = sqrt((t-gridT(j))/pi);
elseif all([t>gridT(j), t<= gridT(j+1), x~=ksi])
    z0 = abs(x-ksi)/(2*sqrt(t-gridT(j)));
    vals = (abs(x-ksi)/(2*sqrt(pi)))*((exp(-z0^2)/z0) - sqrt(pi)*erfc(z0));
elseif all([t>gridT(j+1), x==ksi])
    vals = sqrt((t-gridT(j))/pi)-sqrt((t-gridT(j+1))/pi);
elseif all([t>gridT(j+1), x~=ksi])
    z0 = abs(x-ksi)/(2*sqrt(t-gridT(j)));
    z1 = abs(x-ksi)/(2*sqrt(t-gridT(j+1)));
    vals = (abs(x-ksi)/(2*sqrt(pi)))*((exp(-(z0^2))/z0) - exp(-(z1^2))/z1 +sqrt(pi)*(erf(z0)-erf(z1)));
else
    vals = 0;
end
end

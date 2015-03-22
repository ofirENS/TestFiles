function [C] = CalculateC(N,N0,t,gridX)
% calculate the C matrix
% N- number of time points
% N0- number of space points
% t- time points
% gridX - grid for the space points
C = zeros(2*N,N0);
for i = 1:N% space
    for k=1:N0% time
        C((2*i-1):2*i,k) = [Ccoeff(k,0,t(i),gridX);
                            Ccoeff(k,1,t(i),gridX)];
    end
end

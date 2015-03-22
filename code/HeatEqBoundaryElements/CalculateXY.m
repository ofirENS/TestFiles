function [X,Y]= CalculateXY(N,N0,t,gridT,x,gridX,E,A,B,Bstar,C,D,u0,f,alpha)
% N - number pf time points
% N0 - number of space points
% t - time points
% gridT - grid for time points
% x - space points
% gridX - grid for space points
% A- the calculated A matrix 
% B - the calculated B matrix 
% BStar- the calculated Bstar matrix 
% C - the calculated C matrix 
% D - the calculated D matrix 
% u0 - initial data u(x,0) 
% f - multiplicative function for the source f(x,t)r(t)
% alpha- constant for the boundary vcondition u_x-alpha*u = 0

s1 = zeros(N,N,N0);
s2 = zeros(N,N0);
for k = 1:N0% space variable
    % components of X
    [a1k,b1k,b1s] = CalculateA1B1B1Star(k,x,t,gridT,N);
    ax  = (a1k-(1/alpha)*(b1k+b1s))/... %(a1k-(1/alpha)*(b1k-b1s))
          (A-(1/alpha)*(B+Bstar));
    s1(:,:,k) = (-ax*D + Done(k,x,gridX,t,gridT,f));
    
    % components of Y
    ay = ax;% it is the same calculation as ax (a1k-(1/alpha)*(b1k+b1s))/...
%          (A-(1/alpha)*(B+Bstar));
    s2(:,k) = (ay*C-Cone(k,x,gridX,t))*u0' ;
end

X = (1/N0)*sum(s1,3);

Y = E'+(1/N0)*sum(s2,2);
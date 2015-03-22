function [A,B,Bstar,D] = CalculateABBStarD(N,t,gridT,x,f)
% Calculate A and B, B*, and D
% N is the number of time points
% grid T is the time points grid on which the solution is calculated 
% f is the multiplicative function for the source f(x,t)*r(t), size [N,
% N0], with N0 the number of space points

A      = zeros(2*N,2*N);
B      = zeros(2*N,2*N);
Bstar  = zeros(2*N,2*N);
D      = zeros(2*N,N);
for i = 1:N % time
    for j = 1:N % time
        deltaij = double(i==j);

        A((2*i-1):2*i,(2*j-1):2*j) = [Acoeff(0,j,0,t(i),gridT), Acoeff(1,j,0,t(i),gridT);...
                                      Acoeff(0,j,1,t(i),gridT), Acoeff(1,j,1,t(i),gridT)];
        % temp terms
        b1j0i = Bcoeff(1,j,0,t(i),gridT);
        b1j1i = Bcoeff(1,j,1,t(i),gridT);
        
        B((2*i-1):2*i,(2*j-1):2*j) = [Bcoeff(0,j,0,t(i),gridT)+0.5*deltaij, b1j0i;...
                                      Bcoeff(0,j,1,t(i),gridT), b1j1i+0.5*deltaij];
        
        Bstar((2*i-1):2*i,(2*j-1):2*j) = [b1j0i,           -b1j0i;...
                                          b1j1i+deltaij/2, -b1j1i-0.5*deltaij];
        
        D((2*i-1):2*i,j)= [Dcoeff(x,j,0,t(i),gridT,f(i,:));...
                           Dcoeff(x,j,1,t(i),gridT,f(i,:))];
    end
end
end
function [u] = CalculateHeatSolution(N0,N,t,gridT, x, u0, q0j, q1j,h0j,h1j,f,r)
% get the solution for the inverse heat source, u(x,t), 
% N0 - number of space points
% N  - number of time points
% t  - time points
% gridT - time points grid
% x space points
% q0j flux at x=0 du/dn
% q1j flux at x=1 du/dn
% h0j boundary condition u(0,t)
% u1j boundary condition u(1,t)
% f multiplier of the source f(x,t)r(t) size[N N0]
% r calculated source term size [N,1]

eta     = ones(1,N0);
eta(1)  = 0.5;
eta(N0) = 0.5;
u       = zeros(N,N0);
for j=1:N0    % space index
    for i=1:N % time index
        sTime   = 0;% cumulative sums
        sSpace  = 0;
        
        for tIdx = 1:N % time index
            sTime = sTime+ Acoeff(0,tIdx,x(j),t(i),gridT)*q0j(tIdx) + Acoeff(1,tIdx,x(j),t(i),gridT)*q1j(tIdx)-...
                Bcoeff(0,tIdx,x(j),t(i),gridT)*h0j(tIdx) - Bcoeff(1,tIdx,x(j),t(i), gridT)*h1j(tIdx)+...
                Dcoeff(x,tIdx,x(j),t(i),gridT,f(i,:))*r(tIdx);
        end
        
        for ssIdx = 1:N0 % space index
            sSpace = sSpace +Ccoeff(ssIdx,x(j),t(i),gridT)*u0(ssIdx);
        end
        u(i,j) = (sTime+sSpace)*eta(j);
    end
end
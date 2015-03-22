function [a1k,b1k,b1s] = CalculateA1B1B1Star(k,x,t,gridT,N)

a1k = zeros(N,2*N);
b1k = zeros(N,2*N);
b1s = zeros(N,2*N);
for i = 1:numel(t)
    for j = 1:numel(t)
        % Calcualte A1
        a1k(i,(2*j-1):2*j) = [Acoeff(0,j,x(k),t(i),gridT),...
                            Acoeff(1,j,x(k),t(i),gridT)];
        
        % Temp b1
        b1ki = Bcoeff(1,j,x(k),t(i),gridT);
        % calculate B1
        b1k(i,(2*j-1):2*j) = [Bcoeff(0,j,x(k),t(i),gridT), b1ki];
        
        % Calculate B1*
        b1s(i,(2*j-1):2*j) = [b1ki,-b1ki];
    end
end
end



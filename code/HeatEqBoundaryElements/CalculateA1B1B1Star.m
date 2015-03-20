function [a1k,b1k,b1s] = CalculateA1B1B1Star(k,spacePoints,t,timePoints)

a1k = zeros(numel(t),2*numel(t));
b1k = zeros(numel(t),2*numel(t));
b1s = zeros(numel(t),2*numel(t));
for j = 1:numel(t)
    for i = 1:numel(t)
        % Calcualte A1
        a1k(j,2*i-1:2*i) = [Acoeff(0,j,spacePoints(k),t(i),timePoints),...
                            Acoeff(1,j,spacePoints(k),t(i),timePoints)];
        
        % Temp b1
        b1ki = Bcoeff(1,j,spacePoints(k),t(i),timePoints);
        % calculate B1
        b1k(j,2*i-1:2*i) = [Bcoeff(0,j,spacePoints(k),t(i),timePoints),...
                            b1ki];
        % Calculate B1*        
        b1s(j,2*i-1:2*i) =[b1ki,...
                           -b1ki];                
    end
end


end



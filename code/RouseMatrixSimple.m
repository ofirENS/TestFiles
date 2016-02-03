function [R,eigenVec,eigenVal] = RouseMatrixSimple(numBeads)
% This function creates a Rouse matrix (The Kirchhoff matrix) representing
% the connectivity of the graph, only nearest neighbors are connected. The
% main diagonal represent vertex connectivity, and off diagonal are negativ
% connectivity values.
% The rouse matrix is an numBead by numBeads square symmetric matrix.
% eigVec and eigVal are the eigen values and eigen vectors of the Rouse
% matrix.
format long
R = 2*eye(numBeads)-diag(ones(numBeads-1,1),1)-diag(ones(numBeads-1,1),-1);
R(1,1)     = 1;
R(end,end) = 1;
if nargout>1
%     [eigenVec,eigenVal] = eig(R,'nobalance');
    eigenVec      = zeros(numBeads);
    eigenVec(1,:) = sqrt(1/numBeads);
    for vIdx = 1:(numBeads-1)
        eigenVec(vIdx+1,:) = sqrt(2/numBeads).*cos(((1:numBeads)-0.5).*vIdx*pi/(numBeads));
    end
    eigenVal = 4*sin((0:(numBeads-1))*pi./(2*numBeads)).^2;
end
end
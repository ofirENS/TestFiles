function [R,eigenVec,eigenVal] = RouseMatrix(numBeads)
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
    [eigenVec,eigenVal] = eig(R,'nobalance');
end
end
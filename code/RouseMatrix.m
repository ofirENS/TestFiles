function [R,eigenVec,eigenVal] = RouseMatrix(numBeads)
format long 
R = 2*eye(numBeads)-diag(ones(numBeads-1,1),1)-diag(ones(numBeads-1,1),-1);
R(1,1)     = 1;
R(end,end) = 1;
if nargout>1
    [eigenVec,eigenVal] = eig(R,'nobalance');
end
end
function regTerm = GetRegularizationTerm(N,order)
% Get regularization term of order = [0,1, or 2]
if order==0
    regTerm = eye(N);
elseif order==1
    regTerm      = 2*eye(N);
    regTerm      = regTerm-diag(ones(1,N-1),-1)-diag(ones(1,N-1),1);
    regTerm(1,1) = 1;
    regTerm(N,N) = 1;
elseif order==2
    regTerm = zeros(N);
    regTerm = regTerm-4*diag(ones(1,N-1),-1)-4*diag(ones(1,N-1),1);
    regTerm = regTerm +diag(ones(1,N-2),-2)+diag(ones(1,N-2),2);
    regTerm(1,2) = -2; regTerm(2,1) = -2;
    regTerm(N,N-1) = -2; regTerm(N-1,N) = -2;
    
    regTerm=regTerm- diag(sum(regTerm,2));
else
    error('order not supported')
end
end
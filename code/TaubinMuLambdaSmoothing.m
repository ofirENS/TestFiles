function sigOut = TaubinMuLambdaSmoothing(sigIn,nHoodRad,sig)
% Implementation of the Taubin lambda/mu smoothing method
% Input:
% sigIn    - 1 or 2D signal
% nHoodRad - an integer specifying half the neighborhood size
% sig      -  std for the Gaussian smoothing kernel

% 1D example 
% freq   = -pi:.1:pi;
% sigIn  = sin(freq)+randn(1,numel(t));  
% sigIn  = sigIn./sum(sigIn);
% sigOut = TaubinMuLambdaSmoothing(sigIn,10,3)

% 2D example:
% 
% [x,y]  = meshgrid(-pi:.1:pi);
% sigIn  = sin(x+y).*cos(x.*y)+ randn(size(x)).*0.3;
% sigOut = TaubinMuLambdaSmoothing(sigIn,10,1)


% treat nan as zeros 
sigIn(isnan(sigIn))=0;

%===== Solve the inequalities to find mu lambda and N =====
% Filter's params
% Must satisfy:
% 0<kPb<kSb<2
% 0<deltaPb
% 0<deltaSb<1
kPb     = 0.1;% pass band freq.
deltaPb = 0.3;% pass band ripple
kSb     = 0.9;% stop band freq.
deltaSb = 0.5;% stop band ripple 

% Check parameter limits
assert(kSb<2);
assert(kPb<kSb)
assert(deltaSb<1)
assert(deltaPb>0);

% find the optimal parameters
[lambda,mu,numSteps] = FindOptimalParamsForSmoothing(kPb,deltaPb,kSb,deltaSb);

% plot the frequency polynomial
PlotFrequencyPolynomial(lambda,mu,numSteps,kSb,kPb)

nTag         = sigIn; % temp signal 

s      = size(sigIn);
if any(s==1)
    % For 1D signal
    
    f = fspecial('gaussian',[1,2*nHoodRad+1],sig);
    f(nHoodRad) = 0;
    f           = f./sum(f(:)); % normalize weights
    for nIdx = 1:numSteps
        % Apply positive scale factor
        c    = conv(nTag,f,'same');
        nTag = nTag+lambda*(c-nTag);

        % Apply negative scale factor
        c    = conv(nTag,f,'same');
        nTag = nTag+mu*(c-nTag);

    end
else
    % For 2D signal
    f = fspecial('gaussian',[2*nHoodRad+1,2*nHoodRad+1],sig);
    f(nHoodRad,nHoodRad) = 0;
    f = f./sum(f(:)); % normalize weights
    for nIdx = 1:numSteps
        % Apply positive scale factor
        c    = conv2(nTag,f,'same');
        nTag = nTag+lambda*(c-nTag);
       
        % Apply negative scale factor
        c    = conv2(nTag,f,'same');
        nTag = nTag+mu*(c-nTag);
    end
end
sigOut = nTag;

DisplaySmoothSignal(sigIn,sigOut)

end


function PlotFrequencyPolynomial(lambda,mu,numSteps,kSb,kPb)
% Plot the polynomial in the freq k
f  = @(k,lambda,mu,N) ((1-lambda*k).*(1-mu*k)).^N;
figure,
freq = 0:.01:2;
plot(freq,f(freq,lambda,mu,numSteps)), hold on,
plot([kSb kSb],[0 1],...
     [kPb kPb],[0 1],'r',...
     [kSb 2],[f(kSb,lambda,mu,numSteps),f(kSb,lambda,mu,numSteps)],'g',...
     [0 kPb], [1,1],'g')  
  
title(gca,'f(k) = (1-\lambda k)(1-\mu k))^N')
end

function [lambda,mu,numSteps]= FindOptimalParamsForSmoothing(kPb,deltaPb,kSb,deltaSb)
% find the minimum of a function given the nonlinear constraints
% The variables by order of appearance are: lambda, mu, N
% for A*x<b
A       = [1 1 0; 1 0 0; 0 0 -1];  
b       = [0; 1/kSb;0];

% for Aeq*x = beq
Aeq = [];
beq = [];

% lower bound 
lb = [0, -1, 1];
% upper bound
ub = [1, 0, 100];

% initial point 
x0 = [0.5,-1.6,20];

opts      = optimoptions(@fmincon,'MaxIter',1000,'TolX',1e-8,'TolFun',1e-12);
[optParams] = fmincon(@(x)MinimizeFun(x,kPb),x0,A,b,Aeq,beq,lb,ub,@(x)NonLinConstraint(x,kSb,kPb,deltaSb,deltaPb),opts);
lambda    = optParams(1);
mu        = optParams(2);
numSteps  = ceil(optParams(3));
end

function DisplaySmoothSignal(sigIn,sigOut)
% Compare in and out signals
s  = size(sigIn);
f  = figure;
if any (s==1)
    % 1D    
    a = axes('Parent',f,'NextPlot','Add','FontSize',12);
    plot(a,sigIn,'DisplayName','signal In','LineWidth',2)
    plot(a,sigOut,'r','DisplayName','signal Out','LineWidth',2)
    legend(get(gca,'Children'))
    
else
    % 2D
    h(1)= subplot(1,2,1);
    surf(sigIn),title(h(1),'Signal In'),   
    axis vis3d,
    h(2)= subplot(1,2,2);
    surf(sigOut),
    axis vis3d, title(h(2),'Signal Out'),
    cf = get(f,'Children');
     
   % Store link object on first subplot axes    
    key = 'graphics_linkprop';
    hlink = linkprop([cf(1), cf(2)],{'CameraPosition','CameraUpVector','XLim','YLim'});
    setappdata(h(1),key,hlink);
    cameratoolbar
end
end

function f = MinimizeFun(x,kPb)
% The function to be minimized

% The vector x is [lambda,mu,N]
f = ((1./x(1)) +(1./x(2)) -(kPb)).^2;%x(3);% minimize the number of iterations for the filter 
end

function [c, ceq]= NonLinConstraint(x,kSb,kPb,deltaSb,deltaPb)
% The vector x is [lambda,mu,N]
c(1) = ((((x(1)-x(2))^2)./(-4*x(1)*x(2))).^x(3))-1-deltaPb;
c(2) = (((1-x(1)*kSb).*(1-x(2)*kSb)).^x(3)) -deltaSb;

ceq  = [];%(1./x(1)) +(1./x(2)) -(1/kPb);

end

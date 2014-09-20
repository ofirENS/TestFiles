function CompareBrownianPathWithFunction
% compared brownian paths with sqrt(2*t*log(log(t)))
% According to the theory:
% lim sup t->inf w(t)/sqrt(2*t*log(log(t))) = 1
% lim inf t->inf w(t)/sqrt(2*t*log(log(t))) = -1

close all
f =figure;
a= axes('Parent',f,'NextPlot','add');
numSteps = 1e5;
dt       = 1;
dim      = 1;
t        = 1+(1:numSteps)*dt;
f        = @(t) sqrt(2*t.*log(log(t)));

for ind = 1:30
n        = randn(numSteps-1,dim)*sqrt(2*dt);
pos      = [0;cumsum(n)];

line('XData',t,'YData',pos,'Parent',a)
end

line('XData',t,'YData',f(t),'Parent',a,'Color','r');
line('XData',t,'YData',-f(t),'Parent',a,'Color','r');

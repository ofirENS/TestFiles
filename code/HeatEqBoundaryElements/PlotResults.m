function PlotResults(t,sigIn,u,r)
% plot the input signal as a function of time, the solution u(x,t) and the
% source solution r(t)

fig = figure;
ax = axes('Parent',fig,'nextPlot','Add');
line('XData',t,'YData',r,'DisplayName','Source','Color','r','Parent',ax);
line('XData',t,'YData',sigIn,'DisplayName','heat energy','Color','b','parent',ax);
% legend(get(ax,'Children'));
line('XData',t,'YData',u(:,ceil(size(u,2)/2)),'DisplayName','u(t)','Color','g','parent',ax);
% legend(get(ax,'Children'));

end
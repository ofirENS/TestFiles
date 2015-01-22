function PPModel
% a simple model for the interplay between activation and repression of a
% general process

a = 0.2 ;   % activator creation rate
b = 0.7 ;  % activator clearance rate due to activator-repressor  interaction
c = 0.4;  % repressor creation rate due to activator-repressor  interaction 
d = 0.1;   % repressor clearance rate
f = 0.0;  % external activator signal 

timeSpan =[0 200]; % time 
a0 = 0.1; % initial activator concentration 
r0 = 0.1; % initial repressor concentration  

% solve 
[T,Y] = ode45(@(t,y)PP(t,y,a,b,c,d,f),timeSpan,[a0 r0]);

% plot 
figure, hold on 
plot(T,Y(:,1),'g','DisplayName','Activation','LineWidth',4)
plot(T,Y(:,2),'b','DisplayName','Respression','LineWidth',4)
plot(T,Y(:,1)-Y(:,2),'k','DisplayName','Activator-repressor','LineWidth',4)
legend(get(gca,'Children'));
set(gca,'FontSize',30)
end

function dy = PP(~,y,a,b,c,d,f)
dy(1,1) = a.*y(1)-b*y(1).*y(2)+f;% activation 
dy(2,1) = c.*y(1).*y(2)-d.*y(2);% repression
end
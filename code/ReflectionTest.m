function ReflectionTest
close all 
radius  = 1;
curPos  = [0 0 0]+rand(1,3)*0.1;
prevPos = [0 0 0];
speed   = [3 3 3];
r       = rand(1,3);
dir     = r/norm(r);  
dt      = 0.8;  
[x,y,z] = sphere(100);
x = x*radius;
y = y*radius;
z = z*radius;
runFlag = true;
f = figure('Units','normalized');
a = axes('Parent',f,'NextPlot','replaceChildren','Units','normalized');
m = mesh(x,y,z,...
         'FaceAlpha',0.2,...
         'FaceColor',[0.2 0.9 0.4],...
         'EdgeColor','none',...
         'FaceLighting','phong',...
         'Parent',a,...
         'Tag','domain');
cameratoolbar

while runFlag
  curPos = curPos+speed.*dir*dt;
 
   [prevPos,curPos,dir] = Reflect(prevPos,curPos);
   
   PlotTrajectory(prevPos,curPos)
   prevPos = curPos;
end

end

    function [prevPos, curPos, newDir] = Reflect(prevPos,curPos)
         cp = curPos;
         pp = prevPos;
         newDir = (cp-pp)./norm(cp-pp);
        while norm(cp)>=1
         
        
          intersectionPoint = FindIntersectionPoint(pp,cp);
            if ~isempty(intersectionPoint)
                domainNorm  = GetDomainNormal(intersectionPoint);

                d      = (curPos-prevPos)/norm(curPos-prevPos);
                r      = d-2*dot(d,domainNorm)*domainNorm;
                n      = intersectionPoint+r*norm(intersectionPoint-curPos)/norm(r);
                prevPos = intersectionPoint;
                curPos  = n;
%                 newDir  = r/norm(r);   
               pp = intersectionPoint;
               cp = curPos;
            else
                
            end     
            
            newDir = (cp-pp)/norm(cp-pp);
            
        end
    end
        
    function intersectionPoint = FindIntersectionPoint(prevPos,curPos)

            
            % Find the intersection point
            R    = 1; % domainRadius
            l    = -(curPos-prevPos);
            d    = prevPos-[0 0 0];
%             nl   = norm(l);
%             nd   = norm(d);
            
            A    = norm(l)^2;
            B    = -2*dot(l,d);
            C    = norm(d)^2-R^2; 
             
            t(1) = (-B+sqrt(B^2-4*A*C))/(2*A);
            t(2) = (-B-sqrt(B^2-4*A*C))/(2*A);
             % Solve a quadratic equation for the intersection point
%             t(1) = (2*dot(l,d)+sqrt(4*dot(l,d)^2-4*(nl^2)*(nd^2-R^2))/(2*nl^2));
%             t(2) = (2*dot(l,d)-sqrt(4*dot(l,d)^2-4*(nl^2)*(nd^2-R^2))/(2*nl^2));
             
             % Take only the positive root smaller than 1 
            t    = t(t>0&t<=1); 
            if ~isempty(t) && isreal(t)
               intersectionPoint = prevPos+min(t)*(curPos-prevPos);
               line('XData',intersectionPoint(1),...
                   'YData',intersectionPoint(2),...
                   'ZData',intersectionPoint(3),...
                   'Tag','intersectionPoint',...
                   'Parent',gca,...
                   'MarkerFaceColor','y',...
                    'Marker','*',...,...
                    'MarkerEdgeColor','k');
            else
                intersectionPoint = [];
            end
        end
        
    function domainNorm = GetDomainNormal(intPoint)
           % Assuming the domain is a shpere 
            % the normals are facing inward
           
           domainNorm = [0 0 0]-intPoint;
                      
           domainNorm = domainNorm/norm(domainNorm);          
           
    end
        
    function PlotTrajectory(prevPos,curPos)
    f = findobj(get(gca,'Children'),'Tag','point');
    delete(f)
    f = findobj(get(gca,'Children'),'Tag','intersectionPoint');
    delete(f);
    
%       line('XData',prevPos(1),...
%         'YData',prevPos(2),...
%         'ZData',prevPos(3),...
%         'Marker','o',...
%         'MarkerFaceColor','r',...
%         'LineStyle','none',...
%         'Tag','point',...
%         'Parent',gca)
    
    
    line('XData',curPos(1),...
        'YData',curPos(2),...
        'ZData',curPos(3),...
        'Marker','o',...
        'LineStyle','none',...
        'Tag','point',...
        'Parent',gca)
    drawnow
    end
          
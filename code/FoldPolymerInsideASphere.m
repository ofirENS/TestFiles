       classdef FoldPolymerInsideASphere<handle
           % Examine what is the contact between the the nodes of a polymer
           % and the spherical surface that encompasses it 
           properties
               params
               handles
               dimNames
               positions
               results
           end
           
           events
           end
           
           methods
               
               function obj = FoldPolymerInsideASphere()
                   % Start with a randomly stretched chain
                   % the positions are initialized with zeros
                   % the secondInput domainHandler is the DomainHandler class. It
                   % is an optional input, if inserted, the function uses it to
                   % set the initial chain position such that all beads are inside
                   % the domain, else it is randomly placed.
                   obj.params.domainRadius   = 1;                   
                   obj.params.b              = obj.params.domainRadius/1e3;
                   obj.params.constantOfProp = 2;
                   obj.params.numBeads       = obj.params.constantOfProp*2*pi*obj.params.domainRadius/obj.params.b+1;
                   obj.params.dimension      = 3;
                   
                   obj.params.contactLayerWidth =  obj.params.b*2;
                   obj.params.numSimulations = 1;
                   obj.dimNames             = {'x','y','z'};
                   obj.Simulate;
%                    obj.Display;
               end
               
               function Simulate(obj)
                   % The bead positions
                   for sIdx = 1:obj.params.numSimulations
                   obj.positions.x(1) = 0;% the first bead is placed at the origin
                   obj.positions.y(1) = 0;% the first bead is placed at the origin
                   obj.positions.z(1) = 0;% the first bead is placed at the origin
                   
                   for bIdx = 2:obj.params.numBeads
                       inDomain = true;
                       while inDomain
                           x = obj.params.b*randn(obj.params.dimension,1)*0.5;
                           n = sqrt(sum(x.^2));
                           for dIdx = 1:obj.params.dimension
                               obj.positions.(obj.dimNames{dIdx})(bIdx) = obj.positions.(obj.dimNames{dIdx})(bIdx-1)+x(dIdx)/n;
                               a(dIdx) = obj.positions.(obj.dimNames{dIdx})(bIdx);
                           end                           
                           obj.positions.radius(bIdx) = sqrt(sum(a.^2));
                           inDomain = obj.positions.radius(bIdx)>=obj.params.domainRadius;% the domain is spherical
                       end
                       
                   end
                   
                    obj.results.fractionOfAccessibleBeads(sIdx)= sum(obj.positions.radius>=(1-obj.params.contactLayerWidth))/obj.params.numBeads;
                   end
                   obj.Display;
                   obj.DisplayAccessabilityHistogram;
               end
               
               function DisplayAccessabilityHistogram(obj)
                   figure('Units','norm');
                   bar(1:obj.params.numSimulations,obj.results.fractionOfAccessibleBeads), xlabel('simulation number')
                   ylabel('fraction of accessible nodes')
               end
               
               function Display(obj)
                   % Display domain                  
                   obj.handles.graphical.mainFigure = ...
                       figure('Units','normalized');
                   obj.handles.graphical.mainAxes = ...
                       axes('Parent',obj.handles.graphical.mainFigure,...
                       'Units','norm',...
                       'Color','none',...
                       'NextPlot','Add',...
                       'Box','on',...
                       'XTick',[],...
                       'YTick',[],...
                       'ZTick',[]);
                   
                   % Create sphere
                   [x,y,z] = sphere(30);
                   x = x*obj.params.domainRadius;
                   y = y*obj.params.domainRadius;
                   z = z*obj.params.domainRadius;
                   
                   obj.handles.graphical.domain = ...
                       mesh(x,y,z,'parent',obj.handles.graphical.mainAxes,...
                       'FaceLighting','gouraud',...
                       'AlphaData', 0.9,...
                       'EdgeColor','none',...
                       'FaceColor','y',...
                       'FaceAlpha',0.4,...
                       'displayName','domain');                 
                   cameratoolbar(obj.handles.graphical.mainFigure);
                   material dull
                   daspect(obj.handles.graphical.mainAxes,[1 1 1]);
                   obj.handles.graphical.light = light('Position',[1 0 0],...
                       'Style','infinite');
                   
                   % Display chain 
                   
                   obj.handles.graphical.chain = line('XData',obj.positions.x,...
                       'YData',obj.positions.y,...
                       'ZData',obj.positions.z,...
                       'Marker','o',...
                       'LineStyle','-',...
                       'Parent',obj.handles.graphical.mainAxes,...
                       'DisplayName','polygon');
                   
                   % Display contactLayer 
                   [x,y,z] = sphere(30);
                   x = x*(1-obj.params.contactLayerWidth);
                   y = y*(1-obj.params.contactLayerWidth);
                   z = z*(1-obj.params.contactLayerWidth);
                   obj.handles.graphical.contactLayer= ...
                       mesh(x,y,z,'parent',obj.handles.graphical.mainAxes,...
                       'FaceLighting','gouraud',...
                       'AlphaData', 0.2,...
                       'EdgeColor','none',...
                       'FaceColor','r',...
                       'FaceAlpha',0.2,...
                       'displayName','contact Layer');
                   legend({'domain','chain','contactLayer'})
               end
               
           end
       end
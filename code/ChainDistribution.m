function ChainDistribution
% This function plots the density of points in 2D given their projection
% interval location. it them shows the most probable chain of points, assuming the
% points are connected by a (stiff) rod of length radius. the projected
% intervals are dragable. densities (shown in the vetical direction) change
% accordingly 

    close all
    
    configParams.electrodeProjectionWidth = 0.9; % the area of the projection of the estimated electrode location
    configParams.radius                   = 1.6; % the rod's length between electrodes 
    configParams.numberOfElectrodes       = 3;   % number of electrodes
    configParams.intervals                = 0.5*ones(1,configParams.numberOfElectrodes);% the intervals between electrodes at initiation
    configParams.numSamples               = 50; % number of sampling points for each point in previous circle  
    configParams.axesLims.x               = [0, (configParams.numberOfElectrodes*configParams.electrodeProjectionWidth +sum(configParams.intervals))];
    configParams.axesLims.y               = [-configParams.radius, 3*configParams.radius];
    configParams.colors                   = {[1 0 0],[0 1 0],[ 0 0 1],[ 0.5 0.5 0.5],[0.1 0.3 0.9],[ 1 1 1]};

    % Create the main panel
    CreateMainPanel(configParams)

end

    function CreateMainPanel(conf)
        % create a main panel with dragable intervals
        f = figure('WindowButtonDownFcn',@StartDrag,...
                   'WindowButtonMotionFcn',@DragLine,...
                   'WindowButtonUpFcn',@StopDrag,...
                   'Units','normalized');

        currentAxes = axes('Parent',f);
        
        SetAxes(currentAxes,conf);
        
        setappdata(f,'conf',conf); % save configuration in figure handle 
        
        % Draw initial circle at (0,0);
        DrawCircle([0,0], conf.radius,currentAxes);
        
        % set axes limits
        SetAxes(currentAxes,conf);
        
        % Plot dragable patches according to the locations of electrodes' projections
        % built [x,y] positions of lines starting at [0,0]
        endPoint              = conf.electrodeProjectionWidth;
        startPoint            = 0;
        conf.intervals(end+1) = 0;
        
        % create dragable intervals
        for lIdx = 1:conf.numberOfElectrodes
            % Plot initial line projections 
            l = line([startPoint, startPoint+conf.electrodeProjectionWidth],...
                     [0 0],...
                     'Parent',currentAxes,...
                     'Tag',num2str(lIdx),...
                     'LineWidth',5,...
                     'Color','r',...
                     'ButtonDownFcn',@UpdateDraggedLineHandle,...
                     'Marker','o',...
                     'MarkerEdgeColor','k',...
                     'MarkerFaceColor','g',...
                     'Color',conf.colors{lIdx});
            
            startPoint = endPoint+conf.intervals(lIdx);
            endPoint   = startPoint+conf.electrodeProjectionWidth;            
        end
    end

    function UpdateDraggedLineHandle(lineHandle,varargin)
        
        figureHandle = get(get(lineHandle,'Parent'),'Parent');
        setappdata(figureHandle ,'currentLineHandle',lineHandle)        
        setappdata(figureHandle,'drag',true)
    end

    function StartDrag(varargin)        
        % Update line position according to mouse position in the
        % horizontal direction
        
        % get parent handle
        figureHandle = varargin{1};
        
        % get all line objects
        axesHandle    = findobj(get(figureHandle,'Children'),'flat','Type','axes');
        mousePosition = double(get(axesHandle,'CurrentPoint'));
        setappdata(figureHandle,'mouseClickStart',mousePosition(1,1))
    end

    function StopDrag(varargin)
        
        figureHandle   = varargin{1};
        if getappdata(figureHandle,'drag')
            setappdata(figureHandle,'drag',false)
            rmappdata(figureHandle,'currentLineHandle')
            rmappdata(figureHandle,'mouseClickStart')
        end
    end

    function DragLine(figureHandle,varargin)
        % Update line position
        dragState = getappdata(figureHandle,'drag');
        if dragState
            axesHandle    = findobj(get(figureHandle,'Children'),'flat','Type','axes');        
            mousePosition = double(get(axesHandle,'CurrentPoint'));
            mousePosition = mousePosition(1,1);
            lineHandle    = getappdata(figureHandle,'currentLineHandle');
            newXPos       = [mousePosition(1,1)-0.5, mousePosition(1,1)+0.5];
            lineTag       = str2double(get(lineHandle,'Tag'));
            motionLims    = GetMotionLimits(axesHandle,lineTag);   
            
            % limit line motion in the horizontal direction 
            if newXPos(2)>=motionLims(2)  || newXPos(1)<=motionLims(1)
            else
              % find intersection points and erase them 
              ip = findobj(get(axesHandle,'Children'),'flat','Tag','yIntersectionPoints');
              delete(ip); 
              xIp = findobj(get(axesHandle,'Children'),'flat','Tag','xIntersectionPoints');
              delete(xIp);
              
              set(lineHandle,'XData',newXPos);
              FindCircleIntervalIntersection(axesHandle,[0 0]);
            end
           
        end
    end
     
    function motionLims = GetMotionLimits(axesHandle, lineTag)
        % get left and right maximal motion position of the dragged line
%         lineHandles = findobj(get(axesHandle,'Children'),'flat','Type','line');
%        find the circles and remove them 
         conf          = getappdata(get(axesHandle,'Parent'),'conf');
         numElectrodes = conf.numberOfElectrodes;
         alpha         = 0.9;
        if lineTag==1
            m             = get(axesHandle,'XLim');
            motionLims(1) = m(1);
            rightNeighb  = findobj(get(axesHandle,'Children'),'Tag',num2str(lineTag+1));
            m             = get(rightNeighb,'XData');
            motionLims(2) =  (1+(1-alpha))*m(1);
        elseif lineTag == numElectrodes
            m             = get(axesHandle,'Xlim');
            motionLims(2) = m(2);
            leftNeighb  = findobj(get(axesHandle,'Children'),'Tag',num2str(lineTag-1));
            m             = get(leftNeighb,'XData');
            motionLims(1) = alpha*m(2);
        else
            leftNeighb  = findobj(get(axesHandle,'Children'),'Tag',num2str(lineTag-1));
            m = get(leftNeighb,'XData');
            motionLims(1) = (alpha)*m(2);
            rightNeighb  = findobj(get(axesHandle,'Children'),'Tag',num2str(lineTag+1));
            m = get(rightNeighb,'XData');
            motionLims(2) = (1+(1-alpha))*m(1);
        end
        
    end

    function DrawCircle(center,radius,axesHandle)
        % draw a circle in the current axes
        theta = linspace(0,2*pi,50);
        x     = center(1)+radius*cos(theta);
        y     = center(2)+ radius*sin(theta);
        plot(axesHandle,x,y,'c','Tag','circle','Parent',axesHandle);        
    end
     
    function FindCircleIntervalIntersection(axesHandle, validPoints)
    % find all the intersections. starting from the point [0 0]=
    % validPoints
    
    % find all circles 
     lineHandles  = get(axesHandle,'Children');% get all graphical children handles
     figureHandle = get(axesHandle,'Parent');
     conf         = getappdata(figureHandle,'conf');
     
     % Initialization
     numPoints    = conf.numSamples;
     theta        = [linspace(0,pi/2,floor(numPoints/2)) linspace(3*pi/2, 2*pi,floor(numPoints/2))];    
     colors       = conf.colors;          
     maxLoc       = zeros(1,conf.numberOfElectrodes);
     m            = maxLoc;
     bins         = cell(1,conf.numberOfElectrodes);
     xBins        = bins;
     for lIdx = 1:conf.numberOfElectrodes
        % intersect with first circle 
        currLineHandle = findobj(lineHandles,'Tag',num2str(lIdx));
        lineLims       = get(currLineHandle,'XData');
        circPoints     = zeros(size(validPoints,1)*numel(theta),2);
        % get all circles from each previous valid point (a point with a
        % circle intersection)
        for pIdx = 1:size(validPoints,1)
            currPoint  = validPoints(pIdx,:);
            circPoints((pIdx-1)*numPoints +1:numPoints*pIdx,:) = ...
            [currPoint(1)+conf.radius*cos(theta)', currPoint(2)+conf.radius*sin(theta)'];              
        end
        
        % Find the circle point which their projection on the x axis is
        % within the electrode interval 
        validPointsStack = circPoints(circPoints(:,1)>=lineLims(1) & ...
                            circPoints(:,1)<=lineLims(2)& circPoints(:,2)>=0,:);
        validPoints      = validPointsStack;
        
        if ~isempty(validPoints)
        
        % calculate the density in the Y direction  
        [yDensity,bins{lIdx}] = CalcDistribution(validPoints(:,2),conf);
        
        % plot Y distribution
        line('Parent',axesHandle,...
             'XData',yDensity,...
             'YData',bins{lIdx},...
             'Color',colors{lIdx},...
             'MarkerEdgeColor','g',...
             'Tag','yIntersectionPoints'); 
        
        % calculate the density in the X direction  
        [xDensity,xBins{lIdx}] = CalcDistribution(validPoints(:,1),conf);
        
        % plot X distribution
        line('Parent',axesHandle,...
             'XData',xBins{lIdx},...
             'YData',xDensity-1,...
             'Color',colors{lIdx},...
             'MarkerEdgeColor','g',...
             'Tag','xIntersectionPoints'); 
        
        SetAxes(axesHandle,conf);
        
        % Plot distribution's common
        if all(yDensity==yDensity(1))
            % if it is a uniform density, take the middle point
            m(lIdx)      = yDensity(1);
            maxLoc(lIdx) = floor(numel(yDensity)/2);
        else 
          [m(lIdx),maxLoc(lIdx)] = max(yDensity); 
        end
        
        line('Parent',axesHandle,...
             'XData',m(lIdx),...
             'YData',bins{lIdx}(maxLoc(lIdx)),...
             'Marker','o',...
             'LineStyle',...
             'none','Tag',...
             'xIntersectionPoints')
         
         % set axes limits 
         SetAxes(axesHandle,conf);
        end        
     end
     % plot the most probable chain 
     maxLoc   = [1 maxLoc]; 
     bins     = {zeros(1,floor(numPoints/2)),bins{:}};
     numValid = sum(~cellfun(@isempty,bins));
     
     x      = zeros(1,numValid);
     y      = x;
     
     for lIdx =2:numValid
         x(lIdx) = x(lIdx-1)+conf.radius*cos(asin((abs(bins{lIdx}(maxLoc(lIdx))-bins{lIdx-1}(maxLoc(lIdx-1)))/conf.radius)));
         y(lIdx) = bins{lIdx}(maxLoc(lIdx));
     end
     
     line('Parent',axesHandle,...
          'XData',x,...
          'YData',y,...
          'Tag','xIntersectionPoints',...
          'LineWidth',3,...
          'Marker','*',...
          'MarkerEdgeColor','r')
     SetAxes(axesHandle,conf);
     
    end
    
    function [h, bins] = CalcDistribution(points,conf)
        % calculate the density of points
        [h,bins] = hist(points,conf.numSamples/2);
        h        = h/sum(h); % for visualization
        
        % leave only nonzero entries
        [~, b,h] = find(h);        
        bins     = bins(b);
    end
    
    function SetAxes(axesHandle,conf)
        axesXLims   = conf.axesLims.x;
        axesYLims   = conf.axesLims.y;
        set(axesHandle,'XLim',axesXLims,'YLim',axesYLims);
        daspect([1 1 1])
    end
    
    
   

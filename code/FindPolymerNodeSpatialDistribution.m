classdef FindPolymerNodeSpatialDistribution<handle
    % This class simulates polymer with fixed bead distance and calculates
    % the spatial distribution of its nodes 
    properties 
        numSimulations  = 1000
        connectorLength = 2
        numNodes        = 100;
        numAngles       = 1e4;
        numRadii        = 100;
        theta           
        dimension       = 2;
        nodePositions   
        density
        indices         = {};
        maxRad          = 30; 
        radius
    end
    
    methods 
        function obj = FindPolymerNodeSpatialDistribution
            obj.theta         = linspace(0,2*pi,obj.numAngles);
            obj.nodePositions = zeros(obj.numNodes,obj.dimension,obj.numSimulations);
            obj.radius        = linspace(0,obj.maxRad,obj.numRadii);
        end
        
        function Initialize(obj)
            % simulate polymers 
            % the first node position is chosen at random. Afte all
            % simulations are done, all polymers are shifted such that the
            % center of mass is located at the origin
            for sIdx=1:obj.numSimulations   
                obj.nodePositions(1,:,sIdx) = randn(1,obj.dimension);
%                 for nIdx = 2:obj.numNodes                    
%                     ang = obj.theta(randi(obj.numAngles,1));
%                     obj.nodePositions(nIdx,1,sIdx) = obj.nodePositions(nIdx-1,1,sIdx)+ obj.connectorLength*cos(ang); 
%                     obj.nodePositions(nIdx,2,sIdx) = obj.nodePositions(nIdx-1,2,sIdx)+ obj.connectorLength*sin(ang);
%                 end
                
                for nIdx=2:obj.numNodes
                    obj.nodePositions(nIdx,1,sIdx) = obj.nodePositions(nIdx-1,1,sIdx)+ randn(1); 
                    obj.nodePositions(nIdx,2,sIdx) = obj.nodePositions(nIdx-1,2,sIdx)+ randn(1);
                end
                % shift the nodes to the center of mass
                cm = mean(obj.nodePositions(:,:,sIdx));
                obj.nodePositions(:,1,sIdx) = obj.nodePositions(:,1,sIdx)-cm(1);
                obj.nodePositions(:,2,sIdx) = obj.nodePositions(:,2,sIdx)-cm(2);                
            end
            obj.CalculateAverageDensity
        end
        
        function CalculateAverageDensity(obj)
            % For each chain, calculate the number of nodes located at
            % distance D from the cener of mass, for various values of D
            
            for rIdx = 1:obj.numRadii
                obj.indices(rIdx) =cell(1,1);
            end
            
            for sIdx=1:obj.numSimulations                
                d = sqrt((obj.nodePositions(:,1,sIdx)-0).^2 +(obj.nodePositions(:,2,sIdx)-0).^2);
                % calculate the cummulative distibution function                
                
                for rIdx=1:obj.numRadii
                    f = find(d<=obj.radius(rIdx));
                    obj.indices{rIdx}= [obj.indices{rIdx}, f'];
                    obj.density(rIdx,sIdx) = numel(f)/obj.numNodes;
                end
            end
        end
        
        function FitDistributionToAverageDensity(obj)%Unfinished
            % Fit exponential family of distributions to the average
            % density 
            
        end
        
        function BeadIndicesHistogram(obj,distance)
            % show the histogram of bead indices at the distance distance
            % from the center of mass
            % 
            dist    = (obj.radius-distance).^2;
            [minDist,beadInd] = min(dist);
            [h,bins]   = hist(obj.indices{beadInd},obj.numNodes);
            figure, bar(bins,h), title(sprintf('%s%s%s','indices of bead at a distance ',num2str(obj.radius(beadInd)),' from polymers center of mass'));
            xlabel('bead index'), ylabel('count');
        end
        
        function CalculateDistribution(obj)
            % Calculate the spatial distribution of nodes from all
            % simulations
            nodes = reshape(obj.nodePositions,obj.numSimulations*obj.numNodes,2);
            [h,b] = hist3(nodes,[100 100]);
            h = h/numel(nodes(:,1));
            bar3(h)
            colormap summer
            cameratoolbar;
          
        end
        
        function Plot(obj,simulationNumber)
            figure,
            hold on 
            if strcmpi(simulationNumber,'all')
                
                for sIdx = 1:obj.numSimulations                    
                 scatter(obj.nodePositions(:,1,sIdx),obj.nodePositions(:,2,sIdx),5,rand(1,3))
                end
            else 
                for sIdx =1:numel(simulationNumber)
%                  c = rand(1,3);
                 c = 'k';
                 plot(obj.nodePositions(:,1,simulationNumber(sIdx)),obj.nodePositions(:,2,simulationNumber(sIdx)),'-o','Color',c )
                 plot(obj.nodePositions(1,1,simulationNumber(sIdx)),obj.nodePositions(1,2,simulationNumber(sIdx)),'co','MarkerFaceColor','c');
                 plot(obj.nodePositions(end,1,simulationNumber(sIdx)),obj.nodePositions(end,2,simulationNumber(sIdx)),'ro','MarkerFaceColor','y');
                 plot(obj.nodePositions(50,1,simulationNumber(sIdx)),obj.nodePositions(50,2,simulationNumber(sIdx)),'ro','MarkerFaceColor','r');
                 plot(0,0,'r+','MarkerSize',5);
                end
                
            end
            hold off
            daspect([1 1 1])
        end
    end
end
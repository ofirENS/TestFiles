classdef JavaGUI<handle
    % this is a test class to create java based gui with active java components 
    properties
        handles
        images
        numFrames
        currentFrame        
    end
    
    properties (Access=private)
        % local host name
        hostName = getenv('computerName');
    end
    
    methods
        function obj = JavaGUI()
             if strcmpi(obj.hostName,'OFIR-HP')
               obj.images = dicomread('D:\Ofir\Work\RSIP\ChatheterReconstruction\Data\Timpanogos\2013.08.10_16.55.18.531\Fluoro\DICOMFiles\1_1.2.840.113619.2.269.53248654815503815636.1376135381.568.8.dcm');
             elseif strcmpi(obj.hostName,'OFIR-LAPTOP')              
               obj.images = dicomread('D:\Shaked\Catheter\BiosenseFormatSelective\2014.05.21_09.09.52.281 - Copy\Fluoro\DICOMFiles\1_1.3.12.2.1107.5.4.5.135913.30000014052104502881200000053.dcm');
             
             end
             obj.numFrames = size(obj.images,4);
             obj.CreateControls
        end
        
        function CreateControls(obj)
            obj.CreateMainFrame;
            obj.CreateMenuBar;            
            obj.handles.frame.show;
            obj.CreateClipPlayer;% create clip player and display first frame
        end
        
        function CreateMainFrame(obj)
            % create a java window frame and show it. this is the main
            % figure of the GUI
%             obj.handles.mainFigure = figure;
%             [obj.handles.frame,frameProps] = javacomponent('javax.swing.JFrame',[0 0 300 300]);
            obj.handles.frame = javax.swing.JFrame;
            obj.handles.frame.setTitle('TestWindow')
%             set(obj.handles.frame,'WindowClosedCallback',@obj.CloseFigure);
            obj.handles.frame.setAlwaysOnTop(false); 
            obj.handles.frame.setSize(700,700)
            verticalGap   = 10;
            horizontalGap = 10;            
            obj.handles.frame.getContentPane.setLayout(java.awt.BorderLayout)
            obj.handles.frame.getContentPane.getLayout.setHgap(horizontalGap);
            obj.handles.frame.getContentPane.getLayout.setVgap(verticalGap);
        end
        
        function CreateMenuBar(obj)
            obj.handles.menuBar= javax.swing.JMenuBar;   
            obj.handles.subMenu1 = javax.swing.JMenu;
            obj.handles.menuBar.add(obj.handles.subMenu1)
            obj.handles.subMenu1.setText('testMenu1');
            obj.handles.subMenu2 = javax.swing.JMenu('testMenu2');
            obj.handles.menuBar.add(obj.handles.subMenu2);
            % add popupmenu to the menubar 
            obj.handles.subMenu2Popup = javax.swing.JPopupMenu('test');
            obj.handles.subMenu2.add(obj.handles.subMenu2Popup);
            % add the menubar to the frame
            obj.handles.frame.setJMenuBar(obj.handles.menuBar)
        end
        
        function CreateClipPlayer(obj)
            % create a clip player with scroll bar to display frames 
            obj.handles.frameSlider =javax.swing.JSlider;
%             set(obj.handles.frameSlider,'MouseReleasedCallback',@obj.Display);
%               set(obj.handles.frameSlider,...
%                   'Minimum',1,...
%                   'Maximum',obj.numFrames,...
%                   'MinorTickSpacing',1,...
%                   'Value',1);
              obj.handles.frameSlider.setPaintTicks(true)
%             l = obj.handles.frame.getLayout;
%             l.add(obj.handles.frameSlider);
            obj.handles.frame.getContentPane.add(obj.handles.frameSlider,obj.handles.frame.getLayout.PAGE_START);
%             obj.handles.frameSlider.setSize(50,30);
%             set(obj.handles.frameSlider,'Parent',(obj.handles.frame));
            
%             obj.DisplayFrame(1)% display first frame
        end
        
        function DisplayFrame(obj,frameNum)
            im    = javax.swing.ImageIcon(im2java(obj.images(:,:,:,frameNum)));
            label = javax.swing.JLabel(im);
            % remove previous images
%             h=handle(obj.handles.frame.getContentPane);
            for cIdx = 1:obj.handles.frame.getContentPane.countComponents
                if isa(obj.handles.frame.getContentPane.getComponent(cIdx-1),'javax.swing.JLabel')
                    obj.handles.frame.getContentPane.getComponent(cIdx-1).setVisible(false);
                   obj.handles.frame.getContentPane.remove(cIdx-1);% java indices start at zero
                end
            end
            label.setPreferredSize(java.awt.Dimension(100,100));
            obj.handles.frame.getContentPane.add(label,obj.handles.frame.getLayout.CENTER);
            obj.handles.frame.setComponentZOrder(label,1);% bring the new image to the front, just bellow the root 
                                                
        end
        
        function Display(obj,eventData,varargin)
            obj.DisplayFrame(get(eventData,'Value'))
        end
        
        function CloseFigure(obj,varargin)
            clear java
        end
            
    end
end
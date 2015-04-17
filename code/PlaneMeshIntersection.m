function PlaneMeshIntersection
% load the mesh from an stl file 
close all

% Make sure Utils folder is in the working path 
% choose mesh 
[faces,vertices, ~] = stlread(uigetfile('*.stl'));

% define the plane 
% Define the input grid (in 3D)
[x3, y3, z3] = meshgrid(linspace(-1,1));
% Compute the implicitly defined function x^2 + y^2 + z^3 - 0.5^2 = 0
f1 = x3.^2 + y3.^2 + z3.^2 - 0.5^2;
% This surface is z = 2*y - 6*x^3, which can also be expressed as
% 2*y - 6*x^3 - z = 0.
f2 = 2*y3 - 6*x3.^3 - z3;
% Also compute z = 2*y - 6*x^3 in the 'traditional' way.
[x2, y2] = meshgrid(linspace(-1,1));
z2 = 2*y2 - 6*x2.^3;
% Visualize the two surfaces.
patch(isosurface(x3, y3, z3, f1, 0), 'FaceColor', [0.5 1.0 0.5], 'EdgeColor', 'none');
patch(isosurface(x3, y3, z3, f2, 0), 'FaceColor', [1.0 0.5 0.0], 'EdgeColor', 'none');
view(3); camlight; axis vis3d;
% Find the difference field.
f3 = f1 - f2;
% Interpolate the difference field on the explicitly defined surface.
f3s = interp3(x3, y3, z3, f3, x2, y2, z2);
% Find the contour where the difference (on the surface) is zero.
C = contours(x2, y2, f3s, [0 0]);
% Extract the x- and y-locations from the contour matrix C.
xL = C(1, 2:end);
yL = C(2, 2:end);
% Interpolate on the first surface to find z-locations for the intersection
% line.
zL = interp2(x2, y2, z2, xL, yL);
% Visualize the line.
line(xL,yL,zL,'Color','k','LineWidth',3);


end
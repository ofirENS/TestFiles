%% FUNCTION distance_dist_Lgon.m: Computing Exact Closed-Form Distance Distributions in Regular Polygons

%% CONTRIBUTION:
% This function implements the algorithm in [1] to compute:
%(i) the exact closed-form probability density function and (ii) the exact closed-form cumulative
% density function of the distance between a randomly located node and any arbitrary reference point
% inside a regular L-sided polygon.

%% CITING THIS WORK:
% If you use this code to generate the distance distribution results, please cite our paper:

% [1] Z. Khalid and S. Durrani, “Distance Distributions in Regular Polygons,”
% to appear in IEEE Transactions on Vehicular Technology, 2013.
% http://ieeexplore.ieee.org/xpl/articleDetails.jsp?reload=true&tp=&arnumber=6415342
% http://arxiv.org/abs/1207.5857

%% USAGE INSTRUCTIONS:
% See demo.m provided with this code.
%
% Inputs
% L = no of sides of the regular convex polygon (L-gon), which is centered at (0,0)
% R = circumradius
% x,y = coordinates of reference point inside the L-gon.
%
% Outputs
% F_cdf = the exact closed-form cumulative density function
% F_pdf = the exact closed-form probability density function
% dist_r = piece-wise unique ranges 
%
% For comments, suggestions and bug reports, please email: salman.durrani@anu.edu.au.

%% COPYRIGHT:  ©  Zubair Khalid and Salman Durrani.
% Applied Signal Processing (ASP) research group,
% Research School of Engineering,
% The Australian National University, Canberra, Australia, May 2013.


%% Implement the proposed algorithm in Section V in [1] to automatically pick the correct border and corner effects for all distance ranges
function [ F_cdf F_pdf dist_r] = distance_dist_Lgon( L,R,x,y)

%% check if the point (x,y) is inside the L-gon
if  point_inside_polygon(L,R,x,y) 
    %% Allocate variables to be computed
    % We use this as a tolerance level comparable to numerical precision. 
    % We treat any quantity as zero, if the quantity is less than TOL.
    global TOL
    TOL = 10^(-10); 
    
    F_cdf = [];
    F_pdf = [];
    dist_r = 0;
    
    %% Compute distance vectors
    dv_all = distance_vector_full(L,R,x,y);
    % Effects of finite precision can show up in the distances: 
    % if present these are corrected by the check_precision function
    dv_all = check_precision(dv_all);
    dist_vector = dv_all(L+1:end);
    dv_sides = dv_all(1:L);
    dv_sides_polygon = dv_all(L+1:2*L);
    
    %% Sort distance vector
    [dist_vector_sorted,IX] = sort(dist_vector);
    
    %% Select unique ranges
    R1 = 0;
    R2 = dist_vector_sorted(1);
    
    syms r real;
    
    %% compute cdf and pdf for the first range when there are no boundary effects
    if abs(R2-R1)>TOL
        F_cdf = [F_cdf pi*r.^2];
        F_pdf = [F_pdf 2*pi*r];
        dist_r = [dist_r R2];
    end
    
    %% Compute cdf and pdf for the different ranges, taking into account boundary effects
    for j= 2:1:2*L
        
        R1 = dist_vector_sorted(j-1);
        R2 = dist_vector_sorted(j);
        
        if abs(R2-R1)>TOL
            F_cdf = [F_cdf pi*r.^2 - compute_cdf_out(IX,j-1,L,R,x,y,r,dv_sides,dv_sides_polygon,dv_all)];
            F_pdf = [F_pdf 2*pi*r - compute_pdf_out(IX,j-1,L,r,dv_sides)];
            dist_r = [dist_r R2];
        end
        
    end
    
    %% Normalize cdf and pdf by area of polygon
    F_cdf =   F_cdf/A_gon(L,R);
    F_pdf =   F_pdf/A_gon(L,R);
    
    %% Add final ranges over which F_cdf =1 and F_pdf =0
    if abs(dist_r(length(dist_r)-2*R))> TOL
        F_cdf = [F_cdf 1];
        F_pdf = [F_pdf 0];
        dist_r = [dist_r 2*R];
    end
    F_cdf = simple(F_cdf);
    F_pdf = simple(F_pdf);
else
    error('The point (x,y) is not inside the polygon.');
end

end

%% Subfunctions used in the main function

%% Function 1: Find the polygon area: Equation (1) in [1]
function  A =  A_gon(L,R)
A = (L*R^2*sin(2*pi/L))/2;
end

%% Function 2: Find the polygon interior angle: Equation (2) in [1]
function vartheta  = theta_interior(L)
vartheta = (pi*(L-2)/(L));
end

%% Function 3: Find the rotation matrix: Equations (3) and (4) in [1]
function T_matrix = rotation_matrix(L,l)
theta_out = 2*pi/L;
T_matrix = [cos(l*theta_out) -sin(l*theta_out) ; sin(l*theta_out)  cos(l*theta_out) ];
end

%% Function 4: Find distance to the vertices: Equations (5) and (6) in [1]
function distance_V = distance_vertex(L,R,x,y,l)
rot_point = rotation_matrix(L,-(l-1))*transpose([x y]);
x1 = rot_point(1);
y1 = rot_point(2);
distance_V = sqrt( y1.^2 + (x1-R).^2 );
end

%% Function 5: Find the perpendicular distance to the sides: Equations (7) and (9) in [1]
function distance_S = distance_side(L,R,x,y,l)
rot_point = rotation_matrix(L,-(l-1))*transpose([x y]);
x1 = rot_point(1);
y1 = rot_point(2);
distance_S = abs(y1 + x1*tan(theta_interior(L)/2 ) - R*tan(theta_interior(L)/2 ))/ (sqrt(1 + (tan(theta_interior(L)/2 )).^2));
end

%% Function 6: Find the shortest distance to the sides: Equations (8) and (9) in [1]
function distance_S = distance_side_polygon(L,R,x,y,l)
global TOL

rot_point = rotation_matrix(L,-(l-1))*transpose([x y]);
Q1 = [R 0];
Q2 = transpose(rotation_matrix(L,1)*transpose(Q1));
x1 = R;
y1 = 0;

x2  =Q2(1);
y2 = Q2(2);

x3 = rot_point(1);
y3 = rot_point(2);

u=((x3-x1)*(x2-x1) + (y3-y1)*(y2-y1))/ ((x1-x2).^2 + (y1-y2).^2);

xx = x1+u*(x2-x1);
yy = y1+u*(y2-y1);

distance_S = norm([xx-x3,yy-y3]);

dd1 = norm([x1-xx,y1-yy]);
dd2 = norm([x2-xx,y2-yy]);
dd12 = norm([x1-x2,y1-y2]);

if dd1 > dd12 || dd2>dd12 
    distance_S = min(norm([x3-x1, y3-y1]), norm([x3-x2,y3-y2]));
end

if distance_S < TOL
    distance_S=0;
end
end

%% Function 7: Find the distance vector: Equation (10) in [1], appended with the distances from the sides which are needed in the main algorithm
function distance_vector = distance_vector_full(L,R,x,y)
distance_vector = zeros(1,3*L);
for l=1:1:L
    distance_vector(l) = distance_side(L,R,x,y,l);
end
for l=1:1:L
    distance_vector(L+l) = distance_side_polygon(L,R,x,y,l);
end
for l=1:1:L
    distance_vector(2*L+l) = distance_vertex(L,R,x,y,l);
end
end


%% Function 8: Find the circular segment areas formed outsides the side: Equations (13) and (14) in [1]
function [ BB ] = sym_border_function(L,R,x,y,l,r, dv_sides,dv_sides_polygon)
global TOL

if distance_side_polygon(L,R,x,y,l) < TOL
    BB = pi*r.^2/2;
else
    BB1 = r.^2.*acos(dv_sides(l)./r) - dv_sides(l).*sqrt(r.^2 - (dv_sides(l)).^2);
    BB2 = (dv_sides_polygon(l)).^2.*acos(dv_sides(l)./dv_sides_polygon(l)) - dv_sides(l).*sqrt((dv_sides_polygon(l)).^2 - (dv_sides(l)).^2);
    BB = BB1-BB2;
end
end

%% Function 9: Find the corner overlap areas formed outside the vetrices: Equations (15) and (16) in [1]

function [ CC ] = sym_corner_function(L,R,x,y,l,r, dv_sides,dv_all)
global TOL
dv_sides_L = (circshift(dv_sides',1))';
A = dv_all(2*L+l);
if A< TOL
    CC = 0.5.*r.^2*theta_interior(L);
else
    F1 =    0.5*r.^2.*(acos(dv_sides(l)./r  ) + acos(dv_sides_L(l)./r  )) ;
    F2 =    0.5.*(A).^2.*( acos(dv_sides(l)./A  ) + acos(dv_sides_L(l)./A  ) );
    F3 =    0.5.*dv_sides(l).*(sqrt((A).^2 - (dv_sides(l)).^2  ) - sqrt(r.^2 - (dv_sides(l)).^2  )   );
    F4 =    0.5.*dv_sides_L(l).*(sqrt((A).^2 - (dv_sides_L(l)).^2  ) - sqrt(r.^2 - (dv_sides_L(l)).^2  ));
    F5 =   (-pi/L).*(r.^2 - (A).^2 )   ;
    CC =  F1-F2+F3+F4+F5;   
end
end

%% Function 10: Find the derivatives: Equation (21) in [1]
function [ BB ] = sym_border_function_derivative(l,r,dv_sides )
BB = 2*r.*acos(dv_sides(l)./r );
end

%% Function 11: Find the derivatives: Equation (22) in [1]
function [ CC ] = sym_corner_function_derivative(L,l,r,dv_sides )
dv_sides_L = (circshift(dv_sides',1))';
CC = r.*(acos(dv_sides(l)./r  ) + acos(dv_sides_L(l)./r  )) -  2*pi*r/L;
end

%% Function 12: Find the CDF: Algorithm 1
function area_outside = compute_cdf_out(IX,j,L,R,x,y,range, dv_sides, dv_sides_polygon,dv_all)
area_outside = 0;
for k=1:1:j 
    if(IX(k)<=L )
        el = IX(k);
        area_outside = area_outside +  sym_border_function(L,R,x,y,el,range,dv_sides,dv_sides_polygon );
    else
        el = IX(k)-L;  
        area_outside = area_outside -  sym_corner_function(L,R,x,y,el,range,dv_sides,dv_all );
    end 
end
end

%% Function 13: Find the PDF: Algorithm 1
function area_outside = compute_pdf_out(IX,j,L,range,dv_sides)
area_outside = 0;
for k=1:1:j
    if(IX(k)<=L )
        el = IX(k);
        area_outside = area_outside +  sym_border_function_derivative(el,range,dv_sides );
    else
        el = IX(k)-L;
        area_outside = area_outside -  sym_corner_function_derivative(L,el,range,dv_sides );
    end   
end
end

%% Function 14: Find if the point (x,y) is inside or on the boundary the L-gon
function check = point_inside_polygon(L,R,x,y)
VV = linspace(0,2.*pi,L+1); xv = R*cos(VV)';yv = R*sin(VV)';
xv = [xv ; xv(1)]; yv = [yv ; yv(1)];
[IN ON] = inpolygon(x,y,xv,yv);
check = IN||ON;
end

%% Function 15: Check the distance vector for erros due to numerical precision. If present, remove the effects of finite precision in the distance calculations.
function dist_vec_out = check_precision(dist_vec_in)
global TOL
dist_vec_out = dist_vec_in;
%(1st check) if the absolute value of any distance in the “dist_vec_out” vector is less than a tolerance value, it is set to 0
for i=1:1:length(dist_vec_out)
    if abs(dist_vec_out(i))< TOL
        dist_vec_out(i) =0;
    end
end
% (2nd check) if any two distances in the “dist_vec_out” vector are the same, within the tolerance limit, then they are set as the same (first) distance value
for i=1:1:length(dist_vec_out)
    for j=i:1:length(dist_vec_out)
        if abs(dist_vec_out(i) -dist_vec_out(j) )< TOL
            dist_vec_out(j) =dist_vec_out(i);
        end
    end
end
end

%% DEMO.M: Computing Exact Closed-Form Distance Distributions in Regular Polygons

%% CONTRIBUTION: 
% This script displays and plots the closed form expressions of the distance distributions.
%
% It illustrates the usage of the function "distance_dist_Lgon(L,R,x,y)" which implements the algorithm in [1] to compute: 
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
% Please note the following:
% (i) Generally, enter reference point x and y coordinates in decimals (e.g., 0.5) , rather than as fractions (e.g. 1/2).
% (ii) This code has been tested using Matlab R2011a and Symbolic Math Toolbox Version 5.6 (based on MuPAD and not Maple).
% (iii) The ability of the code to produce the most simplified expressions is dependant on the "simple" command 
% (used in line 102 in the function "distance_dist_Lgon(L,R,x,y)". Verify answers by comparing with the Mathematica implementation.
%
% For comments, suggestions and bug reports, please email: salman.durrani@anu.edu.au.

%% COPYRIGHT:  ©  Zubair Khalid and Salman Durrani.
% Applied Signal Processing (ASP) research group,
% Research School of Engineering,
% The Australian National University, Canberra, Australia, May 2013.

clc
% clear all
close all

%% Define Variables
% no. of sides of polygon L>3
L=4; 
% x-coordinate of reference point
x=0.5;
% y-coordinate of reference point
y=0.5; 
% Circum-radius of the regular convex polygon, which is centered at (0,0)
R=1; 

%% Compute the distance distributions
[F_cdf F_pdf dist_r] = distance_dist_Lgon(L,R,x,y);

%% Display the distance distributions
fprintf('----Closed Form Expressions of PDF---------\n\n'); 
display_dist(F_pdf,dist_r);
fprintf('----Closed Form Expressions of CDF---------\n\n'); 
display_dist(F_cdf,dist_r);


%% Plot the distance distributions
plot_dist(F_pdf,dist_r);
ylabel('f(r)','FontSize',14,'FontName','Arial');
plot_dist(F_cdf,dist_r);
ylabel('F(r)','FontSize',14,'FontName','Arial');





%% FUNCTION plot_dist.m
% This function is used for plotting the piecewise distance distributions.

%% COPYRIGHT:  ©  Zubair Khalid and Salman Durrani.
% Applied Signal Processing (ASP) research group,
% Research School of Engineering,
% The Australian National University, Canberra, Australia, May 2013.

function plot_dist(F_dist,dist_r)

    figure1 = figure('PaperSize',[20.5 29],'Color',[1 1 1]);
    axesh = axes('Parent',figure1,'FontSize',14,'FontName','Arial');

    % vpa transforms fractions in the distribution to floating point - precision (5) used here
    F_dist = vpa(F_dist,5); 

    for el=1:1:length(dist_r)-1
            if(dist_r(el+1)-dist_r(el)>0)
                r_inc = (dist_r(el+1)-dist_r(el))/20;
                plot(dist_r(el):r_inc:dist_r(el+1), real(subs(F_dist(el),dist_r(el):r_inc:dist_r(el+1))),'LineWidth',2.5);
                hold on;
            end
    end
    
    xlabel('distance, r','FontSize',14,'FontName','Arial');
    grid on;
    axis tight;

end

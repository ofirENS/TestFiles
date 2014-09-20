%% FUNCTION display_dist.m
% This function is used for displaying the piecewise distance distributions in the command window.

%% COPYRIGHT:  ©  Zubair Khalid and Salman Durrani.
% Applied Signal Processing (ASP) research group,
% Research School of Engineering,
% The Australian National University, Canberra, Australia, May 2013.

function display_dist(F_dist,dist_r)   
    for el=1:1:length(dist_r)-1
        if(dist_r(el+1)-dist_r(el)>0)
            fprintf('For distance,\t %1.4f <= r  <= %1.4f\n \n',dist_r(el),dist_r(el+1));
            fprintf('Distribution: \t %s\n\n\n', char(vpa(F_dist(el),5) ));        
        end
    end

end

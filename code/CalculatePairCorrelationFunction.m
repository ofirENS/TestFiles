function CalculatePairCorrelationFunction
% Calculate the pair correlation function for many realization of a Rouse chain
% the pair correlation is between segment positions, and it i linked to the
% probability of encounter between the different beads of the Rouse chain. 
numBeads = 100;
numExp   = 10;
rMin     = 0.01;
rMax     = numBeads/2;
rad      = linspace(rMin,rMax,2^9 +1);
dr       = rad(2)-rad(1);
g        = zeros(numExp,numel(rad)-1);
rho      = numBeads/(4*pi*rMax^2);
chain = zeros(numBeads,3);
for eIdx = 1:numExp
    for rIdx = 2:numBeads-1
        chain(rIdx,:) = chain(rIdx-1,:)+ randn(1,3);
    end
    % Calculate the pair correlation function
    dists   = pdist2(chain,chain);
    
    for rIdx = 1:numel(rad)-1
        % find all beads in the range and divide by the volume to get concentration
        inRange      = double(dists>rad(rIdx) & dists<(rad(rIdx)+dr));
        g(eIdx,rIdx) = (1/numBeads)*(sum(inRange(:)))/(4*pi*(rad(rIdx)+dr).^2 - rad(rIdx)^2);
    end
end
% calculate the FFT of the mean of the pair correlation functio 
meanPCF = mean(g);
figure, plot(rad(1:end-1),g'), title('pair correlation function'), 
hold on, plot(rad(1:end-1),meanPCF,'r-','Linewidth',4), xlabel('r'), ylabel('PCF')
% trapz(rad(1:end-1),meanPCF.*rad(1:end-1).^2)-(numBeads-1)/(4*pi*(numBeads/1))
% fPFC    = fft(meanPCF,2^nextpow2(numel(rad)));
% figure, plot(abs(fftshift(fPFC)))
sum(meanPCF)
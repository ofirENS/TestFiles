function VolumeExclusion
close all 
% construct the framework 
simulatorParams = SimulationFrameworkParams('dt',0.01,'dimension',3,'numSteps',1,...
    'objectInteraction',false,'showSimulation',true);
    
domainForces = ForceManagerParams('diffusionForce',true,'diffusionConst',0.1,'mechanicalForce',false);%
    
dp            = DomainHandlerParams('domainShape','sphere','domainWidth',1,'dimension',simulatorParams.simulator.dimension,...
                                    'forceParams',domainForces);
chainForces = ForceManagerParams('minParticleEqDistance',0,'springForce',true,'springConst',1,'bendingElasticityForce',false,...
                                 'mechanicalForce',true,'mechanicalForceCenter',[0 0 0],'mechanicalForceDirection','out',...
                                 'mechanicalForceCutoff',1,'mechanicalForceMagnitude',1);
                             
cp          = ChainParams('forceParams',chainForces,'numBeads',100,'b',1,'dimension',simulatorParams.simulator.dimension);
simulatorParams.SetDomainParams(dp);
simulatorParams.SetChainParams(cp);
r    = RouseSimulatorFramework(simulatorParams);
r.Run
for sIdx = 1:200
    r.objectManager.handles.chain.params.forceParams.mechanicalForceCenter = r.objectManager.handles.chain.position.cur;
    r.Step    
%     f = ForceManager.GetParticleDistance(r.objectManager.curPos);
%     f(1:cp.numBeads+1:cp.numBeads^2)=Inf; 
%     k = find(f<chainForces.mechanicalForceCutoff)
end
end
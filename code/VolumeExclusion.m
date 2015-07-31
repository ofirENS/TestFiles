function VolumeExclusion
close all 
% construct the framework 
simulatorParams = SimulationFrameworkParams('dt',0.1,'dimension',3,'numSteps',1,...
    'objectInteraction',false,'showSimulation',true);
    
domainForces = ForceManagerParams('diffusionForce',false,'diffusionConst',1,'mechanicalForce',true,...
    'mechanicalForceCenter',[0 0 0],'mechanicalForceDirection','out','mechanicalForceCutoff',1,'mechanicalForceMagnitude',0.1);
dp            = DomainHandlerParams('domainShape','open','dimension',simulatorParams.simulator.dimension,...
                                    'forceParams',domainForces);
chainForces = ForceManagerParams('minParticleEqDistance',0,'springForce',true,'springConst',0,'bendingElasticityForce',false);
cp          = ChainParams('forceParams',chainForces,'numBeads',100,'b',1,'dimension',simulatorParams.simulator.dimension);
simulatorParams.SetDomainParams(dp);
simulatorParams.SetChainParams(cp);
r    = RouseSimulatorFramework(simulatorParams);
r.Run
for sIdx = 1:1000
   r.handles.classes.domain.params.forceParams.mechanicalForceCenter = r.objectManager.curPos;
    r.Step    
    
end
end
% scrFindElectrodes

dataFolder = fullfile(pwd,'..','Data');
d          = dicomread(fullfile(dataFolder,'dicom1.dcm'));
numFrames  = size(d,4);

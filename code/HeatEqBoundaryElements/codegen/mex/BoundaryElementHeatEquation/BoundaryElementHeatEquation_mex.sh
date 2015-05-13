MATLAB="/usr/local/MATLAB/R2014a"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/ofir/.matlab/R2014a"
OPTSFILE_NAME="./mexopts.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for BoundaryElementHeatEquation" > BoundaryElementHeatEquation_mex.mki
echo "CC=$CC" >> BoundaryElementHeatEquation_mex.mki
echo "CFLAGS=$CFLAGS" >> BoundaryElementHeatEquation_mex.mki
echo "CLIBS=$CLIBS" >> BoundaryElementHeatEquation_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> BoundaryElementHeatEquation_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> BoundaryElementHeatEquation_mex.mki
echo "CXX=$CXX" >> BoundaryElementHeatEquation_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> BoundaryElementHeatEquation_mex.mki
echo "CXXLIBS=$CXXLIBS" >> BoundaryElementHeatEquation_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> BoundaryElementHeatEquation_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> BoundaryElementHeatEquation_mex.mki
echo "LD=$LD" >> BoundaryElementHeatEquation_mex.mki
echo "LDFLAGS=$LDFLAGS" >> BoundaryElementHeatEquation_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> BoundaryElementHeatEquation_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> BoundaryElementHeatEquation_mex.mki
echo "Arch=$Arch" >> BoundaryElementHeatEquation_mex.mki
echo OMPFLAGS= >> BoundaryElementHeatEquation_mex.mki
echo OMPLINKFLAGS= >> BoundaryElementHeatEquation_mex.mki
echo "EMC_COMPILER=gcc" >> BoundaryElementHeatEquation_mex.mki
echo "EMC_CONFIG=optim" >> BoundaryElementHeatEquation_mex.mki
"/usr/local/MATLAB/R2014a/bin/glnxa64/gmake" -B -f BoundaryElementHeatEquation_mex.mk

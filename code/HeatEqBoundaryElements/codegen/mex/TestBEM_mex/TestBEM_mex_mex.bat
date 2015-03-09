@echo off
set MATLAB=D:\PROGRA~2\MATLAB\R2014a
set MATLAB_ARCH=win64
set MATLAB_BIN="D:\Program Files\MATLAB\R2014a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=TestBEM_mex
set MEX_NAME=TestBEM_mex
set MEX_EXT=.mexw64
call mexopts.bat
echo # Make settings for TestBEM_mex > TestBEM_mex_mex.mki
echo COMPILER=%COMPILER%>> TestBEM_mex_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> TestBEM_mex_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> TestBEM_mex_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> TestBEM_mex_mex.mki
echo LINKER=%LINKER%>> TestBEM_mex_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> TestBEM_mex_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> TestBEM_mex_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> TestBEM_mex_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> TestBEM_mex_mex.mki
echo BORLAND=%BORLAND%>> TestBEM_mex_mex.mki
echo OMPFLAGS= >> TestBEM_mex_mex.mki
echo OMPLINKFLAGS= >> TestBEM_mex_mex.mki
echo EMC_COMPILER=msvc110>> TestBEM_mex_mex.mki
echo EMC_CONFIG=optim>> TestBEM_mex_mex.mki
"D:\Program Files\MATLAB\R2014a\bin\win64\gmake" -B -f TestBEM_mex_mex.mk

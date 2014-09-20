#include "mex.h" /* Always include this */
#include "matrix.h"
#include <math.h>
// #include <iostream>
// all static function that are used in mexFunction must be defined before the mexFunction 
void LJ(double x[], double y[],double rows, double cols)
{
    int i;
    int j;
    for (i=0; i<=(rows+1); i++){
        for (j=0; j<=(cols+1); j++)
        {
            mexPrintf("%s%d%s%d%s%f\n","row num: ",i," col num: ", j," x Value: " , x[i][j]);
            
            y[i][j] = 1/x[i][j];  
            mexPrintf("%s%d%s%d\n","Done: row num: ",i," col num: ", j);
        }
    }  
}

void mexFunction(int nlhs, mxArray *plhs[], /* Output variables */
int nrhs, const mxArray *prhs[]) /* Input variables */
{
// prhs[0]- beadDistMat
// prhs[1] - sig (LJ)
// prhs[2]- epsilon (LJ)
// prhs[3] - beadPosition
// prhs[4] - numBeads
// prhs[5] - dt
    
size_t mrows,ncols;
double *y;
double *x;
mrows   = mxGetM(prhs[0]);
ncols   = mxGetN(prhs[0]);
plhs[0] = mxCreateDoubleMatrix((mwSize)mrows, (mwSize)ncols, mxREAL);
mexPrintf("%s%d\n","num rows: ",mrows);
mexPrintf("%s%d\n","num cols: ",ncols);
 x = mxGetPr(prhs[0]);
 y = mxGetPr(plhs[0]);
 LJ(x,y,mrows,ncols);
return;
}


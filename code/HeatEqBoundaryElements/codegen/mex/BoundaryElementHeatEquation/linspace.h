/*
 * linspace.h
 *
 * Code generation for function 'linspace'
 *
 */

#ifndef __LINSPACE_H__
#define __LINSPACE_H__

/* Include files */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blas.h"
#include "rtwtypes.h"
#include "BoundaryElementHeatEquation_types.h"

/* Function Declarations */
extern void linspace(const emlrtStack *sp, real_T n1, emxArray_real_T *y);

#endif

/* End of code generation (linspace.h) */

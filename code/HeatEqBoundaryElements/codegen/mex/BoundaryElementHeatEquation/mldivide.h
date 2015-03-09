/*
 * mldivide.h
 *
 * Code generation for function 'mldivide'
 *
 */

#ifndef __MLDIVIDE_H__
#define __MLDIVIDE_H__

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
extern void mldivide(const emlrtStack *sp, const emxArray_real_T *A, const
                     emxArray_real_T *B, emxArray_real_T *Y);

#endif

/* End of code generation (mldivide.h) */

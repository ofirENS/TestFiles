/*
 * CalculateA1B1B1Star.h
 *
 * Code generation for function 'CalculateA1B1B1Star'
 *
 */

#ifndef __CALCULATEA1B1B1STAR_H__
#define __CALCULATEA1B1B1STAR_H__

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
extern void CalculateA1B1B1Star(const emlrtStack *sp, real_T k, const
  emxArray_real_T *spacePoints, real_T t, const emxArray_real_T *timePoints,
  real_T a1k[2], real_T b1k[2], real_T b1s[2]);
extern void b_CalculateA1B1B1Star(const emlrtStack *sp, real_T k, const
  emxArray_real_T *spacePoints, const emxArray_real_T *t, const emxArray_real_T *
  timePoints, emxArray_real_T *a1k, emxArray_real_T *b1k, emxArray_real_T *b1s);

#endif

/* End of code generation (CalculateA1B1B1Star.h) */

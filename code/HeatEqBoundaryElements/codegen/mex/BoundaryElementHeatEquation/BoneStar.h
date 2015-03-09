/*
 * BoneStar.h
 *
 * Code generation for function 'BoneStar'
 *
 */

#ifndef __BONESTAR_H__
#define __BONESTAR_H__

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
extern void BoneStar(const emlrtStack *sp, real_T k, const emxArray_real_T
                     *spacePoints, real_T t, const emxArray_real_T *timePoints,
                     real_T vals[2]);
extern void b_BoneStar(const emlrtStack *sp, real_T k, const real_T spacePoints
  [3], const emxArray_real_T *t, const emxArray_real_T *timePoints,
  emxArray_real_T *vals);

#endif

/* End of code generation (BoneStar.h) */

/*
 * Done.h
 *
 * Code generation for function 'Done'
 *
 */

#ifndef __DONE_H__
#define __DONE_H__

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
#include "TestBEM_mex_types.h"

/* Function Declarations */
extern real_T Done(const emlrtStack *sp, real_T k, const emxArray_real_T
                   *spacePoints, real_T t, const emxArray_real_T *timePoints,
                   const emxArray_real_T *f);

#ifdef __WATCOMC__

#pragma aux Done value [8087];

#endif

extern void b_Done(const emlrtStack *sp, real_T k, const real_T spacePoints[3],
                   const emxArray_real_T *t, const emxArray_real_T *timePoints,
                   const emxArray_real_T *f, emxArray_real_T *vals);

#endif

/* End of code generation (Done.h) */

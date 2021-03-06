/*
 * erf.h
 *
 * Code generation for function 'erf'
 *
 */

#ifndef __ERF_H__
#define __ERF_H__

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
extern void b_erf(const emlrtStack *sp, const emxArray_real_T *x,
                  emxArray_real_T *y);

#endif

/* End of code generation (erf.h) */

/*
 * TestBEM_mex_mexutil.h
 *
 * Code generation for function 'TestBEM_mex_mexutil'
 *
 */

#ifndef __TESTBEM_MEX_MEXUTIL_H__
#define __TESTBEM_MEX_MEXUTIL_H__

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
extern const mxArray *axes(const emlrtStack *sp, const mxArray *b, const mxArray
  *c, const mxArray *d, const mxArray *e, emlrtMCInfo *location);
extern void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[14]);
extern const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);
extern const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);
extern const mxArray *c_message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);
extern const mxArray *c_sprintf(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
extern void emlrt_marshallIn(const emlrtStack *sp, const mxArray *d_sprintf,
  const char_T *identifier, char_T y[14]);
extern const mxArray *emlrt_marshallOut(const real_T u);
extern void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);
extern const mxArray *figure(const emlrtStack *sp, emlrtMCInfo *location);
extern void line(const emlrtStack *sp, const mxArray *b, const mxArray *c, const
                 mxArray *d, const mxArray *e, const mxArray *f, const mxArray
                 *g, const mxArray *h, const mxArray *i, const mxArray *j, const
                 mxArray *k, emlrtMCInfo *location);
extern void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[14]);
extern const mxArray *message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);

#endif

/* End of code generation (TestBEM_mex_mexutil.h) */

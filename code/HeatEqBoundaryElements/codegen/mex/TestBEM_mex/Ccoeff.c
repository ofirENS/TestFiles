/*
 * Ccoeff.c
 *
 * Code generation for function 'Ccoeff'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Acoeff.h"
#include "Aone.h"
#include "Bcoeff.h"
#include "Bone.h"
#include "BoneStar.h"
#include "Ccoeff.h"
#include "Cone.h"
#include "Dcoeff.h"
#include "Done.h"
#include "GetRegularizationTerm.h"
#include "PlotResults.h"
#include "TestBemHeatEq_optimized.h"
#include "erf.h"
#include "TestBEM_mex_emxutil.h"
#include "eml_error.h"
#include "TestBEM_mex_data.h"

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI = { 1, 17, "Ccoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Ccoeff.m" };

static emlrtDCInfo h_emlrtDCI = { 4, 20, "Ccoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Ccoeff.m", 1 };

static emlrtBCInfo cb_emlrtBCI = { 1, 1, 4, 20, "spacePoints", "Ccoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Ccoeff.m", 0 };

static emlrtBCInfo db_emlrtBCI = { 1, 1, 4, 56, "spacePoints", "Ccoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Ccoeff.m", 0 };

/* Function Definitions */
void Ccoeff(const emlrtStack *sp, real_T k, const emxArray_real_T *x, real_T t,
            real_T spacePoints, emxArray_real_T *vals)
{
  int32_T b_vals;
  emxArray_real_T *b_x;
  real_T B;
  int32_T loop_ub;
  emxArray_real_T *c_x;
  emxArray_real_T *r0;
  int32_T c_vals[2];
  int32_T iv0[2];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*  evaluate the coefficient C for index k which describes the discretization */
  /*  of the space variable spacePoints in [0 1], at time t */
  b_vals = (int32_T)emlrtIntegerCheckFastR2012b(k, &h_emlrtDCI, sp);
  emlrtDynamicBoundsCheckFastR2012b(b_vals, 1, 1, &cb_emlrtBCI, sp);
  emlrtDynamicBoundsCheckFastR2012b(2, 1, 1, &db_emlrtBCI, sp);
  st.site = &o_emlrtRSI;
  if (t < 0.0) {
    b_st.site = &f_emlrtRSI;
    eml_error(&b_st);
  }

  emxInit_real_T(&st, &b_x, 2, &emlrtRTEI, true);
  B = 2.0 * muDoubleScalarSqrt(t);
  b_vals = b_x->size[0] * b_x->size[1];
  b_x->size[0] = 1;
  b_x->size[1] = x->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_x, b_vals, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = x->size[0] * x->size[1];
  for (b_vals = 0; b_vals < loop_ub; b_vals++) {
    b_x->data[b_vals] = (x->data[b_vals] - spacePoints) / B;
  }

  emxInit_real_T(sp, &c_x, 2, &emlrtRTEI, true);
  b_erf(sp, b_x, vals);
  st.site = &o_emlrtRSI;
  B = 2.0 * muDoubleScalarSqrt(t);
  b_vals = c_x->size[0] * c_x->size[1];
  c_x->size[0] = 1;
  c_x->size[1] = x->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c_x, b_vals, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = x->size[0] * x->size[1];
  emxFree_real_T(&b_x);
  for (b_vals = 0; b_vals < loop_ub; b_vals++) {
    c_x->data[b_vals] = (x->data[b_vals] - spacePoints) / B;
  }

  emxInit_real_T(sp, &r0, 2, &emlrtRTEI, true);
  b_erf(sp, c_x, r0);
  emxFree_real_T(&c_x);
  for (b_vals = 0; b_vals < 2; b_vals++) {
    c_vals[b_vals] = vals->size[b_vals];
  }

  for (b_vals = 0; b_vals < 2; b_vals++) {
    iv0[b_vals] = r0->size[b_vals];
  }

  emlrtSizeEqCheck2DFastR2012b(c_vals, iv0, &emlrtECI, sp);
  b_vals = vals->size[0] * vals->size[1];
  vals->size[0] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)vals, b_vals, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  b_vals = vals->size[0];
  loop_ub = vals->size[1];
  loop_ub *= b_vals;
  for (b_vals = 0; b_vals < loop_ub; b_vals++) {
    vals->data[b_vals] = 0.5 * (vals->data[b_vals] - r0->data[b_vals]);
  }

  emxFree_real_T(&r0);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

real_T b_Ccoeff(const emlrtStack *sp, real_T k, real_T x, real_T t, const real_T
                spacePoints[4])
{
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /*  evaluate the coefficient C for index k which describes the discretization */
  /*  of the space variable spacePoints in [0 1], at time t */
  st.site = &o_emlrtRSI;
  if (t < 0.0) {
    b_st.site = &f_emlrtRSI;
    eml_error(&b_st);
  }

  st.site = &o_emlrtRSI;
  return 0.5 * (b_scalar_erf((x - spacePoints[(int32_T)k - 1]) / (2.0 *
    muDoubleScalarSqrt(t))) - b_scalar_erf((x - spacePoints[(int32_T)(k + 1.0) -
    1]) / (2.0 * muDoubleScalarSqrt(t))));
}

/* End of code generation (Ccoeff.c) */

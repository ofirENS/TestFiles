/*
 * Cone.c
 *
 * Code generation for function 'Cone'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Acoeff.h"
#include "Bcoeff.h"
#include "CalculateA1B1B1Star.h"
#include "Ccoeff.h"
#include "Cone.h"
#include "Dcoeff.h"
#include "Done.h"
#include "GetRegularizationTerm.h"
#include "PlotResults.h"
#include "TestBemHeatEq_optimized.h"
#include "BoundaryElementHeatEquation_emxutil.h"
#include "rdivide.h"
#include "erf.h"
#include "eml_error.h"
#include "BoundaryElementHeatEquation_data.h"

/* Variable Definitions */
static emlrtRSInfo o_emlrtRSI = { 8, "Cone",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Cone.m" };

static emlrtRTEInfo d_emlrtRTEI = { 1, 17, "Cone",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Cone.m" };

static emlrtBCInfo db_emlrtBCI = { -1, -1, 8, 32, "t", "Cone",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Cone.m", 0 };

static emlrtBCInfo eb_emlrtBCI = { -1, -1, 8, 14, "vals", "Cone",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Cone.m", 0 };

static emlrtECInfo b_emlrtECI = { -1, 8, 9, "Cone",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Cone.m" };

/* Function Definitions */
void Cone(const emlrtStack *sp, const emxArray_real_T *x, const emxArray_real_T *
          spacePoints, const emxArray_real_T *t, emxArray_real_T *vals)
{
  int32_T t_idx_0;
  int32_T i6;
  int32_T l;
  emxArray_int32_T *r2;
  emxArray_real_T *r3;
  emxArray_real_T *r4;
  emxArray_real_T *r5;
  emxArray_real_T *b_x;
  emxArray_real_T *r6;
  emxArray_real_T *c_x;
  int32_T i;
  real_T b_spacePoints;
  int32_T iv1[2];
  int32_T iv2[2];
  int32_T iv3[2];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*  calculate the matrix Cone for a specific space point x_k, for all times */
  /*  t_i in A */
  /*  points x_k=1:numel(spacePoints) */
  t_idx_0 = t->size[1];
  i6 = vals->size[0] * vals->size[1];
  vals->size[0] = t_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)vals, i6, (int32_T)sizeof(real_T),
                    &d_emlrtRTEI);
  t_idx_0 = x->size[1];
  i6 = vals->size[0] * vals->size[1];
  vals->size[1] = t_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)vals, i6, (int32_T)sizeof(real_T),
                    &d_emlrtRTEI);
  t_idx_0 = t->size[1] * x->size[1];
  for (i6 = 0; i6 < t_idx_0; i6++) {
    vals->data[i6] = 0.0;
  }

  l = 0;
  emxInit_int32_T(sp, &r2, 1, &d_emlrtRTEI, true);
  emxInit_real_T(sp, &r3, 2, &d_emlrtRTEI, true);
  emxInit_real_T(sp, &r4, 2, &d_emlrtRTEI, true);
  emxInit_real_T(sp, &r5, 2, &d_emlrtRTEI, true);
  emxInit_real_T(sp, &b_x, 2, &d_emlrtRTEI, true);
  emxInit_real_T(sp, &r6, 2, &d_emlrtRTEI, true);
  emxInit_real_T(sp, &c_x, 2, &d_emlrtRTEI, true);
  while (l <= x->size[1] - 1) {
    i = 0;
    while (i <= t->size[1] - 1) {
      i6 = vals->size[0];
      t_idx_0 = l + 1;
      emlrtDynamicBoundsCheckFastR2012b(t_idx_0, 1, i6, &eb_emlrtBCI, sp);
      t_idx_0 = vals->size[1];
      i6 = r2->size[0];
      r2->size[0] = t_idx_0;
      emxEnsureCapacity(sp, (emxArray__common *)r2, i6, (int32_T)sizeof(int32_T),
                        &d_emlrtRTEI);
      for (i6 = 0; i6 < t_idx_0; i6++) {
        r2->data[i6] = i6;
      }

      st.site = &o_emlrtRSI;
      i6 = t->size[1];
      t_idx_0 = i + 1;
      emlrtDynamicBoundsCheckFastR2012b(t_idx_0, 1, i6, &db_emlrtBCI, &st);

      /*  evaluate the coefficient C for index k which describes the discretization */
      /*  of the space variable spacePoints in [0 1], at time t */
      b_st.site = &n_emlrtRSI;
      if (t->data[i] < 0.0) {
        c_st.site = &f_emlrtRSI;
        eml_error(&c_st);
      }

      i6 = spacePoints->size[1];
      t_idx_0 = l + 1;
      emlrtDynamicBoundsCheckFastR2012b(t_idx_0, 1, i6, &fb_emlrtBCI, &st);
      i6 = c_x->size[0] * c_x->size[1];
      c_x->size[0] = 1;
      c_x->size[1] = x->size[1];
      emxEnsureCapacity(&st, (emxArray__common *)c_x, i6, (int32_T)sizeof(real_T),
                        &d_emlrtRTEI);
      b_spacePoints = spacePoints->data[l];
      t_idx_0 = x->size[0] * x->size[1];
      for (i6 = 0; i6 < t_idx_0; i6++) {
        c_x->data[i6] = x->data[i6] - b_spacePoints;
      }

      rdivide(&st, c_x, 2.0 * muDoubleScalarSqrt(t->data[i]), r3);
      i6 = r6->size[0] * r6->size[1];
      r6->size[0] = 1;
      r6->size[1] = r3->size[1];
      emxEnsureCapacity(&st, (emxArray__common *)r6, i6, (int32_T)sizeof(real_T),
                        &d_emlrtRTEI);
      t_idx_0 = r3->size[0] * r3->size[1];
      for (i6 = 0; i6 < t_idx_0; i6++) {
        r6->data[i6] = r3->data[i6];
      }

      b_erf(&st, r6, r3);
      b_st.site = &n_emlrtRSI;
      if (t->data[i] < 0.0) {
        c_st.site = &f_emlrtRSI;
        eml_error(&c_st);
      }

      i6 = spacePoints->size[1];
      t_idx_0 = (int32_T)((1.0 + (real_T)l) + 1.0);
      emlrtDynamicBoundsCheckFastR2012b(t_idx_0, 1, i6, &gb_emlrtBCI, &st);
      i6 = b_x->size[0] * b_x->size[1];
      b_x->size[0] = 1;
      b_x->size[1] = x->size[1];
      emxEnsureCapacity(&st, (emxArray__common *)b_x, i6, (int32_T)sizeof(real_T),
                        &d_emlrtRTEI);
      b_spacePoints = spacePoints->data[(int32_T)((1.0 + (real_T)l) + 1.0) - 1];
      t_idx_0 = x->size[0] * x->size[1];
      for (i6 = 0; i6 < t_idx_0; i6++) {
        b_x->data[i6] = x->data[i6] - b_spacePoints;
      }

      rdivide(&st, b_x, 2.0 * muDoubleScalarSqrt(t->data[i]), r4);
      i6 = r5->size[0] * r5->size[1];
      r5->size[0] = 1;
      r5->size[1] = r4->size[1];
      emxEnsureCapacity(&st, (emxArray__common *)r5, i6, (int32_T)sizeof(real_T),
                        &d_emlrtRTEI);
      t_idx_0 = r4->size[0] * r4->size[1];
      for (i6 = 0; i6 < t_idx_0; i6++) {
        r5->data[i6] = r4->data[i6];
      }

      b_erf(&st, r5, r4);
      for (i6 = 0; i6 < 2; i6++) {
        iv1[i6] = r3->size[i6];
      }

      for (i6 = 0; i6 < 2; i6++) {
        iv2[i6] = r4->size[i6];
      }

      emlrtSizeEqCheck2DFastR2012b(iv1, iv2, &emlrtECI, &st);
      i6 = r3->size[0] * r3->size[1];
      r3->size[0] = 1;
      emxEnsureCapacity(&st, (emxArray__common *)r3, i6, (int32_T)sizeof(real_T),
                        &d_emlrtRTEI);
      i6 = r3->size[0];
      t_idx_0 = r3->size[1];
      t_idx_0 *= i6;
      for (i6 = 0; i6 < t_idx_0; i6++) {
        r3->data[i6] = 0.5 * (r3->data[i6] - r4->data[i6]);
      }

      iv3[0] = 1;
      iv3[1] = r2->size[0];
      emlrtSubAssignSizeCheckR2012b(iv3, 2, *(int32_T (*)[2])r3->size, 2,
        &b_emlrtECI, sp);
      t_idx_0 = r3->size[1];
      for (i6 = 0; i6 < t_idx_0; i6++) {
        vals->data[l + vals->size[0] * r2->data[i6]] = r3->data[r3->size[0] * i6];
      }

      i++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    l++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&c_x);
  emxFree_real_T(&r6);
  emxFree_real_T(&b_x);
  emxFree_real_T(&r5);
  emxFree_real_T(&r4);
  emxFree_real_T(&r3);
  emxFree_int32_T(&r2);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (Cone.c) */

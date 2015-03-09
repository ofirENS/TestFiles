/*
 * Cone.c
 *
 * Code generation for function 'Cone'
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
#include "BoundaryElementHeatEquation_emxutil.h"
#include "eml_error.h"
#include "BoundaryElementHeatEquation_data.h"

/* Variable Definitions */
static emlrtRSInfo p_emlrtRSI = { 8, "Cone",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Cone.m" };

static emlrtRTEInfo c_emlrtRTEI = { 1, 17, "Cone",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Cone.m" };

static emlrtECInfo b_emlrtECI = { -1, 8, 9, "Cone",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Cone.m" };

static emlrtBCInfo gb_emlrtBCI = { -1, -1, 8, 14, "vals", "Cone",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Cone.m", 0 };

static emlrtBCInfo hb_emlrtBCI = { -1, -1, 8, 32, "t", "Cone",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Cone.m", 0 };

/* Function Definitions */
void Cone(const emlrtStack *sp, const emxArray_real_T *x, const emxArray_real_T *
          spacePoints, const emxArray_real_T *t, emxArray_real_T *vals)
{
  int32_T t_idx_0;
  int32_T i10;
  int32_T l;
  emxArray_int32_T *r1;
  emxArray_real_T *r2;
  emxArray_real_T *r3;
  emxArray_real_T *b_x;
  emxArray_real_T *c_x;
  int32_T i;
  real_T B;
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
  i10 = vals->size[0] * vals->size[1];
  vals->size[0] = t_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)vals, i10, (int32_T)sizeof(real_T),
                    &c_emlrtRTEI);
  t_idx_0 = x->size[1];
  i10 = vals->size[0] * vals->size[1];
  vals->size[1] = t_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)vals, i10, (int32_T)sizeof(real_T),
                    &c_emlrtRTEI);
  t_idx_0 = t->size[1] * x->size[1];
  for (i10 = 0; i10 < t_idx_0; i10++) {
    vals->data[i10] = 0.0;
  }

  l = 0;
  emxInit_int32_T(sp, &r1, 1, &c_emlrtRTEI, true);
  emxInit_real_T(sp, &r2, 2, &c_emlrtRTEI, true);
  emxInit_real_T(sp, &r3, 2, &c_emlrtRTEI, true);
  emxInit_real_T(sp, &b_x, 2, &c_emlrtRTEI, true);
  emxInit_real_T(sp, &c_x, 2, &c_emlrtRTEI, true);
  while (l <= x->size[1] - 1) {
    i = 0;
    while (i <= t->size[1] - 1) {
      i10 = vals->size[0];
      t_idx_0 = l + 1;
      emlrtDynamicBoundsCheckFastR2012b(t_idx_0, 1, i10, &gb_emlrtBCI, sp);
      t_idx_0 = vals->size[1];
      i10 = r1->size[0];
      r1->size[0] = t_idx_0;
      emxEnsureCapacity(sp, (emxArray__common *)r1, i10, (int32_T)sizeof(int32_T),
                        &c_emlrtRTEI);
      for (i10 = 0; i10 < t_idx_0; i10++) {
        r1->data[i10] = i10;
      }

      st.site = &p_emlrtRSI;
      i10 = t->size[1];
      t_idx_0 = i + 1;
      emlrtDynamicBoundsCheckFastR2012b(t_idx_0, 1, i10, &hb_emlrtBCI, &st);

      /*  evaluate the coefficient C for index k which describes the discretization */
      /*  of the space variable spacePoints in [0 1], at time t */
      b_st.site = &o_emlrtRSI;
      if (t->data[i] < 0.0) {
        c_st.site = &f_emlrtRSI;
        eml_error(&c_st);
      }

      i10 = spacePoints->size[1];
      t_idx_0 = l + 1;
      emlrtDynamicBoundsCheckFastR2012b(t_idx_0, 1, i10, &fb_emlrtBCI, &st);
      B = 2.0 * muDoubleScalarSqrt(t->data[i]);
      i10 = c_x->size[0] * c_x->size[1];
      c_x->size[0] = 1;
      c_x->size[1] = x->size[1];
      emxEnsureCapacity(&st, (emxArray__common *)c_x, i10, (int32_T)sizeof
                        (real_T), &c_emlrtRTEI);
      b_spacePoints = spacePoints->data[l];
      t_idx_0 = x->size[0] * x->size[1];
      for (i10 = 0; i10 < t_idx_0; i10++) {
        c_x->data[i10] = (x->data[i10] - b_spacePoints) / B;
      }

      b_erf(&st, c_x, r2);
      b_st.site = &o_emlrtRSI;
      if (t->data[i] < 0.0) {
        c_st.site = &f_emlrtRSI;
        eml_error(&c_st);
      }

      i10 = spacePoints->size[1];
      t_idx_0 = (int32_T)((1.0 + (real_T)l) + 1.0);
      emlrtDynamicBoundsCheckFastR2012b(t_idx_0, 1, i10, &eb_emlrtBCI, &st);
      B = 2.0 * muDoubleScalarSqrt(t->data[i]);
      i10 = b_x->size[0] * b_x->size[1];
      b_x->size[0] = 1;
      b_x->size[1] = x->size[1];
      emxEnsureCapacity(&st, (emxArray__common *)b_x, i10, (int32_T)sizeof
                        (real_T), &c_emlrtRTEI);
      b_spacePoints = spacePoints->data[(int32_T)((1.0 + (real_T)l) + 1.0) - 1];
      t_idx_0 = x->size[0] * x->size[1];
      for (i10 = 0; i10 < t_idx_0; i10++) {
        b_x->data[i10] = (x->data[i10] - b_spacePoints) / B;
      }

      b_erf(&st, b_x, r3);
      for (i10 = 0; i10 < 2; i10++) {
        iv1[i10] = r2->size[i10];
      }

      for (i10 = 0; i10 < 2; i10++) {
        iv2[i10] = r3->size[i10];
      }

      emlrtSizeEqCheck2DFastR2012b(iv1, iv2, &emlrtECI, &st);
      i10 = r2->size[0] * r2->size[1];
      r2->size[0] = 1;
      emxEnsureCapacity(&st, (emxArray__common *)r2, i10, (int32_T)sizeof(real_T),
                        &c_emlrtRTEI);
      i10 = r2->size[0];
      t_idx_0 = r2->size[1];
      t_idx_0 *= i10;
      for (i10 = 0; i10 < t_idx_0; i10++) {
        r2->data[i10] = 0.5 * (r2->data[i10] - r3->data[i10]);
      }

      iv3[0] = 1;
      iv3[1] = r1->size[0];
      emlrtSubAssignSizeCheckR2012b(iv3, 2, *(int32_T (*)[2])r2->size, 2,
        &b_emlrtECI, sp);
      t_idx_0 = r2->size[1];
      for (i10 = 0; i10 < t_idx_0; i10++) {
        vals->data[l + vals->size[0] * r1->data[i10]] = r2->data[r2->size[0] *
          i10];
      }

      i++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    l++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&c_x);
  emxFree_real_T(&b_x);
  emxFree_real_T(&r3);
  emxFree_real_T(&r2);
  emxFree_int32_T(&r1);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void b_Cone(const emlrtStack *sp, const real_T x[3], const emxArray_real_T *t,
            emxArray_real_T *vals)
{
  int32_T t_idx_0;
  int32_T i50;
  int32_T l;
  int32_T i;
  real_T B;
  real_T d15;
  real_T y[3];
  real_T b_y[3];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;

  /*  calculate the matrix Cone for a specific space point x_k, for all times */
  /*  t_i in A */
  /*  points x_k=1:numel(spacePoints) */
  t_idx_0 = t->size[1];
  i50 = vals->size[0] * vals->size[1];
  vals->size[0] = t_idx_0;
  vals->size[1] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)vals, i50, (int32_T)sizeof(real_T),
                    &c_emlrtRTEI);
  t_idx_0 = t->size[1] * 3;
  for (i50 = 0; i50 < t_idx_0; i50++) {
    vals->data[i50] = 0.0;
  }

  for (l = 0; l < 3; l++) {
    i = 0;
    while (i <= t->size[1] - 1) {
      st.site = &p_emlrtRSI;
      i50 = t->size[1];
      t_idx_0 = i + 1;
      emlrtDynamicBoundsCheckFastR2012b(t_idx_0, 1, i50, &hb_emlrtBCI, &st);

      /*  evaluate the coefficient C for index k which describes the discretization */
      /*  of the space variable spacePoints in [0 1], at time t */
      b_st.site = &o_emlrtRSI;
      if (t->data[i] < 0.0) {
        c_st.site = &f_emlrtRSI;
        eml_error(&c_st);
      }

      B = 2.0 * muDoubleScalarSqrt(t->data[i]);
      d15 = 0.33333333333333331 * (real_T)l;
      for (i50 = 0; i50 < 3; i50++) {
        y[i50] = b_scalar_erf((x[i50] - d15) / B);
      }

      b_st.site = &o_emlrtRSI;
      if (t->data[i] < 0.0) {
        c_st.site = &f_emlrtRSI;
        eml_error(&c_st);
      }

      B = 2.0 * muDoubleScalarSqrt(t->data[i]);
      d15 = 0.33333333333333331 * (1.0 + (real_T)l);
      for (i50 = 0; i50 < 3; i50++) {
        b_y[i50] = b_scalar_erf((x[i50] - d15) / B);
      }

      t_idx_0 = vals->size[0];
      i50 = 1 + l;
      emlrtDynamicBoundsCheckFastR2012b(i50, 1, t_idx_0, &gb_emlrtBCI, sp);
      for (i50 = 0; i50 < 3; i50++) {
        vals->data[l + vals->size[0] * i50] = 0.5 * (y[i50] - b_y[i50]);
      }

      i++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }
}

/* End of code generation (Cone.c) */

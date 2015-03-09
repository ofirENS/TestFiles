/*
 * Dcoeff.c
 *
 * Code generation for function 'Dcoeff'
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
#include "BoundaryElementHeatEquation_emxutil.h"
#include "BoundaryElementHeatEquation_data.h"

/* Variable Definitions */
static emlrtRTEInfo d_emlrtRTEI = { 1, 17, "Dcoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Dcoeff.m" };

static emlrtECInfo c_emlrtECI = { -1, 7, 1, "Dcoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Dcoeff.m" };

static emlrtBCInfo kb_emlrtBCI = { -1, -1, 7, 1,
  "a(1) = Acoeff(y(1),j,x,t,timePoints)", "Dcoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Dcoeff.m", 0 };

static emlrtECInfo d_emlrtECI = { -1, 9, 5, "Dcoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Dcoeff.m" };

static emlrtBCInfo lb_emlrtBCI = { -1, -1, 9, 5,
  "a(aIdx) = Acoeff(y(aIdx),j,x,t,timePoints)", "Dcoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Dcoeff.m", 0 };

/* Function Definitions */
real_T Dcoeff(const emlrtStack *sp, const emxArray_real_T *y, real_T j, const
              emxArray_real_T *x, real_T t, const emxArray_real_T *timePoints,
              const emxArray_real_T *f)
{
  real_T vals;
  emxArray_real_T *a;
  int32_T i11;
  int32_T unnamed_idx_1;
  emxArray_real_T *r4;
  int32_T i12;
  int32_T i13;
  int32_T i14;
  int32_T i15;
  int32_T i16;
  int32_T i17;
  int32_T i18;
  int32_T i19;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &a, 2, &e_emlrtRTEI, true);

  /*  Calculate the integral int_0^1(f(y,t_j)*A_{yj}(x,t)dy) by midpoint */
  /*  integration rule */
  /*  the spatial integration of all points y at time t_j */
  i11 = a->size[0] * a->size[1];
  a->size[0] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)a, i11, (int32_T)sizeof(real_T),
                    &d_emlrtRTEI);
  unnamed_idx_1 = y->size[1];
  i11 = a->size[0] * a->size[1];
  a->size[1] = unnamed_idx_1;
  emxEnsureCapacity(sp, (emxArray__common *)a, i11, (int32_T)sizeof(real_T),
                    &d_emlrtRTEI);
  unnamed_idx_1 = y->size[1];
  for (i11 = 0; i11 < unnamed_idx_1; i11++) {
    a->data[i11] = 0.0;
  }

  emxInit_real_T(sp, &r4, 2, &d_emlrtRTEI, true);
  vals = 0.0;
  i11 = y->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i11, &ib_emlrtBCI, sp);
  st.site = &q_emlrtRSI;
  b_Acoeff(&st, y->data[0], j, x, t, timePoints, r4);
  i11 = r4->size[1];
  emlrtSizeEqCheck1DFastR2012b(1, i11, &c_emlrtECI, sp);
  unnamed_idx_1 = y->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, unnamed_idx_1, &jb_emlrtBCI, sp);
  i11 = r4->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i11, &kb_emlrtBCI, sp);
  a->data[0] = r4->data[0];
  unnamed_idx_1 = 2;
  while (unnamed_idx_1 - 2 <= y->size[1] - 2) {
    i11 = y->size[1];
    st.site = &r_emlrtRSI;
    b_Acoeff(&st, y->data[emlrtDynamicBoundsCheckFastR2012b(unnamed_idx_1, 1,
              i11, &mb_emlrtBCI, sp) - 1], j, x, t, timePoints, r4);
    i11 = r4->size[1];
    emlrtSizeEqCheck1DFastR2012b(1, i11, &d_emlrtECI, sp);
    i11 = r4->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i11, &lb_emlrtBCI, sp);
    i11 = a->size[1];
    a->data[emlrtDynamicBoundsCheckFastR2012b(unnamed_idx_1, 1, i11,
      &nb_emlrtBCI, sp) - 1] = r4->data[0];
    i11 = a->size[1];
    i12 = f->size[1];
    i13 = a->size[1];
    i14 = unnamed_idx_1 - 1;
    i15 = f->size[1];
    i16 = unnamed_idx_1 - 1;
    i17 = y->size[1];
    i18 = y->size[1];
    i19 = unnamed_idx_1 - 1;
    vals += 0.5 * (a->data[emlrtDynamicBoundsCheckFastR2012b(unnamed_idx_1, 1,
      i11, &ob_emlrtBCI, sp) - 1] * f->data[emlrtDynamicBoundsCheckFastR2012b
                   (unnamed_idx_1, 1, i12, &pb_emlrtBCI, sp) - 1] + a->
                   data[emlrtDynamicBoundsCheckFastR2012b(i14, 1, i13,
      &qb_emlrtBCI, sp) - 1] * f->data[emlrtDynamicBoundsCheckFastR2012b(i16, 1,
      i15, &rb_emlrtBCI, sp) - 1]) * (y->data[emlrtDynamicBoundsCheckFastR2012b
      (unnamed_idx_1, 1, i17, &sb_emlrtBCI, sp) - 1] - y->
      data[emlrtDynamicBoundsCheckFastR2012b(i19, 1, i18, &tb_emlrtBCI, sp) - 1]);
    unnamed_idx_1++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&r4);
  emxFree_real_T(&a);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return vals;
}

real_T b_Dcoeff(const emlrtStack *sp, const real_T y[3], real_T j, real_T x,
                real_T t, const emxArray_real_T *timePoints)
{
  real_T vals;
  real_T a[3];
  int32_T aIdx;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /*  Calculate the integral int_0^1(f(y,t_j)*A_{yj}(x,t)dy) by midpoint */
  /*  integration rule */
  /*  the spatial integration of all points y at time t_j */
  for (aIdx = 0; aIdx < 3; aIdx++) {
    a[aIdx] = 0.0;
  }

  vals = 0.0;
  st.site = &q_emlrtRSI;
  a[0] = Acoeff(&st, y[0], j, x, t, timePoints);
  for (aIdx = 0; aIdx < 2; aIdx++) {
    st.site = &r_emlrtRSI;
    a[aIdx + 1] = Acoeff(&st, y[aIdx + 1], j, x, t, timePoints);
    vals += 0.5 * (a[aIdx + 1] + a[aIdx]) * (y[aIdx + 1] - y[aIdx]);
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  return vals;
}

/* End of code generation (Dcoeff.c) */

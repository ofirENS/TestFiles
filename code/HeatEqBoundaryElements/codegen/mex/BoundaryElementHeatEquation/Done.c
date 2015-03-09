/*
 * Done.c
 *
 * Code generation for function 'Done'
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
static emlrtRSInfo nd_emlrtRSI = { 6, "Done",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Done.m" };

static emlrtRTEInfo o_emlrtRTEI = { 2, 17, "Done",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Done.m" };

static emlrtDCInfo i_emlrtDCI = { 6, 42, "Done",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Done.m", 1 };

static emlrtBCInfo wb_emlrtBCI = { -1, -1, 6, 42, "spacePoints", "Done",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Done.m", 0 };

static emlrtBCInfo xb_emlrtBCI = { -1, -1, 6, 75, "f", "Done",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Done.m", 0 };

static emlrtBCInfo me_emlrtBCI = { -1, -1, 6, 57, "t", "Done",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Done.m", 0 };

static emlrtBCInfo ne_emlrtBCI = { -1, -1, 6, 14, "vals", "Done",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Done.m", 0 };

static emlrtBCInfo oe_emlrtBCI = { -1, -1, 6, 16, "vals", "Done",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Done.m", 0 };

/* Function Definitions */
real_T Done(const emlrtStack *sp, real_T k, const emxArray_real_T *spacePoints,
            real_T t, const emxArray_real_T *timePoints, const emxArray_real_T
            *f)
{
  real_T vals;
  emxArray_real_T *a;
  int32_T i22;
  int32_T unnamed_idx_1;
  int32_T aIdx;
  int32_T i23;
  int32_T i24;
  int32_T i25;
  int32_T i26;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &a, 2, &e_emlrtRTEI, true);
  i22 = f->size[0];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i22, &xb_emlrtBCI, sp);
  st.site = &nd_emlrtRSI;
  i22 = spacePoints->size[1];
  unnamed_idx_1 = (int32_T)emlrtIntegerCheckFastR2012b(k, &i_emlrtDCI, &st);
  emlrtDynamicBoundsCheckFastR2012b(unnamed_idx_1, 1, i22, &wb_emlrtBCI, &st);

  /*  Calculate the integral int_0^1(f(y,t_j)*A_{yj}(x,t)dy) by midpoint */
  /*  integration rule */
  /*  the spatial integration of all points y at time t_j */
  i22 = a->size[0] * a->size[1];
  a->size[0] = 1;
  emxEnsureCapacity(&st, (emxArray__common *)a, i22, (int32_T)sizeof(real_T),
                    &o_emlrtRTEI);
  unnamed_idx_1 = spacePoints->size[1];
  i22 = a->size[0] * a->size[1];
  a->size[1] = unnamed_idx_1;
  emxEnsureCapacity(&st, (emxArray__common *)a, i22, (int32_T)sizeof(real_T),
                    &o_emlrtRTEI);
  unnamed_idx_1 = spacePoints->size[1];
  for (i22 = 0; i22 < unnamed_idx_1; i22++) {
    a->data[i22] = 0.0;
  }

  vals = 0.0;
  unnamed_idx_1 = spacePoints->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, unnamed_idx_1, &jb_emlrtBCI, &st);
  i22 = spacePoints->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i22, &ib_emlrtBCI, &st);
  b_st.site = &q_emlrtRSI;
  a->data[0] = Acoeff(&b_st, spacePoints->data[0], 1.0, spacePoints->data
                      [(int32_T)k - 1], t, timePoints);
  aIdx = 2;
  while (aIdx - 2 <= spacePoints->size[1] - 2) {
    i22 = a->size[1];
    unnamed_idx_1 = spacePoints->size[1];
    b_st.site = &r_emlrtRSI;
    a->data[emlrtDynamicBoundsCheckFastR2012b(aIdx, 1, i22, &nb_emlrtBCI, &st) -
      1] = Acoeff(&b_st, spacePoints->data[emlrtDynamicBoundsCheckFastR2012b
                  (aIdx, 1, unnamed_idx_1, &mb_emlrtBCI, &st) - 1], 1.0,
                  spacePoints->data[(int32_T)k - 1], t, timePoints);
    i22 = f->size[1];
    emlrtDynamicBoundsCheckFastR2012b(aIdx, 1, i22, &pb_emlrtBCI, &st);
    i22 = f->size[1];
    unnamed_idx_1 = aIdx - 1;
    emlrtDynamicBoundsCheckFastR2012b(unnamed_idx_1, 1, i22, &rb_emlrtBCI, &st);
    i22 = a->size[1];
    unnamed_idx_1 = a->size[1];
    i23 = aIdx - 1;
    i24 = spacePoints->size[1];
    i25 = spacePoints->size[1];
    i26 = aIdx - 1;
    vals += 0.5 * (a->data[emlrtDynamicBoundsCheckFastR2012b(aIdx, 1, i22,
      &ob_emlrtBCI, &st) - 1] * f->data[f->size[0] * (aIdx - 1)] + a->
                   data[emlrtDynamicBoundsCheckFastR2012b(i23, 1, unnamed_idx_1,
      &qb_emlrtBCI, &st) - 1] * f->data[f->size[0] * (aIdx - 2)]) *
      (spacePoints->data[emlrtDynamicBoundsCheckFastR2012b(aIdx, 1, i24,
        &sb_emlrtBCI, &st) - 1] - spacePoints->
       data[emlrtDynamicBoundsCheckFastR2012b(i26, 1, i25, &tb_emlrtBCI, &st) -
       1]);
    aIdx++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &st);
  }

  emxFree_real_T(&a);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return vals;
}

void b_Done(const emlrtStack *sp, real_T k, const real_T spacePoints[3], const
            emxArray_real_T *t, const emxArray_real_T *timePoints, const
            emxArray_real_T *f, emxArray_real_T *vals)
{
  int32_T t_idx_0;
  int32_T i47;
  int32_T j;
  int32_T i;
  real_T a[3];
  real_T b_vals;
  int32_T i48;
  int32_T i49;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  t_idx_0 = t->size[1];
  i47 = vals->size[0] * vals->size[1];
  vals->size[0] = t_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)vals, i47, (int32_T)sizeof(real_T),
                    &o_emlrtRTEI);
  t_idx_0 = t->size[1];
  i47 = vals->size[0] * vals->size[1];
  vals->size[1] = t_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)vals, i47, (int32_T)sizeof(real_T),
                    &o_emlrtRTEI);
  t_idx_0 = t->size[1] * t->size[1];
  for (i47 = 0; i47 < t_idx_0; i47++) {
    vals->data[i47] = 0.0;
  }

  j = 0;
  while (j <= t->size[1] - 1) {
    i = 0;
    while (i <= t->size[1] - 1) {
      st.site = &nd_emlrtRSI;
      i47 = t->size[1];
      t_idx_0 = i + 1;
      emlrtDynamicBoundsCheckFastR2012b(t_idx_0, 1, i47, &me_emlrtBCI, &st);
      i47 = f->size[0];
      t_idx_0 = i + 1;
      emlrtDynamicBoundsCheckFastR2012b(t_idx_0, 1, i47, &xb_emlrtBCI, &st);

      /*  Calculate the integral int_0^1(f(y,t_j)*A_{yj}(x,t)dy) by midpoint */
      /*  integration rule */
      /*  the spatial integration of all points y at time t_j */
      for (i47 = 0; i47 < 3; i47++) {
        a[i47] = 0.0;
      }

      b_vals = 0.0;
      b_st.site = &q_emlrtRSI;
      a[0] = Acoeff(&b_st, spacePoints[0], 1.0 + (real_T)j, spacePoints[(int32_T)
                    k - 1], t->data[i], timePoints);
      for (t_idx_0 = 0; t_idx_0 < 2; t_idx_0++) {
        b_st.site = &r_emlrtRSI;
        a[t_idx_0 + 1] = Acoeff(&b_st, spacePoints[t_idx_0 + 1], 1.0 + (real_T)j,
          spacePoints[(int32_T)k - 1], t->data[i], timePoints);
        b_vals += 0.5 * (a[t_idx_0 + 1] + a[t_idx_0]) * (spacePoints[t_idx_0 + 1]
          - spacePoints[t_idx_0]);
        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &st);
      }

      i47 = vals->size[0];
      t_idx_0 = 1 + j;
      i48 = vals->size[1];
      i49 = 1 + i;
      vals->data[(emlrtDynamicBoundsCheckFastR2012b(t_idx_0, 1, i47,
        &ne_emlrtBCI, sp) + vals->size[0] * (emlrtDynamicBoundsCheckFastR2012b
        (i49, 1, i48, &oe_emlrtBCI, sp) - 1)) - 1] = b_vals;
      i++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    j++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }
}

/* End of code generation (Done.c) */

/*
 * Done.c
 *
 * Code generation for function 'Done'
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
#include "BoundaryElementHeatEquation_data.h"

/* Variable Definitions */
static emlrtRSInfo md_emlrtRSI = { 6, "Done",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Done.m" };

static emlrtRTEInfo p_emlrtRTEI = { 2, 17, "Done",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Done.m" };

static emlrtDCInfo f_emlrtDCI = { 6, 42, "Done",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Done.m", 1 };

static emlrtBCInfo vb_emlrtBCI = { -1, -1, 6, 42, "spacePoints", "Done",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Done.m", 0 };

static emlrtBCInfo wb_emlrtBCI = { -1, -1, 6, 75, "f", "Done",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Done.m", 0 };

static emlrtBCInfo gf_emlrtBCI = { -1, -1, 6, 14, "vals", "Done",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Done.m", 0 };

static emlrtBCInfo hf_emlrtBCI = { -1, -1, 6, 16, "vals", "Done",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Done.m", 0 };

static emlrtBCInfo if_emlrtBCI = { -1, -1, 6, 57, "t", "Done",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Done.m", 0 };

/* Function Definitions */
real_T Done(const emlrtStack *sp, real_T k, const emxArray_real_T *spacePoints,
            real_T t, const emxArray_real_T *timePoints, const emxArray_real_T
            *f)
{
  real_T vals;
  emxArray_real_T *a;
  int32_T i18;
  int32_T unnamed_idx_1;
  int32_T aIdx;
  int32_T i19;
  int32_T i20;
  int32_T i21;
  int32_T i22;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &a, 2, &f_emlrtRTEI, true);
  i18 = f->size[0];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i18, &wb_emlrtBCI, sp);
  st.site = &md_emlrtRSI;
  i18 = spacePoints->size[1];
  unnamed_idx_1 = (int32_T)emlrtIntegerCheckFastR2012b(k, &f_emlrtDCI, &st);
  emlrtDynamicBoundsCheckFastR2012b(unnamed_idx_1, 1, i18, &vb_emlrtBCI, &st);

  /*  Calculate the integral int_0^1(f(y,t_j)*A_{yj}(x,t)dy) by midpoint */
  /*  integration rule */
  /*  the spatial integration of all points y at time t_j */
  i18 = a->size[0] * a->size[1];
  a->size[0] = 1;
  emxEnsureCapacity(&st, (emxArray__common *)a, i18, (int32_T)sizeof(real_T),
                    &p_emlrtRTEI);
  unnamed_idx_1 = spacePoints->size[1];
  i18 = a->size[0] * a->size[1];
  a->size[1] = unnamed_idx_1;
  emxEnsureCapacity(&st, (emxArray__common *)a, i18, (int32_T)sizeof(real_T),
                    &p_emlrtRTEI);
  unnamed_idx_1 = spacePoints->size[1];
  for (i18 = 0; i18 < unnamed_idx_1; i18++) {
    a->data[i18] = 0.0;
  }

  vals = 0.0;
  unnamed_idx_1 = spacePoints->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, unnamed_idx_1, &ib_emlrtBCI, &st);
  i18 = spacePoints->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i18, &hb_emlrtBCI, &st);
  b_st.site = &p_emlrtRSI;
  a->data[0] = Acoeff(&b_st, spacePoints->data[0], 1.0, spacePoints->data
                      [(int32_T)k - 1], t, timePoints);
  aIdx = 2;
  while (aIdx - 2 <= spacePoints->size[1] - 2) {
    i18 = a->size[1];
    unnamed_idx_1 = spacePoints->size[1];
    b_st.site = &q_emlrtRSI;
    a->data[emlrtDynamicBoundsCheckFastR2012b(aIdx, 1, i18, &mb_emlrtBCI, &st) -
      1] = Acoeff(&b_st, spacePoints->data[emlrtDynamicBoundsCheckFastR2012b
                  (aIdx, 1, unnamed_idx_1, &lb_emlrtBCI, &st) - 1], 1.0,
                  spacePoints->data[(int32_T)k - 1], t, timePoints);
    i18 = f->size[1];
    emlrtDynamicBoundsCheckFastR2012b(aIdx, 1, i18, &ob_emlrtBCI, &st);
    i18 = f->size[1];
    unnamed_idx_1 = aIdx - 1;
    emlrtDynamicBoundsCheckFastR2012b(unnamed_idx_1, 1, i18, &qb_emlrtBCI, &st);
    i18 = a->size[1];
    unnamed_idx_1 = a->size[1];
    i19 = aIdx - 1;
    i20 = spacePoints->size[1];
    i21 = spacePoints->size[1];
    i22 = aIdx - 1;
    vals += 0.5 * (a->data[emlrtDynamicBoundsCheckFastR2012b(aIdx, 1, i18,
      &nb_emlrtBCI, &st) - 1] * f->data[f->size[0] * (aIdx - 1)] + a->
                   data[emlrtDynamicBoundsCheckFastR2012b(i19, 1, unnamed_idx_1,
      &pb_emlrtBCI, &st) - 1] * f->data[f->size[0] * (aIdx - 2)]) *
      (spacePoints->data[emlrtDynamicBoundsCheckFastR2012b(aIdx, 1, i20,
        &rb_emlrtBCI, &st) - 1] - spacePoints->
       data[emlrtDynamicBoundsCheckFastR2012b(i22, 1, i21, &sb_emlrtBCI, &st) -
       1]);
    aIdx++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &st);
  }

  emxFree_real_T(&a);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return vals;
}

void b_Done(const emlrtStack *sp, real_T k, const emxArray_real_T *spacePoints,
            const emxArray_real_T *t, const emxArray_real_T *timePoints, const
            emxArray_real_T *f, emxArray_real_T *vals)
{
  int32_T t_idx_0;
  int32_T i66;
  int32_T j;
  emxArray_real_T *b_f;
  int32_T i;
  int32_T b_i;
  int32_T i67;
  int32_T i68;
  int32_T i69;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  t_idx_0 = t->size[1];
  i66 = vals->size[0] * vals->size[1];
  vals->size[0] = t_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)vals, i66, (int32_T)sizeof(real_T),
                    &p_emlrtRTEI);
  t_idx_0 = t->size[1];
  i66 = vals->size[0] * vals->size[1];
  vals->size[1] = t_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)vals, i66, (int32_T)sizeof(real_T),
                    &p_emlrtRTEI);
  t_idx_0 = t->size[1] * t->size[1];
  for (i66 = 0; i66 < t_idx_0; i66++) {
    vals->data[i66] = 0.0;
  }

  j = 0;
  emxInit_real_T(sp, &b_f, 2, &p_emlrtRTEI, true);
  while (j <= t->size[1] - 1) {
    i = 1;
    while (i - 1 <= t->size[1] - 1) {
      t_idx_0 = f->size[1];
      i66 = f->size[0];
      b_i = emlrtDynamicBoundsCheckFastR2012b(i, 1, i66, &wb_emlrtBCI, sp);
      i66 = b_f->size[0] * b_f->size[1];
      b_f->size[0] = 1;
      b_f->size[1] = t_idx_0;
      emxEnsureCapacity(sp, (emxArray__common *)b_f, i66, (int32_T)sizeof(real_T),
                        &p_emlrtRTEI);
      for (i66 = 0; i66 < t_idx_0; i66++) {
        b_f->data[b_f->size[0] * i66] = f->data[(b_i + f->size[0] * i66) - 1];
      }

      i66 = vals->size[0];
      t_idx_0 = 1 + j;
      b_i = vals->size[1];
      i67 = spacePoints->size[1];
      i68 = (int32_T)k;
      i69 = t->size[1];
      st.site = &md_emlrtRSI;
      vals->data[(emlrtDynamicBoundsCheckFastR2012b(t_idx_0, 1, i66,
        &gf_emlrtBCI, sp) + vals->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i,
        1, b_i, &hf_emlrtBCI, sp) - 1)) - 1] = d_Dcoeff(&st, spacePoints, 1.0 +
        (real_T)j, spacePoints->data[emlrtDynamicBoundsCheckFastR2012b(i68, 1,
        i67, &vb_emlrtBCI, sp) - 1], t->data[emlrtDynamicBoundsCheckFastR2012b(i,
        1, i69, &if_emlrtBCI, sp) - 1], timePoints, b_f);
      i++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    j++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&b_f);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (Done.c) */

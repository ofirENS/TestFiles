/*
 * Dcoeff.c
 *
 * Code generation for function 'Dcoeff'
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
static emlrtRTEInfo e_emlrtRTEI = { 1, 17, "Dcoeff",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Dcoeff.m" };

static emlrtECInfo c_emlrtECI = { -1, 7, 1, "Dcoeff",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Dcoeff.m" };

static emlrtBCInfo jb_emlrtBCI = { -1, -1, 7, 1,
  "a(1) = Acoeff(y(1),j,x,t,timePoints)", "Dcoeff",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Dcoeff.m", 0 };

static emlrtECInfo d_emlrtECI = { -1, 9, 5, "Dcoeff",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Dcoeff.m" };

static emlrtBCInfo kb_emlrtBCI = { -1, -1, 9, 5,
  "a(aIdx) = Acoeff(y(aIdx),j,x,t,timePoints)", "Dcoeff",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Dcoeff.m", 0 };

/* Function Definitions */
real_T Dcoeff(const emlrtStack *sp, const emxArray_real_T *y, real_T j, const
              emxArray_real_T *x, real_T t, const emxArray_real_T *timePoints,
              const emxArray_real_T *f)
{
  real_T vals;
  emxArray_real_T *a;
  int32_T i7;
  int32_T unnamed_idx_1;
  emxArray_real_T *r7;
  int32_T i8;
  int32_T i9;
  int32_T i10;
  int32_T i11;
  int32_T i12;
  int32_T i13;
  int32_T i14;
  int32_T i15;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &a, 2, &f_emlrtRTEI, true);

  /*  Calculate the integral int_0^1(f(y,t_j)*A_{yj}(x,t)dy) by midpoint */
  /*  integration rule */
  /*  the spatial integration of all points y at time t_j */
  i7 = a->size[0] * a->size[1];
  a->size[0] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)a, i7, (int32_T)sizeof(real_T),
                    &e_emlrtRTEI);
  unnamed_idx_1 = y->size[1];
  i7 = a->size[0] * a->size[1];
  a->size[1] = unnamed_idx_1;
  emxEnsureCapacity(sp, (emxArray__common *)a, i7, (int32_T)sizeof(real_T),
                    &e_emlrtRTEI);
  unnamed_idx_1 = y->size[1];
  for (i7 = 0; i7 < unnamed_idx_1; i7++) {
    a->data[i7] = 0.0;
  }

  emxInit_real_T(sp, &r7, 2, &e_emlrtRTEI, true);
  vals = 0.0;
  i7 = y->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i7, &hb_emlrtBCI, sp);
  st.site = &p_emlrtRSI;
  b_Acoeff(&st, y->data[0], j, x, t, timePoints, r7);
  i7 = r7->size[1];
  emlrtSizeEqCheck1DFastR2012b(1, i7, &c_emlrtECI, sp);
  unnamed_idx_1 = y->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, unnamed_idx_1, &ib_emlrtBCI, sp);
  i7 = r7->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i7, &jb_emlrtBCI, sp);
  a->data[0] = r7->data[0];
  unnamed_idx_1 = 2;
  while (unnamed_idx_1 - 2 <= y->size[1] - 2) {
    i7 = y->size[1];
    st.site = &q_emlrtRSI;
    b_Acoeff(&st, y->data[emlrtDynamicBoundsCheckFastR2012b(unnamed_idx_1, 1, i7,
              &lb_emlrtBCI, sp) - 1], j, x, t, timePoints, r7);
    i7 = r7->size[1];
    emlrtSizeEqCheck1DFastR2012b(1, i7, &d_emlrtECI, sp);
    i7 = r7->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i7, &kb_emlrtBCI, sp);
    i7 = a->size[1];
    a->data[emlrtDynamicBoundsCheckFastR2012b(unnamed_idx_1, 1, i7, &mb_emlrtBCI,
      sp) - 1] = r7->data[0];
    i7 = a->size[1];
    i8 = f->size[1];
    i9 = a->size[1];
    i10 = unnamed_idx_1 - 1;
    i11 = f->size[1];
    i12 = unnamed_idx_1 - 1;
    i13 = y->size[1];
    i14 = y->size[1];
    i15 = unnamed_idx_1 - 1;
    vals += 0.5 * (a->data[emlrtDynamicBoundsCheckFastR2012b(unnamed_idx_1, 1,
      i7, &nb_emlrtBCI, sp) - 1] * f->data[emlrtDynamicBoundsCheckFastR2012b
                   (unnamed_idx_1, 1, i8, &ob_emlrtBCI, sp) - 1] + a->
                   data[emlrtDynamicBoundsCheckFastR2012b(i10, 1, i9,
      &pb_emlrtBCI, sp) - 1] * f->data[emlrtDynamicBoundsCheckFastR2012b(i12, 1,
      i11, &qb_emlrtBCI, sp) - 1]) * (y->data[emlrtDynamicBoundsCheckFastR2012b
      (unnamed_idx_1, 1, i13, &rb_emlrtBCI, sp) - 1] - y->
      data[emlrtDynamicBoundsCheckFastR2012b(i15, 1, i14, &sb_emlrtBCI, sp) - 1]);
    unnamed_idx_1++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&r7);
  emxFree_real_T(&a);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return vals;
}

real_T b_Dcoeff(const emlrtStack *sp, const emxArray_real_T *y, real_T j, real_T
                t, const emxArray_real_T *timePoints, const emxArray_real_T *f)
{
  real_T vals;
  emxArray_real_T *a;
  int32_T i36;
  int32_T unnamed_idx_1;
  int32_T i37;
  int32_T i38;
  int32_T i39;
  int32_T i40;
  int32_T i41;
  int32_T i42;
  int32_T i43;
  int32_T i44;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &a, 2, &f_emlrtRTEI, true);

  /*  Calculate the integral int_0^1(f(y,t_j)*A_{yj}(x,t)dy) by midpoint */
  /*  integration rule */
  /*  the spatial integration of all points y at time t_j */
  i36 = a->size[0] * a->size[1];
  a->size[0] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)a, i36, (int32_T)sizeof(real_T),
                    &e_emlrtRTEI);
  unnamed_idx_1 = y->size[1];
  i36 = a->size[0] * a->size[1];
  a->size[1] = unnamed_idx_1;
  emxEnsureCapacity(sp, (emxArray__common *)a, i36, (int32_T)sizeof(real_T),
                    &e_emlrtRTEI);
  unnamed_idx_1 = y->size[1];
  for (i36 = 0; i36 < unnamed_idx_1; i36++) {
    a->data[i36] = 0.0;
  }

  vals = 0.0;
  unnamed_idx_1 = y->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, unnamed_idx_1, &ib_emlrtBCI, sp);
  i36 = y->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i36, &hb_emlrtBCI, sp);
  st.site = &p_emlrtRSI;
  a->data[0] = Acoeff(&st, y->data[0], j, 0.0, t, timePoints);
  unnamed_idx_1 = 2;
  while (unnamed_idx_1 - 2 <= y->size[1] - 2) {
    i36 = a->size[1];
    i37 = y->size[1];
    st.site = &q_emlrtRSI;
    a->data[emlrtDynamicBoundsCheckFastR2012b(unnamed_idx_1, 1, i36,
      &mb_emlrtBCI, sp) - 1] = Acoeff(&st, y->
      data[emlrtDynamicBoundsCheckFastR2012b(unnamed_idx_1, 1, i37, &lb_emlrtBCI,
      sp) - 1], j, 0.0, t, timePoints);
    i36 = a->size[1];
    i37 = f->size[1];
    i38 = a->size[1];
    i39 = unnamed_idx_1 - 1;
    i40 = f->size[1];
    i41 = unnamed_idx_1 - 1;
    i42 = y->size[1];
    i43 = y->size[1];
    i44 = unnamed_idx_1 - 1;
    vals += 0.5 * (a->data[emlrtDynamicBoundsCheckFastR2012b(unnamed_idx_1, 1,
      i36, &nb_emlrtBCI, sp) - 1] * f->data[emlrtDynamicBoundsCheckFastR2012b
                   (unnamed_idx_1, 1, i37, &ob_emlrtBCI, sp) - 1] + a->
                   data[emlrtDynamicBoundsCheckFastR2012b(i39, 1, i38,
      &pb_emlrtBCI, sp) - 1] * f->data[emlrtDynamicBoundsCheckFastR2012b(i41, 1,
      i40, &qb_emlrtBCI, sp) - 1]) * (y->data[emlrtDynamicBoundsCheckFastR2012b
      (unnamed_idx_1, 1, i42, &rb_emlrtBCI, sp) - 1] - y->
      data[emlrtDynamicBoundsCheckFastR2012b(i44, 1, i43, &sb_emlrtBCI, sp) - 1]);
    unnamed_idx_1++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&a);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return vals;
}

real_T c_Dcoeff(const emlrtStack *sp, const emxArray_real_T *y, real_T j, real_T
                t, const emxArray_real_T *timePoints, const emxArray_real_T *f)
{
  real_T vals;
  emxArray_real_T *a;
  int32_T i45;
  int32_T unnamed_idx_1;
  int32_T i46;
  int32_T i47;
  int32_T i48;
  int32_T i49;
  int32_T i50;
  int32_T i51;
  int32_T i52;
  int32_T i53;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &a, 2, &f_emlrtRTEI, true);

  /*  Calculate the integral int_0^1(f(y,t_j)*A_{yj}(x,t)dy) by midpoint */
  /*  integration rule */
  /*  the spatial integration of all points y at time t_j */
  i45 = a->size[0] * a->size[1];
  a->size[0] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)a, i45, (int32_T)sizeof(real_T),
                    &e_emlrtRTEI);
  unnamed_idx_1 = y->size[1];
  i45 = a->size[0] * a->size[1];
  a->size[1] = unnamed_idx_1;
  emxEnsureCapacity(sp, (emxArray__common *)a, i45, (int32_T)sizeof(real_T),
                    &e_emlrtRTEI);
  unnamed_idx_1 = y->size[1];
  for (i45 = 0; i45 < unnamed_idx_1; i45++) {
    a->data[i45] = 0.0;
  }

  vals = 0.0;
  unnamed_idx_1 = y->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, unnamed_idx_1, &ib_emlrtBCI, sp);
  i45 = y->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i45, &hb_emlrtBCI, sp);
  st.site = &p_emlrtRSI;
  a->data[0] = Acoeff(&st, y->data[0], j, 1.0, t, timePoints);
  unnamed_idx_1 = 2;
  while (unnamed_idx_1 - 2 <= y->size[1] - 2) {
    i45 = a->size[1];
    i46 = y->size[1];
    st.site = &q_emlrtRSI;
    a->data[emlrtDynamicBoundsCheckFastR2012b(unnamed_idx_1, 1, i45,
      &mb_emlrtBCI, sp) - 1] = Acoeff(&st, y->
      data[emlrtDynamicBoundsCheckFastR2012b(unnamed_idx_1, 1, i46, &lb_emlrtBCI,
      sp) - 1], j, 1.0, t, timePoints);
    i45 = a->size[1];
    i46 = f->size[1];
    i47 = a->size[1];
    i48 = unnamed_idx_1 - 1;
    i49 = f->size[1];
    i50 = unnamed_idx_1 - 1;
    i51 = y->size[1];
    i52 = y->size[1];
    i53 = unnamed_idx_1 - 1;
    vals += 0.5 * (a->data[emlrtDynamicBoundsCheckFastR2012b(unnamed_idx_1, 1,
      i45, &nb_emlrtBCI, sp) - 1] * f->data[emlrtDynamicBoundsCheckFastR2012b
                   (unnamed_idx_1, 1, i46, &ob_emlrtBCI, sp) - 1] + a->
                   data[emlrtDynamicBoundsCheckFastR2012b(i48, 1, i47,
      &pb_emlrtBCI, sp) - 1] * f->data[emlrtDynamicBoundsCheckFastR2012b(i50, 1,
      i49, &qb_emlrtBCI, sp) - 1]) * (y->data[emlrtDynamicBoundsCheckFastR2012b
      (unnamed_idx_1, 1, i51, &rb_emlrtBCI, sp) - 1] - y->
      data[emlrtDynamicBoundsCheckFastR2012b(i53, 1, i52, &sb_emlrtBCI, sp) - 1]);
    unnamed_idx_1++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&a);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return vals;
}

real_T d_Dcoeff(const emlrtStack *sp, const emxArray_real_T *y, real_T j, real_T
                x, real_T t, const emxArray_real_T *timePoints, const
                emxArray_real_T *f)
{
  real_T vals;
  emxArray_real_T *a;
  int32_T i70;
  int32_T unnamed_idx_1;
  int32_T i71;
  int32_T i72;
  int32_T i73;
  int32_T i74;
  int32_T i75;
  int32_T i76;
  int32_T i77;
  int32_T i78;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &a, 2, &f_emlrtRTEI, true);

  /*  Calculate the integral int_0^1(f(y,t_j)*A_{yj}(x,t)dy) by midpoint */
  /*  integration rule */
  /*  the spatial integration of all points y at time t_j */
  i70 = a->size[0] * a->size[1];
  a->size[0] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)a, i70, (int32_T)sizeof(real_T),
                    &e_emlrtRTEI);
  unnamed_idx_1 = y->size[1];
  i70 = a->size[0] * a->size[1];
  a->size[1] = unnamed_idx_1;
  emxEnsureCapacity(sp, (emxArray__common *)a, i70, (int32_T)sizeof(real_T),
                    &e_emlrtRTEI);
  unnamed_idx_1 = y->size[1];
  for (i70 = 0; i70 < unnamed_idx_1; i70++) {
    a->data[i70] = 0.0;
  }

  vals = 0.0;
  unnamed_idx_1 = y->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, unnamed_idx_1, &ib_emlrtBCI, sp);
  i70 = y->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i70, &hb_emlrtBCI, sp);
  st.site = &p_emlrtRSI;
  a->data[0] = Acoeff(&st, y->data[0], j, x, t, timePoints);
  unnamed_idx_1 = 2;
  while (unnamed_idx_1 - 2 <= y->size[1] - 2) {
    i70 = a->size[1];
    i71 = y->size[1];
    st.site = &q_emlrtRSI;
    a->data[emlrtDynamicBoundsCheckFastR2012b(unnamed_idx_1, 1, i70,
      &mb_emlrtBCI, sp) - 1] = Acoeff(&st, y->
      data[emlrtDynamicBoundsCheckFastR2012b(unnamed_idx_1, 1, i71, &lb_emlrtBCI,
      sp) - 1], j, x, t, timePoints);
    i70 = a->size[1];
    i71 = f->size[1];
    i72 = a->size[1];
    i73 = unnamed_idx_1 - 1;
    i74 = f->size[1];
    i75 = unnamed_idx_1 - 1;
    i76 = y->size[1];
    i77 = y->size[1];
    i78 = unnamed_idx_1 - 1;
    vals += 0.5 * (a->data[emlrtDynamicBoundsCheckFastR2012b(unnamed_idx_1, 1,
      i70, &nb_emlrtBCI, sp) - 1] * f->data[emlrtDynamicBoundsCheckFastR2012b
                   (unnamed_idx_1, 1, i71, &ob_emlrtBCI, sp) - 1] + a->
                   data[emlrtDynamicBoundsCheckFastR2012b(i73, 1, i72,
      &pb_emlrtBCI, sp) - 1] * f->data[emlrtDynamicBoundsCheckFastR2012b(i75, 1,
      i74, &qb_emlrtBCI, sp) - 1]) * (y->data[emlrtDynamicBoundsCheckFastR2012b
      (unnamed_idx_1, 1, i76, &rb_emlrtBCI, sp) - 1] - y->
      data[emlrtDynamicBoundsCheckFastR2012b(i78, 1, i77, &sb_emlrtBCI, sp) - 1]);
    unnamed_idx_1++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&a);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return vals;
}

/* End of code generation (Dcoeff.c) */

/*
 * Bone.c
 *
 * Code generation for function 'Bone'
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
#include "TestBEM_mex_emxutil.h"
#include "TestBEM_mex_data.h"

/* Variable Definitions */
static emlrtRSInfo l_emlrtRSI = { 8, "Bone",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Bone.m" };

static emlrtRSInfo m_emlrtRSI = { 9, "Bone",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Bone.m" };

static emlrtRTEInfo mb_emlrtRTEI = { 1, 17, "Bone",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Bone.m" };

static emlrtBCInfo y_emlrtBCI = { -1, -1, 8, 40, "spacePoints", "Bone",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Bone.m", 0 };

static emlrtDCInfo e_emlrtDCI = { 8, 40, "Bone",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Bone.m", 1 };

static emlrtBCInfo ab_emlrtBCI = { -1, -1, 9, 40, "spacePoints", "Bone",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Bone.m", 0 };

static emlrtDCInfo f_emlrtDCI = { 9, 40, "Bone",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Bone.m", 1 };

static emlrtBCInfo be_emlrtBCI = { -1, -1, 8, 14, "vals", "Bone",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Bone.m", 0 };

static emlrtBCInfo ce_emlrtBCI = { -1, -1, 8, 55, "t", "Bone",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Bone.m", 0 };

static emlrtBCInfo de_emlrtBCI = { -1, -1, 9, 55, "t", "Bone",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Bone.m", 0 };

static emlrtBCInfo ee_emlrtBCI = { -1, -1, 8, 16, "vals", "Bone",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Bone.m", 0 };

/* Function Definitions */
void Bone(const emlrtStack *sp, real_T k, const emxArray_real_T *spacePoints,
          real_T t, const emxArray_real_T *timePoints, real_T vals[2])
{
  int32_T i5;
  int32_T i6;
  real_T d2;
  real_T d3;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /*  Calculate the matrix Aone for a specific space point x_k, for all times */
  /*  t_i in A */
  /*  points x_k=1:numel(spacePoints) */
  i5 = spacePoints->size[1];
  i6 = (int32_T)emlrtIntegerCheckFastR2012b(k, &e_emlrtDCI, sp);
  st.site = &l_emlrtRSI;
  d2 = Bcoeff(&st, 0.0, 1.0, spacePoints->data[emlrtDynamicBoundsCheckFastR2012b
              (i6, 1, i5, &y_emlrtBCI, sp) - 1], t, timePoints);
  i5 = spacePoints->size[1];
  i6 = (int32_T)emlrtIntegerCheckFastR2012b(k, &f_emlrtDCI, sp);
  st.site = &m_emlrtRSI;
  d3 = Bcoeff(&st, 1.0, 1.0, spacePoints->data[emlrtDynamicBoundsCheckFastR2012b
              (i6, 1, i5, &ab_emlrtBCI, sp) - 1], t, timePoints);
  vals[0] = d2;
  vals[1] = d3;
}

void b_Bone(const emlrtStack *sp, real_T k, const real_T spacePoints[3], const
            emxArray_real_T *t, const emxArray_real_T *timePoints,
            emxArray_real_T *vals)
{
  int32_T t_idx_0;
  int32_T i37;
  int32_T i;
  int32_T b_vals;
  real_T d10;
  int32_T c_vals;
  real_T d11;
  real_T d12;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /*  Calculate the matrix Aone for a specific space point x_k, for all times */
  /*  t_i in A */
  /*  points x_k=1:numel(spacePoints) */
  t_idx_0 = t->size[1];
  i37 = vals->size[0] * vals->size[1];
  vals->size[0] = t_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)vals, i37, (int32_T)sizeof(real_T),
                    &mb_emlrtRTEI);
  t_idx_0 = (int32_T)(2.0 * (real_T)t->size[1]);
  i37 = vals->size[0] * vals->size[1];
  vals->size[1] = t_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)vals, i37, (int32_T)sizeof(real_T),
                    &mb_emlrtRTEI);
  t_idx_0 = t->size[1] * (int32_T)(2.0 * (real_T)t->size[1]);
  for (i37 = 0; i37 < t_idx_0; i37++) {
    vals->data[i37] = 0.0;
  }

  t_idx_0 = 0;
  while (t_idx_0 <= t->size[1] - 1) {
    i = 0;
    while (i <= t->size[1] - 1) {
      b_vals = vals->size[0];
      d10 = 2.0 * (1.0 + (real_T)i);
      c_vals = vals->size[1];
      i37 = 1 + t_idx_0;
      emlrtDynamicBoundsCheckFastR2012b(i37, 1, b_vals, &be_emlrtBCI, sp);
      i37 = t->size[1];
      st.site = &l_emlrtRSI;
      d11 = Bcoeff(&st, 0.0, 1.0 + (real_T)t_idx_0, spacePoints[(int32_T)k - 1],
                   t->data[emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, i37,
        &ce_emlrtBCI, sp) - 1], timePoints);
      i37 = t->size[1];
      st.site = &m_emlrtRSI;
      d12 = Bcoeff(&st, 1.0, 1.0 + (real_T)t_idx_0, spacePoints[(int32_T)k - 1],
                   t->data[emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, i37,
        &de_emlrtBCI, sp) - 1], timePoints);
      i37 = (int32_T)(d10 + -1.0);
      vals->data[t_idx_0 + vals->size[0] * (emlrtDynamicBoundsCheckFastR2012b
        (i37, 1, c_vals, &ee_emlrtBCI, sp) - 1)] = d11;
      i37 = (int32_T)d10;
      vals->data[t_idx_0 + vals->size[0] * (emlrtDynamicBoundsCheckFastR2012b
        (i37, 1, c_vals, &ee_emlrtBCI, sp) - 1)] = d12;
      i++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    t_idx_0++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }
}

/* End of code generation (Bone.c) */

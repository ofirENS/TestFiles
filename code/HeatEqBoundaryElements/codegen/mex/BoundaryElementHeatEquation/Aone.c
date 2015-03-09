/*
 * Aone.c
 *
 * Code generation for function 'Aone'
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
static emlrtRSInfo g_emlrtRSI = { 8, "Aone",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Aone.m" };

static emlrtRSInfo h_emlrtRSI = { 9, "Aone",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Aone.m" };

static emlrtRTEInfo lb_emlrtRTEI = { 1, 17, "Aone",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Aone.m" };

static emlrtBCInfo n_emlrtBCI = { -1, -1, 8, 40, "spacePoints", "Aone",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Aone.m", 0 };

static emlrtDCInfo b_emlrtDCI = { 8, 40, "Aone",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Aone.m", 1 };

static emlrtBCInfo o_emlrtBCI = { -1, -1, 9, 40, "spacePoints", "Aone",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Aone.m", 0 };

static emlrtDCInfo c_emlrtDCI = { 9, 40, "Aone",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Aone.m", 1 };

static emlrtBCInfo wd_emlrtBCI = { -1, -1, 8, 14, "vals", "Aone",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Aone.m", 0 };

static emlrtBCInfo xd_emlrtBCI = { -1, -1, 8, 55, "t", "Aone",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Aone.m", 0 };

static emlrtBCInfo yd_emlrtBCI = { -1, -1, 9, 55, "t", "Aone",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Aone.m", 0 };

static emlrtBCInfo ae_emlrtBCI = { -1, -1, 8, 16, "vals", "Aone",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Aone.m", 0 };

/* Function Definitions */
void Aone(const emlrtStack *sp, real_T k, const emxArray_real_T *spacePoints,
          real_T t, const emxArray_real_T *timePoints, real_T vals[2])
{
  int32_T i1;
  int32_T i2;
  real_T d0;
  real_T d1;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /*  calculate the matrix Aone for a specific space point x_k, for all times */
  /*  t_i in A */
  /*  points x_k=1:numel(spacePoints) */
  i1 = spacePoints->size[1];
  i2 = (int32_T)emlrtIntegerCheckFastR2012b(k, &b_emlrtDCI, sp);
  st.site = &g_emlrtRSI;
  d0 = Acoeff(&st, 0.0, 1.0, spacePoints->data[emlrtDynamicBoundsCheckFastR2012b
              (i2, 1, i1, &n_emlrtBCI, sp) - 1], t, timePoints);
  i1 = spacePoints->size[1];
  i2 = (int32_T)emlrtIntegerCheckFastR2012b(k, &c_emlrtDCI, sp);
  st.site = &h_emlrtRSI;
  d1 = Acoeff(&st, 1.0, 1.0, spacePoints->data[emlrtDynamicBoundsCheckFastR2012b
              (i2, 1, i1, &o_emlrtBCI, sp) - 1], t, timePoints);
  vals[0] = d0;
  vals[1] = d1;
}

void b_Aone(const emlrtStack *sp, real_T k, const real_T spacePoints[3], const
            emxArray_real_T *t, const emxArray_real_T *timePoints,
            emxArray_real_T *vals)
{
  int32_T t_idx_0;
  int32_T i36;
  int32_T i;
  int32_T b_vals;
  real_T d7;
  int32_T c_vals;
  real_T d8;
  real_T d9;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /*  calculate the matrix Aone for a specific space point x_k, for all times */
  /*  t_i in A */
  /*  points x_k=1:numel(spacePoints) */
  t_idx_0 = t->size[1];
  i36 = vals->size[0] * vals->size[1];
  vals->size[0] = t_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)vals, i36, (int32_T)sizeof(real_T),
                    &lb_emlrtRTEI);
  t_idx_0 = (int32_T)(2.0 * (real_T)t->size[1]);
  i36 = vals->size[0] * vals->size[1];
  vals->size[1] = t_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)vals, i36, (int32_T)sizeof(real_T),
                    &lb_emlrtRTEI);
  t_idx_0 = t->size[1] * (int32_T)(2.0 * (real_T)t->size[1]);
  for (i36 = 0; i36 < t_idx_0; i36++) {
    vals->data[i36] = 0.0;
  }

  t_idx_0 = 0;
  while (t_idx_0 <= t->size[1] - 1) {
    i = 0;
    while (i <= t->size[1] - 1) {
      b_vals = vals->size[0];
      d7 = 2.0 * (1.0 + (real_T)i);
      c_vals = vals->size[1];
      i36 = 1 + t_idx_0;
      emlrtDynamicBoundsCheckFastR2012b(i36, 1, b_vals, &wd_emlrtBCI, sp);
      i36 = t->size[1];
      st.site = &g_emlrtRSI;
      d8 = Acoeff(&st, 0.0, 1.0 + (real_T)t_idx_0, spacePoints[(int32_T)k - 1],
                  t->data[emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, i36,
        &xd_emlrtBCI, sp) - 1], timePoints);
      i36 = t->size[1];
      st.site = &h_emlrtRSI;
      d9 = Acoeff(&st, 1.0, 1.0 + (real_T)t_idx_0, spacePoints[(int32_T)k - 1],
                  t->data[emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, i36,
        &yd_emlrtBCI, sp) - 1], timePoints);
      i36 = (int32_T)(d7 + -1.0);
      vals->data[t_idx_0 + vals->size[0] * (emlrtDynamicBoundsCheckFastR2012b
        (i36, 1, c_vals, &ae_emlrtBCI, sp) - 1)] = d8;
      i36 = (int32_T)d7;
      vals->data[t_idx_0 + vals->size[0] * (emlrtDynamicBoundsCheckFastR2012b
        (i36, 1, c_vals, &ae_emlrtBCI, sp) - 1)] = d9;
      i++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    t_idx_0++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }
}

/* End of code generation (Aone.c) */

/*
 * BoneStar.c
 *
 * Code generation for function 'BoneStar'
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
static emlrtRSInfo n_emlrtRSI = { 8, "BoneStar",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\BoneStar.m" };

static emlrtRTEInfo nb_emlrtRTEI = { 1, 17, "BoneStar",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\BoneStar.m" };

static emlrtBCInfo bb_emlrtBCI = { -1, -1, 8, 27, "spacePoints", "BoneStar",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\BoneStar.m", 0 };

static emlrtDCInfo g_emlrtDCI = { 8, 27, "BoneStar",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\BoneStar.m", 1 };

static emlrtBCInfo fe_emlrtBCI = { -1, -1, 9, 14, "vals", "BoneStar",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\BoneStar.m", 0 };

static emlrtBCInfo ge_emlrtBCI = { -1, -1, 8, 42, "t", "BoneStar",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\BoneStar.m", 0 };

static emlrtBCInfo he_emlrtBCI = { -1, -1, 9, 16, "vals", "BoneStar",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\BoneStar.m", 0 };

/* Function Definitions */
void BoneStar(const emlrtStack *sp, real_T k, const emxArray_real_T *spacePoints,
              real_T t, const emxArray_real_T *timePoints, real_T vals[2])
{
  int32_T i7;
  int32_T i8;
  real_T b1ki;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /*  Calculate the matrix Aone for a specific space point x_k, for all times */
  /*  t_i in A */
  /*  points x_k=1:numel(spacePoints) */
  i7 = spacePoints->size[1];
  i8 = (int32_T)emlrtIntegerCheckFastR2012b(k, &g_emlrtDCI, sp);
  st.site = &n_emlrtRSI;
  b1ki = Bcoeff(&st, 1.0, 1.0, spacePoints->
                data[emlrtDynamicBoundsCheckFastR2012b(i8, 1, i7, &bb_emlrtBCI,
    sp) - 1], t, timePoints);
  vals[0] = b1ki;
  vals[1] = -b1ki;
}

void b_BoneStar(const emlrtStack *sp, real_T k, const real_T spacePoints[3],
                const emxArray_real_T *t, const emxArray_real_T *timePoints,
                emxArray_real_T *vals)
{
  int32_T t_idx_0;
  int32_T i38;
  int32_T j;
  int32_T i;
  real_T b1ki;
  real_T d13;
  int32_T b_vals;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /*  Calculate the matrix Aone for a specific space point x_k, for all times */
  /*  t_i in A */
  /*  points x_k=1:numel(spacePoints) */
  t_idx_0 = t->size[1];
  i38 = vals->size[0] * vals->size[1];
  vals->size[0] = t_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)vals, i38, (int32_T)sizeof(real_T),
                    &nb_emlrtRTEI);
  t_idx_0 = (int32_T)(2.0 * (real_T)t->size[1]);
  i38 = vals->size[0] * vals->size[1];
  vals->size[1] = t_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)vals, i38, (int32_T)sizeof(real_T),
                    &nb_emlrtRTEI);
  t_idx_0 = t->size[1] * (int32_T)(2.0 * (real_T)t->size[1]);
  for (i38 = 0; i38 < t_idx_0; i38++) {
    vals->data[i38] = 0.0;
  }

  j = 0;
  while (j <= t->size[1] - 1) {
    i = 0;
    while (i <= t->size[1] - 1) {
      i38 = t->size[1];
      t_idx_0 = 1 + i;
      st.site = &n_emlrtRSI;
      b1ki = Bcoeff(&st, 1.0, 1.0 + (real_T)j, spacePoints[(int32_T)k - 1],
                    t->data[emlrtDynamicBoundsCheckFastR2012b(t_idx_0, 1, i38,
        &ge_emlrtBCI, sp) - 1], timePoints);
      t_idx_0 = vals->size[0];
      d13 = 2.0 * (1.0 + (real_T)i);
      b_vals = vals->size[1];
      i38 = 1 + j;
      emlrtDynamicBoundsCheckFastR2012b(i38, 1, t_idx_0, &fe_emlrtBCI, sp);
      i38 = (int32_T)(d13 + -1.0);
      vals->data[j + vals->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i38, 1,
        b_vals, &he_emlrtBCI, sp) - 1)] = b1ki;
      i38 = (int32_T)d13;
      vals->data[j + vals->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i38, 1,
        b_vals, &he_emlrtBCI, sp) - 1)] = -b1ki;
      i++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    j++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }
}

/* End of code generation (BoneStar.c) */

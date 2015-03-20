/*
 * CalculateA1B1B1Star.c
 *
 * Code generation for function 'CalculateA1B1B1Star'
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
static emlrtRSInfo j_emlrtRSI = { 9, "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m"
};

static emlrtRSInfo k_emlrtRSI = { 10, "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m"
};

static emlrtRSInfo l_emlrtRSI = { 13, "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m"
};

static emlrtRSInfo m_emlrtRSI = { 15, "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m"
};

static emlrtRTEInfo pb_emlrtRTEI = { 1, 26, "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m"
};

static emlrtBCInfo w_emlrtBCI = { -1, -1, 9, 40, "spacePoints",
  "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m",
  0 };

static emlrtDCInfo c_emlrtDCI = { 9, 40, "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m",
  1 };

static emlrtBCInfo x_emlrtBCI = { -1, -1, 10, 40, "spacePoints",
  "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m",
  0 };

static emlrtDCInfo d_emlrtDCI = { 10, 40, "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m",
  1 };

static emlrtBCInfo y_emlrtBCI = { -1, -1, 13, 27, "spacePoints",
  "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m",
  0 };

static emlrtBCInfo ab_emlrtBCI = { -1, -1, 15, 40, "spacePoints",
  "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m",
  0 };

static emlrtBCInfo re_emlrtBCI = { -1, -1, 9, 13, "a1k", "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m",
  0 };

static emlrtBCInfo se_emlrtBCI = { -1, -1, 15, 13, "b1k", "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m",
  0 };

static emlrtBCInfo te_emlrtBCI = { -1, -1, 18, 13, "b1s", "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m",
  0 };

static emlrtBCInfo ue_emlrtBCI = { -1, -1, 9, 55, "t", "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m",
  0 };

static emlrtBCInfo ve_emlrtBCI = { -1, -1, 10, 55, "t", "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m",
  0 };

static emlrtBCInfo we_emlrtBCI = { -1, -1, 9, 15, "a1k", "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m",
  0 };

static emlrtBCInfo xe_emlrtBCI = { -1, -1, 13, 42, "t", "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m",
  0 };

static emlrtBCInfo ye_emlrtBCI = { -1, -1, 15, 55, "t", "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m",
  0 };

static emlrtBCInfo af_emlrtBCI = { -1, -1, 15, 15, "b1k", "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m",
  0 };

static emlrtBCInfo bf_emlrtBCI = { -1, -1, 18, 15, "b1s", "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m",
  0 };

/* Function Definitions */
void CalculateA1B1B1Star(const emlrtStack *sp, real_T k, const emxArray_real_T
  *spacePoints, real_T t, const emxArray_real_T *timePoints, real_T a1k[2],
  real_T b1k[2], real_T b1s[2])
{
  int32_T i2;
  int32_T i3;
  real_T d0;
  real_T b1ki;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /*  Calcualte A1 */
  i2 = spacePoints->size[1];
  i3 = (int32_T)emlrtIntegerCheckFastR2012b(k, &c_emlrtDCI, sp);
  st.site = &j_emlrtRSI;
  d0 = Acoeff(&st, 0.0, 1.0, spacePoints->data[emlrtDynamicBoundsCheckFastR2012b
              (i3, 1, i2, &w_emlrtBCI, sp) - 1], t, timePoints);
  i2 = spacePoints->size[1];
  i3 = (int32_T)emlrtIntegerCheckFastR2012b(k, &d_emlrtDCI, sp);
  st.site = &k_emlrtRSI;
  b1ki = Acoeff(&st, 1.0, 1.0, spacePoints->
                data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &x_emlrtBCI,
    sp) - 1], t, timePoints);
  a1k[0] = d0;
  a1k[1] = b1ki;

  /*  Temp b1 */
  i2 = spacePoints->size[1];
  i3 = (int32_T)k;
  st.site = &l_emlrtRSI;
  b1ki = Bcoeff(&st, 1.0, 1.0, spacePoints->
                data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &y_emlrtBCI,
    sp) - 1], t, timePoints);

  /*  calculate B1 */
  i2 = spacePoints->size[1];
  i3 = (int32_T)k;
  st.site = &m_emlrtRSI;
  d0 = Bcoeff(&st, 0.0, 1.0, spacePoints->data[emlrtDynamicBoundsCheckFastR2012b
              (i3, 1, i2, &ab_emlrtBCI, sp) - 1], t, timePoints);
  b1k[0] = d0;
  b1k[1] = b1ki;

  /*  Calculate B1*         */
  b1s[0] = b1ki;
  b1s[1] = -b1ki;
}

void b_CalculateA1B1B1Star(const emlrtStack *sp, real_T k, const emxArray_real_T
  *spacePoints, const emxArray_real_T *t, const emxArray_real_T *timePoints,
  emxArray_real_T *a1k, emxArray_real_T *b1k, emxArray_real_T *b1s)
{
  int32_T t_idx_0;
  int32_T i56;
  int32_T j;
  int32_T i;
  real_T d4;
  int32_T b_a1k;
  int32_T i57;
  real_T d5;
  real_T b1ki;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  t_idx_0 = t->size[1];
  i56 = a1k->size[0] * a1k->size[1];
  a1k->size[0] = t_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)a1k, i56, (int32_T)sizeof(real_T),
                    &pb_emlrtRTEI);
  t_idx_0 = (int32_T)(2.0 * (real_T)t->size[1]);
  i56 = a1k->size[0] * a1k->size[1];
  a1k->size[1] = t_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)a1k, i56, (int32_T)sizeof(real_T),
                    &pb_emlrtRTEI);
  t_idx_0 = t->size[1] * (int32_T)(2.0 * (real_T)t->size[1]);
  for (i56 = 0; i56 < t_idx_0; i56++) {
    a1k->data[i56] = 0.0;
  }

  t_idx_0 = t->size[1];
  i56 = b1k->size[0] * b1k->size[1];
  b1k->size[0] = t_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)b1k, i56, (int32_T)sizeof(real_T),
                    &pb_emlrtRTEI);
  t_idx_0 = (int32_T)(2.0 * (real_T)t->size[1]);
  i56 = b1k->size[0] * b1k->size[1];
  b1k->size[1] = t_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)b1k, i56, (int32_T)sizeof(real_T),
                    &pb_emlrtRTEI);
  t_idx_0 = t->size[1] * (int32_T)(2.0 * (real_T)t->size[1]);
  for (i56 = 0; i56 < t_idx_0; i56++) {
    b1k->data[i56] = 0.0;
  }

  t_idx_0 = t->size[1];
  i56 = b1s->size[0] * b1s->size[1];
  b1s->size[0] = t_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)b1s, i56, (int32_T)sizeof(real_T),
                    &pb_emlrtRTEI);
  t_idx_0 = (int32_T)(2.0 * (real_T)t->size[1]);
  i56 = b1s->size[0] * b1s->size[1];
  b1s->size[1] = t_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)b1s, i56, (int32_T)sizeof(real_T),
                    &pb_emlrtRTEI);
  t_idx_0 = t->size[1] * (int32_T)(2.0 * (real_T)t->size[1]);
  for (i56 = 0; i56 < t_idx_0; i56++) {
    b1s->data[i56] = 0.0;
  }

  j = 0;
  while (j <= t->size[1] - 1) {
    i = 0;
    while (i <= t->size[1] - 1) {
      /*  Calcualte A1 */
      t_idx_0 = a1k->size[0];
      d4 = 2.0 * (1.0 + (real_T)i);
      b_a1k = a1k->size[1];
      i56 = 1 + j;
      emlrtDynamicBoundsCheckFastR2012b(i56, 1, t_idx_0, &re_emlrtBCI, sp);
      i56 = spacePoints->size[1];
      t_idx_0 = (int32_T)k;
      i57 = t->size[1];
      st.site = &j_emlrtRSI;
      d5 = Acoeff(&st, 0.0, 1.0 + (real_T)j, spacePoints->
                  data[emlrtDynamicBoundsCheckFastR2012b(t_idx_0, 1, i56,
        &w_emlrtBCI, sp) - 1], t->data[emlrtDynamicBoundsCheckFastR2012b(i + 1,
        1, i57, &ue_emlrtBCI, sp) - 1], timePoints);
      i56 = spacePoints->size[1];
      t_idx_0 = (int32_T)k;
      i57 = t->size[1];
      st.site = &k_emlrtRSI;
      b1ki = Acoeff(&st, 1.0, 1.0 + (real_T)j, spacePoints->
                    data[emlrtDynamicBoundsCheckFastR2012b(t_idx_0, 1, i56,
        &x_emlrtBCI, sp) - 1], t->data[emlrtDynamicBoundsCheckFastR2012b(i + 1,
        1, i57, &ve_emlrtBCI, sp) - 1], timePoints);
      i56 = (int32_T)(d4 + -1.0);
      a1k->data[j + a1k->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i56, 1,
        b_a1k, &we_emlrtBCI, sp) - 1)] = d5;
      i56 = (int32_T)d4;
      a1k->data[j + a1k->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i56, 1,
        b_a1k, &we_emlrtBCI, sp) - 1)] = b1ki;

      /*  Temp b1 */
      i56 = spacePoints->size[1];
      t_idx_0 = (int32_T)k;
      i57 = t->size[1];
      st.site = &l_emlrtRSI;
      b1ki = Bcoeff(&st, 1.0, 1.0 + (real_T)j, spacePoints->
                    data[emlrtDynamicBoundsCheckFastR2012b(t_idx_0, 1, i56,
        &y_emlrtBCI, sp) - 1], t->data[emlrtDynamicBoundsCheckFastR2012b(i + 1,
        1, i57, &xe_emlrtBCI, sp) - 1], timePoints);

      /*  calculate B1 */
      t_idx_0 = b1k->size[0];
      d4 = 2.0 * (1.0 + (real_T)i);
      b_a1k = b1k->size[1];
      i56 = 1 + j;
      emlrtDynamicBoundsCheckFastR2012b(i56, 1, t_idx_0, &se_emlrtBCI, sp);
      i56 = spacePoints->size[1];
      t_idx_0 = (int32_T)k;
      i57 = t->size[1];
      st.site = &m_emlrtRSI;
      d5 = Bcoeff(&st, 0.0, 1.0 + (real_T)j, spacePoints->
                  data[emlrtDynamicBoundsCheckFastR2012b(t_idx_0, 1, i56,
        &ab_emlrtBCI, sp) - 1], t->data[emlrtDynamicBoundsCheckFastR2012b(i + 1,
        1, i57, &ye_emlrtBCI, sp) - 1], timePoints);
      i56 = (int32_T)(d4 + -1.0);
      b1k->data[j + b1k->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i56, 1,
        b_a1k, &af_emlrtBCI, sp) - 1)] = d5;
      i56 = (int32_T)d4;
      b1k->data[j + b1k->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i56, 1,
        b_a1k, &af_emlrtBCI, sp) - 1)] = b1ki;

      /*  Calculate B1*         */
      t_idx_0 = b1s->size[0];
      d4 = 2.0 * (1.0 + (real_T)i);
      b_a1k = b1s->size[1];
      i56 = 1 + j;
      emlrtDynamicBoundsCheckFastR2012b(i56, 1, t_idx_0, &te_emlrtBCI, sp);
      i56 = (int32_T)(d4 + -1.0);
      b1s->data[j + b1s->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i56, 1,
        b_a1k, &bf_emlrtBCI, sp) - 1)] = b1ki;
      i56 = (int32_T)d4;
      b1s->data[j + b1s->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i56, 1,
        b_a1k, &bf_emlrtBCI, sp) - 1)] = -b1ki;
      i++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    j++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }
}

/* End of code generation (CalculateA1B1B1Star.c) */

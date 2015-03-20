/*
 * GetRegularizationTerm.c
 *
 * Code generation for function 'GetRegularizationTerm'
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
#include "eye.h"
#include "diag.h"
#include "eml_int_forloop_overflow_check.h"
#include "sum.h"
#include "BoundaryElementHeatEquation_mexutil.h"
#include "BoundaryElementHeatEquation_data.h"

/* Variable Definitions */
static emlrtRSInfo nd_emlrtRSI = { 4, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m"
};

static emlrtRSInfo od_emlrtRSI = { 6, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m"
};

static emlrtRSInfo pd_emlrtRSI = { 7, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m"
};

static emlrtRSInfo qd_emlrtRSI = { 12, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m"
};

static emlrtRSInfo rd_emlrtRSI = { 13, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m"
};

static emlrtRSInfo sd_emlrtRSI = { 17, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m"
};

static emlrtRSInfo td_emlrtRSI = { 19, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m"
};

static emlrtMCInfo u_emlrtMCI = { 16, 1, "error",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\lang\\error.m"
};

static emlrtRTEInfo q_emlrtRTEI = { 1, 20, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m"
};

static emlrtECInfo h_emlrtECI = { 2, 7, 20, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m"
};

static emlrtDCInfo g_emlrtDCI = { 11, 21, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m",
  4 };

static emlrtDCInfo h_emlrtDCI = { 11, 21, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m",
  1 };

static emlrtECInfo i_emlrtECI = { 2, 12, 15, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m"
};

static emlrtDCInfo i_emlrtDCI = { 13, 36, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m",
  4 };

static emlrtECInfo j_emlrtECI = { 2, 13, 15, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m"
};

static emlrtDCInfo j_emlrtDCI = { 13, 57, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m",
  4 };

static emlrtECInfo k_emlrtECI = { 2, 17, 13, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m"
};

static emlrtDCInfo k_emlrtDCI = { 12, 37, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m",
  4 };

static emlrtDCInfo l_emlrtDCI = { 7, 40, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m",
  1 };

static emlrtDCInfo m_emlrtDCI = { 7, 40, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m",
  4 };

static emlrtDCInfo n_emlrtDCI = { 7, 61, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m",
  1 };

static emlrtDCInfo o_emlrtDCI = { 7, 61, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m",
  4 };

static emlrtDCInfo p_emlrtDCI = { 12, 60, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m",
  4 };

static emlrtBCInfo xb_emlrtBCI = { -1, -1, 15, 13, "regTerm",
  "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m",
  0 };

static emlrtBCInfo yb_emlrtBCI = { -1, -1, 15, 15, "regTerm",
  "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m",
  0 };

static emlrtBCInfo ac_emlrtBCI = { -1, -1, 15, 34, "regTerm",
  "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m",
  0 };

static emlrtBCInfo bc_emlrtBCI = { -1, -1, 15, 38, "regTerm",
  "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m",
  0 };

static emlrtBCInfo cc_emlrtBCI = { -1, -1, 9, 13, "regTerm",
  "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m",
  0 };

static emlrtDCInfo q_emlrtDCI = { 9, 13, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m",
  1 };

static emlrtBCInfo dc_emlrtBCI = { -1, -1, 9, 15, "regTerm",
  "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m",
  0 };

static emlrtDCInfo r_emlrtDCI = { 9, 15, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m",
  1 };

static emlrtRSInfo qg_emlrtRSI = { 16, "error",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\lang\\error.m"
};

/* Function Definitions */
void GetRegularizationTerm(const emlrtStack *sp, real_T N, real_T order,
  emxArray_real_T *regTerm)
{
  emxArray_real_T *r13;
  emxArray_real_T *b;
  int32_T i23;
  int32_T i;
  int32_T b_regTerm;
  emxArray_real_T *r14;
  real_T d1;
  int32_T c_regTerm[2];
  int32_T b_N[2];
  emxArray_real_T *r15;
  int32_T i24;
  emxArray_real_T *r16;
  emxArray_real_T *r17;
  int32_T c_N[2];
  boolean_T b3;
  boolean_T b4;
  emxArray_real_T *v;
  boolean_T overflow;
  const mxArray *y;
  static const int32_T iv18[2] = { 1, 19 };

  const mxArray *m7;
  char_T cv24[19];
  static const char_T cv25[19] = { 'o', 'r', 'd', 'e', 'r', ' ', 'n', 'o', 't',
    ' ', 's', 'u', 'p', 'p', 'o', 'r', 't', 'e', 'd' };

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

  /*  Get regularization term of order = [0,1, or 2] */
  if (order == 0.0) {
    st.site = &nd_emlrtRSI;
    eye(&st, N, regTerm);
  } else {
    emxInit_real_T(sp, &r13, 2, &q_emlrtRTEI, true);
    emxInit_real_T(sp, &b, 2, &q_emlrtRTEI, true);
    if (order == 1.0) {
      st.site = &od_emlrtRSI;
      eye(&st, N, regTerm);
      i23 = regTerm->size[0] * regTerm->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)regTerm, i23, (int32_T)sizeof
                        (real_T), &q_emlrtRTEI);
      i = regTerm->size[0];
      b_regTerm = regTerm->size[1];
      i *= b_regTerm;
      for (i23 = 0; i23 < i; i23++) {
        regTerm->data[i23] *= 2.0;
      }

      emxInit_real_T(sp, &r14, 2, &q_emlrtRTEI, true);
      i23 = r14->size[0] * r14->size[1];
      r14->size[0] = 1;
      d1 = N - 1.0;
      d1 = emlrtNonNegativeCheckFastR2012b(d1, &m_emlrtDCI, sp);
      r14->size[1] = (int32_T)emlrtIntegerCheckFastR2012b(d1, &l_emlrtDCI, sp);
      emxEnsureCapacity(sp, (emxArray__common *)r14, i23, (int32_T)sizeof(real_T),
                        &q_emlrtRTEI);
      d1 = N - 1.0;
      d1 = emlrtNonNegativeCheckFastR2012b(d1, &m_emlrtDCI, sp);
      i = (int32_T)emlrtIntegerCheckFastR2012b(d1, &l_emlrtDCI, sp);
      for (i23 = 0; i23 < i; i23++) {
        r14->data[i23] = 1.0;
      }

      st.site = &pd_emlrtRSI;
      diag(&st, r14, b);
      emxFree_real_T(&r14);
      for (i23 = 0; i23 < 2; i23++) {
        c_regTerm[i23] = regTerm->size[i23];
      }

      for (i23 = 0; i23 < 2; i23++) {
        b_N[i23] = b->size[i23];
      }

      emxInit_real_T(sp, &r15, 2, &q_emlrtRTEI, true);
      emlrtSizeEqCheck2DFastR2012b(c_regTerm, b_N, &h_emlrtECI, sp);
      i23 = r15->size[0] * r15->size[1];
      r15->size[0] = 1;
      d1 = N - 1.0;
      d1 = emlrtNonNegativeCheckFastR2012b(d1, &o_emlrtDCI, sp);
      r15->size[1] = (int32_T)emlrtIntegerCheckFastR2012b(d1, &n_emlrtDCI, sp);
      emxEnsureCapacity(sp, (emxArray__common *)r15, i23, (int32_T)sizeof(real_T),
                        &q_emlrtRTEI);
      d1 = N - 1.0;
      d1 = emlrtNonNegativeCheckFastR2012b(d1, &o_emlrtDCI, sp);
      i = (int32_T)emlrtIntegerCheckFastR2012b(d1, &n_emlrtDCI, sp);
      for (i23 = 0; i23 < i; i23++) {
        r15->data[i23] = 1.0;
      }

      st.site = &pd_emlrtRSI;
      b_diag(&st, r15, r13);
      emxFree_real_T(&r15);
      for (i23 = 0; i23 < 2; i23++) {
        c_regTerm[i23] = regTerm->size[i23];
      }

      for (i23 = 0; i23 < 2; i23++) {
        b_N[i23] = r13->size[i23];
      }

      emlrtSizeEqCheck2DFastR2012b(c_regTerm, b_N, &h_emlrtECI, sp);
      i23 = regTerm->size[0] * regTerm->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)regTerm, i23, (int32_T)sizeof
                        (real_T), &q_emlrtRTEI);
      i = regTerm->size[0];
      b_regTerm = regTerm->size[1];
      i *= b_regTerm;
      for (i23 = 0; i23 < i; i23++) {
        regTerm->data[i23] = (regTerm->data[i23] - b->data[i23]) - r13->data[i23];
      }

      regTerm->data[0] = 1.0;
      i23 = regTerm->size[0];
      i = (int32_T)emlrtIntegerCheckFastR2012b(N, &q_emlrtDCI, sp);
      b_regTerm = regTerm->size[1];
      i24 = (int32_T)emlrtIntegerCheckFastR2012b(N, &r_emlrtDCI, sp);
      regTerm->data[(emlrtDynamicBoundsCheckFastR2012b(i, 1, i23, &cc_emlrtBCI,
        sp) + regTerm->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i24, 1,
        b_regTerm, &dc_emlrtBCI, sp) - 1)) - 1] = 1.0;
    } else if (order == 2.0) {
      emxInit_real_T(sp, &r16, 2, &q_emlrtRTEI, true);
      d1 = emlrtNonNegativeCheckFastR2012b(N, &g_emlrtDCI, sp);
      emlrtIntegerCheckFastR2012b(d1, &h_emlrtDCI, sp);
      i23 = r16->size[0] * r16->size[1];
      r16->size[0] = 1;
      d1 = N - 1.0;
      r16->size[1] = (int32_T)emlrtNonNegativeCheckFastR2012b(d1, &k_emlrtDCI,
        sp);
      emxEnsureCapacity(sp, (emxArray__common *)r16, i23, (int32_T)sizeof(real_T),
                        &q_emlrtRTEI);
      d1 = N - 1.0;
      i = (int32_T)emlrtNonNegativeCheckFastR2012b(d1, &k_emlrtDCI, sp);
      for (i23 = 0; i23 < i; i23++) {
        r16->data[i23] = 1.0;
      }

      st.site = &qd_emlrtRSI;
      diag(&st, r16, regTerm);
      i23 = regTerm->size[0] * regTerm->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)regTerm, i23, (int32_T)sizeof
                        (real_T), &q_emlrtRTEI);
      i = regTerm->size[0];
      b_regTerm = regTerm->size[1];
      i *= b_regTerm;
      emxFree_real_T(&r16);
      for (i23 = 0; i23 < i; i23++) {
        regTerm->data[i23] *= 4.0;
      }

      b_N[0] = (int32_T)N;
      b_N[1] = (int32_T)N;
      for (i23 = 0; i23 < 2; i23++) {
        c_regTerm[i23] = regTerm->size[i23];
      }

      emxInit_real_T(sp, &r17, 2, &q_emlrtRTEI, true);
      emlrtSizeEqCheck2DFastR2012b(b_N, c_regTerm, &i_emlrtECI, sp);
      i23 = r17->size[0] * r17->size[1];
      r17->size[0] = 1;
      d1 = N - 1.0;
      r17->size[1] = (int32_T)emlrtNonNegativeCheckFastR2012b(d1, &p_emlrtDCI,
        sp);
      emxEnsureCapacity(sp, (emxArray__common *)r17, i23, (int32_T)sizeof(real_T),
                        &q_emlrtRTEI);
      d1 = N - 1.0;
      i = (int32_T)emlrtNonNegativeCheckFastR2012b(d1, &p_emlrtDCI, sp);
      for (i23 = 0; i23 < i; i23++) {
        r17->data[i23] = 1.0;
      }

      st.site = &qd_emlrtRSI;
      b_diag(&st, r17, b);
      i23 = b->size[0] * b->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)b, i23, (int32_T)sizeof(real_T),
                        &q_emlrtRTEI);
      i = b->size[0];
      b_regTerm = b->size[1];
      i *= b_regTerm;
      emxFree_real_T(&r17);
      for (i23 = 0; i23 < i; i23++) {
        b->data[i23] *= 4.0;
      }

      c_N[0] = (int32_T)N;
      c_N[1] = (int32_T)N;
      for (i23 = 0; i23 < 2; i23++) {
        b_N[i23] = b->size[i23];
      }

      emlrtSizeEqCheck2DFastR2012b(c_N, b_N, &i_emlrtECI, sp);
      i23 = regTerm->size[0] * regTerm->size[1];
      regTerm->size[0] = (int32_T)N;
      regTerm->size[1] = (int32_T)N;
      emxEnsureCapacity(sp, (emxArray__common *)regTerm, i23, (int32_T)sizeof
                        (real_T), &q_emlrtRTEI);
      i = (int32_T)N * (int32_T)N;
      for (i23 = 0; i23 < i; i23++) {
        regTerm->data[i23] = (0.0 - regTerm->data[i23]) - b->data[i23];
      }

      st.site = &rd_emlrtRSI;
      d1 = N - 2.0;
      emlrtNonNegativeCheckFastR2012b(d1, &i_emlrtDCI, &st);
      i23 = b->size[0] * b->size[1];
      b->size[0] = (int32_T)(N - 2.0) + 2;
      emxEnsureCapacity(&st, (emxArray__common *)b, i23, (int32_T)sizeof(real_T),
                        &q_emlrtRTEI);
      i23 = b->size[0] * b->size[1];
      b->size[1] = (int32_T)(N - 2.0) + 2;
      emxEnsureCapacity(&st, (emxArray__common *)b, i23, (int32_T)sizeof(real_T),
                        &q_emlrtRTEI);
      i = ((int32_T)(N - 2.0) + 2) * ((int32_T)(N - 2.0) + 2);
      for (i23 = 0; i23 < i; i23++) {
        b->data[i23] = 0.0;
      }

      b_st.site = &wd_emlrtRSI;
      if (1 > (int32_T)(N - 2.0)) {
        b3 = false;
      } else {
        b3 = ((int32_T)(N - 2.0) > 2147483646);
      }

      if (b3) {
        c_st.site = &cb_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      for (i = 1; i <= (int32_T)(N - 2.0); i++) {
        b->data[(i + b->size[0] * (i - 1)) + 1] = 1.0;
      }

      for (i23 = 0; i23 < 2; i23++) {
        c_regTerm[i23] = regTerm->size[i23];
      }

      for (i23 = 0; i23 < 2; i23++) {
        b_N[i23] = b->size[i23];
      }

      emlrtSizeEqCheck2DFastR2012b(c_regTerm, b_N, &j_emlrtECI, sp);
      st.site = &rd_emlrtRSI;
      d1 = N - 2.0;
      emlrtNonNegativeCheckFastR2012b(d1, &j_emlrtDCI, &st);
      i23 = r13->size[0] * r13->size[1];
      r13->size[0] = (int32_T)(N - 2.0) + 2;
      emxEnsureCapacity(&st, (emxArray__common *)r13, i23, (int32_T)sizeof
                        (real_T), &q_emlrtRTEI);
      i23 = r13->size[0] * r13->size[1];
      r13->size[1] = (int32_T)(N - 2.0) + 2;
      emxEnsureCapacity(&st, (emxArray__common *)r13, i23, (int32_T)sizeof
                        (real_T), &q_emlrtRTEI);
      i = ((int32_T)(N - 2.0) + 2) * ((int32_T)(N - 2.0) + 2);
      for (i23 = 0; i23 < i; i23++) {
        r13->data[i23] = 0.0;
      }

      b_st.site = &xd_emlrtRSI;
      if (1 > (int32_T)(N - 2.0)) {
        b4 = false;
      } else {
        b4 = ((int32_T)(N - 2.0) > 2147483646);
      }

      if (b4) {
        c_st.site = &cb_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      for (i = 1; i <= (int32_T)(N - 2.0); i++) {
        r13->data[(i + r13->size[0] * (i + 1)) - 1] = 1.0;
      }

      for (i23 = 0; i23 < 2; i23++) {
        c_regTerm[i23] = regTerm->size[i23];
      }

      for (i23 = 0; i23 < 2; i23++) {
        b_N[i23] = r13->size[i23];
      }

      emlrtSizeEqCheck2DFastR2012b(c_regTerm, b_N, &j_emlrtECI, sp);
      i23 = regTerm->size[0] * regTerm->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)regTerm, i23, (int32_T)sizeof
                        (real_T), &q_emlrtRTEI);
      i = regTerm->size[0];
      b_regTerm = regTerm->size[1];
      i *= b_regTerm;
      for (i23 = 0; i23 < i; i23++) {
        regTerm->data[i23] = (regTerm->data[i23] + b->data[i23]) + r13->data[i23];
      }

      b_emxInit_real_T(sp, &v, 1, &q_emlrtRTEI, true);
      regTerm->data[regTerm->size[0]] = -2.0;
      regTerm->data[1] = -2.0;
      i23 = regTerm->size[0];
      i = (int32_T)N;
      b_regTerm = regTerm->size[1];
      i24 = (int32_T)(N - 1.0);
      regTerm->data[(emlrtDynamicBoundsCheckFastR2012b(i, 1, i23, &xb_emlrtBCI,
        sp) + regTerm->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i24, 1,
        b_regTerm, &yb_emlrtBCI, sp) - 1)) - 1] = -2.0;
      i23 = regTerm->size[0];
      i = (int32_T)N - 1;
      b_regTerm = regTerm->size[1];
      i24 = (int32_T)N;
      regTerm->data[(emlrtDynamicBoundsCheckFastR2012b(i, 1, i23, &ac_emlrtBCI,
        sp) + regTerm->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i24, 1,
        b_regTerm, &bc_emlrtBCI, sp) - 1)) - 1] = -2.0;
      st.site = &sd_emlrtRSI;
      sum(&st, regTerm, v);
      st.site = &sd_emlrtRSI;
      i = v->size[0];
      b_regTerm = v->size[0];
      i23 = b->size[0] * b->size[1];
      b->size[0] = i;
      emxEnsureCapacity(&st, (emxArray__common *)b, i23, (int32_T)sizeof(real_T),
                        &q_emlrtRTEI);
      i23 = b->size[0] * b->size[1];
      b->size[1] = b_regTerm;
      emxEnsureCapacity(&st, (emxArray__common *)b, i23, (int32_T)sizeof(real_T),
                        &q_emlrtRTEI);
      i *= b_regTerm;
      for (i23 = 0; i23 < i; i23++) {
        b->data[i23] = 0.0;
      }

      b_st.site = &xd_emlrtRSI;
      if (1 > v->size[0]) {
        overflow = false;
      } else {
        overflow = (v->size[0] > 2147483646);
      }

      if (overflow) {
        c_st.site = &cb_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      for (i = 0; i + 1 <= v->size[0]; i++) {
        b->data[i + b->size[0] * i] = v->data[i];
      }

      emxFree_real_T(&v);
      for (i23 = 0; i23 < 2; i23++) {
        c_regTerm[i23] = regTerm->size[i23];
      }

      for (i23 = 0; i23 < 2; i23++) {
        b_N[i23] = b->size[i23];
      }

      emlrtSizeEqCheck2DFastR2012b(c_regTerm, b_N, &k_emlrtECI, sp);
      i23 = regTerm->size[0] * regTerm->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)regTerm, i23, (int32_T)sizeof
                        (real_T), &q_emlrtRTEI);
      i = regTerm->size[0];
      b_regTerm = regTerm->size[1];
      i *= b_regTerm;
      for (i23 = 0; i23 < i; i23++) {
        regTerm->data[i23] -= b->data[i23];
      }
    } else {
      st.site = &td_emlrtRSI;
      y = NULL;
      m7 = emlrtCreateCharArray(2, iv18);
      for (i = 0; i < 19; i++) {
        cv24[i] = cv25[i];
      }

      emlrtInitCharArrayR2013a(&st, 19, m7, cv24);
      emlrtAssign(&y, m7);
      b_st.site = &qg_emlrtRSI;
      error(&b_st, y, &u_emlrtMCI);
    }

    emxFree_real_T(&b);
    emxFree_real_T(&r13);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (GetRegularizationTerm.c) */

/*
 * GetRegularizationTerm.c
 *
 * Code generation for function 'GetRegularizationTerm'
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
#include "eye.h"
#include "diag.h"
#include "eml_int_forloop_overflow_check.h"
#include "TestBEM_mex_mexutil.h"
#include "TestBEM_mex_data.h"

/* Variable Definitions */
static emlrtRSInfo od_emlrtRSI = { 4, "GetRegularizationTerm",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\GetRegularizationTerm.m" };

static emlrtRSInfo pd_emlrtRSI = { 6, "GetRegularizationTerm",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\GetRegularizationTerm.m" };

static emlrtRSInfo qd_emlrtRSI = { 7, "GetRegularizationTerm",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\GetRegularizationTerm.m" };

static emlrtRSInfo rd_emlrtRSI = { 12, "GetRegularizationTerm",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\GetRegularizationTerm.m" };

static emlrtRSInfo sd_emlrtRSI = { 13, "GetRegularizationTerm",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\GetRegularizationTerm.m" };

static emlrtRSInfo td_emlrtRSI = { 17, "GetRegularizationTerm",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\GetRegularizationTerm.m" };

static emlrtRSInfo ud_emlrtRSI = { 19, "GetRegularizationTerm",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\GetRegularizationTerm.m" };

static emlrtRSInfo ae_emlrtRSI = { 76, "sum",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

static emlrtMCInfo u_emlrtMCI = { 16, 1, "error",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\lang\\error.m"
};

static emlrtRTEInfo p_emlrtRTEI = { 1, 20, "GetRegularizationTerm",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\GetRegularizationTerm.m" };

static emlrtECInfo h_emlrtECI = { 2, 7, 20, "GetRegularizationTerm",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\GetRegularizationTerm.m" };

static emlrtDCInfo j_emlrtDCI = { 11, 21, "GetRegularizationTerm",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\GetRegularizationTerm.m", 4 };

static emlrtDCInfo k_emlrtDCI = { 11, 21, "GetRegularizationTerm",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\GetRegularizationTerm.m", 1 };

static emlrtECInfo i_emlrtECI = { 2, 12, 15, "GetRegularizationTerm",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\GetRegularizationTerm.m" };

static emlrtDCInfo l_emlrtDCI = { 13, 36, "GetRegularizationTerm",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\GetRegularizationTerm.m", 4 };

static emlrtECInfo j_emlrtECI = { 2, 13, 15, "GetRegularizationTerm",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\GetRegularizationTerm.m" };

static emlrtDCInfo m_emlrtDCI = { 13, 57, "GetRegularizationTerm",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\GetRegularizationTerm.m", 4 };

static emlrtECInfo k_emlrtECI = { 2, 17, 13, "GetRegularizationTerm",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\GetRegularizationTerm.m" };

static emlrtDCInfo n_emlrtDCI = { 12, 37, "GetRegularizationTerm",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\GetRegularizationTerm.m", 4 };

static emlrtDCInfo o_emlrtDCI = { 7, 40, "GetRegularizationTerm",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\GetRegularizationTerm.m", 1 };

static emlrtDCInfo p_emlrtDCI = { 7, 40, "GetRegularizationTerm",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\GetRegularizationTerm.m", 4 };

static emlrtDCInfo q_emlrtDCI = { 7, 61, "GetRegularizationTerm",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\GetRegularizationTerm.m", 1 };

static emlrtDCInfo r_emlrtDCI = { 7, 61, "GetRegularizationTerm",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\GetRegularizationTerm.m", 4 };

static emlrtDCInfo s_emlrtDCI = { 12, 60, "GetRegularizationTerm",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\GetRegularizationTerm.m", 4 };

static emlrtBCInfo yb_emlrtBCI = { -1, -1, 15, 13, "regTerm",
  "GetRegularizationTerm",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\GetRegularizationTerm.m", 0 };

static emlrtBCInfo ac_emlrtBCI = { -1, -1, 15, 15, "regTerm",
  "GetRegularizationTerm",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\GetRegularizationTerm.m", 0 };

static emlrtBCInfo bc_emlrtBCI = { -1, -1, 15, 34, "regTerm",
  "GetRegularizationTerm",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\GetRegularizationTerm.m", 0 };

static emlrtBCInfo cc_emlrtBCI = { -1, -1, 15, 38, "regTerm",
  "GetRegularizationTerm",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\GetRegularizationTerm.m", 0 };

static emlrtBCInfo dc_emlrtBCI = { -1, -1, 9, 13, "regTerm",
  "GetRegularizationTerm",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\GetRegularizationTerm.m", 0 };

static emlrtDCInfo t_emlrtDCI = { 9, 13, "GetRegularizationTerm",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\GetRegularizationTerm.m", 1 };

static emlrtBCInfo ec_emlrtBCI = { -1, -1, 9, 15, "regTerm",
  "GetRegularizationTerm",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\GetRegularizationTerm.m", 0 };

static emlrtDCInfo u_emlrtDCI = { 9, 15, "GetRegularizationTerm",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\GetRegularizationTerm.m", 1 };

static emlrtRSInfo hg_emlrtRSI = { 16, "error",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\lang\\error.m"
};

/* Function Definitions */
void GetRegularizationTerm(const emlrtStack *sp, real_T N, real_T order,
  emxArray_real_T *regTerm)
{
  emxArray_real_T *r6;
  emxArray_real_T *b;
  int32_T ix;
  int32_T i;
  int32_T iy;
  emxArray_real_T *r7;
  real_T s;
  int32_T b_regTerm[2];
  int32_T b_N[2];
  emxArray_real_T *r8;
  int32_T ixstart;
  emxArray_real_T *r9;
  emxArray_real_T *r10;
  int32_T c_N[2];
  boolean_T b3;
  boolean_T b4;
  uint32_T sz[2];
  emxArray_real_T *v;
  boolean_T overflow;
  int32_T k;
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
    st.site = &od_emlrtRSI;
    eye(&st, N, regTerm);
  } else {
    emxInit_real_T(sp, &r6, 2, &p_emlrtRTEI, true);
    emxInit_real_T(sp, &b, 2, &p_emlrtRTEI, true);
    if (order == 1.0) {
      st.site = &pd_emlrtRSI;
      eye(&st, N, regTerm);
      ix = regTerm->size[0] * regTerm->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)regTerm, ix, (int32_T)sizeof
                        (real_T), &p_emlrtRTEI);
      i = regTerm->size[0];
      iy = regTerm->size[1];
      i *= iy;
      for (ix = 0; ix < i; ix++) {
        regTerm->data[ix] *= 2.0;
      }

      emxInit_real_T(sp, &r7, 2, &p_emlrtRTEI, true);
      ix = r7->size[0] * r7->size[1];
      r7->size[0] = 1;
      s = N - 1.0;
      s = emlrtNonNegativeCheckFastR2012b(s, &p_emlrtDCI, sp);
      r7->size[1] = (int32_T)emlrtIntegerCheckFastR2012b(s, &o_emlrtDCI, sp);
      emxEnsureCapacity(sp, (emxArray__common *)r7, ix, (int32_T)sizeof(real_T),
                        &p_emlrtRTEI);
      s = N - 1.0;
      s = emlrtNonNegativeCheckFastR2012b(s, &p_emlrtDCI, sp);
      i = (int32_T)emlrtIntegerCheckFastR2012b(s, &o_emlrtDCI, sp);
      for (ix = 0; ix < i; ix++) {
        r7->data[ix] = 1.0;
      }

      st.site = &qd_emlrtRSI;
      diag(&st, r7, b);
      emxFree_real_T(&r7);
      for (ix = 0; ix < 2; ix++) {
        b_regTerm[ix] = regTerm->size[ix];
      }

      for (ix = 0; ix < 2; ix++) {
        b_N[ix] = b->size[ix];
      }

      emxInit_real_T(sp, &r8, 2, &p_emlrtRTEI, true);
      emlrtSizeEqCheck2DFastR2012b(b_regTerm, b_N, &h_emlrtECI, sp);
      ix = r8->size[0] * r8->size[1];
      r8->size[0] = 1;
      s = N - 1.0;
      s = emlrtNonNegativeCheckFastR2012b(s, &r_emlrtDCI, sp);
      r8->size[1] = (int32_T)emlrtIntegerCheckFastR2012b(s, &q_emlrtDCI, sp);
      emxEnsureCapacity(sp, (emxArray__common *)r8, ix, (int32_T)sizeof(real_T),
                        &p_emlrtRTEI);
      s = N - 1.0;
      s = emlrtNonNegativeCheckFastR2012b(s, &r_emlrtDCI, sp);
      i = (int32_T)emlrtIntegerCheckFastR2012b(s, &q_emlrtDCI, sp);
      for (ix = 0; ix < i; ix++) {
        r8->data[ix] = 1.0;
      }

      st.site = &qd_emlrtRSI;
      b_diag(&st, r8, r6);
      emxFree_real_T(&r8);
      for (ix = 0; ix < 2; ix++) {
        b_regTerm[ix] = regTerm->size[ix];
      }

      for (ix = 0; ix < 2; ix++) {
        b_N[ix] = r6->size[ix];
      }

      emlrtSizeEqCheck2DFastR2012b(b_regTerm, b_N, &h_emlrtECI, sp);
      ix = regTerm->size[0] * regTerm->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)regTerm, ix, (int32_T)sizeof
                        (real_T), &p_emlrtRTEI);
      i = regTerm->size[0];
      iy = regTerm->size[1];
      i *= iy;
      for (ix = 0; ix < i; ix++) {
        regTerm->data[ix] = (regTerm->data[ix] - b->data[ix]) - r6->data[ix];
      }

      regTerm->data[0] = 1.0;
      ix = regTerm->size[0];
      i = (int32_T)emlrtIntegerCheckFastR2012b(N, &t_emlrtDCI, sp);
      iy = regTerm->size[1];
      ixstart = (int32_T)emlrtIntegerCheckFastR2012b(N, &u_emlrtDCI, sp);
      regTerm->data[(emlrtDynamicBoundsCheckFastR2012b(i, 1, ix, &dc_emlrtBCI,
        sp) + regTerm->size[0] * (emlrtDynamicBoundsCheckFastR2012b(ixstart, 1,
        iy, &ec_emlrtBCI, sp) - 1)) - 1] = 1.0;
    } else if (order == 2.0) {
      emxInit_real_T(sp, &r9, 2, &p_emlrtRTEI, true);
      s = emlrtNonNegativeCheckFastR2012b(N, &j_emlrtDCI, sp);
      emlrtIntegerCheckFastR2012b(s, &k_emlrtDCI, sp);
      ix = r9->size[0] * r9->size[1];
      r9->size[0] = 1;
      s = N - 1.0;
      r9->size[1] = (int32_T)emlrtNonNegativeCheckFastR2012b(s, &n_emlrtDCI, sp);
      emxEnsureCapacity(sp, (emxArray__common *)r9, ix, (int32_T)sizeof(real_T),
                        &p_emlrtRTEI);
      s = N - 1.0;
      i = (int32_T)emlrtNonNegativeCheckFastR2012b(s, &n_emlrtDCI, sp);
      for (ix = 0; ix < i; ix++) {
        r9->data[ix] = 1.0;
      }

      st.site = &rd_emlrtRSI;
      diag(&st, r9, regTerm);
      ix = regTerm->size[0] * regTerm->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)regTerm, ix, (int32_T)sizeof
                        (real_T), &p_emlrtRTEI);
      i = regTerm->size[0];
      iy = regTerm->size[1];
      i *= iy;
      emxFree_real_T(&r9);
      for (ix = 0; ix < i; ix++) {
        regTerm->data[ix] *= 4.0;
      }

      b_N[0] = (int32_T)N;
      b_N[1] = (int32_T)N;
      for (ix = 0; ix < 2; ix++) {
        b_regTerm[ix] = regTerm->size[ix];
      }

      emxInit_real_T(sp, &r10, 2, &p_emlrtRTEI, true);
      emlrtSizeEqCheck2DFastR2012b(b_N, b_regTerm, &i_emlrtECI, sp);
      ix = r10->size[0] * r10->size[1];
      r10->size[0] = 1;
      s = N - 1.0;
      r10->size[1] = (int32_T)emlrtNonNegativeCheckFastR2012b(s, &s_emlrtDCI, sp);
      emxEnsureCapacity(sp, (emxArray__common *)r10, ix, (int32_T)sizeof(real_T),
                        &p_emlrtRTEI);
      s = N - 1.0;
      i = (int32_T)emlrtNonNegativeCheckFastR2012b(s, &s_emlrtDCI, sp);
      for (ix = 0; ix < i; ix++) {
        r10->data[ix] = 1.0;
      }

      st.site = &rd_emlrtRSI;
      b_diag(&st, r10, b);
      ix = b->size[0] * b->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)b, ix, (int32_T)sizeof(real_T),
                        &p_emlrtRTEI);
      i = b->size[0];
      iy = b->size[1];
      i *= iy;
      emxFree_real_T(&r10);
      for (ix = 0; ix < i; ix++) {
        b->data[ix] *= 4.0;
      }

      c_N[0] = (int32_T)N;
      c_N[1] = (int32_T)N;
      for (ix = 0; ix < 2; ix++) {
        b_N[ix] = b->size[ix];
      }

      emlrtSizeEqCheck2DFastR2012b(c_N, b_N, &i_emlrtECI, sp);
      ix = regTerm->size[0] * regTerm->size[1];
      regTerm->size[0] = (int32_T)N;
      regTerm->size[1] = (int32_T)N;
      emxEnsureCapacity(sp, (emxArray__common *)regTerm, ix, (int32_T)sizeof
                        (real_T), &p_emlrtRTEI);
      i = (int32_T)N * (int32_T)N;
      for (ix = 0; ix < i; ix++) {
        regTerm->data[ix] = (0.0 - regTerm->data[ix]) - b->data[ix];
      }

      st.site = &sd_emlrtRSI;
      s = N - 2.0;
      emlrtNonNegativeCheckFastR2012b(s, &l_emlrtDCI, &st);
      ix = b->size[0] * b->size[1];
      b->size[0] = (int32_T)(N - 2.0) + 2;
      emxEnsureCapacity(&st, (emxArray__common *)b, ix, (int32_T)sizeof(real_T),
                        &p_emlrtRTEI);
      ix = b->size[0] * b->size[1];
      b->size[1] = (int32_T)(N - 2.0) + 2;
      emxEnsureCapacity(&st, (emxArray__common *)b, ix, (int32_T)sizeof(real_T),
                        &p_emlrtRTEI);
      i = ((int32_T)(N - 2.0) + 2) * ((int32_T)(N - 2.0) + 2);
      for (ix = 0; ix < i; ix++) {
        b->data[ix] = 0.0;
      }

      b_st.site = &xd_emlrtRSI;
      if (1 > (int32_T)(N - 2.0)) {
        b3 = false;
      } else {
        b3 = ((int32_T)(N - 2.0) > 2147483646);
      }

      if (b3) {
        c_st.site = &db_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      for (i = 1; i <= (int32_T)(N - 2.0); i++) {
        b->data[(i + b->size[0] * (i - 1)) + 1] = 1.0;
      }

      for (ix = 0; ix < 2; ix++) {
        b_regTerm[ix] = regTerm->size[ix];
      }

      for (ix = 0; ix < 2; ix++) {
        b_N[ix] = b->size[ix];
      }

      emlrtSizeEqCheck2DFastR2012b(b_regTerm, b_N, &j_emlrtECI, sp);
      st.site = &sd_emlrtRSI;
      s = N - 2.0;
      emlrtNonNegativeCheckFastR2012b(s, &m_emlrtDCI, &st);
      ix = r6->size[0] * r6->size[1];
      r6->size[0] = (int32_T)(N - 2.0) + 2;
      emxEnsureCapacity(&st, (emxArray__common *)r6, ix, (int32_T)sizeof(real_T),
                        &p_emlrtRTEI);
      ix = r6->size[0] * r6->size[1];
      r6->size[1] = (int32_T)(N - 2.0) + 2;
      emxEnsureCapacity(&st, (emxArray__common *)r6, ix, (int32_T)sizeof(real_T),
                        &p_emlrtRTEI);
      i = ((int32_T)(N - 2.0) + 2) * ((int32_T)(N - 2.0) + 2);
      for (ix = 0; ix < i; ix++) {
        r6->data[ix] = 0.0;
      }

      b_st.site = &yd_emlrtRSI;
      if (1 > (int32_T)(N - 2.0)) {
        b4 = false;
      } else {
        b4 = ((int32_T)(N - 2.0) > 2147483646);
      }

      if (b4) {
        c_st.site = &db_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      for (i = 1; i <= (int32_T)(N - 2.0); i++) {
        r6->data[(i + r6->size[0] * (i + 1)) - 1] = 1.0;
      }

      for (ix = 0; ix < 2; ix++) {
        b_regTerm[ix] = regTerm->size[ix];
      }

      for (ix = 0; ix < 2; ix++) {
        b_N[ix] = r6->size[ix];
      }

      emlrtSizeEqCheck2DFastR2012b(b_regTerm, b_N, &j_emlrtECI, sp);
      ix = regTerm->size[0] * regTerm->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)regTerm, ix, (int32_T)sizeof
                        (real_T), &p_emlrtRTEI);
      i = regTerm->size[0];
      iy = regTerm->size[1];
      i *= iy;
      for (ix = 0; ix < i; ix++) {
        regTerm->data[ix] = (regTerm->data[ix] + b->data[ix]) + r6->data[ix];
      }

      regTerm->data[regTerm->size[0]] = -2.0;
      regTerm->data[1] = -2.0;
      ix = regTerm->size[0];
      i = (int32_T)N;
      iy = regTerm->size[1];
      ixstart = (int32_T)(N - 1.0);
      regTerm->data[(emlrtDynamicBoundsCheckFastR2012b(i, 1, ix, &yb_emlrtBCI,
        sp) + regTerm->size[0] * (emlrtDynamicBoundsCheckFastR2012b(ixstart, 1,
        iy, &ac_emlrtBCI, sp) - 1)) - 1] = -2.0;
      ix = regTerm->size[0];
      i = (int32_T)N - 1;
      iy = regTerm->size[1];
      ixstart = (int32_T)N;
      regTerm->data[(emlrtDynamicBoundsCheckFastR2012b(i, 1, ix, &bc_emlrtBCI,
        sp) + regTerm->size[0] * (emlrtDynamicBoundsCheckFastR2012b(ixstart, 1,
        iy, &cc_emlrtBCI, sp) - 1)) - 1] = -2.0;
      st.site = &td_emlrtRSI;
      for (ix = 0; ix < 2; ix++) {
        sz[ix] = (uint32_T)regTerm->size[ix];
      }

      b_emxInit_real_T(&st, &v, 1, &p_emlrtRTEI, true);
      ix = v->size[0];
      v->size[0] = (int32_T)sz[0];
      emxEnsureCapacity(&st, (emxArray__common *)v, ix, (int32_T)sizeof(real_T),
                        &q_emlrtRTEI);
      iy = -1;
      ixstart = -1;
      b_st.site = &be_emlrtRSI;
      if (1 > regTerm->size[0]) {
        overflow = false;
      } else {
        overflow = (regTerm->size[0] > 2147483646);
      }

      if (overflow) {
        c_st.site = &db_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      for (i = 1; i <= regTerm->size[0]; i++) {
        ixstart++;
        ix = ixstart;
        s = regTerm->data[ixstart];
        b_st.site = &ae_emlrtRSI;
        if (2 > regTerm->size[1]) {
          overflow = false;
        } else {
          overflow = (regTerm->size[1] > 2147483646);
        }

        if (overflow) {
          c_st.site = &db_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }

        for (k = 2; k <= regTerm->size[1]; k++) {
          ix += regTerm->size[0];
          s += regTerm->data[ix];
        }

        iy++;
        v->data[iy] = s;
      }

      st.site = &td_emlrtRSI;
      i = v->size[0];
      iy = v->size[0];
      ix = b->size[0] * b->size[1];
      b->size[0] = i;
      emxEnsureCapacity(&st, (emxArray__common *)b, ix, (int32_T)sizeof(real_T),
                        &p_emlrtRTEI);
      ix = b->size[0] * b->size[1];
      b->size[1] = iy;
      emxEnsureCapacity(&st, (emxArray__common *)b, ix, (int32_T)sizeof(real_T),
                        &p_emlrtRTEI);
      i *= iy;
      for (ix = 0; ix < i; ix++) {
        b->data[ix] = 0.0;
      }

      b_st.site = &yd_emlrtRSI;
      if (1 > v->size[0]) {
        overflow = false;
      } else {
        overflow = (v->size[0] > 2147483646);
      }

      if (overflow) {
        c_st.site = &db_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      for (i = 0; i + 1 <= v->size[0]; i++) {
        b->data[i + b->size[0] * i] = v->data[i];
      }

      emxFree_real_T(&v);
      for (ix = 0; ix < 2; ix++) {
        b_regTerm[ix] = regTerm->size[ix];
      }

      for (ix = 0; ix < 2; ix++) {
        b_N[ix] = b->size[ix];
      }

      emlrtSizeEqCheck2DFastR2012b(b_regTerm, b_N, &k_emlrtECI, sp);
      ix = regTerm->size[0] * regTerm->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)regTerm, ix, (int32_T)sizeof
                        (real_T), &p_emlrtRTEI);
      i = regTerm->size[0];
      iy = regTerm->size[1];
      i *= iy;
      for (ix = 0; ix < i; ix++) {
        regTerm->data[ix] -= b->data[ix];
      }
    } else {
      st.site = &ud_emlrtRSI;
      y = NULL;
      m7 = emlrtCreateCharArray(2, iv18);
      for (i = 0; i < 19; i++) {
        cv24[i] = cv25[i];
      }

      emlrtInitCharArrayR2013a(&st, 19, m7, cv24);
      emlrtAssign(&y, m7);
      b_st.site = &hg_emlrtRSI;
      error(&b_st, y, &u_emlrtMCI);
    }

    emxFree_real_T(&b);
    emxFree_real_T(&r6);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (GetRegularizationTerm.c) */

/*
 * PlotResults.c
 *
 * Code generation for function 'PlotResults'
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

/* Variable Definitions */
static emlrtMCInfo v_emlrtMCI = { 5, 7, "PlotResults",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\PlotResults.m"
};

static emlrtMCInfo w_emlrtMCI = { 6, 6, "PlotResults",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\PlotResults.m"
};

static emlrtMCInfo x_emlrtMCI = { 7, 1, "PlotResults",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\PlotResults.m"
};

static emlrtMCInfo y_emlrtMCI = { 8, 1, "PlotResults",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\PlotResults.m"
};

static emlrtMCInfo ab_emlrtMCI = { 10, 1, "PlotResults",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\PlotResults.m"
};

static emlrtRTEInfo v_emlrtRTEI = { 1, 10, "PlotResults",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\PlotResults.m"
};

static emlrtBCInfo ec_emlrtBCI = { -1, -1, 10, 28, "u", "PlotResults",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\PlotResults.m",
  0 };

static emlrtRSInfo gh_emlrtRSI = { 10, "PlotResults",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\PlotResults.m"
};

static emlrtRSInfo hh_emlrtRSI = { 8, "PlotResults",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\PlotResults.m"
};

static emlrtRSInfo ih_emlrtRSI = { 7, "PlotResults",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\PlotResults.m"
};

static emlrtRSInfo jh_emlrtRSI = { 6, "PlotResults",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\PlotResults.m"
};

static emlrtRSInfo kh_emlrtRSI = { 5, "PlotResults",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\PlotResults.m"
};

/* Function Declarations */
static const mxArray *axes(const emlrtStack *sp, const mxArray *b, const mxArray
  *c, const mxArray *d, const mxArray *e, emlrtMCInfo *location);
static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);
static const mxArray *figure(const emlrtStack *sp, emlrtMCInfo *location);
static void line(const emlrtStack *sp, const mxArray *b, const mxArray *c, const
                 mxArray *d, const mxArray *e, const mxArray *f, const mxArray
                 *g, const mxArray *h, const mxArray *i, const mxArray *j, const
                 mxArray *k, emlrtMCInfo *location);

/* Function Definitions */
static const mxArray *axes(const emlrtStack *sp, const mxArray *b, const mxArray
  *c, const mxArray *d, const mxArray *e, emlrtMCInfo *location)
{
  const mxArray *pArrays[4];
  const mxArray *m26;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  return emlrtCallMATLABR2012b(sp, 1, &m26, 4, pArrays, "axes", true, location);
}

static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m15;
  real_T *pData;
  int32_T i81;
  int32_T i;
  y = NULL;
  m15 = emlrtCreateNumericArray(2, *(int32_T (*)[2])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = (real_T *)mxGetPr(m15);
  i81 = 0;
  for (i = 0; i < u->size[1]; i++) {
    pData[i81] = u->data[u->size[0] * i];
    i81++;
  }

  emlrtAssign(&y, m15);
  return y;
}

static const mxArray *figure(const emlrtStack *sp, emlrtMCInfo *location)
{
  const mxArray *m25;
  return emlrtCallMATLABR2012b(sp, 1, &m25, 0, NULL, "figure", true, location);
}

static void line(const emlrtStack *sp, const mxArray *b, const mxArray *c, const
                 mxArray *d, const mxArray *e, const mxArray *f, const mxArray
                 *g, const mxArray *h, const mxArray *i, const mxArray *j, const
                 mxArray *k, emlrtMCInfo *location)
{
  const mxArray *pArrays[10];
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  pArrays[4] = f;
  pArrays[5] = g;
  pArrays[6] = h;
  pArrays[7] = i;
  pArrays[8] = j;
  pArrays[9] = k;
  emlrtCallMATLABR2012b(sp, 0, NULL, 10, pArrays, "line", true, location);
}

void PlotResults(const emlrtStack *sp, const emxArray_real_T *t, const
                 emxArray_real_T *sigIn, const emxArray_real_T *u, const
                 emxArray_real_T *r)
{
  emxArray_real_T *b_u;
  emxArray_real_T *c_u;
  const mxArray *fig = NULL;
  const mxArray *y;
  static const int32_T iv21[2] = { 1, 6 };

  const mxArray *m9;
  char_T cv30[6];
  int32_T i;
  static const char_T cv31[6] = { 'P', 'a', 'r', 'e', 'n', 't' };

  const mxArray *b_y;
  static const int32_T iv22[2] = { 1, 8 };

  char_T cv32[8];
  static const char_T cv33[8] = { 'n', 'e', 'x', 't', 'P', 'l', 'o', 't' };

  const mxArray *c_y;
  static const int32_T iv23[2] = { 1, 3 };

  char_T cv34[3];
  static const char_T cv35[3] = { 'A', 'd', 'd' };

  const mxArray *ax = NULL;
  const mxArray *d_y;
  static const int32_T iv24[2] = { 1, 5 };

  char_T cv36[5];
  static const char_T cv37[5] = { 'X', 'D', 'a', 't', 'a' };

  const mxArray *e_y;
  static const int32_T iv25[2] = { 1, 5 };

  static const char_T cv38[5] = { 'Y', 'D', 'a', 't', 'a' };

  int32_T i27;
  const mxArray *f_y;
  real_T *pData;
  const mxArray *g_y;
  static const int32_T iv26[2] = { 1, 11 };

  char_T cv39[11];
  static const char_T cv40[11] = { 'D', 'i', 's', 'p', 'l', 'a', 'y', 'N', 'a',
    'm', 'e' };

  const mxArray *h_y;
  static const int32_T iv27[2] = { 1, 6 };

  static const char_T cv41[6] = { 'S', 'o', 'u', 'r', 'c', 'e' };

  const mxArray *i_y;
  static const int32_T iv28[2] = { 1, 5 };

  static const char_T cv42[5] = { 'C', 'o', 'l', 'o', 'r' };

  const mxArray *j_y;
  const mxArray *k_y;
  static const int32_T iv29[2] = { 1, 6 };

  const mxArray *l_y;
  static const int32_T iv30[2] = { 1, 5 };

  const mxArray *m_y;
  static const int32_T iv31[2] = { 1, 5 };

  const mxArray *n_y;
  static const int32_T iv32[2] = { 1, 11 };

  const mxArray *o_y;
  static const int32_T iv33[2] = { 1, 11 };

  static const char_T cv43[11] = { 'h', 'e', 'a', 't', ' ', 'e', 'n', 'e', 'r',
    'g', 'y' };

  const mxArray *p_y;
  static const int32_T iv34[2] = { 1, 5 };

  const mxArray *q_y;
  const mxArray *r_y;
  static const int32_T iv35[2] = { 1, 6 };

  static const char_T cv44[6] = { 'p', 'a', 'r', 'e', 'n', 't' };

  const mxArray *s_y;
  static const int32_T iv36[2] = { 1, 5 };

  const mxArray *t_y;
  static const int32_T iv37[2] = { 1, 5 };

  int32_T i28;
  const mxArray *u_y;
  const mxArray *v_y;
  static const int32_T iv38[2] = { 1, 11 };

  const mxArray *w_y;
  static const int32_T iv39[2] = { 1, 4 };

  char_T cv45[4];
  static const char_T cv46[4] = { 'u', '(', 't', ')' };

  const mxArray *x_y;
  static const int32_T iv40[2] = { 1, 5 };

  const mxArray *y_y;
  const mxArray *ab_y;
  static const int32_T iv41[2] = { 1, 6 };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  b_emxInit_real_T(sp, &b_u, 1, &v_emlrtRTEI, true);
  b_emxInit_real_T(sp, &c_u, 1, &v_emlrtRTEI, true);

  /*  plot the input signal as a function of time, the solution u(x,t) and the */
  /*  source solution r(t) */
  st.site = &kh_emlrtRSI;
  emlrtAssign(&fig, figure(&st, &v_emlrtMCI));
  y = NULL;
  m9 = emlrtCreateCharArray(2, iv21);
  for (i = 0; i < 6; i++) {
    cv30[i] = cv31[i];
  }

  emlrtInitCharArrayR2013a(sp, 6, m9, cv30);
  emlrtAssign(&y, m9);
  b_y = NULL;
  m9 = emlrtCreateCharArray(2, iv22);
  for (i = 0; i < 8; i++) {
    cv32[i] = cv33[i];
  }

  emlrtInitCharArrayR2013a(sp, 8, m9, cv32);
  emlrtAssign(&b_y, m9);
  c_y = NULL;
  m9 = emlrtCreateCharArray(2, iv23);
  for (i = 0; i < 3; i++) {
    cv34[i] = cv35[i];
  }

  emlrtInitCharArrayR2013a(sp, 3, m9, cv34);
  emlrtAssign(&c_y, m9);
  st.site = &jh_emlrtRSI;
  emlrtAssign(&ax, axes(&st, y, emlrtAlias(fig), b_y, c_y, &w_emlrtMCI));
  d_y = NULL;
  m9 = emlrtCreateCharArray(2, iv24);
  for (i = 0; i < 5; i++) {
    cv36[i] = cv37[i];
  }

  emlrtInitCharArrayR2013a(sp, 5, m9, cv36);
  emlrtAssign(&d_y, m9);
  e_y = NULL;
  m9 = emlrtCreateCharArray(2, iv25);
  for (i = 0; i < 5; i++) {
    cv36[i] = cv38[i];
  }

  emlrtInitCharArrayR2013a(sp, 5, m9, cv36);
  emlrtAssign(&e_y, m9);
  i27 = b_u->size[0];
  b_u->size[0] = r->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)b_u, i27, (int32_T)sizeof(real_T),
                    &v_emlrtRTEI);
  i = r->size[0];
  for (i27 = 0; i27 < i; i27++) {
    b_u->data[i27] = r->data[i27];
  }

  f_y = NULL;
  m9 = emlrtCreateNumericArray(1, *(int32_T (*)[2])b_u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = (real_T *)mxGetPr(m9);
  i27 = 0;
  for (i = 0; i < b_u->size[0]; i++) {
    pData[i27] = b_u->data[i];
    i27++;
  }

  emlrtAssign(&f_y, m9);
  g_y = NULL;
  m9 = emlrtCreateCharArray(2, iv26);
  for (i = 0; i < 11; i++) {
    cv39[i] = cv40[i];
  }

  emlrtInitCharArrayR2013a(sp, 11, m9, cv39);
  emlrtAssign(&g_y, m9);
  h_y = NULL;
  m9 = emlrtCreateCharArray(2, iv27);
  for (i = 0; i < 6; i++) {
    cv30[i] = cv41[i];
  }

  emlrtInitCharArrayR2013a(sp, 6, m9, cv30);
  emlrtAssign(&h_y, m9);
  i_y = NULL;
  m9 = emlrtCreateCharArray(2, iv28);
  for (i = 0; i < 5; i++) {
    cv36[i] = cv42[i];
  }

  emlrtInitCharArrayR2013a(sp, 5, m9, cv36);
  emlrtAssign(&i_y, m9);
  j_y = NULL;
  m9 = emlrtCreateString1('r');
  emlrtAssign(&j_y, m9);
  k_y = NULL;
  m9 = emlrtCreateCharArray(2, iv29);
  for (i = 0; i < 6; i++) {
    cv30[i] = cv31[i];
  }

  emlrtInitCharArrayR2013a(sp, 6, m9, cv30);
  emlrtAssign(&k_y, m9);
  st.site = &ih_emlrtRSI;
  line(&st, d_y, b_emlrt_marshallOut(t), e_y, f_y, g_y, h_y, i_y, j_y, k_y,
       emlrtAlias(ax), &x_emlrtMCI);
  l_y = NULL;
  m9 = emlrtCreateCharArray(2, iv30);
  for (i = 0; i < 5; i++) {
    cv36[i] = cv37[i];
  }

  emlrtInitCharArrayR2013a(sp, 5, m9, cv36);
  emlrtAssign(&l_y, m9);
  m_y = NULL;
  m9 = emlrtCreateCharArray(2, iv31);
  for (i = 0; i < 5; i++) {
    cv36[i] = cv38[i];
  }

  emlrtInitCharArrayR2013a(sp, 5, m9, cv36);
  emlrtAssign(&m_y, m9);
  n_y = NULL;
  m9 = emlrtCreateCharArray(2, iv32);
  for (i = 0; i < 11; i++) {
    cv39[i] = cv40[i];
  }

  emlrtInitCharArrayR2013a(sp, 11, m9, cv39);
  emlrtAssign(&n_y, m9);
  o_y = NULL;
  m9 = emlrtCreateCharArray(2, iv33);
  for (i = 0; i < 11; i++) {
    cv39[i] = cv43[i];
  }

  emlrtInitCharArrayR2013a(sp, 11, m9, cv39);
  emlrtAssign(&o_y, m9);
  p_y = NULL;
  m9 = emlrtCreateCharArray(2, iv34);
  for (i = 0; i < 5; i++) {
    cv36[i] = cv42[i];
  }

  emlrtInitCharArrayR2013a(sp, 5, m9, cv36);
  emlrtAssign(&p_y, m9);
  q_y = NULL;
  m9 = emlrtCreateString1('b');
  emlrtAssign(&q_y, m9);
  r_y = NULL;
  m9 = emlrtCreateCharArray(2, iv35);
  for (i = 0; i < 6; i++) {
    cv30[i] = cv44[i];
  }

  emlrtInitCharArrayR2013a(sp, 6, m9, cv30);
  emlrtAssign(&r_y, m9);
  st.site = &hh_emlrtRSI;
  line(&st, l_y, b_emlrt_marshallOut(t), m_y, b_emlrt_marshallOut(sigIn), n_y,
       o_y, p_y, q_y, r_y, emlrtAlias(ax), &y_emlrtMCI);

  /*  legend(get(ax,'Children')); */
  s_y = NULL;
  m9 = emlrtCreateCharArray(2, iv36);
  for (i = 0; i < 5; i++) {
    cv36[i] = cv37[i];
  }

  emlrtInitCharArrayR2013a(sp, 5, m9, cv36);
  emlrtAssign(&s_y, m9);
  t_y = NULL;
  m9 = emlrtCreateCharArray(2, iv37);
  for (i = 0; i < 5; i++) {
    cv36[i] = cv38[i];
  }

  emlrtInitCharArrayR2013a(sp, 5, m9, cv36);
  emlrtAssign(&t_y, m9);
  i = u->size[0];
  i27 = u->size[1];
  i28 = (int32_T)muDoubleScalarCeil((real_T)u->size[1] / 2.0);
  i27 = emlrtDynamicBoundsCheckFastR2012b(i28, 1, i27, &ec_emlrtBCI, sp);
  i28 = c_u->size[0];
  c_u->size[0] = i;
  emxEnsureCapacity(sp, (emxArray__common *)c_u, i28, (int32_T)sizeof(real_T),
                    &v_emlrtRTEI);
  for (i28 = 0; i28 < i; i28++) {
    c_u->data[i28] = u->data[i28 + u->size[0] * (i27 - 1)];
  }

  u_y = NULL;
  m9 = emlrtCreateNumericArray(1, *(int32_T (*)[2])c_u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = (real_T *)mxGetPr(m9);
  i27 = 0;
  for (i = 0; i < c_u->size[0]; i++) {
    pData[i27] = c_u->data[i];
    i27++;
  }

  emlrtAssign(&u_y, m9);
  v_y = NULL;
  m9 = emlrtCreateCharArray(2, iv38);
  for (i = 0; i < 11; i++) {
    cv39[i] = cv40[i];
  }

  emlrtInitCharArrayR2013a(sp, 11, m9, cv39);
  emlrtAssign(&v_y, m9);
  w_y = NULL;
  m9 = emlrtCreateCharArray(2, iv39);
  for (i = 0; i < 4; i++) {
    cv45[i] = cv46[i];
  }

  emlrtInitCharArrayR2013a(sp, 4, m9, cv45);
  emlrtAssign(&w_y, m9);
  x_y = NULL;
  m9 = emlrtCreateCharArray(2, iv40);
  for (i = 0; i < 5; i++) {
    cv36[i] = cv42[i];
  }

  emlrtInitCharArrayR2013a(sp, 5, m9, cv36);
  emlrtAssign(&x_y, m9);
  y_y = NULL;
  m9 = emlrtCreateString1('g');
  emlrtAssign(&y_y, m9);
  ab_y = NULL;
  m9 = emlrtCreateCharArray(2, iv41);
  for (i = 0; i < 6; i++) {
    cv30[i] = cv44[i];
  }

  emlrtInitCharArrayR2013a(sp, 6, m9, cv30);
  emlrtAssign(&ab_y, m9);
  st.site = &gh_emlrtRSI;
  line(&st, s_y, b_emlrt_marshallOut(t), t_y, u_y, v_y, w_y, x_y, y_y, ab_y,
       emlrtAlias(ax), &ab_emlrtMCI);

  /*  legend(get(ax,'Children')); */
  emlrtDestroyArray(&fig);
  emlrtDestroyArray(&ax);
  emxFree_real_T(&c_u);
  emxFree_real_T(&b_u);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (PlotResults.c) */

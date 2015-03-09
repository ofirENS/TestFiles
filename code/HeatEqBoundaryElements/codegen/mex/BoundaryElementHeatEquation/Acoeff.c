/*
 * Acoeff.c
 *
 * Code generation for function 'Acoeff'
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
#include "eml_error.h"
#include "BoundaryElementHeatEquation_emxutil.h"
#include "erf.h"
#include "abs.h"
#include "mrdivide.h"
#include "mpower.h"
#include "all.h"
#include "BoundaryElementHeatEquation_mexutil.h"
#include "BoundaryElementHeatEquation_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 9, "Acoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Acoeff.m" };

static emlrtRSInfo b_emlrtRSI = { 11, "Acoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Acoeff.m" };

static emlrtRSInfo c_emlrtRSI = { 14, "Acoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Acoeff.m" };

static emlrtRSInfo d_emlrtRSI = { 16, "Acoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Acoeff.m" };

static emlrtRSInfo e_emlrtRSI = { 17, "Acoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Acoeff.m" };

static emlrtRSInfo s_emlrtRSI = { 8, "Acoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Acoeff.m" };

static emlrtRSInfo t_emlrtRSI = { 10, "Acoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Acoeff.m" };

static emlrtRSInfo u_emlrtRSI = { 12, "Acoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Acoeff.m" };

static emlrtRSInfo v_emlrtRSI = { 13, "Acoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Acoeff.m" };

static emlrtRSInfo w_emlrtRSI = { 15, "Acoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Acoeff.m" };

static emlrtRSInfo x_emlrtRSI = { 18, "Acoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Acoeff.m" };

static emlrtRTEInfo f_emlrtRTEI = { 1, 17, "Acoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Acoeff.m" };

static emlrtRTEInfo g_emlrtRTEI = { 11, 5, "Acoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Acoeff.m" };

static emlrtRTEInfo h_emlrtRTEI = { 17, 5, "Acoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Acoeff.m" };

static emlrtBCInfo emlrtBCI = { -1, -1, 14, 47, "timePoints", "Acoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Acoeff.m", 0 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 14, 20, "timePoints", "Acoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Acoeff.m", 0 };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 9, 20, "timePoints", "Acoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Acoeff.m", 0 };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 6, 7, "timePoints", "Acoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Acoeff.m", 0 };

static emlrtDCInfo emlrtDCI = { 6, 7, "Acoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Acoeff.m", 1 };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 8, 15, "timePoints", "Acoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Acoeff.m", 0 };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 8, 34, "timePoints", "Acoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Acoeff.m", 0 };

static emlrtBCInfo g_emlrtBCI = { -1, -1, 10, 15, "timePoints", "Acoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Acoeff.m", 0 };

static emlrtBCInfo h_emlrtBCI = { -1, -1, 10, 34, "timePoints", "Acoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Acoeff.m", 0 };

static emlrtBCInfo i_emlrtBCI = { -1, -1, 13, 15, "timePoints", "Acoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Acoeff.m", 0 };

static emlrtBCInfo j_emlrtBCI = { -1, -1, 15, 15, "timePoints", "Acoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Acoeff.m", 0 };

static emlrtBCInfo k_emlrtBCI = { -1, -1, 16, 31, "timePoints", "Acoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Acoeff.m", 0 };

static emlrtBCInfo l_emlrtBCI = { -1, -1, 17, 31, "timePoints", "Acoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Acoeff.m", 0 };

static emlrtBCInfo m_emlrtBCI = { -1, -1, 11, 31, "timePoints", "Acoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Acoeff.m", 0 };

static emlrtECInfo e_emlrtECI = { 2, 18, 38, "Acoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Acoeff.m" };

static emlrtECInfo f_emlrtECI = { 2, 18, 83, "Acoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Acoeff.m" };

static emlrtECInfo g_emlrtECI = { 2, 12, 38, "Acoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Acoeff.m" };

/* Function Definitions */
real_T Acoeff(const emlrtStack *sp, real_T ksi, real_T j, real_T x, real_T t,
              const emxArray_real_T *timePoints)
{
  real_T vals;
  int32_T k;
  int32_T i0;
  boolean_T b_x[3];
  boolean_T y;
  boolean_T exitg4;
  real_T c_x;
  boolean_T exitg3;
  real_T z0;
  boolean_T d_x[2];
  boolean_T exitg2;
  real_T z1;
  boolean_T exitg1;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /*  evaluate the coefficient A at the  boundary ksi=0 or ksi=1; */
  /*  for the index j which describes the time steps timePoints_j, at time t and space */
  /*  point x */
  /*  timePoints is a vector describing the time descritized domain */
  k = timePoints->size[1];
  i0 = (int32_T)emlrtIntegerCheckFastR2012b(j, &emlrtDCI, sp);
  if (t <= timePoints->data[emlrtDynamicBoundsCheckFastR2012b(i0, 1, k,
       &d_emlrtBCI, sp) - 1]) {
    vals = 0.0;
  } else {
    k = timePoints->size[1];
    i0 = (int32_T)j;
    b_x[0] = (t > timePoints->data[emlrtDynamicBoundsCheckFastR2012b(i0, 1, k,
               &e_emlrtBCI, sp) - 1]);
    k = timePoints->size[1];
    i0 = (int32_T)((uint32_T)j + 1U);
    b_x[1] = (t <= timePoints->data[emlrtDynamicBoundsCheckFastR2012b(i0, 1, k,
               &f_emlrtBCI, sp) - 1]);
    b_x[2] = (x == ksi);
    y = true;
    k = 0;
    exitg4 = false;
    while ((!exitg4) && (k < 3)) {
      if (b_x[k] == 0) {
        y = false;
        exitg4 = true;
      } else {
        k++;
      }
    }

    if (y) {
      k = timePoints->size[1];
      i0 = (int32_T)j;
      emlrtDynamicBoundsCheckFastR2012b(i0, 1, k, &c_emlrtBCI, sp);
      c_x = (t - timePoints->data[(int32_T)j - 1]) / 3.1415926535897931;
      st.site = &emlrtRSI;
      if (c_x < 0.0) {
        b_st.site = &f_emlrtRSI;
        eml_error(&b_st);
      }

      vals = muDoubleScalarSqrt(c_x);
    } else {
      k = timePoints->size[1];
      i0 = (int32_T)j;
      b_x[0] = (t > timePoints->data[emlrtDynamicBoundsCheckFastR2012b(i0, 1, k,
                 &g_emlrtBCI, sp) - 1]);
      k = timePoints->size[1];
      i0 = (int32_T)((uint32_T)j + 1U);
      b_x[1] = (t <= timePoints->data[emlrtDynamicBoundsCheckFastR2012b(i0, 1, k,
                 &h_emlrtBCI, sp) - 1]);
      b_x[2] = (x != ksi);
      y = true;
      k = 0;
      exitg3 = false;
      while ((!exitg3) && (k < 3)) {
        if (b_x[k] == 0) {
          y = false;
          exitg3 = true;
        } else {
          k++;
        }
      }

      if (y) {
        st.site = &b_emlrtRSI;
        k = timePoints->size[1];
        i0 = (int32_T)j;
        c_x = t - timePoints->data[emlrtDynamicBoundsCheckFastR2012b(i0, 1, k,
          &m_emlrtBCI, &st) - 1];
        if (c_x < 0.0) {
          b_st.site = &f_emlrtRSI;
          eml_error(&b_st);
        }

        z0 = muDoubleScalarAbs(x - ksi) / (2.0 * muDoubleScalarSqrt(c_x));
        vals = muDoubleScalarAbs(x - ksi) / 3.5449077018110318 *
          (muDoubleScalarExp(-(z0 * z0)) / z0 - 1.7724538509055159 * scalar_erf
           (z0));
      } else {
        k = timePoints->size[1];
        i0 = (int32_T)((uint32_T)j + 1U);
        d_x[0] = (t > timePoints->data[emlrtDynamicBoundsCheckFastR2012b(i0, 1,
                   k, &i_emlrtBCI, sp) - 1]);
        d_x[1] = (x == ksi);
        y = true;
        k = 0;
        exitg2 = false;
        while ((!exitg2) && (k < 2)) {
          if (d_x[k] == 0) {
            y = false;
            exitg2 = true;
          } else {
            k++;
          }
        }

        if (y) {
          k = timePoints->size[1];
          i0 = (int32_T)j;
          emlrtDynamicBoundsCheckFastR2012b(i0, 1, k, &b_emlrtBCI, sp);
          c_x = (t - timePoints->data[(int32_T)j - 1]) / 3.1415926535897931;
          k = timePoints->size[1];
          i0 = (int32_T)(j + 1.0);
          emlrtDynamicBoundsCheckFastR2012b(i0, 1, k, &emlrtBCI, sp);
          z1 = (t - timePoints->data[(int32_T)(j + 1.0) - 1]) /
            3.1415926535897931;
          st.site = &c_emlrtRSI;
          if (c_x < 0.0) {
            b_st.site = &f_emlrtRSI;
            eml_error(&b_st);
          }

          st.site = &c_emlrtRSI;
          if (z1 < 0.0) {
            b_st.site = &f_emlrtRSI;
            eml_error(&b_st);
          }

          vals = muDoubleScalarSqrt(c_x) - muDoubleScalarSqrt(z1);
        } else {
          k = timePoints->size[1];
          i0 = (int32_T)((uint32_T)j + 1U);
          d_x[0] = (t > timePoints->data[emlrtDynamicBoundsCheckFastR2012b(i0, 1,
                     k, &j_emlrtBCI, sp) - 1]);
          d_x[1] = (x != ksi);
          y = true;
          k = 0;
          exitg1 = false;
          while ((!exitg1) && (k < 2)) {
            if (d_x[k] == 0) {
              y = false;
              exitg1 = true;
            } else {
              k++;
            }
          }

          if (y) {
            st.site = &d_emlrtRSI;
            k = timePoints->size[1];
            i0 = (int32_T)j;
            c_x = t - timePoints->data[emlrtDynamicBoundsCheckFastR2012b(i0, 1,
              k, &k_emlrtBCI, &st) - 1];
            if (c_x < 0.0) {
              b_st.site = &f_emlrtRSI;
              eml_error(&b_st);
            }

            z0 = muDoubleScalarAbs(x - ksi) / (2.0 * muDoubleScalarSqrt(c_x));
            st.site = &e_emlrtRSI;
            k = timePoints->size[1];
            i0 = (int32_T)((uint32_T)j + 1U);
            c_x = t - timePoints->data[emlrtDynamicBoundsCheckFastR2012b(i0, 1,
              k, &l_emlrtBCI, &st) - 1];
            if (c_x < 0.0) {
              b_st.site = &f_emlrtRSI;
              eml_error(&b_st);
            }

            z1 = muDoubleScalarAbs(x - ksi) / (2.0 * muDoubleScalarSqrt(c_x));
            vals = muDoubleScalarAbs(x - ksi) / 3.5449077018110318 *
              ((muDoubleScalarExp(-(z0 * z0)) / z0 - muDoubleScalarExp(-(z1 * z1))
                / z1) + 1.7724538509055159 * (b_scalar_erf(z0) - b_scalar_erf(z1)));
          } else {
            vals = 0.0;
          }
        }
      }
    }
  }

  return vals;
}

void b_Acoeff(const emlrtStack *sp, real_T ksi, real_T j, const emxArray_real_T *
              x, real_T t, const emxArray_real_T *timePoints, emxArray_real_T
              *vals)
{
  emxArray_real_T *r5;
  emxArray_real_T *b;
  int32_T z0;
  int32_T i;
  emxArray_boolean_T *b_t;
  real_T b_x;
  emxArray_boolean_T *c_t;
  emxArray_real_T *b_z0;
  emxArray_real_T *c_x;
  emxArray_real_T *d_x;
  int32_T b_b[2];
  int32_T e_x[2];
  emxArray_real_T *f_x;
  const mxArray *y;
  static const int32_T iv4[2] = { 1, 45 };

  const mxArray *m0;
  char_T cv1[45];
  static const char_T cv2[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *b_y;
  static const int32_T iv5[2] = { 1, 21 };

  char_T cv3[21];
  static const char_T cv4[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  emxArray_boolean_T *d_t;
  real_T g_x;
  emxArray_boolean_T *e_t;
  emxArray_real_T *h_x;
  emxArray_real_T *i_x;
  emxArray_real_T *z1;
  int32_T c_z0[2];
  emxArray_real_T *d_z0;
  emxArray_real_T *j_x;
  const mxArray *c_y;
  static const int32_T iv6[2] = { 1, 45 };

  const mxArray *d_y;
  static const int32_T iv7[2] = { 1, 21 };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &b_st;
  d_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &r5, 2, &f_emlrtRTEI, true);
  emxInit_real_T(sp, &b, 2, &f_emlrtRTEI, true);

  /*  evaluate the coefficient A at the  boundary ksi=0 or ksi=1; */
  /*  for the index j which describes the time steps timePoints_j, at time t and space */
  /*  point x */
  /*  timePoints is a vector describing the time descritized domain */
  z0 = timePoints->size[1];
  i = (int32_T)emlrtIntegerCheckFastR2012b(j, &emlrtDCI, sp);
  if (t <= timePoints->data[emlrtDynamicBoundsCheckFastR2012b(i, 1, z0,
       &d_emlrtBCI, sp) - 1]) {
    z0 = vals->size[0] * vals->size[1];
    vals->size[0] = 1;
    vals->size[1] = 1;
    emxEnsureCapacity(sp, (emxArray__common *)vals, z0, (int32_T)sizeof(real_T),
                      &f_emlrtRTEI);
    vals->data[0] = 0.0;
  } else {
    emxInit_boolean_T(sp, &b_t, 2, &f_emlrtRTEI, true);
    z0 = b_t->size[0] * b_t->size[1];
    b_t->size[0] = 1;
    b_t->size[1] = 2 + x->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)b_t, z0, (int32_T)sizeof(boolean_T),
                      &f_emlrtRTEI);
    z0 = timePoints->size[1];
    i = (int32_T)j;
    b_t->data[0] = (t > timePoints->data[emlrtDynamicBoundsCheckFastR2012b(i, 1,
      z0, &e_emlrtBCI, sp) - 1]);
    z0 = timePoints->size[1];
    i = (int32_T)((uint32_T)j + 1U);
    b_t->data[b_t->size[0]] = (t <= timePoints->
      data[emlrtDynamicBoundsCheckFastR2012b(i, 1, z0, &f_emlrtBCI, sp) - 1]);
    i = x->size[1];
    for (z0 = 0; z0 < i; z0++) {
      b_t->data[b_t->size[0] * (z0 + 2)] = (x->data[x->size[0] * z0] == ksi);
    }

    st.site = &s_emlrtRSI;
    if (all(&st, b_t)) {
      z0 = timePoints->size[1];
      i = (int32_T)j;
      emlrtDynamicBoundsCheckFastR2012b(i, 1, z0, &c_emlrtBCI, sp);
      b_x = (t - timePoints->data[(int32_T)j - 1]) / 3.1415926535897931;
      st.site = &emlrtRSI;
      if (b_x < 0.0) {
        b_st.site = &f_emlrtRSI;
        eml_error(&b_st);
      }

      z0 = vals->size[0] * vals->size[1];
      vals->size[0] = 1;
      vals->size[1] = 1;
      emxEnsureCapacity(sp, (emxArray__common *)vals, z0, (int32_T)sizeof(real_T),
                        &f_emlrtRTEI);
      vals->data[0] = muDoubleScalarSqrt(b_x);
    } else {
      emxInit_boolean_T(sp, &c_t, 2, &f_emlrtRTEI, true);
      z0 = c_t->size[0] * c_t->size[1];
      c_t->size[0] = 1;
      c_t->size[1] = 2 + x->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)c_t, z0, (int32_T)sizeof
                        (boolean_T), &f_emlrtRTEI);
      z0 = timePoints->size[1];
      i = (int32_T)j;
      c_t->data[0] = (t > timePoints->data[emlrtDynamicBoundsCheckFastR2012b(i,
        1, z0, &g_emlrtBCI, sp) - 1]);
      z0 = timePoints->size[1];
      i = (int32_T)((uint32_T)j + 1U);
      c_t->data[c_t->size[0]] = (t <= timePoints->
        data[emlrtDynamicBoundsCheckFastR2012b(i, 1, z0, &h_emlrtBCI, sp) - 1]);
      i = x->size[1];
      for (z0 = 0; z0 < i; z0++) {
        c_t->data[c_t->size[0] * (z0 + 2)] = (x->data[x->size[0] * z0] != ksi);
      }

      emxInit_real_T(sp, &b_z0, 2, &g_emlrtRTEI, true);
      emxInit_real_T(sp, &c_x, 2, &f_emlrtRTEI, true);
      st.site = &t_emlrtRSI;
      if (all(&st, c_t)) {
        st.site = &b_emlrtRSI;
        z0 = timePoints->size[1];
        i = (int32_T)j;
        b_x = t - timePoints->data[emlrtDynamicBoundsCheckFastR2012b(i, 1, z0,
          &m_emlrtBCI, &st) - 1];
        if (b_x < 0.0) {
          b_st.site = &f_emlrtRSI;
          eml_error(&b_st);
        }

        emxInit_real_T(&st, &d_x, 2, &f_emlrtRTEI, true);
        b_x = 2.0 * muDoubleScalarSqrt(b_x);
        z0 = d_x->size[0] * d_x->size[1];
        d_x->size[0] = 1;
        d_x->size[1] = x->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)d_x, z0, (int32_T)sizeof
                          (real_T), &f_emlrtRTEI);
        i = x->size[0] * x->size[1];
        for (z0 = 0; z0 < i; z0++) {
          d_x->data[z0] = x->data[z0] - ksi;
        }

        b_abs(sp, d_x, b_z0);
        z0 = b_z0->size[0] * b_z0->size[1];
        b_z0->size[0] = 1;
        emxEnsureCapacity(sp, (emxArray__common *)b_z0, z0, (int32_T)sizeof
                          (real_T), &f_emlrtRTEI);
        i = b_z0->size[0];
        z0 = b_z0->size[1];
        i *= z0;
        emxFree_real_T(&d_x);
        for (z0 = 0; z0 < i; z0++) {
          b_z0->data[z0] /= b_x;
        }

        st.site = &u_emlrtRSI;
        mpower(&st, b_z0, c_x);
        z0 = c_x->size[0] * c_x->size[1];
        c_x->size[0] = 1;
        emxEnsureCapacity(sp, (emxArray__common *)c_x, z0, (int32_T)sizeof
                          (real_T), &f_emlrtRTEI);
        i = c_x->size[0];
        z0 = c_x->size[1];
        i *= z0;
        for (z0 = 0; z0 < i; z0++) {
          c_x->data[z0] = -c_x->data[z0];
        }

        z0 = b->size[0] * b->size[1];
        b->size[0] = 1;
        b->size[1] = c_x->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)b, z0, (int32_T)sizeof(real_T),
                          &f_emlrtRTEI);
        i = c_x->size[0] * c_x->size[1];
        for (z0 = 0; z0 < i; z0++) {
          b->data[z0] = c_x->data[z0];
        }

        for (i = 0; i < c_x->size[1]; i++) {
          b->data[i] = muDoubleScalarExp(b->data[i]);
        }

        st.site = &u_emlrtRSI;
        b_mrdivide(&st, b, b_z0);
        for (z0 = 0; z0 < 2; z0++) {
          i = c_x->size[0] * c_x->size[1];
          c_x->size[z0] = b_z0->size[z0];
          emxEnsureCapacity(sp, (emxArray__common *)c_x, i, (int32_T)sizeof
                            (real_T), &b_emlrtRTEI);
        }

        for (i = 0; i < b_z0->size[1]; i++) {
          c_x->data[i] = scalar_erf(b_z0->data[i]);
        }

        z0 = c_x->size[0] * c_x->size[1];
        c_x->size[0] = 1;
        emxEnsureCapacity(sp, (emxArray__common *)c_x, z0, (int32_T)sizeof
                          (real_T), &f_emlrtRTEI);
        i = c_x->size[0];
        z0 = c_x->size[1];
        i *= z0;
        for (z0 = 0; z0 < i; z0++) {
          c_x->data[z0] *= 1.7724538509055159;
        }

        for (z0 = 0; z0 < 2; z0++) {
          b_b[z0] = b->size[z0];
        }

        for (z0 = 0; z0 < 2; z0++) {
          e_x[z0] = c_x->size[z0];
        }

        emxInit_real_T(sp, &f_x, 2, &f_emlrtRTEI, true);
        emlrtSizeEqCheck2DFastR2012b(b_b, e_x, &g_emlrtECI, sp);
        z0 = f_x->size[0] * f_x->size[1];
        f_x->size[0] = 1;
        f_x->size[1] = x->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)f_x, z0, (int32_T)sizeof
                          (real_T), &f_emlrtRTEI);
        i = x->size[0] * x->size[1];
        for (z0 = 0; z0 < i; z0++) {
          f_x->data[z0] = x->data[z0] - ksi;
        }

        b_abs(sp, f_x, vals);
        z0 = vals->size[0] * vals->size[1];
        vals->size[0] = 1;
        emxEnsureCapacity(sp, (emxArray__common *)vals, z0, (int32_T)sizeof
                          (real_T), &f_emlrtRTEI);
        i = vals->size[0];
        z0 = vals->size[1];
        i *= z0;
        emxFree_real_T(&f_x);
        for (z0 = 0; z0 < i; z0++) {
          vals->data[z0] /= 3.5449077018110318;
        }

        st.site = &u_emlrtRSI;
        z0 = b->size[0] * b->size[1];
        b->size[0] = 1;
        emxEnsureCapacity(&st, (emxArray__common *)b, z0, (int32_T)sizeof(real_T),
                          &f_emlrtRTEI);
        i = b->size[0];
        z0 = b->size[1];
        i *= z0;
        for (z0 = 0; z0 < i; z0++) {
          b->data[z0] -= c_x->data[z0];
        }

        b_st.site = &gb_emlrtRSI;
        if (!(vals->size[1] == 1)) {
          if ((vals->size[1] == 1) || (b->size[1] == 1)) {
            y = NULL;
            m0 = emlrtCreateCharArray(2, iv4);
            for (i = 0; i < 45; i++) {
              cv1[i] = cv2[i];
            }

            emlrtInitCharArrayR2013a(&b_st, 45, m0, cv1);
            emlrtAssign(&y, m0);
            c_st.site = &ig_emlrtRSI;
            d_st.site = &tg_emlrtRSI;
            error(&c_st, message(&d_st, y, &f_emlrtMCI), &g_emlrtMCI);
          } else {
            b_y = NULL;
            m0 = emlrtCreateCharArray(2, iv5);
            for (i = 0; i < 21; i++) {
              cv3[i] = cv4[i];
            }

            emlrtInitCharArrayR2013a(&b_st, 21, m0, cv3);
            emlrtAssign(&b_y, m0);
            c_st.site = &jg_emlrtRSI;
            d_st.site = &ug_emlrtRSI;
            error(&c_st, message(&d_st, b_y, &h_emlrtMCI), &i_emlrtMCI);
          }
        }

        b_x = vals->data[0];
        z0 = vals->size[0] * vals->size[1];
        vals->size[0] = 1;
        vals->size[1] = b->size[1];
        emxEnsureCapacity(&st, (emxArray__common *)vals, z0, (int32_T)sizeof
                          (real_T), &f_emlrtRTEI);
        i = b->size[1];
        for (z0 = 0; z0 < i; z0++) {
          vals->data[vals->size[0] * z0] = b_x * b->data[b->size[0] * z0];
        }
      } else {
        emxInit_boolean_T(sp, &d_t, 2, &f_emlrtRTEI, true);
        z0 = d_t->size[0] * d_t->size[1];
        d_t->size[0] = 1;
        d_t->size[1] = 1 + x->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)d_t, z0, (int32_T)sizeof
                          (boolean_T), &f_emlrtRTEI);
        z0 = timePoints->size[1];
        i = (int32_T)((uint32_T)j + 1U);
        d_t->data[0] = (t > timePoints->data[emlrtDynamicBoundsCheckFastR2012b(i,
          1, z0, &i_emlrtBCI, sp) - 1]);
        i = x->size[1];
        for (z0 = 0; z0 < i; z0++) {
          d_t->data[d_t->size[0] * (z0 + 1)] = (x->data[x->size[0] * z0] == ksi);
        }

        st.site = &v_emlrtRSI;
        if (all(&st, d_t)) {
          z0 = timePoints->size[1];
          i = (int32_T)j;
          emlrtDynamicBoundsCheckFastR2012b(i, 1, z0, &b_emlrtBCI, sp);
          b_x = (t - timePoints->data[(int32_T)j - 1]) / 3.1415926535897931;
          z0 = timePoints->size[1];
          i = (int32_T)(j + 1.0);
          emlrtDynamicBoundsCheckFastR2012b(i, 1, z0, &emlrtBCI, sp);
          g_x = (t - timePoints->data[(int32_T)(j + 1.0) - 1]) /
            3.1415926535897931;
          st.site = &c_emlrtRSI;
          if (b_x < 0.0) {
            b_st.site = &f_emlrtRSI;
            eml_error(&b_st);
          }

          st.site = &c_emlrtRSI;
          if (g_x < 0.0) {
            b_st.site = &f_emlrtRSI;
            eml_error(&b_st);
          }

          z0 = vals->size[0] * vals->size[1];
          vals->size[0] = 1;
          vals->size[1] = 1;
          emxEnsureCapacity(sp, (emxArray__common *)vals, z0, (int32_T)sizeof
                            (real_T), &f_emlrtRTEI);
          vals->data[0] = muDoubleScalarSqrt(b_x) - muDoubleScalarSqrt(g_x);
        } else {
          emxInit_boolean_T(sp, &e_t, 2, &f_emlrtRTEI, true);
          z0 = e_t->size[0] * e_t->size[1];
          e_t->size[0] = 1;
          e_t->size[1] = 1 + x->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)e_t, z0, (int32_T)sizeof
                            (boolean_T), &f_emlrtRTEI);
          z0 = timePoints->size[1];
          i = (int32_T)((uint32_T)j + 1U);
          e_t->data[0] = (t > timePoints->data[emlrtDynamicBoundsCheckFastR2012b
                          (i, 1, z0, &j_emlrtBCI, sp) - 1]);
          i = x->size[1];
          for (z0 = 0; z0 < i; z0++) {
            e_t->data[e_t->size[0] * (z0 + 1)] = (x->data[x->size[0] * z0] !=
              ksi);
          }

          st.site = &w_emlrtRSI;
          if (all(&st, e_t)) {
            st.site = &d_emlrtRSI;
            z0 = timePoints->size[1];
            i = (int32_T)j;
            b_x = t - timePoints->data[emlrtDynamicBoundsCheckFastR2012b(i, 1,
              z0, &k_emlrtBCI, &st) - 1];
            if (b_x < 0.0) {
              b_st.site = &f_emlrtRSI;
              eml_error(&b_st);
            }

            emxInit_real_T(&st, &h_x, 2, &f_emlrtRTEI, true);
            b_x = 2.0 * muDoubleScalarSqrt(b_x);
            z0 = h_x->size[0] * h_x->size[1];
            h_x->size[0] = 1;
            h_x->size[1] = x->size[1];
            emxEnsureCapacity(sp, (emxArray__common *)h_x, z0, (int32_T)sizeof
                              (real_T), &f_emlrtRTEI);
            i = x->size[0] * x->size[1];
            for (z0 = 0; z0 < i; z0++) {
              h_x->data[z0] = x->data[z0] - ksi;
            }

            b_abs(sp, h_x, b_z0);
            z0 = b_z0->size[0] * b_z0->size[1];
            b_z0->size[0] = 1;
            emxEnsureCapacity(sp, (emxArray__common *)b_z0, z0, (int32_T)sizeof
                              (real_T), &f_emlrtRTEI);
            i = b_z0->size[0];
            z0 = b_z0->size[1];
            i *= z0;
            emxFree_real_T(&h_x);
            for (z0 = 0; z0 < i; z0++) {
              b_z0->data[z0] /= b_x;
            }

            st.site = &e_emlrtRSI;
            z0 = timePoints->size[1];
            i = (int32_T)((uint32_T)j + 1U);
            b_x = t - timePoints->data[emlrtDynamicBoundsCheckFastR2012b(i, 1,
              z0, &l_emlrtBCI, &st) - 1];
            if (b_x < 0.0) {
              b_st.site = &f_emlrtRSI;
              eml_error(&b_st);
            }

            emxInit_real_T(&st, &i_x, 2, &f_emlrtRTEI, true);
            b_x = 2.0 * muDoubleScalarSqrt(b_x);
            z0 = i_x->size[0] * i_x->size[1];
            i_x->size[0] = 1;
            i_x->size[1] = x->size[1];
            emxEnsureCapacity(sp, (emxArray__common *)i_x, z0, (int32_T)sizeof
                              (real_T), &f_emlrtRTEI);
            i = x->size[0] * x->size[1];
            for (z0 = 0; z0 < i; z0++) {
              i_x->data[z0] = x->data[z0] - ksi;
            }

            emxInit_real_T(sp, &z1, 2, &h_emlrtRTEI, true);
            b_abs(sp, i_x, z1);
            z0 = z1->size[0] * z1->size[1];
            z1->size[0] = 1;
            emxEnsureCapacity(sp, (emxArray__common *)z1, z0, (int32_T)sizeof
                              (real_T), &f_emlrtRTEI);
            i = z1->size[0];
            z0 = z1->size[1];
            i *= z0;
            emxFree_real_T(&i_x);
            for (z0 = 0; z0 < i; z0++) {
              z1->data[z0] /= b_x;
            }

            st.site = &x_emlrtRSI;
            mpower(&st, b_z0, c_x);
            z0 = c_x->size[0] * c_x->size[1];
            c_x->size[0] = 1;
            emxEnsureCapacity(sp, (emxArray__common *)c_x, z0, (int32_T)sizeof
                              (real_T), &f_emlrtRTEI);
            i = c_x->size[0];
            z0 = c_x->size[1];
            i *= z0;
            for (z0 = 0; z0 < i; z0++) {
              c_x->data[z0] = -c_x->data[z0];
            }

            z0 = b->size[0] * b->size[1];
            b->size[0] = 1;
            b->size[1] = c_x->size[1];
            emxEnsureCapacity(sp, (emxArray__common *)b, z0, (int32_T)sizeof
                              (real_T), &f_emlrtRTEI);
            i = c_x->size[0] * c_x->size[1];
            for (z0 = 0; z0 < i; z0++) {
              b->data[z0] = c_x->data[z0];
            }

            for (i = 0; i < c_x->size[1]; i++) {
              b->data[i] = muDoubleScalarExp(b->data[i]);
            }

            st.site = &x_emlrtRSI;
            b_mrdivide(&st, b, b_z0);
            st.site = &x_emlrtRSI;
            mpower(&st, z1, c_x);
            z0 = c_x->size[0] * c_x->size[1];
            c_x->size[0] = 1;
            emxEnsureCapacity(sp, (emxArray__common *)c_x, z0, (int32_T)sizeof
                              (real_T), &f_emlrtRTEI);
            i = c_x->size[0];
            z0 = c_x->size[1];
            i *= z0;
            for (z0 = 0; z0 < i; z0++) {
              c_x->data[z0] = -c_x->data[z0];
            }

            z0 = r5->size[0] * r5->size[1];
            r5->size[0] = 1;
            r5->size[1] = c_x->size[1];
            emxEnsureCapacity(sp, (emxArray__common *)r5, z0, (int32_T)sizeof
                              (real_T), &f_emlrtRTEI);
            i = c_x->size[0] * c_x->size[1];
            for (z0 = 0; z0 < i; z0++) {
              r5->data[z0] = c_x->data[z0];
            }

            for (i = 0; i < c_x->size[1]; i++) {
              r5->data[i] = muDoubleScalarExp(r5->data[i]);
            }

            st.site = &x_emlrtRSI;
            b_mrdivide(&st, r5, z1);
            for (z0 = 0; z0 < 2; z0++) {
              b_b[z0] = b->size[z0];
            }

            for (z0 = 0; z0 < 2; z0++) {
              c_z0[z0] = r5->size[z0];
            }

            emxInit_real_T(sp, &d_z0, 2, &f_emlrtRTEI, true);
            emlrtSizeEqCheck2DFastR2012b(b_b, c_z0, &e_emlrtECI, sp);
            z0 = d_z0->size[0] * d_z0->size[1];
            d_z0->size[0] = 1;
            d_z0->size[1] = b_z0->size[1];
            emxEnsureCapacity(sp, (emxArray__common *)d_z0, z0, (int32_T)sizeof
                              (real_T), &f_emlrtRTEI);
            i = b_z0->size[0] * b_z0->size[1];
            for (z0 = 0; z0 < i; z0++) {
              d_z0->data[z0] = b_z0->data[z0];
            }

            b_erf(sp, d_z0, b_z0);
            b_erf(sp, z1, c_x);
            emxFree_real_T(&d_z0);
            emxFree_real_T(&z1);
            for (z0 = 0; z0 < 2; z0++) {
              c_z0[z0] = b_z0->size[z0];
            }

            for (z0 = 0; z0 < 2; z0++) {
              e_x[z0] = c_x->size[z0];
            }

            emlrtSizeEqCheck2DFastR2012b(c_z0, e_x, &f_emlrtECI, sp);
            z0 = b_z0->size[0] * b_z0->size[1];
            b_z0->size[0] = 1;
            emxEnsureCapacity(sp, (emxArray__common *)b_z0, z0, (int32_T)sizeof
                              (real_T), &f_emlrtRTEI);
            i = b_z0->size[0];
            z0 = b_z0->size[1];
            i *= z0;
            for (z0 = 0; z0 < i; z0++) {
              b_z0->data[z0] = 1.7724538509055159 * (b_z0->data[z0] - c_x->
                data[z0]);
            }

            for (z0 = 0; z0 < 2; z0++) {
              b_b[z0] = b->size[z0];
            }

            for (z0 = 0; z0 < 2; z0++) {
              c_z0[z0] = b_z0->size[z0];
            }

            emxInit_real_T(sp, &j_x, 2, &f_emlrtRTEI, true);
            emlrtSizeEqCheck2DFastR2012b(b_b, c_z0, &e_emlrtECI, sp);
            z0 = j_x->size[0] * j_x->size[1];
            j_x->size[0] = 1;
            j_x->size[1] = x->size[1];
            emxEnsureCapacity(sp, (emxArray__common *)j_x, z0, (int32_T)sizeof
                              (real_T), &f_emlrtRTEI);
            i = x->size[0] * x->size[1];
            for (z0 = 0; z0 < i; z0++) {
              j_x->data[z0] = x->data[z0] - ksi;
            }

            b_abs(sp, j_x, vals);
            z0 = vals->size[0] * vals->size[1];
            vals->size[0] = 1;
            emxEnsureCapacity(sp, (emxArray__common *)vals, z0, (int32_T)sizeof
                              (real_T), &f_emlrtRTEI);
            i = vals->size[0];
            z0 = vals->size[1];
            i *= z0;
            emxFree_real_T(&j_x);
            for (z0 = 0; z0 < i; z0++) {
              vals->data[z0] /= 3.5449077018110318;
            }

            st.site = &x_emlrtRSI;
            z0 = b->size[0] * b->size[1];
            b->size[0] = 1;
            emxEnsureCapacity(&st, (emxArray__common *)b, z0, (int32_T)sizeof
                              (real_T), &f_emlrtRTEI);
            i = b->size[0];
            z0 = b->size[1];
            i *= z0;
            for (z0 = 0; z0 < i; z0++) {
              b->data[z0] = (b->data[z0] - r5->data[z0]) + b_z0->data[z0];
            }

            b_st.site = &gb_emlrtRSI;
            if (!(vals->size[1] == 1)) {
              if ((vals->size[1] == 1) || (b->size[1] == 1)) {
                c_y = NULL;
                m0 = emlrtCreateCharArray(2, iv6);
                for (i = 0; i < 45; i++) {
                  cv1[i] = cv2[i];
                }

                emlrtInitCharArrayR2013a(&b_st, 45, m0, cv1);
                emlrtAssign(&c_y, m0);
                c_st.site = &ig_emlrtRSI;
                d_st.site = &tg_emlrtRSI;
                error(&c_st, message(&d_st, c_y, &f_emlrtMCI), &g_emlrtMCI);
              } else {
                d_y = NULL;
                m0 = emlrtCreateCharArray(2, iv7);
                for (i = 0; i < 21; i++) {
                  cv3[i] = cv4[i];
                }

                emlrtInitCharArrayR2013a(&b_st, 21, m0, cv3);
                emlrtAssign(&d_y, m0);
                c_st.site = &jg_emlrtRSI;
                d_st.site = &ug_emlrtRSI;
                error(&c_st, message(&d_st, d_y, &h_emlrtMCI), &i_emlrtMCI);
              }
            }

            b_x = vals->data[0];
            z0 = vals->size[0] * vals->size[1];
            vals->size[0] = 1;
            vals->size[1] = b->size[1];
            emxEnsureCapacity(&st, (emxArray__common *)vals, z0, (int32_T)sizeof
                              (real_T), &f_emlrtRTEI);
            i = b->size[1];
            for (z0 = 0; z0 < i; z0++) {
              vals->data[vals->size[0] * z0] = b_x * b->data[b->size[0] * z0];
            }
          } else {
            z0 = vals->size[0] * vals->size[1];
            vals->size[0] = 1;
            vals->size[1] = 1;
            emxEnsureCapacity(sp, (emxArray__common *)vals, z0, (int32_T)sizeof
                              (real_T), &f_emlrtRTEI);
            vals->data[0] = 0.0;
          }

          emxFree_boolean_T(&e_t);
        }

        emxFree_boolean_T(&d_t);
      }

      emxFree_boolean_T(&c_t);
      emxFree_real_T(&c_x);
      emxFree_real_T(&b_z0);
    }

    emxFree_boolean_T(&b_t);
  }

  emxFree_real_T(&b);
  emxFree_real_T(&r5);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

real_T b_scalar_erf(real_T x)
{
  real_T y;
  real_T absx;
  real_T s;
  real_T S;
  real_T R;
  int32_T eint;

  /* ========================== COPYRIGHT NOTICE ============================ */
  /*  The algorithms for calculating ERF(X) and ERFC(X) are derived           */
  /*  from FDLIBM, which has the following notice:                            */
  /*                                                                          */
  /*  Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.       */
  /*                                                                          */
  /*  Developed at SunSoft, a Sun Microsystems, Inc. business.                */
  /*  Permission to use, copy, modify, and distribute this                    */
  /*  software is freely granted, provided that this notice                   */
  /*  is preserved.                                                           */
  /* =============================    END    ================================ */
  absx = muDoubleScalarAbs(x);
  if (muDoubleScalarIsNaN(x)) {
    y = x;
  } else if (muDoubleScalarIsInf(x)) {
    if (x < 0.0) {
      y = -1.0;
    } else {
      y = 1.0;
    }
  } else if (absx < 0.84375) {
    if (absx < 3.7252902984619141E-9) {
      if (absx < 2.8480945388892178E-306) {
        y = 0.125 * (8.0 * x + 1.0270333367641007 * x);
      } else {
        y = x + 0.12837916709551259 * x;
      }
    } else {
      s = x * x;
      y = x + x * ((0.12837916709551256 + s * (-0.3250421072470015 + s *
        (-0.02848174957559851 + s * (-0.0057702702964894416 + s *
        -2.3763016656650163E-5)))) / (1.0 + s * (0.39791722395915535 + s *
        (0.0650222499887673 + s * (0.0050813062818757656 + s *
        (0.00013249473800432164 + s * -3.9602282787753681E-6))))));
    }
  } else if (absx < 1.25) {
    S = -0.0023621185607526594 + (absx - 1.0) * (0.41485611868374833 + (absx -
      1.0) * (-0.37220787603570132 + (absx - 1.0) * (0.31834661990116175 + (absx
      - 1.0) * (-0.11089469428239668 + (absx - 1.0) * (0.035478304325618236 +
      (absx - 1.0) * -0.0021663755948687908)))));
    s = 1.0 + (absx - 1.0) * (0.10642088040084423 + (absx - 1.0) *
      (0.540397917702171 + (absx - 1.0) * (0.071828654414196266 + (absx - 1.0) *
                                (0.12617121980876164 + (absx - 1.0) *
      (0.013637083912029051 + (absx - 1.0) * 0.011984499846799107)))));
    if (x >= 0.0) {
      y = 0.84506291151046753 + S / s;
    } else {
      y = -0.84506291151046753 - S / s;
    }
  } else if (absx > 6.0) {
    if (x < 0.0) {
      y = -1.0;
    } else {
      y = 1.0;
    }
  } else {
    s = 1.0 / (absx * absx);
    if (absx < 2.8571434020996094) {
      R = -0.0098649440348471482 + s * (-0.69385857270718176 + s *
        (-10.558626225323291 + s * (-62.375332450326006 + s *
        (-162.39666946257347 + s * (-184.60509290671104 + s * (-81.2874355063066
        + s * -9.8143293441691455))))));
      S = 1.0 + s * (19.651271667439257 + s * (137.65775414351904 + s *
        (434.56587747522923 + s * (645.38727173326788 + s * (429.00814002756783
        + s * (108.63500554177944 + s * (6.5702497703192817 + s *
        -0.0604244152148581)))))));
    } else {
      R = -0.0098649429247001 + s * (-0.799283237680523 + s *
        (-17.757954917754752 + s * (-160.63638485582192 + s *
        (-637.56644336838963 + s * (-1025.0951316110772 + s * -483.5191916086514)))));
      S = 1.0 + s * (30.338060743482458 + s * (325.79251299657392 + s *
        (1536.729586084437 + s * (3199.8582195085955 + s * (2553.0504064331644 +
        s * (474.52854120695537 + s * -22.440952446585818))))));
    }

    if ((!muDoubleScalarIsInf(absx)) && (!muDoubleScalarIsNaN(absx))) {
      s = frexp(absx, &eint);
    } else {
      s = absx;
      eint = 0;
    }

    s = muDoubleScalarFloor(s * 2.097152E+6) / 2.097152E+6 * muDoubleScalarPower
      (2.0, eint);
    y = muDoubleScalarExp(-s * s - 0.5625) * muDoubleScalarExp((s - absx) * (s +
      absx) + R / S) / absx;
    if (x < 0.0) {
      y--;
    } else {
      y = 1.0 - y;
    }
  }

  return y;
}

real_T scalar_erf(real_T x)
{
  real_T y;
  real_T absx;
  real_T s;
  real_T S;
  real_T R;
  int32_T eint;

  /* ========================== COPYRIGHT NOTICE ============================ */
  /*  The algorithms for calculating ERF(X) and ERFC(X) are derived           */
  /*  from FDLIBM, which has the following notice:                            */
  /*                                                                          */
  /*  Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.       */
  /*                                                                          */
  /*  Developed at SunSoft, a Sun Microsystems, Inc. business.                */
  /*  Permission to use, copy, modify, and distribute this                    */
  /*  software is freely granted, provided that this notice                   */
  /*  is preserved.                                                           */
  /* =============================    END    ================================ */
  absx = muDoubleScalarAbs(x);
  if (muDoubleScalarIsNaN(x)) {
    y = x;
  } else if (muDoubleScalarIsInf(x)) {
    if (x < 0.0) {
      y = 2.0;
    } else {
      y = 0.0;
    }
  } else if (absx < 0.84375) {
    if (absx < 1.3877787807814457E-17) {
      y = 1.0 - x;
    } else {
      s = x * x;
      y = (0.12837916709551256 + s * (-0.3250421072470015 + s *
            (-0.02848174957559851 + s * (-0.0057702702964894416 + s *
              -2.3763016656650163E-5)))) / (1.0 + s * (0.39791722395915535 + s *
        (0.0650222499887673 + s * (0.0050813062818757656 + s *
        (0.00013249473800432164 + s * -3.9602282787753681E-6)))));
      if (x < 0.25) {
        y = 1.0 - (x + x * y);
      } else {
        y = 0.5 - (x * y + (x - 0.5));
      }
    }
  } else if (absx < 1.25) {
    S = -0.0023621185607526594 + (absx - 1.0) * (0.41485611868374833 + (absx -
      1.0) * (-0.37220787603570132 + (absx - 1.0) * (0.31834661990116175 + (absx
      - 1.0) * (-0.11089469428239668 + (absx - 1.0) * (0.035478304325618236 +
      (absx - 1.0) * -0.0021663755948687908)))));
    s = 1.0 + (absx - 1.0) * (0.10642088040084423 + (absx - 1.0) *
      (0.540397917702171 + (absx - 1.0) * (0.071828654414196266 + (absx - 1.0) *
                                (0.12617121980876164 + (absx - 1.0) *
      (0.013637083912029051 + (absx - 1.0) * 0.011984499846799107)))));
    if (x >= 0.0) {
      y = 0.15493708848953247 - S / s;
    } else {
      y = 1.0 + (0.84506291151046753 + S / s);
    }
  } else if (x < -6.0) {
    y = 2.0;
  } else if (x >= 28.0) {
    y = 0.0;
  } else {
    s = 1.0 / (absx * absx);
    if (absx < 2.8571414947509766) {
      R = -0.0098649440348471482 + s * (-0.69385857270718176 + s *
        (-10.558626225323291 + s * (-62.375332450326006 + s *
        (-162.39666946257347 + s * (-184.60509290671104 + s * (-81.2874355063066
        + s * -9.8143293441691455))))));
      S = 1.0 + s * (19.651271667439257 + s * (137.65775414351904 + s *
        (434.56587747522923 + s * (645.38727173326788 + s * (429.00814002756783
        + s * (108.63500554177944 + s * (6.5702497703192817 + s *
        -0.0604244152148581)))))));
    } else {
      R = -0.0098649429247001 + s * (-0.799283237680523 + s *
        (-17.757954917754752 + s * (-160.63638485582192 + s *
        (-637.56644336838963 + s * (-1025.0951316110772 + s * -483.5191916086514)))));
      S = 1.0 + s * (30.338060743482458 + s * (325.79251299657392 + s *
        (1536.729586084437 + s * (3199.8582195085955 + s * (2553.0504064331644 +
        s * (474.52854120695537 + s * -22.440952446585818))))));
    }

    if ((!muDoubleScalarIsInf(absx)) && (!muDoubleScalarIsNaN(absx))) {
      s = frexp(absx, &eint);
    } else {
      s = absx;
      eint = 0;
    }

    s = muDoubleScalarFloor(s * 2.097152E+6) / 2.097152E+6 * muDoubleScalarPower
      (2.0, eint);
    y = muDoubleScalarExp(-s * s - 0.5625) * muDoubleScalarExp((s - absx) * (s +
      absx) + R / S) / absx;
    if (x < 0.0) {
      y = 2.0 - y;
    }
  }

  return y;
}

/* End of code generation (Acoeff.c) */

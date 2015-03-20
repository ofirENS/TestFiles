/*
 * sum.c
 *
 * Code generation for function 'sum'
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
#include "sum.h"
#include "BoundaryElementHeatEquation_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "BoundaryElementHeatEquation_data.h"

/* Variable Definitions */
static emlrtRSInfo yd_emlrtRSI = { 72, "sum",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

static emlrtRSInfo ae_emlrtRSI = { 76, "sum",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

static emlrtRSInfo eg_emlrtRSI = { 70, "sum",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

static emlrtRTEInfo t_emlrtRTEI = { 55, 1, "sum",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

static emlrtRTEInfo u_emlrtRTEI = { 1, 14, "sum",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

/* Function Definitions */
void b_sum(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  uint32_T sz[3];
  int32_T k;
  int32_T vstride;
  int32_T iy;
  int32_T ixstart;
  boolean_T b9;
  int32_T j;
  int32_T ix;
  real_T s;
  boolean_T overflow;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  for (k = 0; k < 3; k++) {
    sz[k] = (uint32_T)x->size[k];
  }

  k = y->size[0] * y->size[1];
  y->size[0] = (int32_T)sz[0];
  y->size[1] = (int32_T)sz[1];
  emxEnsureCapacity(sp, (emxArray__common *)y, k, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  if ((x->size[0] == 0) || (x->size[1] == 0) || (x->size[2] == 0)) {
    k = y->size[0] * y->size[1];
    y->size[0] = (int32_T)sz[0];
    emxEnsureCapacity(sp, (emxArray__common *)y, k, (int32_T)sizeof(real_T),
                      &u_emlrtRTEI);
    k = y->size[0] * y->size[1];
    y->size[1] = (int32_T)sz[1];
    emxEnsureCapacity(sp, (emxArray__common *)y, k, (int32_T)sizeof(real_T),
                      &u_emlrtRTEI);
    vstride = (int32_T)sz[0] * (int32_T)sz[1];
    for (k = 0; k < vstride; k++) {
      y->data[k] = 0.0;
    }
  } else {
    k = 3;
    while ((k > 2) && (x->size[2] == 1)) {
      k = 2;
    }

    if (3 > k) {
      vstride = x->size[0] * x->size[1] * x->size[2];
    } else {
      vstride = 1;
      for (k = 0; k < 2; k++) {
        vstride *= x->size[k];
      }
    }

    iy = -1;
    st.site = &eg_emlrtRSI;
    ixstart = -1;
    st.site = &yd_emlrtRSI;
    if (1 > vstride) {
      b9 = false;
    } else {
      b9 = (vstride > 2147483646);
    }

    if (b9) {
      b_st.site = &cb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (j = 1; j <= vstride; j++) {
      ixstart++;
      ix = ixstart;
      s = x->data[ixstart];
      st.site = &ae_emlrtRSI;
      if (2 > x->size[2]) {
        overflow = false;
      } else {
        overflow = (x->size[2] > 2147483646);
      }

      if (overflow) {
        b_st.site = &cb_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (k = 2; k <= x->size[2]; k++) {
        ix += vstride;
        s += x->data[ix];
      }

      iy++;
      y->data[iy] = s;
    }
  }
}

void sum(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  uint32_T sz[2];
  int32_T iy;
  int32_T ixstart;
  boolean_T overflow;
  int32_T j;
  int32_T ix;
  real_T s;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  for (iy = 0; iy < 2; iy++) {
    sz[iy] = (uint32_T)x->size[iy];
  }

  iy = y->size[0];
  y->size[0] = (int32_T)sz[0];
  emxEnsureCapacity(sp, (emxArray__common *)y, iy, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    iy = y->size[0];
    y->size[0] = (int32_T)sz[0];
    emxEnsureCapacity(sp, (emxArray__common *)y, iy, (int32_T)sizeof(real_T),
                      &u_emlrtRTEI);
    ixstart = (int32_T)sz[0];
    for (iy = 0; iy < ixstart; iy++) {
      y->data[iy] = 0.0;
    }
  } else {
    iy = -1;
    ixstart = -1;
    st.site = &yd_emlrtRSI;
    overflow = (x->size[0] > 2147483646);
    if (overflow) {
      b_st.site = &cb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (j = 1; j <= x->size[0]; j++) {
      ixstart++;
      ix = ixstart;
      s = x->data[ixstart];
      st.site = &ae_emlrtRSI;
      if (2 > x->size[1]) {
        overflow = false;
      } else {
        overflow = (x->size[1] > 2147483646);
      }

      if (overflow) {
        b_st.site = &cb_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (k = 2; k <= x->size[1]; k++) {
        ix += x->size[0];
        s += x->data[ix];
      }

      iy++;
      y->data[iy] = s;
    }
  }
}

/* End of code generation (sum.c) */

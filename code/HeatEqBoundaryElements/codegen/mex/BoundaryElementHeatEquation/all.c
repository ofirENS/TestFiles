/*
 * all.c
 *
 * Code generation for function 'all'
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
#include "all.h"
#include "eml_int_forloop_overflow_check.h"
#include "BoundaryElementHeatEquation_mexutil.h"
#include "BoundaryElementHeatEquation_data.h"

/* Variable Definitions */
static emlrtRSInfo x_emlrtRSI = { 12, "all",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\all.m" };

static emlrtRSInfo y_emlrtRSI = { 39, "allOrAny",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\allOrAny.m"
};

static emlrtRSInfo ab_emlrtRSI = { 42, "allOrAny",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\allOrAny.m"
};

static emlrtRSInfo bb_emlrtRSI = { 124, "allOrAny",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\allOrAny.m"
};

static emlrtMCInfo emlrtMCI = { 25, 19, "assert",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\assert.m"
};

static emlrtBCInfo tb_emlrtBCI = { -1, -1, 126, 24, "", "allOrAny",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\allOrAny.m",
  0 };

static emlrtRSInfo tg_emlrtRSI = { 25, "assert",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\assert.m"
};

/* Function Definitions */
boolean_T all(const emlrtStack *sp, const emxArray_boolean_T *x)
{
  boolean_T y;
  boolean_T overflow;
  const mxArray *b_y;
  static const int32_T iv8[2] = { 1, 51 };

  const mxArray *m1;
  char_T cv5[51];
  int32_T i;
  static const char_T cv6[51] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 'l', 'l', '_', 'o', 'r',
    '_', 'a', 'n', 'y', '_', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  boolean_T exitg1;
  int32_T i16;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &x_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &y_emlrtRSI;
  if ((x->size[1] == 1) || (x->size[1] != 1)) {
    overflow = true;
  } else {
    overflow = false;
  }

  b_st.site = &ab_emlrtRSI;
  if (overflow) {
  } else {
    b_y = NULL;
    m1 = emlrtCreateCharArray(2, iv8);
    for (i = 0; i < 51; i++) {
      cv5[i] = cv6[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 51, m1, cv5);
    emlrtAssign(&b_y, m1);
    c_st.site = &tg_emlrtRSI;
    error(&c_st, message(&c_st, b_y, &emlrtMCI), &emlrtMCI);
  }

  y = true;
  b_st.site = &bb_emlrtRSI;
  if (1 > x->size[1]) {
    overflow = false;
  } else {
    overflow = (x->size[1] > 2147483646);
  }

  if (overflow) {
    c_st.site = &cb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  i = 1;
  exitg1 = false;
  while ((!exitg1) && (i <= x->size[1])) {
    i16 = x->size[1];
    if (x->data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i16, &tb_emlrtBCI, &st)
        - 1] == 0) {
      y = false;
      exitg1 = true;
    } else {
      i++;
    }
  }

  return y;
}

/* End of code generation (all.c) */

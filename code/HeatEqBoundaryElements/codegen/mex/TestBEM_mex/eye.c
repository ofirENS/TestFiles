/*
 * eye.c
 *
 * Code generation for function 'eye'
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
#include "eye.h"
#include "eml_warning.h"
#include "TestBEM_mex_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "TestBEM_mex_mexutil.h"
#include "TestBEM_mex_data.h"

/* Variable Definitions */
static emlrtRSInfo vd_emlrtRSI = { 34, "eye",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m" };

static emlrtRSInfo wd_emlrtRSI = { 80, "eye",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m" };

static emlrtMCInfo q_emlrtMCI = { 51, 13, "eml_assert_valid_size_arg",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_assert_valid_size_arg.m"
};

static emlrtMCInfo r_emlrtMCI = { 50, 23, "eml_assert_valid_size_arg",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_assert_valid_size_arg.m"
};

static emlrtMCInfo s_emlrtMCI = { 57, 5, "eml_assert_valid_size_arg",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_assert_valid_size_arg.m"
};

static emlrtMCInfo t_emlrtMCI = { 56, 15, "eml_assert_valid_size_arg",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_assert_valid_size_arg.m"
};

static emlrtRTEInfo r_emlrtRTEI = { 1, 14, "eye",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m" };

static emlrtDCInfo v_emlrtDCI = { 78, 11, "eye",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m",
  4 };

static emlrtDCInfo w_emlrtDCI = { 78, 13, "eye",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m",
  4 };

static emlrtRSInfo fg_emlrtRSI = { 56, "eml_assert_valid_size_arg",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_assert_valid_size_arg.m"
};

static emlrtRSInfo gg_emlrtRSI = { 50, "eml_assert_valid_size_arg",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_assert_valid_size_arg.m"
};

static emlrtRSInfo og_emlrtRSI = { 57, "eml_assert_valid_size_arg",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_assert_valid_size_arg.m"
};

static emlrtRSInfo sg_emlrtRSI = { 51, "eml_assert_valid_size_arg",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_assert_valid_size_arg.m"
};

/* Function Definitions */
void eye(const emlrtStack *sp, real_T varargin_1, emxArray_real_T *I)
{
  boolean_T p;
  boolean_T guard1 = false;
  const mxArray *y;
  static const int32_T iv19[2] = { 1, 28 };

  const mxArray *m8;
  char_T cv26[28];
  int32_T i;
  static const char_T cv27[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I',
    'n', 'p', 'u', 't' };

  const mxArray *b_y;
  const mxArray *c_y;
  real_T b_varargin_1;
  const mxArray *d_y;
  static const int32_T iv20[2] = { 1, 21 };

  char_T cv28[21];
  static const char_T cv29[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  int32_T loop_ub;
  boolean_T b5;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &vd_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  if ((varargin_1 != muDoubleScalarFloor(varargin_1)) || muDoubleScalarIsInf
      (varargin_1)) {
    p = false;
  } else {
    p = true;
  }

  guard1 = false;
  if (p) {
    if ((-2.147483648E+9 > varargin_1) || (2.147483647E+9 < varargin_1)) {
      p = false;
    } else {
      p = true;
    }

    if (p) {
      p = true;
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    p = false;
  }

  if (p) {
  } else {
    y = NULL;
    m8 = emlrtCreateCharArray(2, iv19);
    for (i = 0; i < 28; i++) {
      cv26[i] = cv27[i];
    }

    emlrtInitCharArrayR2013a(&st, 28, m8, cv26);
    emlrtAssign(&y, m8);
    b_y = NULL;
    m8 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m8) = MIN_int32_T;
    emlrtAssign(&b_y, m8);
    c_y = NULL;
    m8 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m8) = MAX_int32_T;
    emlrtAssign(&c_y, m8);
    b_st.site = &gg_emlrtRSI;
    c_st.site = &sg_emlrtRSI;
    error(&b_st, c_message(&c_st, y, b_y, c_y, &q_emlrtMCI), &r_emlrtMCI);
  }

  if (varargin_1 <= 0.0) {
    b_varargin_1 = 0.0;
  } else {
    b_varargin_1 = varargin_1;
  }

  if (2.147483647E+9 >= b_varargin_1) {
  } else {
    d_y = NULL;
    m8 = emlrtCreateCharArray(2, iv20);
    for (i = 0; i < 21; i++) {
      cv28[i] = cv29[i];
    }

    emlrtInitCharArrayR2013a(&st, 21, m8, cv28);
    emlrtAssign(&d_y, m8);
    b_st.site = &fg_emlrtRSI;
    c_st.site = &og_emlrtRSI;
    error(&b_st, message(&c_st, d_y, &s_emlrtMCI), &t_emlrtMCI);
  }

  i = I->size[0] * I->size[1];
  I->size[0] = (int32_T)emlrtNonNegativeCheckFastR2012b(varargin_1, &v_emlrtDCI,
    sp);
  I->size[1] = (int32_T)emlrtNonNegativeCheckFastR2012b(varargin_1, &w_emlrtDCI,
    sp);
  emxEnsureCapacity(sp, (emxArray__common *)I, i, (int32_T)sizeof(real_T),
                    &r_emlrtRTEI);
  loop_ub = (int32_T)emlrtNonNegativeCheckFastR2012b(varargin_1, &v_emlrtDCI, sp)
    * (int32_T)emlrtNonNegativeCheckFastR2012b(varargin_1, &w_emlrtDCI, sp);
  for (i = 0; i < loop_ub; i++) {
    I->data[i] = 0.0;
  }

  if ((int32_T)varargin_1 > 0) {
    st.site = &wd_emlrtRSI;
    if (1 > (int32_T)varargin_1) {
      b5 = false;
    } else {
      b5 = ((int32_T)varargin_1 > 2147483646);
    }

    if (b5) {
      b_st.site = &db_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (i = 0; i + 1 <= (int32_T)varargin_1; i++) {
      I->data[i + I->size[0] * i] = 1.0;
    }
  }
}

/* End of code generation (eye.c) */

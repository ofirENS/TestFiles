/*
 * eml_int_forloop_overflow_check.c
 *
 * Code generation for function 'eml_int_forloop_overflow_check'
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
#include "eml_int_forloop_overflow_check.h"
#include "TestBEM_mex_mexutil.h"

/* Variable Definitions */
static emlrtMCInfo b_emlrtMCI = { 75, 9, "eml_int_forloop_overflow_check",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"
};

static emlrtMCInfo c_emlrtMCI = { 74, 15, "eml_int_forloop_overflow_check",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"
};

static emlrtRSInfo jg_emlrtRSI = { 74, "eml_int_forloop_overflow_check",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"
};

static emlrtRSInfo rg_emlrtRSI = { 75, "eml_int_forloop_overflow_check",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"
};

/* Function Declarations */
static const mxArray *b_message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);

/* Function Definitions */
static const mxArray *b_message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m23;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m23, 2, pArrays, "message", true,
    location);
}

void check_forloop_overflow_error(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv9[2] = { 1, 34 };

  const mxArray *m2;
  char_T cv7[34];
  int32_T i;
  static const char_T cv8[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o',
    'p', '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  const mxArray *b_y;
  static const int32_T iv10[2] = { 1, 23 };

  char_T cv9[23];
  static const char_T cv10[23] = { 'c', 'o', 'd', 'e', 'r', '.', 'i', 'n', 't',
    'e', 'r', 'n', 'a', 'l', '.', 'i', 'n', 'd', 'e', 'x', 'I', 'n', 't' };

  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  y = NULL;
  m2 = emlrtCreateCharArray(2, iv9);
  for (i = 0; i < 34; i++) {
    cv7[i] = cv8[i];
  }

  emlrtInitCharArrayR2013a(sp, 34, m2, cv7);
  emlrtAssign(&y, m2);
  b_y = NULL;
  m2 = emlrtCreateCharArray(2, iv10);
  for (i = 0; i < 23; i++) {
    cv9[i] = cv10[i];
  }

  emlrtInitCharArrayR2013a(sp, 23, m2, cv9);
  emlrtAssign(&b_y, m2);
  st.site = &jg_emlrtRSI;
  b_st.site = &rg_emlrtRSI;
  error(&st, b_message(&b_st, y, b_y, &b_emlrtMCI), &c_emlrtMCI);
}

/* End of code generation (eml_int_forloop_overflow_check.c) */

/*
 * eml_warning.c
 *
 * Code generation for function 'eml_warning'
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
#include "eml_warning.h"
#include "BoundaryElementHeatEquation_mexutil.h"

/* Variable Definitions */
static emlrtMCInfo m_emlrtMCI = { 16, 13, "eml_warning",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_warning.m"
};

static emlrtMCInfo n_emlrtMCI = { 16, 5, "eml_warning",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_warning.m"
};

static emlrtRSInfo bh_emlrtRSI = { 16, "eml_warning",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_warning.m"
};

/* Function Declarations */
static void warning(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location);

/* Function Definitions */
static void warning(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "warning", true, location);
}

void b_eml_warning(const emlrtStack *sp, real_T varargin_2, const char_T
                   varargin_3[14])
{
  const mxArray *y;
  static const int32_T iv16[2] = { 1, 32 };

  const mxArray *m6;
  char_T cv22[32];
  int32_T i;
  static const char_T cv23[32] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'r', 'a', 'n', 'k', 'D', 'e', 'f', 'i', 'c', 'i', 'e',
    'n', 't', 'M', 'a', 't', 'r', 'i', 'x' };

  const mxArray *b_y;
  static const int32_T iv17[2] = { 1, 14 };

  char_T b_varargin_3[14];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m6 = emlrtCreateCharArray(2, iv16);
  for (i = 0; i < 32; i++) {
    cv22[i] = cv23[i];
  }

  emlrtInitCharArrayR2013a(sp, 32, m6, cv22);
  emlrtAssign(&y, m6);
  b_y = NULL;
  m6 = emlrtCreateCharArray(2, iv17);
  for (i = 0; i < 14; i++) {
    b_varargin_3[i] = varargin_3[i];
  }

  emlrtInitCharArrayR2013a(sp, 14, m6, b_varargin_3);
  emlrtAssign(&b_y, m6);
  st.site = &bh_emlrtRSI;
  warning(&st, c_message(&st, y, emlrt_marshallOut(varargin_2), b_y, &m_emlrtMCI),
          &n_emlrtMCI);
}

void eml_warning(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv14[2] = { 1, 27 };

  const mxArray *m4;
  char_T cv17[27];
  int32_T i;
  static const char_T cv18[27] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 's', 'i', 'n', 'g', 'u', 'l', 'a', 'r', 'M', 'a', 't',
    'r', 'i', 'x' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m4 = emlrtCreateCharArray(2, iv14);
  for (i = 0; i < 27; i++) {
    cv17[i] = cv18[i];
  }

  emlrtInitCharArrayR2013a(sp, 27, m4, cv17);
  emlrtAssign(&y, m4);
  st.site = &bh_emlrtRSI;
  warning(&st, message(&st, y, &m_emlrtMCI), &n_emlrtMCI);
}

/* End of code generation (eml_warning.c) */

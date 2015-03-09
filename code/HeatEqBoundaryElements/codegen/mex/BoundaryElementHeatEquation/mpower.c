/*
 * mpower.c
 *
 * Code generation for function 'mpower'
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
#include "mpower.h"
#include "BoundaryElementHeatEquation_emxutil.h"
#include "BoundaryElementHeatEquation_mexutil.h"
#include "BoundaryElementHeatEquation_data.h"

/* Variable Definitions */
static emlrtRSInfo eb_emlrtRSI = { 41, "mpower",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"
};

static emlrtRSInfo fb_emlrtRSI = { 54, "mpower",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"
};

static emlrtMCInfo d_emlrtMCI = { 34, 5, "mpower",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"
};

static emlrtMCInfo e_emlrtMCI = { 33, 15, "mpower",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"
};

static emlrtRTEInfo j_emlrtRTEI = { 1, 14, "mpower",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"
};

static emlrtRSInfo qg_emlrtRSI = { 33, "mpower",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"
};

static emlrtRSInfo bh_emlrtRSI = { 34, "mpower",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"
};

/* Function Definitions */
void mpower(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *c)
{
  boolean_T b0;
  const mxArray *y;
  static const int32_T iv11[2] = { 1, 19 };

  const mxArray *m3;
  char_T cv11[19];
  int32_T i;
  static const char_T cv12[19] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 's', 'q', 'u', 'a', 'r', 'e' };

  const mxArray *b_y;
  static const int32_T iv12[2] = { 1, 45 };

  char_T cv13[45];
  static const char_T cv14[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *c_y;
  static const int32_T iv13[2] = { 1, 21 };

  char_T cv15[21];
  static const char_T cv16[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  real_T b_a;
  int32_T loop_ub;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &d_st;
  f_st.tls = d_st.tls;
  b0 = (1 == a->size[1]);
  if (b0) {
  } else {
    y = NULL;
    m3 = emlrtCreateCharArray(2, iv11);
    for (i = 0; i < 19; i++) {
      cv11[i] = cv12[i];
    }

    emlrtInitCharArrayR2013a(sp, 19, m3, cv11);
    emlrtAssign(&y, m3);
    st.site = &qg_emlrtRSI;
    b_st.site = &bh_emlrtRSI;
    error(&st, message(&b_st, y, &d_emlrtMCI), &e_emlrtMCI);
  }

  st.site = &eb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  d_st.site = &gb_emlrtRSI;
  if (!(a->size[1] == 1)) {
    if (a->size[1] == 1) {
      b_y = NULL;
      m3 = emlrtCreateCharArray(2, iv12);
      for (i = 0; i < 45; i++) {
        cv13[i] = cv14[i];
      }

      emlrtInitCharArrayR2013a(&d_st, 45, m3, cv13);
      emlrtAssign(&b_y, m3);
      e_st.site = &ig_emlrtRSI;
      f_st.site = &tg_emlrtRSI;
      error(&e_st, message(&f_st, b_y, &f_emlrtMCI), &g_emlrtMCI);
    } else {
      c_y = NULL;
      m3 = emlrtCreateCharArray(2, iv13);
      for (i = 0; i < 21; i++) {
        cv15[i] = cv16[i];
      }

      emlrtInitCharArrayR2013a(&d_st, 21, m3, cv15);
      emlrtAssign(&c_y, m3);
      e_st.site = &jg_emlrtRSI;
      f_st.site = &ug_emlrtRSI;
      error(&e_st, message(&f_st, c_y, &h_emlrtMCI), &i_emlrtMCI);
    }
  }

  i = c->size[0] * c->size[1];
  c->size[0] = 1;
  c->size[1] = a->size[1];
  emxEnsureCapacity(&c_st, (emxArray__common *)c, i, (int32_T)sizeof(real_T),
                    &j_emlrtRTEI);
  b_a = a->data[0];
  loop_ub = a->size[0] * a->size[1];
  for (i = 0; i < loop_ub; i++) {
    c->data[i] = b_a * a->data[i];
  }
}

/* End of code generation (mpower.c) */

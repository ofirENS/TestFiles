/*
 * sum.c
 *
 * Code generation for function 'sum'
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
#include "sum.h"
#include "BoundaryElementHeatEquation_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "BoundaryElementHeatEquation_data.h"

/* Variable Definitions */
static emlrtRTEInfo sb_emlrtRTEI = { 1, 14, "sum",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

/* Function Definitions */
void b_sum(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
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
                    &q_emlrtRTEI);
  if (x->size[0] == 0) {
    iy = y->size[0];
    y->size[0] = (int32_T)sz[0];
    emxEnsureCapacity(sp, (emxArray__common *)y, iy, (int32_T)sizeof(real_T),
                      &sb_emlrtRTEI);
    ixstart = (int32_T)sz[0];
    for (iy = 0; iy < ixstart; iy++) {
      y->data[iy] = 0.0;
    }
  } else {
    iy = -1;
    ixstart = -1;
    st.site = &be_emlrtRSI;
    overflow = (x->size[0] > 2147483646);
    if (overflow) {
      b_st.site = &db_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (j = 1; j <= x->size[0]; j++) {
      ixstart++;
      ix = ixstart;
      s = x->data[ixstart];
      for (k = 0; k < 2; k++) {
        ix += x->size[0];
        s += x->data[ix];
      }

      iy++;
      y->data[iy] = s;
    }
  }
}

void sum(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  uint32_T sz[3];
  int32_T vstride;
  int32_T k;
  int32_T iy;
  int32_T ixstart;
  boolean_T b12;
  int32_T j;
  int32_T ix;
  real_T s;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  for (vstride = 0; vstride < 3; vstride++) {
    sz[vstride] = (uint32_T)x->size[vstride];
  }

  vstride = y->size[0] * y->size[1];
  y->size[0] = (int32_T)sz[0];
  y->size[1] = (int32_T)sz[1];
  emxEnsureCapacity(sp, (emxArray__common *)y, vstride, (int32_T)sizeof(real_T),
                    &q_emlrtRTEI);
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    vstride = y->size[0] * y->size[1];
    y->size[0] = (int32_T)sz[0];
    emxEnsureCapacity(sp, (emxArray__common *)y, vstride, (int32_T)sizeof(real_T),
                      &sb_emlrtRTEI);
    vstride = y->size[0] * y->size[1];
    y->size[1] = (int32_T)sz[1];
    emxEnsureCapacity(sp, (emxArray__common *)y, vstride, (int32_T)sizeof(real_T),
                      &sb_emlrtRTEI);
    k = (int32_T)sz[0] * (int32_T)sz[1];
    for (vstride = 0; vstride < k; vstride++) {
      y->data[vstride] = 0.0;
    }
  } else {
    vstride = 1;
    for (k = 0; k < 2; k++) {
      vstride *= x->size[k];
    }

    iy = -1;
    ixstart = -1;
    st.site = &be_emlrtRSI;
    if (1 > vstride) {
      b12 = false;
    } else {
      b12 = (vstride > 2147483646);
    }

    if (b12) {
      b_st.site = &db_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (j = 1; j <= vstride; j++) {
      ixstart++;
      ix = ixstart;
      s = x->data[ixstart];
      for (k = 0; k < 2; k++) {
        ix += vstride;
        s += x->data[ix];
      }

      iy++;
      y->data[iy] = s;
    }
  }
}

/* End of code generation (sum.c) */

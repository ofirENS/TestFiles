/*
 * diag.c
 *
 * Code generation for function 'diag'
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
#include "diag.h"
#include "BoundaryElementHeatEquation_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "BoundaryElementHeatEquation_data.h"

/* Variable Definitions */
static emlrtRTEInfo s_emlrtRTEI = { 1, 14, "diag",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m"
};

/* Function Definitions */
void b_diag(const emlrtStack *sp, const emxArray_real_T *v, emxArray_real_T *d)
{
  int32_T unnamed_idx_0;
  int32_T unnamed_idx_1;
  int32_T i26;
  boolean_T overflow;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  unnamed_idx_0 = v->size[1] + 1;
  unnamed_idx_1 = v->size[1] + 1;
  i26 = d->size[0] * d->size[1];
  d->size[0] = unnamed_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)d, i26, (int32_T)sizeof(real_T),
                    &s_emlrtRTEI);
  i26 = d->size[0] * d->size[1];
  d->size[1] = unnamed_idx_1;
  emxEnsureCapacity(sp, (emxArray__common *)d, i26, (int32_T)sizeof(real_T),
                    &s_emlrtRTEI);
  unnamed_idx_0 *= unnamed_idx_1;
  for (i26 = 0; i26 < unnamed_idx_0; i26++) {
    d->data[i26] = 0.0;
  }

  st.site = &xd_emlrtRSI;
  if (1 > v->size[1]) {
    overflow = false;
  } else {
    overflow = (v->size[1] > 2147483646);
  }

  if (overflow) {
    b_st.site = &cb_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (unnamed_idx_0 = 1; unnamed_idx_0 <= v->size[1]; unnamed_idx_0++) {
    d->data[(unnamed_idx_0 + d->size[0] * unnamed_idx_0) - 1] = 1.0;
  }
}

void diag(const emlrtStack *sp, const emxArray_real_T *v, emxArray_real_T *d)
{
  int32_T unnamed_idx_0;
  int32_T unnamed_idx_1;
  int32_T i25;
  boolean_T overflow;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  unnamed_idx_0 = v->size[1] + 1;
  unnamed_idx_1 = v->size[1] + 1;
  i25 = d->size[0] * d->size[1];
  d->size[0] = unnamed_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)d, i25, (int32_T)sizeof(real_T),
                    &s_emlrtRTEI);
  i25 = d->size[0] * d->size[1];
  d->size[1] = unnamed_idx_1;
  emxEnsureCapacity(sp, (emxArray__common *)d, i25, (int32_T)sizeof(real_T),
                    &s_emlrtRTEI);
  unnamed_idx_0 *= unnamed_idx_1;
  for (i25 = 0; i25 < unnamed_idx_0; i25++) {
    d->data[i25] = 0.0;
  }

  st.site = &wd_emlrtRSI;
  if (1 > v->size[1]) {
    overflow = false;
  } else {
    overflow = (v->size[1] > 2147483646);
  }

  if (overflow) {
    b_st.site = &cb_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (unnamed_idx_0 = 1; unnamed_idx_0 <= v->size[1]; unnamed_idx_0++) {
    d->data[unnamed_idx_0 + d->size[0] * (unnamed_idx_0 - 1)] = 1.0;
  }
}

/* End of code generation (diag.c) */

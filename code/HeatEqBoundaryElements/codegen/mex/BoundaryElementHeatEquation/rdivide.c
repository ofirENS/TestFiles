/*
 * rdivide.c
 *
 * Code generation for function 'rdivide'
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
#include "rdivide.h"
#include "BoundaryElementHeatEquation_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo b_emlrtRTEI = { 1, 14, "rdivide",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\rdivide.m"
};

/* Function Definitions */
void rdivide(const emlrtStack *sp, const emxArray_real_T *x, real_T y,
             emxArray_real_T *z)
{
  int32_T i4;
  int32_T loop_ub;
  i4 = z->size[0] * z->size[1];
  z->size[0] = 1;
  z->size[1] = x->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)z, i4, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  loop_ub = x->size[0] * x->size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    z->data[i4] = x->data[i4] / y;
  }
}

/* End of code generation (rdivide.c) */

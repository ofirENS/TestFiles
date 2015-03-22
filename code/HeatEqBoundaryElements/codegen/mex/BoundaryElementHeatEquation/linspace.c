/*
 * linspace.c
 *
 * Code generation for function 'linspace'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Acoeff.h"
#include "Bcoeff.h"
#include "CalculateA1B1B1Star.h"
#include "CalculateABBStarD.h"
#include "CalculateC.h"
#include "CalculateHeatSolution.h"
#include "CalculateXY.h"
#include "Ccoeff.h"
#include "Cone.h"
#include "Dcoeff.h"
#include "Done.h"
#include "GetRegularizationTerm.h"
#include "PlotResults.h"
#include "TestBemHeatEq_optimized.h"
#include "linspace.h"
#include "BoundaryElementHeatEquation_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo ac_emlrtRTEI = { 31, 1, "linspace",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\linspace.m"
};

/* Function Definitions */
void linspace(const emlrtStack *sp, real_T n1, emxArray_real_T *y)
{
  real_T delta1;
  int32_T i91;
  int32_T k;
  delta1 = muDoubleScalarFloor(n1);
  i91 = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = (int32_T)delta1;
  emxEnsureCapacity(sp, (emxArray__common *)y, i91, (int32_T)sizeof(real_T),
                    &ac_emlrtRTEI);
  if ((int32_T)delta1 >= 1) {
    y->data[(int32_T)delta1 - 1] = 1.0;
    if (y->size[1] >= 2) {
      y->data[0] = 0.0;
      if (y->size[1] >= 3) {
        delta1 = 1.0 / ((real_T)y->size[1] - 1.0);
        i91 = y->size[1];
        for (k = 0; k <= i91 - 3; k++) {
          y->data[1 + k] = (1.0 + (real_T)k) * delta1;
        }
      }
    }
  }
}

/* End of code generation (linspace.c) */

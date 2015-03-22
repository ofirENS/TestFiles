/*
 * exp.c
 *
 * Code generation for function 'exp'
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
#include "exp.h"

/* Function Definitions */
void b_exp(emxArray_real_T *x)
{
  int32_T i98;
  int32_T k;
  i98 = x->size[1];
  for (k = 0; k < i98; k++) {
    x->data[k] = muDoubleScalarExp(x->data[k]);
  }
}

/* End of code generation (exp.c) */

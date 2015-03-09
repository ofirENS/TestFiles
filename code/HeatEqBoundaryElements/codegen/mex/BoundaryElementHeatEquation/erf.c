/*
 * erf.c
 *
 * Code generation for function 'erf'
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
#include "erf.h"
#include "BoundaryElementHeatEquation_emxutil.h"
#include "BoundaryElementHeatEquation_data.h"

/* Function Definitions */
void b_erf(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  int32_T k;
  int32_T i9;
  for (k = 0; k < 2; k++) {
    i9 = y->size[0] * y->size[1];
    y->size[k] = x->size[k];
    emxEnsureCapacity(sp, (emxArray__common *)y, i9, (int32_T)sizeof(real_T),
                      &b_emlrtRTEI);
  }

  for (k = 0; k < x->size[1]; k++) {
    y->data[k] = b_scalar_erf(x->data[k]);
  }
}

/* End of code generation (erf.c) */

/*
 * BoundaryElementHeatEquation_mexutil.c
 *
 * Code generation for function 'BoundaryElementHeatEquation_mexutil'
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
#include "BoundaryElementHeatEquation_mexutil.h"
#include "mrdivide.h"

/* Function Definitions */
const mxArray *axes(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    const mxArray *d, const mxArray *e, emlrtMCInfo *location)
{
  const mxArray *pArrays[4];
  const mxArray *m28;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  return emlrtCallMATLABR2012b(sp, 1, &m28, 4, pArrays, "axes", true, location);
}

void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[14])
{
  m_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m16;
  real_T *pData;
  int32_T i53;
  int32_T i;
  y = NULL;
  m16 = emlrtCreateNumericArray(2, *(int32_T (*)[2])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = (real_T *)mxGetPr(m16);
  i53 = 0;
  for (i = 0; i < u->size[1]; i++) {
    pData[i53] = u->data[u->size[0] * i];
    i53++;
  }

  emlrtAssign(&y, m16);
  return y;
}

const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b, const mxArray
  *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m24;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m24, 3, pArrays, "sprintf", true,
    location);
}

const mxArray *c_message(const emlrtStack *sp, const mxArray *b, const mxArray
  *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m26;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m26, 3, pArrays, "message", true,
    location);
}

const mxArray *c_sprintf(const emlrtStack *sp, const mxArray *b, const mxArray
  *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m25;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m25, 2, pArrays, "sprintf", true,
    location);
}

void emlrt_marshallIn(const emlrtStack *sp, const mxArray *d_sprintf, const
                      char_T *identifier, char_T y[14])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  b_emlrt_marshallIn(sp, emlrtAlias(d_sprintf), &thisId, y);
  emlrtDestroyArray(&d_sprintf);
}

const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m15;
  y = NULL;
  m15 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m15);
  return y;
}

void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "error", true, location);
}

const mxArray *figure(const emlrtStack *sp, emlrtMCInfo *location)
{
  const mxArray *m27;
  return emlrtCallMATLABR2012b(sp, 1, &m27, 0, NULL, "figure", true, location);
}

void line(const emlrtStack *sp, const mxArray *b, const mxArray *c, const
          mxArray *d, const mxArray *e, const mxArray *f, const mxArray *g,
          const mxArray *h, const mxArray *i, const mxArray *j, const mxArray *k,
          emlrtMCInfo *location)
{
  const mxArray *pArrays[10];
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  pArrays[4] = f;
  pArrays[5] = g;
  pArrays[6] = h;
  pArrays[7] = i;
  pArrays[8] = j;
  pArrays[9] = k;
  emlrtCallMATLABR2012b(sp, 0, NULL, 10, pArrays, "line", true, location);
}

void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[14])
{
  int32_T iv87[2];
  int32_T i54;
  for (i54 = 0; i54 < 2; i54++) {
    iv87[i54] = 1 + 13 * i54;
  }

  emlrtCheckBuiltInR2012b(sp, msgId, src, "char", false, 2U, iv87);
  emlrtImportCharArray(src, ret, 14);
  emlrtDestroyArray(&src);
}

const mxArray *message(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
  *location)
{
  const mxArray *pArray;
  const mxArray *m22;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m22, 1, &pArray, "message", true,
    location);
}

/* End of code generation (BoundaryElementHeatEquation_mexutil.c) */

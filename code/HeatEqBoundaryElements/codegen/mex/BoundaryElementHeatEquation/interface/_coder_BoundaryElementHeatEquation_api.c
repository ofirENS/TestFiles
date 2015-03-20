/*
 * _coder_BoundaryElementHeatEquation_api.c
 *
 * Code generation for function '_coder_BoundaryElementHeatEquation_api'
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
#include "_coder_BoundaryElementHeatEquation_api.h"
#include "BoundaryElementHeatEquation_emxutil.h"
#include "eml_warning.h"
#include "BoundaryElementHeatEquation_mexutil.h"

/* Variable Definitions */
static emlrtRTEInfo ub_emlrtRTEI = { 1, 1,
  "_coder_BoundaryElementHeatEquation_api", "" };

/* Function Declarations */
static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *ksi, const
  char_T *identifier);
static const mxArray *c_emlrt_marshallOut(const real_T u[2]);
static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static const mxArray *d_emlrt_marshallOut(const emxArray_real_T *u);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *timePoints,
  const char_T *identifier, emxArray_real_T *y);
static const mxArray *e_emlrt_marshallOut(const emxArray_real_T *u);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static const mxArray *f_emlrt_marshallOut(const emxArray_real_T *u);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *f, const
  char_T *identifier, emxArray_real_T *y);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *r, const
  char_T *identifier, emxArray_real_T *y);
static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static boolean_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *plotFlag, const char_T *identifier);
static boolean_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static real_T n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static boolean_T r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);

/* Function Definitions */
static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *ksi, const
  char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = d_emlrt_marshallIn(sp, emlrtAlias(ksi), &thisId);
  emlrtDestroyArray(&ksi);
  return y;
}

static const mxArray *c_emlrt_marshallOut(const real_T u[2])
{
  const mxArray *y;
  static const int32_T iv62[2] = { 0, 0 };

  const mxArray *m16;
  static const int32_T iv63[2] = { 1, 2 };

  y = NULL;
  m16 = emlrtCreateNumericArray(2, iv62, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m16, (void *)u);
  emlrtSetDimensions((mxArray *)m16, iv63, 2);
  emlrtAssign(&y, m16);
  return y;
}

static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = n_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *d_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  static const int32_T iv64[2] = { 0, 0 };

  const mxArray *m17;
  y = NULL;
  m17 = emlrtCreateNumericArray(2, iv64, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m17, (void *)u->data);
  emlrtSetDimensions((mxArray *)m17, u->size, 2);
  emlrtAssign(&y, m17);
  return y;
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *timePoints,
  const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  f_emlrt_marshallIn(sp, emlrtAlias(timePoints), &thisId, y);
  emlrtDestroyArray(&timePoints);
}

static const mxArray *e_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  static const int32_T iv65[2] = { 0, 0 };

  const mxArray *m18;
  y = NULL;
  m18 = emlrtCreateNumericArray(2, iv65, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m18, (void *)u->data);
  emlrtSetDimensions((mxArray *)m18, u->size, 2);
  emlrtAssign(&y, m18);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  o_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *f_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  static const int32_T iv66[1] = { 0 };

  const mxArray *m19;
  y = NULL;
  m19 = emlrtCreateNumericArray(1, iv66, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m19, (void *)u->data);
  emlrtSetDimensions((mxArray *)m19, u->size, 1);
  emlrtAssign(&y, m19);
  return y;
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *f, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  h_emlrt_marshallIn(sp, emlrtAlias(f), &thisId, y);
  emlrtDestroyArray(&f);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  p_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *r, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  j_emlrt_marshallIn(sp, emlrtAlias(r), &thisId, y);
  emlrtDestroyArray(&r);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  q_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static boolean_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *plotFlag, const char_T *identifier)
{
  boolean_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = l_emlrt_marshallIn(sp, emlrtAlias(plotFlag), &thisId);
  emlrtDestroyArray(&plotFlag);
  return y;
}

static boolean_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = r_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, 0);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv68[2];
  boolean_T bv0[2];
  int32_T i83;
  static const boolean_T bv1[2] = { false, true };

  int32_T iv69[2];
  for (i83 = 0; i83 < 2; i83++) {
    iv68[i83] = 1 + -2 * i83;
    bv0[i83] = bv1[i83];
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv68, bv0, iv69);
  ret->size[0] = iv69[0];
  ret->size[1] = iv69[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv70[2];
  boolean_T bv2[2];
  int32_T i;
  int32_T iv71[2];
  for (i = 0; i < 2; i++) {
    iv70[i] = -1;
    bv2[i] = true;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv70, bv2, iv71);
  ret->size[0] = iv71[0];
  ret->size[1] = iv71[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv72[1];
  boolean_T bv3[1];
  int32_T iv73[1];
  iv72[0] = -1;
  bv3[0] = true;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 1U, iv72, bv3, iv73);
  ret->size[0] = iv73[0];
  ret->allocatedSize = ret->size[0];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static boolean_T r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  boolean_T ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "logical", false, 0U, 0);
  ret = *mxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

void Acoeff_api(const mxArray * const prhs[5], const mxArray *plhs[1])
{
  emxArray_real_T *timePoints;
  real_T ksi;
  real_T j;
  real_T x;
  real_T t;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &timePoints, 2, &ub_emlrtRTEI, true);

  /* Marshall function inputs */
  ksi = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "ksi");
  j = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "j");
  x = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "x");
  t = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "t");
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "timePoints", timePoints);

  /* Invoke the target function */
  ksi = Acoeff(&st, ksi, j, x, t, timePoints);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(ksi);
  timePoints->canFreeData = false;
  emxFree_real_T(&timePoints);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void Bcoeff_api(const mxArray * const prhs[5], const mxArray *plhs[1])
{
  emxArray_real_T *timePoints;
  real_T ksi;
  real_T j;
  real_T x;
  real_T t;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &timePoints, 2, &ub_emlrtRTEI, true);

  /* Marshall function inputs */
  ksi = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "ksi");
  j = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "j");
  x = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "x");
  t = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "t");
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "timePoints", timePoints);

  /* Invoke the target function */
  ksi = Bcoeff(&st, ksi, j, x, t, timePoints);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(ksi);
  timePoints->canFreeData = false;
  emxFree_real_T(&timePoints);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void CalculateA1B1B1Star_api(const mxArray * const prhs[4], const mxArray *plhs
  [3])
{
  real_T (*a1k)[2];
  real_T (*b1k)[2];
  real_T (*b1s)[2];
  emxArray_real_T *spacePoints;
  emxArray_real_T *timePoints;
  real_T k;
  real_T t;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  a1k = (real_T (*)[2])mxMalloc(sizeof(real_T [2]));
  b1k = (real_T (*)[2])mxMalloc(sizeof(real_T [2]));
  b1s = (real_T (*)[2])mxMalloc(sizeof(real_T [2]));
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &spacePoints, 2, &ub_emlrtRTEI, true);
  emxInit_real_T(&st, &timePoints, 2, &ub_emlrtRTEI, true);

  /* Marshall function inputs */
  k = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "k");
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "spacePoints", spacePoints);
  t = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "t");
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "timePoints", timePoints);

  /* Invoke the target function */
  CalculateA1B1B1Star(&st, k, spacePoints, t, timePoints, *a1k, *b1k, *b1s);

  /* Marshall function outputs */
  plhs[0] = c_emlrt_marshallOut(*a1k);
  plhs[1] = c_emlrt_marshallOut(*b1k);
  plhs[2] = c_emlrt_marshallOut(*b1s);
  timePoints->canFreeData = false;
  emxFree_real_T(&timePoints);
  spacePoints->canFreeData = false;
  emxFree_real_T(&spacePoints);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void Ccoeff_api(const mxArray * const prhs[4], const mxArray *plhs[1])
{
  emxArray_real_T *x;
  emxArray_real_T *vals;
  real_T k;
  real_T t;
  real_T spacePoints;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &x, 2, &ub_emlrtRTEI, true);
  emxInit_real_T(&st, &vals, 2, &ub_emlrtRTEI, true);

  /* Marshall function inputs */
  k = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "k");
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "x", x);
  t = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "t");
  spacePoints = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "spacePoints");

  /* Invoke the target function */
  Ccoeff(&st, k, x, t, spacePoints, vals);

  /* Marshall function outputs */
  plhs[0] = d_emlrt_marshallOut(vals);
  vals->canFreeData = false;
  emxFree_real_T(&vals);
  x->canFreeData = false;
  emxFree_real_T(&x);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void Cone_api(const mxArray * const prhs[3], const mxArray *plhs[1])
{
  emxArray_real_T *x;
  emxArray_real_T *spacePoints;
  emxArray_real_T *t;
  emxArray_real_T *vals;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &x, 2, &ub_emlrtRTEI, true);
  emxInit_real_T(&st, &spacePoints, 2, &ub_emlrtRTEI, true);
  emxInit_real_T(&st, &t, 2, &ub_emlrtRTEI, true);
  emxInit_real_T(&st, &vals, 2, &ub_emlrtRTEI, true);

  /* Marshall function inputs */
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "x", x);
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "spacePoints", spacePoints);
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "t", t);

  /* Invoke the target function */
  Cone(&st, x, spacePoints, t, vals);

  /* Marshall function outputs */
  plhs[0] = e_emlrt_marshallOut(vals);
  vals->canFreeData = false;
  emxFree_real_T(&vals);
  t->canFreeData = false;
  emxFree_real_T(&t);
  spacePoints->canFreeData = false;
  emxFree_real_T(&spacePoints);
  x->canFreeData = false;
  emxFree_real_T(&x);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void Dcoeff_api(const mxArray * const prhs[6], const mxArray *plhs[1])
{
  emxArray_real_T *y;
  emxArray_real_T *x;
  emxArray_real_T *timePoints;
  emxArray_real_T *f;
  real_T j;
  real_T t;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &y, 2, &ub_emlrtRTEI, true);
  emxInit_real_T(&st, &x, 2, &ub_emlrtRTEI, true);
  emxInit_real_T(&st, &timePoints, 2, &ub_emlrtRTEI, true);
  emxInit_real_T(&st, &f, 2, &ub_emlrtRTEI, true);

  /* Marshall function inputs */
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "y", y);
  j = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "j");
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "x", x);
  t = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "t");
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "timePoints", timePoints);
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[5]), "f", f);

  /* Invoke the target function */
  j = Dcoeff(&st, y, j, x, t, timePoints, f);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(j);
  f->canFreeData = false;
  emxFree_real_T(&f);
  timePoints->canFreeData = false;
  emxFree_real_T(&timePoints);
  x->canFreeData = false;
  emxFree_real_T(&x);
  y->canFreeData = false;
  emxFree_real_T(&y);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void Done_api(const mxArray * const prhs[5], const mxArray *plhs[1])
{
  emxArray_real_T *spacePoints;
  emxArray_real_T *timePoints;
  emxArray_real_T *f;
  real_T k;
  real_T t;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &spacePoints, 2, &ub_emlrtRTEI, true);
  emxInit_real_T(&st, &timePoints, 2, &ub_emlrtRTEI, true);
  emxInit_real_T(&st, &f, 2, &ub_emlrtRTEI, true);

  /* Marshall function inputs */
  k = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "k");
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "spacePoints", spacePoints);
  t = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "t");
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "timePoints", timePoints);
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "f", f);

  /* Invoke the target function */
  k = Done(&st, k, spacePoints, t, timePoints, f);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(k);
  f->canFreeData = false;
  emxFree_real_T(&f);
  timePoints->canFreeData = false;
  emxFree_real_T(&timePoints);
  spacePoints->canFreeData = false;
  emxFree_real_T(&spacePoints);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void GetRegularizationTerm_api(const mxArray * const prhs[2], const mxArray
  *plhs[1])
{
  emxArray_real_T *regTerm;
  real_T N;
  real_T order;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &regTerm, 2, &ub_emlrtRTEI, true);

  /* Marshall function inputs */
  N = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "N");
  order = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "order");

  /* Invoke the target function */
  GetRegularizationTerm(&st, N, order, regTerm);

  /* Marshall function outputs */
  plhs[0] = e_emlrt_marshallOut(regTerm);
  regTerm->canFreeData = false;
  emxFree_real_T(&regTerm);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void PlotResults_api(const mxArray * const prhs[4])
{
  emxArray_real_T *t;
  emxArray_real_T *sigIn;
  emxArray_real_T *u;
  emxArray_real_T *r;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &t, 2, &ub_emlrtRTEI, true);
  emxInit_real_T(&st, &sigIn, 2, &ub_emlrtRTEI, true);
  emxInit_real_T(&st, &u, 2, &ub_emlrtRTEI, true);
  b_emxInit_real_T(&st, &r, 1, &ub_emlrtRTEI, true);

  /* Marshall function inputs */
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "t", t);
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "sigIn", sigIn);
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "u", u);
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "r", r);

  /* Invoke the target function */
  PlotResults(&st, t, sigIn, u, r);
  r->canFreeData = false;
  emxFree_real_T(&r);
  u->canFreeData = false;
  emxFree_real_T(&u);
  sigIn->canFreeData = false;
  emxFree_real_T(&sigIn);
  t->canFreeData = false;
  emxFree_real_T(&t);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void TestBemHeatEq_optimized_api(const mxArray * const prhs[6], const mxArray
  *plhs[2])
{
  emxArray_real_T *sigIn;
  emxArray_real_T *u;
  emxArray_real_T *r;
  real_T regOrder;
  real_T lambda;
  real_T alpha;
  real_T numSpacePoints;
  boolean_T plotFlag;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &sigIn, 2, &ub_emlrtRTEI, true);
  emxInit_real_T(&st, &u, 2, &ub_emlrtRTEI, true);
  b_emxInit_real_T(&st, &r, 1, &ub_emlrtRTEI, true);

  /* Marshall function inputs */
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "sigIn", sigIn);
  regOrder = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "regOrder");
  lambda = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "lambda");
  alpha = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "alpha");
  numSpacePoints = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]),
    "numSpacePoints");
  plotFlag = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "plotFlag");

  /* Invoke the target function */
  TestBemHeatEq_optimized(&st, sigIn, regOrder, lambda, alpha, numSpacePoints,
    plotFlag, u, r);

  /* Marshall function outputs */
  plhs[0] = e_emlrt_marshallOut(u);
  plhs[1] = f_emlrt_marshallOut(r);
  r->canFreeData = false;
  emxFree_real_T(&r);
  u->canFreeData = false;
  emxFree_real_T(&u);
  sigIn->canFreeData = false;
  emxFree_real_T(&sigIn);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_BoundaryElementHeatEquation_api.c) */

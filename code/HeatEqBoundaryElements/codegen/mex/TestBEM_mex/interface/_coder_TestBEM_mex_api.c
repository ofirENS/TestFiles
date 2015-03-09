/*
 * _coder_TestBEM_mex_api.c
 *
 * Code generation for function '_coder_TestBEM_mex_api'
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
#include "_coder_TestBEM_mex_api.h"
#include "TestBEM_mex_emxutil.h"
#include "eml_warning.h"
#include "TestBEM_mex_mexutil.h"

/* Variable Definitions */
static emlrtRTEInfo ub_emlrtRTEI = { 1, 1, "_coder_TestBEM_mex_api", "" };

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
static const mxArray *g_emlrt_marshallOut(const emxArray_real_T *u);
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
  static const int32_T iv79[2] = { 0, 0 };

  const mxArray *m17;
  static const int32_T iv80[2] = { 1, 2 };

  y = NULL;
  m17 = emlrtCreateNumericArray(2, iv79, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m17, (void *)u);
  emlrtSetDimensions((mxArray *)m17, iv80, 2);
  emlrtAssign(&y, m17);
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
  static const int32_T iv81[2] = { 0, 0 };

  const mxArray *m18;
  y = NULL;
  m18 = emlrtCreateNumericArray(2, iv81, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m18, (void *)u->data);
  emlrtSetDimensions((mxArray *)m18, u->size, 2);
  emlrtAssign(&y, m18);
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
  static const int32_T iv82[2] = { 0, 0 };

  const mxArray *m19;
  y = NULL;
  m19 = emlrtCreateNumericArray(2, iv82, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m19, (void *)u->data);
  emlrtSetDimensions((mxArray *)m19, u->size, 2);
  emlrtAssign(&y, m19);
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
  static const int32_T iv83[2] = { 0, 0 };

  const mxArray *m20;
  y = NULL;
  m20 = emlrtCreateNumericArray(2, iv83, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m20, (void *)u->data);
  emlrtSetDimensions((mxArray *)m20, u->size, 2);
  emlrtAssign(&y, m20);
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

static const mxArray *g_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  static const int32_T iv84[1] = { 0 };

  const mxArray *m21;
  y = NULL;
  m21 = emlrtCreateNumericArray(1, iv84, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m21, (void *)u->data);
  emlrtSetDimensions((mxArray *)m21, u->size, 1);
  emlrtAssign(&y, m21);
  return y;
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
  int32_T iv86[2];
  boolean_T bv0[2];
  int32_T i55;
  static const boolean_T bv1[2] = { false, true };

  int32_T iv87[2];
  for (i55 = 0; i55 < 2; i55++) {
    iv86[i55] = 1 + -2 * i55;
    bv0[i55] = bv1[i55];
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv86, bv0, iv87);
  ret->size[0] = iv87[0];
  ret->size[1] = iv87[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv88[2];
  boolean_T bv2[2];
  int32_T i;
  int32_T iv89[2];
  for (i = 0; i < 2; i++) {
    iv88[i] = -1;
    bv2[i] = true;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv88, bv2, iv89);
  ret->size[0] = iv89[0];
  ret->size[1] = iv89[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv90[1];
  boolean_T bv3[1];
  int32_T iv91[1];
  iv90[0] = -1;
  bv3[0] = true;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 1U, iv90, bv3, iv91);
  ret->size[0] = iv91[0];
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

void Aone_api(const mxArray * const prhs[4], const mxArray *plhs[1])
{
  real_T (*vals)[2];
  emxArray_real_T *spacePoints;
  emxArray_real_T *timePoints;
  real_T k;
  real_T t;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  vals = (real_T (*)[2])mxMalloc(sizeof(real_T [2]));
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &spacePoints, 2, &ub_emlrtRTEI, true);
  emxInit_real_T(&st, &timePoints, 2, &ub_emlrtRTEI, true);

  /* Marshall function inputs */
  k = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "k");
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "spacePoints", spacePoints);
  t = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "t");
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "timePoints", timePoints);

  /* Invoke the target function */
  Aone(&st, k, spacePoints, t, timePoints, *vals);

  /* Marshall function outputs */
  plhs[0] = c_emlrt_marshallOut(*vals);
  timePoints->canFreeData = false;
  emxFree_real_T(&timePoints);
  spacePoints->canFreeData = false;
  emxFree_real_T(&spacePoints);
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

void BoneStar_api(const mxArray * const prhs[4], const mxArray *plhs[1])
{
  real_T (*vals)[2];
  emxArray_real_T *spacePoints;
  emxArray_real_T *timePoints;
  real_T k;
  real_T t;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  vals = (real_T (*)[2])mxMalloc(sizeof(real_T [2]));
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &spacePoints, 2, &ub_emlrtRTEI, true);
  emxInit_real_T(&st, &timePoints, 2, &ub_emlrtRTEI, true);

  /* Marshall function inputs */
  k = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "k");
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "spacePoints", spacePoints);
  t = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "t");
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "timePoints", timePoints);

  /* Invoke the target function */
  BoneStar(&st, k, spacePoints, t, timePoints, *vals);

  /* Marshall function outputs */
  plhs[0] = c_emlrt_marshallOut(*vals);
  timePoints->canFreeData = false;
  emxFree_real_T(&timePoints);
  spacePoints->canFreeData = false;
  emxFree_real_T(&spacePoints);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void Bone_api(const mxArray * const prhs[4], const mxArray *plhs[1])
{
  real_T (*vals)[2];
  emxArray_real_T *spacePoints;
  emxArray_real_T *timePoints;
  real_T k;
  real_T t;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  vals = (real_T (*)[2])mxMalloc(sizeof(real_T [2]));
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &spacePoints, 2, &ub_emlrtRTEI, true);
  emxInit_real_T(&st, &timePoints, 2, &ub_emlrtRTEI, true);

  /* Marshall function inputs */
  k = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "k");
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "spacePoints", spacePoints);
  t = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "t");
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "timePoints", timePoints);

  /* Invoke the target function */
  Bone(&st, k, spacePoints, t, timePoints, *vals);

  /* Marshall function outputs */
  plhs[0] = c_emlrt_marshallOut(*vals);
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

void TestBemHeatEq_optimized_api(const mxArray * const prhs[4], const mxArray
  *plhs[2])
{
  emxArray_real_T *sigIn;
  emxArray_real_T *u;
  emxArray_real_T *r;
  real_T regOrder;
  real_T lambda;
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
  plotFlag = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "plotFlag");

  /* Invoke the target function */
  TestBemHeatEq_optimized(&st, sigIn, regOrder, lambda, plotFlag, u, r);

  /* Marshall function outputs */
  plhs[0] = f_emlrt_marshallOut(u);
  plhs[1] = g_emlrt_marshallOut(r);
  r->canFreeData = false;
  emxFree_real_T(&r);
  u->canFreeData = false;
  emxFree_real_T(&u);
  sigIn->canFreeData = false;
  emxFree_real_T(&sigIn);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_TestBEM_mex_api.c) */

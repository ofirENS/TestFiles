/*
 * mldivide.c
 *
 * Code generation for function 'mldivide'
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
#include "mldivide.h"
#include "TestBEM_mex_emxutil.h"
#include "mrdivide.h"
#include "eml_int_forloop_overflow_check.h"
#include "colon.h"
#include "eml_warning.h"
#include "TestBEM_mex_mexutil.h"
#include "TestBEM_mex_data.h"

/* Variable Definitions */
static emlrtRSInfo xf_emlrtRSI = { 1, "mldivide",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.p"
};

static emlrtRSInfo yf_emlrtRSI = { 117, "eml_lusolve",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

static emlrtRSInfo ag_emlrtRSI = { 128, "eml_lusolve",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

static emlrtRSInfo bg_emlrtRSI = { 130, "eml_lusolve",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

static emlrtMCInfo bb_emlrtMCI = { 1, 1, "mldivide",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.p"
};

static emlrtRTEInfo tb_emlrtRTEI = { 1, 2, "mldivide",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.p"
};

/* Function Declarations */
static void b_eml_lusolve(const emlrtStack *sp, const emxArray_real_T *A,
  emxArray_real_T *B);
static void c_eml_qrsolve(const emlrtStack *sp, const emxArray_real_T *A,
  emxArray_real_T *B, emxArray_real_T *Y);

/* Function Definitions */
static void b_eml_lusolve(const emlrtStack *sp, const emxArray_real_T *A,
  emxArray_real_T *B)
{
  emxArray_real_T *b_A;
  int32_T i58;
  int32_T iy;
  emxArray_int32_T *ipiv;
  int32_T info;
  int32_T i59;
  int32_T b;
  int32_T j;
  int32_T mmj;
  int32_T c;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  double * xix0_t;
  int32_T ix;
  boolean_T overflow;
  int32_T k;
  real_T temp;
  int32_T i60;
  boolean_T b_c;
  ptrdiff_t m_t;
  ptrdiff_t incy_t;
  ptrdiff_t lda_t;
  double * alpha1_t;
  double * Aia0_t;
  double * Aiy0_t;
  char_T DIAGA;
  char_T TRANSA;
  char_T UPLO;
  char_T SIDE;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &b_A, 2, &ob_emlrtRTEI, true);
  st.site = &ib_emlrtRSI;
  b_st.site = &lb_emlrtRSI;
  c_st.site = &nb_emlrtRSI;
  d_st.site = &ob_emlrtRSI;
  i58 = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity(&d_st, (emxArray__common *)b_A, i58, (int32_T)sizeof(real_T),
                    &ob_emlrtRTEI);
  iy = A->size[0] * A->size[1];
  for (i58 = 0; i58 < iy; i58++) {
    b_A->data[i58] = A->data[i58];
  }

  b_emxInit_int32_T(&d_st, &ipiv, 2, &ob_emlrtRTEI, true);
  e_st.site = &qb_emlrtRSI;
  f_st.site = &rb_emlrtRSI;
  g_st.site = &sb_emlrtRSI;
  h_st.site = &tb_emlrtRSI;
  eml_signed_integer_colon(&h_st, muIntScalarMin_sint32(A->size[1], A->size[1]),
    ipiv);
  info = 0;
  if (A->size[1] < 1) {
  } else {
    i59 = A->size[1] - 1;
    b = muIntScalarMin_sint32(i59, A->size[1]);
    e_st.site = &pb_emlrtRSI;
    for (j = 1; j <= b; j++) {
      mmj = A->size[1] - j;
      c = (j - 1) * (A->size[1] + 1) + 1;
      e_st.site = &if_emlrtRSI;
      f_st.site = &yb_emlrtRSI;
      if (mmj + 1 < 1) {
        iy = -1;
      } else {
        g_st.site = &ac_emlrtRSI;
        h_st.site = &ac_emlrtRSI;
        n_t = (ptrdiff_t)(mmj + 1);
        h_st.site = &ac_emlrtRSI;
        incx_t = (ptrdiff_t)(1);
        i58 = b_A->size[0] * b_A->size[1];
        xix0_t = (double *)(&b_A->data[emlrtDynamicBoundsCheckFastR2012b(c, 1,
          i58, &je_emlrtBCI, &g_st) - 1]);
        incx_t = idamax(&n_t, xix0_t, &incx_t);
        iy = (int32_T)incx_t - 1;
      }

      if (b_A->data[(c + iy) - 1] != 0.0) {
        if (iy != 0) {
          ipiv->data[j - 1] = j + iy;
          e_st.site = &jf_emlrtRSI;
          f_st.site = &bc_emlrtRSI;
          g_st.site = &cc_emlrtRSI;
          ix = j;
          iy += j;
          h_st.site = &dc_emlrtRSI;
          overflow = (A->size[1] > 2147483646);
          if (overflow) {
            i_st.site = &db_emlrtRSI;
            check_forloop_overflow_error(&i_st);
          }

          for (k = 1; k <= A->size[1]; k++) {
            i58 = b_A->size[0] * b_A->size[1];
            temp = b_A->data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, i58,
              &le_emlrtBCI, &g_st) - 1];
            i58 = b_A->size[0] * b_A->size[1];
            i60 = b_A->size[0] * b_A->size[1];
            b_A->data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, i58, &le_emlrtBCI,
              &g_st) - 1] = b_A->data[emlrtDynamicBoundsCheckFastR2012b(iy, 1,
              i60, &le_emlrtBCI, &g_st) - 1];
            i58 = b_A->size[0] * b_A->size[1];
            b_A->data[emlrtDynamicBoundsCheckFastR2012b(iy, 1, i58, &le_emlrtBCI,
              &g_st) - 1] = temp;
            ix += A->size[1];
            iy += A->size[1];
          }
        }

        iy = c + mmj;
        e_st.site = &kf_emlrtRSI;
        if (c + 1 > iy) {
          b_c = false;
        } else {
          b_c = (iy > 2147483646);
        }

        if (b_c) {
          f_st.site = &db_emlrtRSI;
          check_forloop_overflow_error(&f_st);
        }

        for (k = c; k + 1 <= iy; k++) {
          b_A->data[k] /= b_A->data[c - 1];
        }
      } else {
        info = j;
      }

      iy = A->size[1] - j;
      e_st.site = &lf_emlrtRSI;
      f_st.site = &ec_emlrtRSI;
      g_st.site = &fc_emlrtRSI;
      if ((mmj < 1) || (iy < 1)) {
      } else {
        h_st.site = &gc_emlrtRSI;
        temp = -1.0;
        m_t = (ptrdiff_t)(mmj);
        n_t = (ptrdiff_t)(iy);
        incx_t = (ptrdiff_t)(1);
        incy_t = (ptrdiff_t)(A->size[1]);
        lda_t = (ptrdiff_t)(A->size[1]);
        alpha1_t = (double *)(&temp);
        i58 = b_A->size[0] * b_A->size[1];
        i60 = (c + A->size[1]) + 1;
        Aia0_t = (double *)(&b_A->data[emlrtDynamicBoundsCheckFastR2012b(i60, 1,
          i58, &ke_emlrtBCI, &h_st) - 1]);
        i58 = b_A->size[0] * b_A->size[1];
        xix0_t = (double *)(&b_A->data[emlrtDynamicBoundsCheckFastR2012b(c + 1,
          1, i58, &ke_emlrtBCI, &h_st) - 1]);
        i58 = b_A->size[0] * b_A->size[1];
        i60 = c + A->size[1];
        Aiy0_t = (double *)(&b_A->data[emlrtDynamicBoundsCheckFastR2012b(i60, 1,
          i58, &ke_emlrtBCI, &h_st) - 1]);
        dger(&m_t, &n_t, alpha1_t, xix0_t, &incx_t, Aiy0_t, &incy_t, Aia0_t,
             &lda_t);
      }
    }

    if ((info == 0) && (!(b_A->data[(A->size[1] + b_A->size[0] * (A->size[1] - 1))
                          - 1] != 0.0))) {
      info = A->size[1];
    }
  }

  if (info > 0) {
    b_st.site = &mb_emlrtRSI;
    warn_singular(&b_st);
  }

  b_st.site = &yf_emlrtRSI;
  for (iy = 0; iy + 1 < A->size[1]; iy++) {
    if (ipiv->data[iy] != iy + 1) {
      temp = B->data[iy];
      B->data[iy] = B->data[ipiv->data[iy] - 1];
      B->data[ipiv->data[iy] - 1] = temp;
    }
  }

  emxFree_int32_T(&ipiv);
  b_st.site = &ag_emlrtRSI;
  c_st.site = &ic_emlrtRSI;
  if (A->size[1] < 1) {
  } else {
    d_st.site = &jc_emlrtRSI;
    temp = 1.0;
    DIAGA = 'U';
    TRANSA = 'N';
    UPLO = 'L';
    SIDE = 'L';
    e_st.site = &jc_emlrtRSI;
    m_t = (ptrdiff_t)(A->size[1]);
    e_st.site = &jc_emlrtRSI;
    n_t = (ptrdiff_t)(1);
    e_st.site = &jc_emlrtRSI;
    lda_t = (ptrdiff_t)(A->size[1]);
    e_st.site = &jc_emlrtRSI;
    incx_t = (ptrdiff_t)(A->size[1]);
    i58 = b_A->size[0] * b_A->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i58, &ie_emlrtBCI, &d_st);
    Aia0_t = (double *)(&b_A->data[0]);
    xix0_t = (double *)(&B->data[0]);
    alpha1_t = (double *)(&temp);
    dtrsm(&SIDE, &UPLO, &TRANSA, &DIAGA, &m_t, &n_t, alpha1_t, Aia0_t, &lda_t,
          xix0_t, &incx_t);
  }

  b_st.site = &bg_emlrtRSI;
  c_st.site = &ic_emlrtRSI;
  if (A->size[1] < 1) {
  } else {
    d_st.site = &jc_emlrtRSI;
    temp = 1.0;
    DIAGA = 'N';
    TRANSA = 'N';
    UPLO = 'U';
    SIDE = 'L';
    e_st.site = &jc_emlrtRSI;
    m_t = (ptrdiff_t)(A->size[1]);
    e_st.site = &jc_emlrtRSI;
    n_t = (ptrdiff_t)(1);
    e_st.site = &jc_emlrtRSI;
    lda_t = (ptrdiff_t)(A->size[1]);
    e_st.site = &jc_emlrtRSI;
    incx_t = (ptrdiff_t)(A->size[1]);
    i58 = b_A->size[0] * b_A->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i58, &ie_emlrtBCI, &d_st);
    Aia0_t = (double *)(&b_A->data[0]);
    xix0_t = (double *)(&B->data[0]);
    alpha1_t = (double *)(&temp);
    dtrsm(&SIDE, &UPLO, &TRANSA, &DIAGA, &m_t, &n_t, alpha1_t, Aia0_t, &lda_t,
          xix0_t, &incx_t);
  }

  emxFree_real_T(&b_A);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void c_eml_qrsolve(const emlrtStack *sp, const emxArray_real_T *A,
  emxArray_real_T *B, emxArray_real_T *Y)
{
  emxArray_real_T *b_A;
  emxArray_real_T *work;
  int32_T mn;
  int32_T i51;
  int32_T ix;
  emxArray_real_T *tau;
  emxArray_int32_T *jpvt;
  int32_T m;
  int32_T n;
  int32_T b_mn;
  emxArray_real_T *vn1;
  emxArray_real_T *vn2;
  int32_T k;
  boolean_T overflow;
  boolean_T b12;
  int32_T i;
  int32_T i_i;
  int32_T nmi;
  int32_T mmi;
  int32_T pvt;
  int32_T iy;
  boolean_T b13;
  real_T xnorm;
  int32_T i52;
  real_T atmp;
  real_T d16;
  boolean_T b14;
  boolean_T b_i;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  double * xix0_t;
  boolean_T exitg1;
  const mxArray *y;
  static const int32_T iv78[2] = { 1, 8 };

  const mxArray *m14;
  char_T cv76[8];
  static const char_T cv77[8] = { '%', '%', '%', 'd', '.', '%', 'd', 'e' };

  char_T cv78[14];
  uint32_T unnamed_idx_0;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &b_A, 2, &m_emlrtRTEI, true);
  b_emxInit_real_T(sp, &work, 1, &rb_emlrtRTEI, true);
  mn = (int32_T)muDoubleScalarMin(A->size[0], A->size[1]);
  st.site = &mc_emlrtRSI;
  b_st.site = &nc_emlrtRSI;
  c_st.site = &oc_emlrtRSI;
  i51 = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity(&c_st, (emxArray__common *)b_A, i51, (int32_T)sizeof(real_T),
                    &m_emlrtRTEI);
  ix = A->size[0] * A->size[1];
  for (i51 = 0; i51 < ix; i51++) {
    b_A->data[i51] = A->data[i51];
  }

  b_emxInit_real_T(&c_st, &tau, 1, &m_emlrtRTEI, true);
  b_emxInit_int32_T(&c_st, &jpvt, 2, &m_emlrtRTEI, true);
  m = b_A->size[0];
  n = b_A->size[1];
  b_mn = muIntScalarMin_sint32(b_A->size[0], b_A->size[1]);
  i51 = tau->size[0];
  tau->size[0] = b_mn;
  emxEnsureCapacity(&c_st, (emxArray__common *)tau, i51, (int32_T)sizeof(real_T),
                    &n_emlrtRTEI);
  d_st.site = &mf_emlrtRSI;
  e_st.site = &rb_emlrtRSI;
  f_st.site = &sb_emlrtRSI;
  g_st.site = &tb_emlrtRSI;
  eml_signed_integer_colon(&g_st, b_A->size[1], jpvt);
  if ((b_A->size[0] == 0) || (b_A->size[1] == 0)) {
  } else {
    ix = b_A->size[1];
    i51 = work->size[0];
    work->size[0] = ix;
    emxEnsureCapacity(&c_st, (emxArray__common *)work, i51, (int32_T)sizeof
                      (real_T), &m_emlrtRTEI);
    for (i51 = 0; i51 < ix; i51++) {
      work->data[i51] = 0.0;
    }

    b_emxInit_real_T(&c_st, &vn1, 1, &pb_emlrtRTEI, true);
    b_emxInit_real_T(&c_st, &vn2, 1, &qb_emlrtRTEI, true);
    d_st.site = &tc_emlrtRSI;
    ix = b_A->size[1];
    i51 = vn1->size[0];
    vn1->size[0] = ix;
    emxEnsureCapacity(&c_st, (emxArray__common *)vn1, i51, (int32_T)sizeof
                      (real_T), &pb_emlrtRTEI);
    i51 = vn2->size[0];
    vn2->size[0] = ix;
    emxEnsureCapacity(&c_st, (emxArray__common *)vn2, i51, (int32_T)sizeof
                      (real_T), &qb_emlrtRTEI);
    k = 1;
    d_st.site = &nf_emlrtRSI;
    overflow = (b_A->size[1] > 2147483646);
    if (overflow) {
      e_st.site = &db_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }

    for (ix = 0; ix + 1 <= b_A->size[1]; ix++) {
      d_st.site = &sc_emlrtRSI;
      vn1->data[ix] = b_eml_xnrm2(&d_st, b_A->size[0], b_A, k);
      vn2->data[ix] = vn1->data[ix];
      k += b_A->size[0];
    }

    d_st.site = &rc_emlrtRSI;
    if (1 > b_mn) {
      b12 = false;
    } else {
      b12 = (b_mn > 2147483646);
    }

    if (b12) {
      e_st.site = &db_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }

    for (i = 1; i <= b_mn; i++) {
      i_i = (i + (i - 1) * m) - 1;
      nmi = n - i;
      mmi = m - i;
      d_st.site = &of_emlrtRSI;
      ix = eml_ixamax(&d_st, 1 + nmi, vn1, i);
      pvt = (i + ix) - 2;
      if (pvt + 1 != i) {
        d_st.site = &pf_emlrtRSI;
        e_st.site = &bc_emlrtRSI;
        f_st.site = &cc_emlrtRSI;
        ix = 1 + m * pvt;
        iy = 1 + m * (i - 1);
        g_st.site = &dc_emlrtRSI;
        if (1 > m) {
          b13 = false;
        } else {
          b13 = (m > 2147483646);
        }

        if (b13) {
          h_st.site = &db_emlrtRSI;
          check_forloop_overflow_error(&h_st);
        }

        for (k = 1; k <= m; k++) {
          i51 = b_A->size[0] * b_A->size[1];
          xnorm = b_A->data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, i51,
            &le_emlrtBCI, &f_st) - 1];
          i51 = b_A->size[0] * b_A->size[1];
          i52 = b_A->size[0] * b_A->size[1];
          b_A->data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, i51, &le_emlrtBCI,
            &f_st) - 1] = b_A->data[emlrtDynamicBoundsCheckFastR2012b(iy, 1, i52,
            &le_emlrtBCI, &f_st) - 1];
          i51 = b_A->size[0] * b_A->size[1];
          b_A->data[emlrtDynamicBoundsCheckFastR2012b(iy, 1, i51, &le_emlrtBCI,
            &f_st) - 1] = xnorm;
          ix++;
          iy++;
        }

        ix = jpvt->data[pvt];
        jpvt->data[pvt] = jpvt->data[i - 1];
        jpvt->data[i - 1] = ix;
        vn1->data[pvt] = vn1->data[i - 1];
        vn2->data[pvt] = vn2->data[i - 1];
      }

      if (i < m) {
        d_st.site = &qc_emlrtRSI;
        atmp = b_A->data[i_i];
        d16 = 0.0;
        if (1 + mmi <= 0) {
        } else {
          e_st.site = &wc_emlrtRSI;
          xnorm = b_eml_xnrm2(&e_st, mmi, b_A, i_i + 2);
          if (xnorm != 0.0) {
            xnorm = muDoubleScalarHypot(b_A->data[i_i], xnorm);
            if (b_A->data[i_i] >= 0.0) {
              xnorm = -xnorm;
            }

            if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
              ix = 0;
              do {
                ix++;
                e_st.site = &xc_emlrtRSI;
                b_eml_xscal(&e_st, mmi, 9.9792015476736E+291, b_A, i_i + 2);
                xnorm *= 9.9792015476736E+291;
                atmp *= 9.9792015476736E+291;
              } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

              e_st.site = &yc_emlrtRSI;
              xnorm = b_eml_xnrm2(&e_st, mmi, b_A, i_i + 2);
              xnorm = muDoubleScalarHypot(atmp, xnorm);
              if (atmp >= 0.0) {
                xnorm = -xnorm;
              }

              d16 = (xnorm - atmp) / xnorm;
              e_st.site = &ad_emlrtRSI;
              b_eml_xscal(&e_st, mmi, 1.0 / (atmp - xnorm), b_A, i_i + 2);
              e_st.site = &bd_emlrtRSI;
              if (1 > ix) {
                b14 = false;
              } else {
                b14 = (ix > 2147483646);
              }

              if (b14) {
                f_st.site = &db_emlrtRSI;
                check_forloop_overflow_error(&f_st);
              }

              for (k = 1; k <= ix; k++) {
                xnorm *= 1.0020841800044864E-292;
              }

              atmp = xnorm;
            } else {
              d16 = (xnorm - b_A->data[i_i]) / xnorm;
              atmp = 1.0 / (b_A->data[i_i] - xnorm);
              e_st.site = &cd_emlrtRSI;
              b_eml_xscal(&e_st, mmi, atmp, b_A, i_i + 2);
              atmp = xnorm;
            }
          }
        }

        tau->data[i - 1] = d16;
      } else {
        atmp = b_A->data[i_i];
        d_st.site = &pc_emlrtRSI;
        tau->data[i - 1] = eml_matlab_zlarfg();
      }

      b_A->data[i_i] = atmp;
      if (i < n) {
        atmp = b_A->data[i_i];
        b_A->data[i_i] = 1.0;
        d_st.site = &qf_emlrtRSI;
        eml_matlab_zlarf(&d_st, mmi + 1, nmi, i_i + 1, tau->data[i - 1], b_A, i
                         + i * m, m, work);
        b_A->data[i_i] = atmp;
      }

      d_st.site = &rf_emlrtRSI;
      if (i + 1 > n) {
        b_i = false;
      } else {
        b_i = (n > 2147483646);
      }

      if (b_i) {
        e_st.site = &db_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }

      for (ix = i; ix + 1 <= n; ix++) {
        if (vn1->data[ix] != 0.0) {
          xnorm = muDoubleScalarAbs(b_A->data[(i + b_A->size[0] * ix) - 1]) /
            vn1->data[ix];
          xnorm = 1.0 - xnorm * xnorm;
          if (xnorm < 0.0) {
            xnorm = 0.0;
          }

          atmp = vn1->data[ix] / vn2->data[ix];
          atmp = xnorm * (atmp * atmp);
          if (atmp <= 1.4901161193847656E-8) {
            if (i < m) {
              d_st.site = &sf_emlrtRSI;
              e_st.site = &uc_emlrtRSI;
              if (mmi < 1) {
                xnorm = 0.0;
              } else {
                f_st.site = &vc_emlrtRSI;
                g_st.site = &vc_emlrtRSI;
                n_t = (ptrdiff_t)(mmi);
                g_st.site = &vc_emlrtRSI;
                incx_t = (ptrdiff_t)(1);
                i51 = b_A->size[0] * b_A->size[1];
                i52 = (i + m * ix) + 1;
                xix0_t = (double *)(&b_A->data[emlrtDynamicBoundsCheckFastR2012b
                                    (i52, 1, i51, &vb_emlrtBCI, &f_st) - 1]);
                xnorm = dnrm2(&n_t, xix0_t, &incx_t);
              }

              vn1->data[ix] = xnorm;
              vn2->data[ix] = vn1->data[ix];
            } else {
              vn1->data[ix] = 0.0;
              vn2->data[ix] = 0.0;
            }
          } else {
            d_st.site = &tf_emlrtRSI;
            vn1->data[ix] *= muDoubleScalarSqrt(xnorm);
          }
        }
      }
    }

    emxFree_real_T(&vn2);
    emxFree_real_T(&vn1);
  }

  atmp = 0.0;
  if (mn > 0) {
    xnorm = muDoubleScalarMax(A->size[0], A->size[1]) * muDoubleScalarAbs
      (b_A->data[0]) * 2.2204460492503131E-16;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k <= mn - 1)) {
      if (muDoubleScalarAbs(b_A->data[k + b_A->size[0] * k]) <= xnorm) {
        st.site = &lc_emlrtRSI;
        y = NULL;
        m14 = emlrtCreateCharArray(2, iv78);
        for (i = 0; i < 8; i++) {
          cv76[i] = cv77[i];
        }

        emlrtInitCharArrayR2013a(&st, 8, m14, cv76);
        emlrtAssign(&y, m14);
        b_st.site = &tg_emlrtRSI;
        emlrt_marshallIn(&b_st, c_sprintf(&b_st, b_sprintf(&b_st, y,
          emlrt_marshallOut(14.0), emlrt_marshallOut(6.0), &o_emlrtMCI),
          emlrt_marshallOut(xnorm), &p_emlrtMCI), "sprintf", cv78);
        st.site = &kc_emlrtRSI;
        b_eml_warning(&st, atmp, cv78);
        exitg1 = true;
      } else {
        atmp++;
        k++;
      }
    }
  }

  unnamed_idx_0 = (uint32_T)A->size[1];
  i51 = Y->size[0];
  Y->size[0] = (int32_T)unnamed_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)Y, i51, (int32_T)sizeof(real_T),
                    &m_emlrtRTEI);
  ix = (int32_T)unnamed_idx_0;
  for (i51 = 0; i51 < ix; i51++) {
    Y->data[i51] = 0.0;
  }

  for (ix = 0; ix < mn; ix++) {
    if (tau->data[ix] != 0.0) {
      xnorm = B->data[ix];
      i51 = A->size[0] + (int32_T)(1.0 - ((1.0 + (real_T)ix) + 1.0));
      emlrtForLoopVectorCheckR2012b((1.0 + (real_T)ix) + 1.0, 1.0, A->size[0],
        mxDOUBLE_CLASS, i51, &ac_emlrtRTEI, sp);
      for (i = 0; i < i51; i++) {
        unnamed_idx_0 = ((uint32_T)ix + i) + 2U;
        xnorm += b_A->data[((int32_T)unnamed_idx_0 + b_A->size[0] * ix) - 1] *
          B->data[(int32_T)unnamed_idx_0 - 1];
      }

      xnorm *= tau->data[ix];
      if (xnorm != 0.0) {
        B->data[ix] -= xnorm;
        i51 = A->size[0] + (int32_T)(1.0 - ((1.0 + (real_T)ix) + 1.0));
        emlrtForLoopVectorCheckR2012b((1.0 + (real_T)ix) + 1.0, 1.0, A->size[0],
          mxDOUBLE_CLASS, i51, &yb_emlrtRTEI, sp);
        for (i = 0; i < i51; i++) {
          unnamed_idx_0 = ((uint32_T)ix + i) + 2U;
          B->data[(int32_T)unnamed_idx_0 - 1] -= b_A->data[((int32_T)
            unnamed_idx_0 + b_A->size[0] * ix) - 1] * xnorm;
        }
      }
    }
  }

  emxFree_real_T(&tau);
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, atmp, mxDOUBLE_CLASS, (int32_T)atmp,
    &xb_emlrtRTEI, sp);
  for (i = 0; i < (int32_T)atmp; i++) {
    Y->data[jpvt->data[i] - 1] = B->data[i];
  }

  emlrtForLoopVectorCheckR2012b(atmp, -1.0, 1.0, mxDOUBLE_CLASS, (int32_T)-(1.0
    + (-1.0 - atmp)), &wb_emlrtRTEI, sp);
  for (ix = 0; ix < (int32_T)-(1.0 + (-1.0 - atmp)); ix++) {
    xnorm = atmp + -(real_T)ix;
    Y->data[jpvt->data[(int32_T)xnorm - 1] - 1] = eml_div(Y->data[jpvt->data
      [(int32_T)xnorm - 1] - 1], b_A->data[((int32_T)xnorm + b_A->size[0] *
      ((int32_T)xnorm - 1)) - 1]);
    for (i = 0; i < (int32_T)(xnorm - 1.0); i++) {
      Y->data[jpvt->data[i] - 1] -= Y->data[jpvt->data[(int32_T)xnorm - 1] - 1] *
        b_A->data[i + b_A->size[0] * ((int32_T)xnorm - 1)];
    }
  }

  emxFree_int32_T(&jpvt);
  emxFree_real_T(&work);
  emxFree_real_T(&b_A);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void mldivide(const emlrtStack *sp, const emxArray_real_T *A, const
              emxArray_real_T *B, emxArray_real_T *Y)
{
  const mxArray *y;
  static const int32_T iv77[2] = { 1, 21 };

  const mxArray *m13;
  char_T cv74[21];
  int32_T i;
  static const char_T cv75[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'd', 'i', 'm', 'a', 'g', 'r', 'e', 'e' };

  emxArray_real_T *b_B;
  emxArray_real_T *r17;
  uint32_T unnamed_idx_0;
  int32_T loop_ub;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (B->size[0] == A->size[0]) {
  } else {
    y = NULL;
    m13 = emlrtCreateCharArray(2, iv77);
    for (i = 0; i < 21; i++) {
      cv74[i] = cv75[i];
    }

    emlrtInitCharArrayR2013a(sp, 21, m13, cv74);
    emlrtAssign(&y, m13);
    st.site = &xf_emlrtRSI;
    error(&st, message(&st, y, &bb_emlrtMCI), &bb_emlrtMCI);
  }

  b_emxInit_real_T(sp, &b_B, 1, &tb_emlrtRTEI, true);
  b_emxInit_real_T(sp, &r17, 1, &tb_emlrtRTEI, true);
  if ((A->size[0] == 0) || (A->size[1] == 0) || (B->size[0] == 0)) {
    unnamed_idx_0 = (uint32_T)A->size[1];
    i = Y->size[0];
    Y->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(sp, (emxArray__common *)Y, i, (int32_T)sizeof(real_T),
                      &tb_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0;
    for (i = 0; i < loop_ub; i++) {
      Y->data[i] = 0.0;
    }
  } else if (A->size[0] == A->size[1]) {
    i = Y->size[0];
    Y->size[0] = B->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Y, i, (int32_T)sizeof(real_T),
                      &tb_emlrtRTEI);
    loop_ub = B->size[0];
    for (i = 0; i < loop_ub; i++) {
      Y->data[i] = B->data[i];
    }

    st.site = &xf_emlrtRSI;
    b_eml_lusolve(&st, A, Y);
  } else {
    i = b_B->size[0];
    b_B->size[0] = B->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)b_B, i, (int32_T)sizeof(real_T),
                      &tb_emlrtRTEI);
    loop_ub = B->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_B->data[i] = B->data[i];
    }

    st.site = &xf_emlrtRSI;
    c_eml_qrsolve(&st, A, b_B, r17);
    i = Y->size[0];
    Y->size[0] = r17->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Y, i, (int32_T)sizeof(real_T),
                      &tb_emlrtRTEI);
    loop_ub = r17->size[0];
    for (i = 0; i < loop_ub; i++) {
      Y->data[i] = r17->data[i];
    }
  }

  emxFree_real_T(&r17);
  emxFree_real_T(&b_B);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (mldivide.c) */

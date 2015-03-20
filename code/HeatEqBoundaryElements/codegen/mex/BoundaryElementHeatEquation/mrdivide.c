/*
 * mrdivide.c
 *
 * Code generation for function 'mrdivide'
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
#include "mrdivide.h"
#include "BoundaryElementHeatEquation_emxutil.h"
#include "eml_warning.h"
#include "colon.h"
#include "eml_int_forloop_overflow_check.h"
#include "BoundaryElementHeatEquation_mexutil.h"
#include "BoundaryElementHeatEquation_data.h"

/* Variable Definitions */
static emlrtRSInfo gb_emlrtRSI = { 1, "mrdivide",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\mrdivide.p"
};

static emlrtRSInfo ib_emlrtRSI = { 102, "eml_lusolve",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

static emlrtRSInfo jb_emlrtRSI = { 100, "eml_lusolve",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

static emlrtRSInfo gc_emlrtRSI = { 76, "eml_lusolve",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

static emlrtRSInfo cd_emlrtRSI = { 28, "eml_xscal",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\blas\\eml_xscal.m"
};

static emlrtRSInfo dd_emlrtRSI = { 1, "xscal",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xscal.p"
};

static emlrtRSInfo ed_emlrtRSI = { 103, "eml_matlab_zlarf",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zlarf.m"
};

static emlrtRSInfo fd_emlrtRSI = { 50, "eml_matlab_zlarf",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zlarf.m"
};

static emlrtRSInfo gd_emlrtRSI = { 68, "eml_matlab_zlarf",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zlarf.m"
};

static emlrtRSInfo hd_emlrtRSI = { 75, "eml_matlab_zlarf",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zlarf.m"
};

static emlrtRSInfo id_emlrtRSI = { 52, "eml_xgemv",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\blas\\eml_xgemv.m"
};

static emlrtRSInfo jd_emlrtRSI = { 1, "xgemv",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xgemv.p"
};

static emlrtRSInfo kd_emlrtRSI = { 41, "eml_xgerc",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\blas\\eml_xgerc.m"
};

static emlrtRSInfo ld_emlrtRSI = { 1, "xgerc",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xgerc.p"
};

static emlrtRSInfo nf_emlrtRSI = { 107, "eml_lusolve",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

static emlrtMCInfo j_emlrtMCI = { 1, 1, "mrdivide",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\mrdivide.p"
};

static emlrtRTEInfo l_emlrtRTEI = { 1, 2, "mrdivide",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\mrdivide.p"
};

static emlrtBCInfo jf_emlrtBCI = { -1, -1, 1, 1, "", "xscal",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xscal.p",
  0 };

static emlrtBCInfo kf_emlrtBCI = { -1, -1, 1, 1, "", "xgemv",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xgemv.p",
  0 };

/* Function Declarations */
static void b_eml_qrsolve(const emlrtStack *sp, const emxArray_real_T *A,
  emxArray_real_T *B, emxArray_real_T *Y);
static void eml_lusolve(const emlrtStack *sp, const emxArray_real_T *A, const
  emxArray_real_T *B, emxArray_real_T *X);
static real_T eml_qrsolve(const emlrtStack *sp, const emxArray_real_T *A,
  emxArray_real_T *B);
static real_T eml_xnrm2(const emlrtStack *sp, int32_T n, const emxArray_real_T
  *x, int32_T ix0);
static void eml_xscal(const emlrtStack *sp, int32_T n, real_T a, emxArray_real_T
                      *x);

/* Function Definitions */
static void b_eml_qrsolve(const emlrtStack *sp, const emxArray_real_T *A,
  emxArray_real_T *B, emxArray_real_T *Y)
{
  emxArray_real_T *b_A;
  emxArray_real_T *work;
  int32_T nb;
  int32_T mn;
  int32_T i62;
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
  boolean_T b6;
  int32_T i;
  int32_T i_i;
  int32_T nmi;
  int32_T mmi;
  int32_T pvt;
  int32_T iy;
  boolean_T b7;
  real_T xnorm;
  int32_T i63;
  real_T atmp;
  real_T d6;
  boolean_T b8;
  boolean_T b_i;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  double * xix0_t;
  boolean_T exitg1;
  const mxArray *y;
  static const int32_T iv60[2] = { 1, 8 };

  const mxArray *m12;
  char_T cv59[8];
  static const char_T cv60[8] = { '%', '%', '%', 'd', '.', '%', 'd', 'e' };

  char_T cv61[14];
  uint32_T unnamed_idx_0;
  uint32_T unnamed_idx_1;
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
  emxInit_real_T(sp, &b_A, 2, &n_emlrtRTEI, true);
  b_emxInit_real_T(sp, &work, 1, &tb_emlrtRTEI, true);
  nb = B->size[1] - 1;
  mn = (int32_T)muDoubleScalarMin(A->size[0], A->size[1]);
  st.site = &lc_emlrtRSI;
  b_st.site = &mc_emlrtRSI;
  c_st.site = &nc_emlrtRSI;
  i62 = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity(&c_st, (emxArray__common *)b_A, i62, (int32_T)sizeof(real_T),
                    &n_emlrtRTEI);
  ix = A->size[0] * A->size[1];
  for (i62 = 0; i62 < ix; i62++) {
    b_A->data[i62] = A->data[i62];
  }

  b_emxInit_real_T(&c_st, &tau, 1, &n_emlrtRTEI, true);
  b_emxInit_int32_T(&c_st, &jpvt, 2, &n_emlrtRTEI, true);
  m = b_A->size[0];
  n = b_A->size[1];
  b_mn = muIntScalarMin_sint32(b_A->size[0], b_A->size[1]);
  i62 = tau->size[0];
  tau->size[0] = b_mn;
  emxEnsureCapacity(&c_st, (emxArray__common *)tau, i62, (int32_T)sizeof(real_T),
                    &o_emlrtRTEI);
  d_st.site = &sf_emlrtRSI;
  e_st.site = &qb_emlrtRSI;
  f_st.site = &rb_emlrtRSI;
  g_st.site = &sb_emlrtRSI;
  eml_signed_integer_colon(&g_st, b_A->size[1], jpvt);
  if ((b_A->size[0] == 0) || (b_A->size[1] == 0)) {
  } else {
    ix = b_A->size[1];
    i62 = work->size[0];
    work->size[0] = ix;
    emxEnsureCapacity(&c_st, (emxArray__common *)work, i62, (int32_T)sizeof
                      (real_T), &n_emlrtRTEI);
    for (i62 = 0; i62 < ix; i62++) {
      work->data[i62] = 0.0;
    }

    b_emxInit_real_T(&c_st, &vn1, 1, &rb_emlrtRTEI, true);
    b_emxInit_real_T(&c_st, &vn2, 1, &sb_emlrtRTEI, true);
    d_st.site = &sc_emlrtRSI;
    ix = b_A->size[1];
    i62 = vn1->size[0];
    vn1->size[0] = ix;
    emxEnsureCapacity(&c_st, (emxArray__common *)vn1, i62, (int32_T)sizeof
                      (real_T), &rb_emlrtRTEI);
    i62 = vn2->size[0];
    vn2->size[0] = ix;
    emxEnsureCapacity(&c_st, (emxArray__common *)vn2, i62, (int32_T)sizeof
                      (real_T), &sb_emlrtRTEI);
    k = 1;
    d_st.site = &tf_emlrtRSI;
    overflow = (b_A->size[1] > 2147483646);
    if (overflow) {
      e_st.site = &cb_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }

    for (ix = 0; ix + 1 <= b_A->size[1]; ix++) {
      d_st.site = &rc_emlrtRSI;
      vn1->data[ix] = b_eml_xnrm2(&d_st, b_A->size[0], b_A, k);
      vn2->data[ix] = vn1->data[ix];
      k += b_A->size[0];
    }

    d_st.site = &qc_emlrtRSI;
    if (1 > b_mn) {
      b6 = false;
    } else {
      b6 = (b_mn > 2147483646);
    }

    if (b6) {
      e_st.site = &cb_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }

    for (i = 1; i <= b_mn; i++) {
      i_i = (i + (i - 1) * m) - 1;
      nmi = n - i;
      mmi = m - i;
      d_st.site = &uf_emlrtRSI;
      ix = eml_ixamax(&d_st, 1 + nmi, vn1, i);
      pvt = (i + ix) - 2;
      if (pvt + 1 != i) {
        d_st.site = &vf_emlrtRSI;
        e_st.site = &ac_emlrtRSI;
        f_st.site = &bc_emlrtRSI;
        ix = 1 + m * pvt;
        iy = 1 + m * (i - 1);
        g_st.site = &cc_emlrtRSI;
        if (1 > m) {
          b7 = false;
        } else {
          b7 = (m > 2147483646);
        }

        if (b7) {
          h_st.site = &cb_emlrtRSI;
          check_forloop_overflow_error(&h_st);
        }

        for (k = 1; k <= m; k++) {
          i62 = b_A->size[0] * b_A->size[1];
          xnorm = b_A->data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, i62,
            &ff_emlrtBCI, &f_st) - 1];
          i62 = b_A->size[0] * b_A->size[1];
          i63 = b_A->size[0] * b_A->size[1];
          b_A->data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, i62, &ff_emlrtBCI,
            &f_st) - 1] = b_A->data[emlrtDynamicBoundsCheckFastR2012b(iy, 1, i63,
            &ff_emlrtBCI, &f_st) - 1];
          i62 = b_A->size[0] * b_A->size[1];
          b_A->data[emlrtDynamicBoundsCheckFastR2012b(iy, 1, i62, &ff_emlrtBCI,
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
        d_st.site = &pc_emlrtRSI;
        atmp = b_A->data[i_i];
        d6 = 0.0;
        if (1 + mmi <= 0) {
        } else {
          e_st.site = &vc_emlrtRSI;
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
                e_st.site = &wc_emlrtRSI;
                b_eml_xscal(&e_st, mmi, 9.9792015476736E+291, b_A, i_i + 2);
                xnorm *= 9.9792015476736E+291;
                atmp *= 9.9792015476736E+291;
              } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

              e_st.site = &xc_emlrtRSI;
              xnorm = b_eml_xnrm2(&e_st, mmi, b_A, i_i + 2);
              xnorm = muDoubleScalarHypot(atmp, xnorm);
              if (atmp >= 0.0) {
                xnorm = -xnorm;
              }

              d6 = (xnorm - atmp) / xnorm;
              e_st.site = &yc_emlrtRSI;
              b_eml_xscal(&e_st, mmi, 1.0 / (atmp - xnorm), b_A, i_i + 2);
              e_st.site = &ad_emlrtRSI;
              if (1 > ix) {
                b8 = false;
              } else {
                b8 = (ix > 2147483646);
              }

              if (b8) {
                f_st.site = &cb_emlrtRSI;
                check_forloop_overflow_error(&f_st);
              }

              for (k = 1; k <= ix; k++) {
                xnorm *= 1.0020841800044864E-292;
              }

              atmp = xnorm;
            } else {
              d6 = (xnorm - b_A->data[i_i]) / xnorm;
              atmp = 1.0 / (b_A->data[i_i] - xnorm);
              e_st.site = &bd_emlrtRSI;
              b_eml_xscal(&e_st, mmi, atmp, b_A, i_i + 2);
              atmp = xnorm;
            }
          }
        }

        tau->data[i - 1] = d6;
      } else {
        atmp = b_A->data[i_i];
        d_st.site = &oc_emlrtRSI;
        tau->data[i - 1] = eml_matlab_zlarfg();
      }

      b_A->data[i_i] = atmp;
      if (i < n) {
        atmp = b_A->data[i_i];
        b_A->data[i_i] = 1.0;
        d_st.site = &wf_emlrtRSI;
        eml_matlab_zlarf(&d_st, mmi + 1, nmi, i_i + 1, tau->data[i - 1], b_A, i
                         + i * m, m, work);
        b_A->data[i_i] = atmp;
      }

      d_st.site = &xf_emlrtRSI;
      if (i + 1 > n) {
        b_i = false;
      } else {
        b_i = (n > 2147483646);
      }

      if (b_i) {
        e_st.site = &cb_emlrtRSI;
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
              d_st.site = &yf_emlrtRSI;
              e_st.site = &tc_emlrtRSI;
              if (mmi < 1) {
                xnorm = 0.0;
              } else {
                f_st.site = &uc_emlrtRSI;
                g_st.site = &uc_emlrtRSI;
                n_t = (ptrdiff_t)(mmi);
                g_st.site = &uc_emlrtRSI;
                incx_t = (ptrdiff_t)(1);
                i62 = b_A->size[0] * b_A->size[1];
                i63 = (i + m * ix) + 1;
                xix0_t = (double *)(&b_A->data[emlrtDynamicBoundsCheckFastR2012b
                                    (i63, 1, i62, &ub_emlrtBCI, &f_st) - 1]);
                xnorm = dnrm2(&n_t, xix0_t, &incx_t);
              }

              vn1->data[ix] = xnorm;
              vn2->data[ix] = vn1->data[ix];
            } else {
              vn1->data[ix] = 0.0;
              vn2->data[ix] = 0.0;
            }
          } else {
            d_st.site = &ag_emlrtRSI;
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
        st.site = &kc_emlrtRSI;
        y = NULL;
        m12 = emlrtCreateCharArray(2, iv60);
        for (i = 0; i < 8; i++) {
          cv59[i] = cv60[i];
        }

        emlrtInitCharArrayR2013a(&st, 8, m12, cv59);
        emlrtAssign(&y, m12);
        b_st.site = &fh_emlrtRSI;
        emlrt_marshallIn(&b_st, c_sprintf(&b_st, b_sprintf(&b_st, y,
          emlrt_marshallOut(14.0), emlrt_marshallOut(6.0), &o_emlrtMCI),
          emlrt_marshallOut(xnorm), &p_emlrtMCI), "sprintf", cv61);
        st.site = &jc_emlrtRSI;
        b_eml_warning(&st, atmp, cv61);
        exitg1 = true;
      } else {
        atmp++;
        k++;
      }
    }
  }

  unnamed_idx_0 = (uint32_T)A->size[1];
  unnamed_idx_1 = (uint32_T)B->size[1];
  i62 = Y->size[0] * Y->size[1];
  Y->size[0] = (int32_T)unnamed_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)Y, i62, (int32_T)sizeof(real_T),
                    &n_emlrtRTEI);
  i62 = Y->size[0] * Y->size[1];
  Y->size[1] = (int32_T)unnamed_idx_1;
  emxEnsureCapacity(sp, (emxArray__common *)Y, i62, (int32_T)sizeof(real_T),
                    &n_emlrtRTEI);
  ix = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
  for (i62 = 0; i62 < ix; i62++) {
    Y->data[i62] = 0.0;
  }

  for (ix = 0; ix < mn; ix++) {
    if (tau->data[ix] != 0.0) {
      for (k = 0; k <= nb; k++) {
        xnorm = B->data[ix + B->size[0] * k];
        i62 = A->size[0] + (int32_T)(1.0 - ((1.0 + (real_T)ix) + 1.0));
        emlrtForLoopVectorCheckR2012b((1.0 + (real_T)ix) + 1.0, 1.0, A->size[0],
          mxDOUBLE_CLASS, i62, &cc_emlrtRTEI, sp);
        for (i = 0; i < i62; i++) {
          unnamed_idx_0 = ((uint32_T)ix + i) + 2U;
          xnorm += b_A->data[((int32_T)unnamed_idx_0 + b_A->size[0] * ix) - 1] *
            B->data[((int32_T)unnamed_idx_0 + B->size[0] * k) - 1];
        }

        xnorm *= tau->data[ix];
        if (xnorm != 0.0) {
          B->data[ix + B->size[0] * k] -= xnorm;
          i62 = A->size[0] + (int32_T)(1.0 - ((1.0 + (real_T)ix) + 1.0));
          emlrtForLoopVectorCheckR2012b((1.0 + (real_T)ix) + 1.0, 1.0, A->size[0],
            mxDOUBLE_CLASS, i62, &bc_emlrtRTEI, sp);
          for (i = 0; i < i62; i++) {
            unnamed_idx_0 = ((uint32_T)ix + i) + 2U;
            B->data[((int32_T)unnamed_idx_0 + B->size[0] * k) - 1] -= b_A->data
              [((int32_T)unnamed_idx_0 + b_A->size[0] * ix) - 1] * xnorm;
          }
        }
      }
    }
  }

  emxFree_real_T(&tau);
  for (k = 0; k <= nb; k++) {
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, atmp, mxDOUBLE_CLASS, (int32_T)atmp,
      &xb_emlrtRTEI, sp);
    for (i = 0; i < (int32_T)atmp; i++) {
      Y->data[(jpvt->data[i] + Y->size[0] * k) - 1] = B->data[i + B->size[0] * k];
    }

    emlrtForLoopVectorCheckR2012b(atmp, -1.0, 1.0, mxDOUBLE_CLASS, (int32_T)
      -(1.0 + (-1.0 - atmp)), &wb_emlrtRTEI, sp);
    for (ix = 0; ix < (int32_T)-(1.0 + (-1.0 - atmp)); ix++) {
      xnorm = atmp + -(real_T)ix;
      Y->data[(jpvt->data[(int32_T)xnorm - 1] + Y->size[0] * k) - 1] = eml_div
        (Y->data[(jpvt->data[(int32_T)xnorm - 1] + Y->size[0] * k) - 1],
         b_A->data[((int32_T)xnorm + b_A->size[0] * ((int32_T)xnorm - 1)) - 1]);
      for (i = 0; i < (int32_T)(xnorm - 1.0); i++) {
        Y->data[(jpvt->data[i] + Y->size[0] * k) - 1] -= Y->data[(jpvt->data
          [(int32_T)xnorm - 1] + Y->size[0] * k) - 1] * b_A->data[i + b_A->size
          [0] * ((int32_T)xnorm - 1)];
      }
    }
  }

  emxFree_int32_T(&jpvt);
  emxFree_real_T(&work);
  emxFree_real_T(&b_A);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void eml_lusolve(const emlrtStack *sp, const emxArray_real_T *A, const
  emxArray_real_T *B, emxArray_real_T *X)
{
  emxArray_real_T *b_A;
  int32_T i59;
  int32_T iy;
  emxArray_int32_T *ipiv;
  int32_T info;
  int32_T i60;
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
  int32_T i61;
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
  emxInit_real_T(sp, &b_A, 2, &qb_emlrtRTEI, true);
  st.site = &hb_emlrtRSI;
  b_st.site = &kb_emlrtRSI;
  c_st.site = &mb_emlrtRSI;
  d_st.site = &nb_emlrtRSI;
  i59 = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity(&d_st, (emxArray__common *)b_A, i59, (int32_T)sizeof(real_T),
                    &qb_emlrtRTEI);
  iy = A->size[0] * A->size[1];
  for (i59 = 0; i59 < iy; i59++) {
    b_A->data[i59] = A->data[i59];
  }

  b_emxInit_int32_T(&d_st, &ipiv, 2, &qb_emlrtRTEI, true);
  e_st.site = &pb_emlrtRSI;
  f_st.site = &qb_emlrtRSI;
  g_st.site = &rb_emlrtRSI;
  h_st.site = &sb_emlrtRSI;
  eml_signed_integer_colon(&h_st, muIntScalarMin_sint32(A->size[1], A->size[1]),
    ipiv);
  info = 0;
  if (A->size[1] < 1) {
  } else {
    i60 = A->size[1] - 1;
    b = muIntScalarMin_sint32(i60, A->size[1]);
    e_st.site = &ob_emlrtRSI;
    for (j = 1; j <= b; j++) {
      mmj = A->size[1] - j;
      c = (j - 1) * (A->size[1] + 1) + 1;
      e_st.site = &of_emlrtRSI;
      f_st.site = &xb_emlrtRSI;
      if (mmj + 1 < 1) {
        iy = -1;
      } else {
        g_st.site = &yb_emlrtRSI;
        h_st.site = &yb_emlrtRSI;
        n_t = (ptrdiff_t)(mmj + 1);
        h_st.site = &yb_emlrtRSI;
        incx_t = (ptrdiff_t)(1);
        i59 = b_A->size[0] * b_A->size[1];
        xix0_t = (double *)(&b_A->data[emlrtDynamicBoundsCheckFastR2012b(c, 1,
          i59, &df_emlrtBCI, &g_st) - 1]);
        incx_t = idamax(&n_t, xix0_t, &incx_t);
        iy = (int32_T)incx_t - 1;
      }

      if (b_A->data[(c + iy) - 1] != 0.0) {
        if (iy != 0) {
          ipiv->data[j - 1] = j + iy;
          e_st.site = &pf_emlrtRSI;
          f_st.site = &ac_emlrtRSI;
          g_st.site = &bc_emlrtRSI;
          ix = j;
          iy += j;
          h_st.site = &cc_emlrtRSI;
          overflow = (A->size[1] > 2147483646);
          if (overflow) {
            i_st.site = &cb_emlrtRSI;
            check_forloop_overflow_error(&i_st);
          }

          for (k = 1; k <= A->size[1]; k++) {
            i59 = b_A->size[0] * b_A->size[1];
            temp = b_A->data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, i59,
              &ff_emlrtBCI, &g_st) - 1];
            i59 = b_A->size[0] * b_A->size[1];
            i61 = b_A->size[0] * b_A->size[1];
            b_A->data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, i59, &ff_emlrtBCI,
              &g_st) - 1] = b_A->data[emlrtDynamicBoundsCheckFastR2012b(iy, 1,
              i61, &ff_emlrtBCI, &g_st) - 1];
            i59 = b_A->size[0] * b_A->size[1];
            b_A->data[emlrtDynamicBoundsCheckFastR2012b(iy, 1, i59, &ff_emlrtBCI,
              &g_st) - 1] = temp;
            ix += A->size[1];
            iy += A->size[1];
          }
        }

        iy = c + mmj;
        e_st.site = &qf_emlrtRSI;
        if (c + 1 > iy) {
          b_c = false;
        } else {
          b_c = (iy > 2147483646);
        }

        if (b_c) {
          f_st.site = &cb_emlrtRSI;
          check_forloop_overflow_error(&f_st);
        }

        for (k = c; k + 1 <= iy; k++) {
          b_A->data[k] /= b_A->data[c - 1];
        }
      } else {
        info = j;
      }

      iy = A->size[1] - j;
      e_st.site = &rf_emlrtRSI;
      f_st.site = &dc_emlrtRSI;
      g_st.site = &ec_emlrtRSI;
      if ((mmj < 1) || (iy < 1)) {
      } else {
        h_st.site = &fc_emlrtRSI;
        temp = -1.0;
        m_t = (ptrdiff_t)(mmj);
        n_t = (ptrdiff_t)(iy);
        incx_t = (ptrdiff_t)(1);
        incy_t = (ptrdiff_t)(A->size[1]);
        lda_t = (ptrdiff_t)(A->size[1]);
        alpha1_t = (double *)(&temp);
        i59 = b_A->size[0] * b_A->size[1];
        i61 = (c + A->size[1]) + 1;
        Aia0_t = (double *)(&b_A->data[emlrtDynamicBoundsCheckFastR2012b(i61, 1,
          i59, &ef_emlrtBCI, &h_st) - 1]);
        i59 = b_A->size[0] * b_A->size[1];
        xix0_t = (double *)(&b_A->data[emlrtDynamicBoundsCheckFastR2012b(c + 1,
          1, i59, &ef_emlrtBCI, &h_st) - 1]);
        i59 = b_A->size[0] * b_A->size[1];
        i61 = c + A->size[1];
        Aiy0_t = (double *)(&b_A->data[emlrtDynamicBoundsCheckFastR2012b(i61, 1,
          i59, &ef_emlrtBCI, &h_st) - 1]);
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
    b_st.site = &lb_emlrtRSI;
    warn_singular(&b_st);
  }

  b_st.site = &jb_emlrtRSI;
  c_st.site = &hc_emlrtRSI;
  i59 = X->size[0] * X->size[1];
  X->size[0] = B->size[0];
  X->size[1] = B->size[1];
  emxEnsureCapacity(&c_st, (emxArray__common *)X, i59, (int32_T)sizeof(real_T),
                    &qb_emlrtRTEI);
  iy = B->size[0] * B->size[1];
  for (i59 = 0; i59 < iy; i59++) {
    X->data[i59] = B->data[i59];
  }

  if ((B->size[0] < 1) || (A->size[1] < 1)) {
  } else {
    d_st.site = &ic_emlrtRSI;
    temp = 1.0;
    DIAGA = 'N';
    TRANSA = 'N';
    UPLO = 'U';
    SIDE = 'R';
    e_st.site = &ic_emlrtRSI;
    m_t = (ptrdiff_t)(B->size[0]);
    e_st.site = &ic_emlrtRSI;
    n_t = (ptrdiff_t)(A->size[1]);
    e_st.site = &ic_emlrtRSI;
    lda_t = (ptrdiff_t)(A->size[1]);
    e_st.site = &ic_emlrtRSI;
    incx_t = (ptrdiff_t)(B->size[0]);
    i59 = b_A->size[0] * b_A->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i59, &cf_emlrtBCI, &d_st);
    Aia0_t = (double *)(&b_A->data[0]);
    i59 = B->size[0] * B->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i59, &cf_emlrtBCI, &d_st);
    xix0_t = (double *)(&X->data[0]);
    alpha1_t = (double *)(&temp);
    dtrsm(&SIDE, &UPLO, &TRANSA, &DIAGA, &m_t, &n_t, alpha1_t, Aia0_t, &lda_t,
          xix0_t, &incx_t);
  }

  b_st.site = &ib_emlrtRSI;
  c_st.site = &hc_emlrtRSI;
  if ((B->size[0] < 1) || (A->size[1] < 1)) {
  } else {
    d_st.site = &ic_emlrtRSI;
    temp = 1.0;
    DIAGA = 'U';
    TRANSA = 'N';
    UPLO = 'L';
    SIDE = 'R';
    e_st.site = &ic_emlrtRSI;
    m_t = (ptrdiff_t)(B->size[0]);
    e_st.site = &ic_emlrtRSI;
    n_t = (ptrdiff_t)(A->size[1]);
    e_st.site = &ic_emlrtRSI;
    lda_t = (ptrdiff_t)(A->size[1]);
    e_st.site = &ic_emlrtRSI;
    incx_t = (ptrdiff_t)(B->size[0]);
    i59 = b_A->size[0] * b_A->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i59, &cf_emlrtBCI, &d_st);
    Aia0_t = (double *)(&b_A->data[0]);
    i59 = X->size[0] * X->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i59, &cf_emlrtBCI, &d_st);
    xix0_t = (double *)(&X->data[0]);
    alpha1_t = (double *)(&temp);
    dtrsm(&SIDE, &UPLO, &TRANSA, &DIAGA, &m_t, &n_t, alpha1_t, Aia0_t, &lda_t,
          xix0_t, &incx_t);
  }

  emxFree_real_T(&b_A);
  for (iy = A->size[1] - 2; iy + 1 > 0; iy--) {
    if (ipiv->data[iy] != iy + 1) {
      b_st.site = &nf_emlrtRSI;
      if (1 > B->size[0]) {
        overflow = false;
      } else {
        overflow = (B->size[0] > 2147483646);
      }

      if (overflow) {
        c_st.site = &cb_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      for (k = 0; k + 1 <= B->size[0]; k++) {
        temp = X->data[k + X->size[0] * iy];
        X->data[k + X->size[0] * iy] = X->data[k + X->size[0] * (ipiv->data[iy]
          - 1)];
        X->data[k + X->size[0] * (ipiv->data[iy] - 1)] = temp;
      }
    }
  }

  emxFree_int32_T(&ipiv);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static real_T eml_qrsolve(const emlrtStack *sp, const emxArray_real_T *A,
  emxArray_real_T *B)
{
  real_T Y;
  emxArray_real_T *b_A;
  int32_T mn;
  int32_T i;
  int32_T knt;
  int32_T b_mn;
  real_T atmp;
  real_T tau_data_idx_0;
  real_T xnorm;
  real_T beta1;
  boolean_T b2;
  boolean_T exitg1;
  const mxArray *y;
  static const int32_T iv15[2] = { 1, 8 };

  const mxArray *m5;
  char_T cv19[8];
  static const char_T cv20[8] = { '%', '%', '%', 'd', '.', '%', 'd', 'e' };

  char_T cv21[14];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
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
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  b_emxInit_real_T(sp, &b_A, 1, &n_emlrtRTEI, true);
  mn = (int32_T)muDoubleScalarMin(A->size[0], 1.0);
  st.site = &lc_emlrtRSI;
  b_st.site = &mc_emlrtRSI;
  c_st.site = &nc_emlrtRSI;
  i = b_A->size[0];
  b_A->size[0] = A->size[0];
  emxEnsureCapacity(&c_st, (emxArray__common *)b_A, i, (int32_T)sizeof(real_T),
                    &n_emlrtRTEI);
  knt = A->size[0];
  for (i = 0; i < knt; i++) {
    b_A->data[i] = A->data[i];
  }

  b_mn = muIntScalarMin_sint32(A->size[0], 1);
  if (A->size[0] == 0) {
  } else {
    d_st.site = &sc_emlrtRSI;
    d_st.site = &rc_emlrtRSI;
    eml_xnrm2(&d_st, A->size[0], A, 1);
    d_st.site = &qc_emlrtRSI;
    i = 1;
    while (i <= b_mn) {
      if (1 < A->size[0]) {
        d_st.site = &pc_emlrtRSI;
        atmp = b_A->data[0];
        tau_data_idx_0 = 0.0;
        e_st.site = &vc_emlrtRSI;
        xnorm = eml_xnrm2(&e_st, A->size[0] - 1, b_A, 2);
        if (xnorm != 0.0) {
          beta1 = muDoubleScalarHypot(b_A->data[0], xnorm);
          if (b_A->data[0] >= 0.0) {
            beta1 = -beta1;
          }

          if (muDoubleScalarAbs(beta1) < 1.0020841800044864E-292) {
            knt = 0;
            do {
              knt++;
              e_st.site = &wc_emlrtRSI;
              eml_xscal(&e_st, A->size[0] - 1, 9.9792015476736E+291, b_A);
              beta1 *= 9.9792015476736E+291;
              atmp *= 9.9792015476736E+291;
            } while (!(muDoubleScalarAbs(beta1) >= 1.0020841800044864E-292));

            e_st.site = &xc_emlrtRSI;
            xnorm = eml_xnrm2(&e_st, A->size[0] - 1, b_A, 2);
            beta1 = muDoubleScalarHypot(atmp, xnorm);
            if (atmp >= 0.0) {
              beta1 = -beta1;
            }

            tau_data_idx_0 = (beta1 - atmp) / beta1;
            e_st.site = &yc_emlrtRSI;
            eml_xscal(&e_st, A->size[0] - 1, 1.0 / (atmp - beta1), b_A);
            e_st.site = &ad_emlrtRSI;
            if (1 > knt) {
              b2 = false;
            } else {
              b2 = (knt > 2147483646);
            }

            if (b2) {
              f_st.site = &cb_emlrtRSI;
              check_forloop_overflow_error(&f_st);
            }

            for (i = 1; i <= knt; i++) {
              beta1 *= 1.0020841800044864E-292;
            }

            atmp = beta1;
          } else {
            tau_data_idx_0 = (beta1 - b_A->data[0]) / beta1;
            xnorm = 1.0 / (b_A->data[0] - beta1);
            e_st.site = &bd_emlrtRSI;
            eml_xscal(&e_st, A->size[0] - 1, xnorm, b_A);
            atmp = beta1;
          }
        }
      } else {
        atmp = b_A->data[0];
        d_st.site = &oc_emlrtRSI;
        tau_data_idx_0 = eml_matlab_zlarfg();
      }

      b_A->data[0] = atmp;
      i = 2;
    }
  }

  atmp = 0.0;
  if (mn > 0) {
    xnorm = muDoubleScalarMax(A->size[0], 1.0) * muDoubleScalarAbs(b_A->data[0])
      * 2.2204460492503131E-16;
    i = 0;
    exitg1 = false;
    while ((!exitg1) && (i <= 0)) {
      if (muDoubleScalarAbs(b_A->data[0]) <= xnorm) {
        st.site = &kc_emlrtRSI;
        y = NULL;
        m5 = emlrtCreateCharArray(2, iv15);
        for (i = 0; i < 8; i++) {
          cv19[i] = cv20[i];
        }

        emlrtInitCharArrayR2013a(&st, 8, m5, cv19);
        emlrtAssign(&y, m5);
        b_st.site = &fh_emlrtRSI;
        emlrt_marshallIn(&b_st, c_sprintf(&b_st, b_sprintf(&b_st, y,
          emlrt_marshallOut(14.0), emlrt_marshallOut(6.0), &o_emlrtMCI),
          emlrt_marshallOut(xnorm), &p_emlrtMCI), "sprintf", cv21);
        st.site = &jc_emlrtRSI;
        b_eml_warning(&st, atmp, cv21);
        exitg1 = true;
      } else {
        atmp++;
        i = 1;
      }
    }
  }

  Y = 0.0;
  i = 0;
  while (i <= mn - 1) {
    if (tau_data_idx_0 != 0.0) {
      xnorm = B->data[0];
      for (i = 1; i - 1 <= A->size[0] - 2; i++) {
        xnorm += b_A->data[i] * B->data[i];
      }

      xnorm *= tau_data_idx_0;
      if (xnorm != 0.0) {
        B->data[0] -= xnorm;
        for (i = 1; i - 1 <= A->size[0] - 2; i++) {
          B->data[i] -= b_A->data[i] * xnorm;
        }
      }
    }

    i = 1;
  }

  emlrtForLoopVectorCheckR2012b(1.0, 1.0, atmp, mxDOUBLE_CLASS, (int32_T)atmp,
    &xb_emlrtRTEI, sp);
  for (i = 0; i < (int32_T)atmp; i++) {
    Y = B->data[0];
  }

  emlrtForLoopVectorCheckR2012b(atmp, -1.0, 1.0, mxDOUBLE_CLASS, (int32_T)-(1.0
    + (-1.0 - atmp)), &wb_emlrtRTEI, sp);
  for (i = 0; i < (int32_T)-(1.0 + (-1.0 - atmp)); i++) {
    Y /= b_A->data[0];
  }

  emxFree_real_T(&b_A);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return Y;
}

static real_T eml_xnrm2(const emlrtStack *sp, int32_T n, const emxArray_real_T
  *x, int32_T ix0)
{
  real_T y;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  int32_T i17;
  double * xix0_t;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &tc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (n < 1) {
    y = 0.0;
  } else {
    b_st.site = &uc_emlrtRSI;
    n_t = (ptrdiff_t)(n);
    incx_t = (ptrdiff_t)(1);
    i17 = x->size[0];
    xix0_t = (double *)(&x->data[emlrtDynamicBoundsCheckFastR2012b(ix0, 1, i17,
      &ub_emlrtBCI, &b_st) - 1]);
    y = dnrm2(&n_t, xix0_t, &incx_t);
  }

  return y;
}

static void eml_xscal(const emlrtStack *sp, int32_T n, real_T a, emxArray_real_T
                      *x)
{
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  int32_T i84;
  double * xix0_t;
  double * a_t;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &cd_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (n < 1) {
  } else {
    b_st.site = &dd_emlrtRSI;
    n_t = (ptrdiff_t)(n);
    incx_t = (ptrdiff_t)(1);
    i84 = x->size[0];
    emlrtDynamicBoundsCheckFastR2012b(2, 1, i84, &jf_emlrtBCI, &b_st);
    xix0_t = (double *)(&x->data[1]);
    a_t = (double *)(&a);
    dscal(&n_t, a_t, xix0_t, &incx_t);
  }
}

real_T b_eml_xnrm2(const emlrtStack *sp, int32_T n, const emxArray_real_T *x,
                   int32_T ix0)
{
  real_T y;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  int32_T i64;
  double * xix0_t;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &tc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (n < 1) {
    y = 0.0;
  } else {
    b_st.site = &uc_emlrtRSI;
    n_t = (ptrdiff_t)(n);
    incx_t = (ptrdiff_t)(1);
    i64 = x->size[0] * x->size[1];
    xix0_t = (double *)(&x->data[emlrtDynamicBoundsCheckFastR2012b(ix0, 1, i64,
      &ub_emlrtBCI, &b_st) - 1]);
    y = dnrm2(&n_t, xix0_t, &incx_t);
  }

  return y;
}

void b_eml_xscal(const emlrtStack *sp, int32_T n, real_T a, emxArray_real_T *x,
                 int32_T ix0)
{
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  int32_T i85;
  double * xix0_t;
  double * a_t;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &cd_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (n < 1) {
  } else {
    b_st.site = &dd_emlrtRSI;
    n_t = (ptrdiff_t)(n);
    incx_t = (ptrdiff_t)(1);
    i85 = x->size[0] * x->size[1];
    xix0_t = (double *)(&x->data[emlrtDynamicBoundsCheckFastR2012b(ix0, 1, i85,
      &jf_emlrtBCI, &b_st) - 1]);
    a_t = (double *)(&a);
    dscal(&n_t, a_t, xix0_t, &incx_t);
  }
}

void b_mrdivide(const emlrtStack *sp, emxArray_real_T *A, const emxArray_real_T *
                B)
{
  const mxArray *y;
  static const int32_T iv74[2] = { 1, 21 };

  const mxArray *m27;
  char_T cv65[21];
  int32_T i;
  static const char_T cv66[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'd', 'i', 'm', 'a', 'g', 'r', 'e', 'e' };

  emxArray_real_T *b_B;
  emxArray_real_T *b_A;
  emxArray_int32_T *lh_emlrtRSI;
  int32_T loop_ub;
  real_T A_data[1];
  real_T alpha1;
  char_T DIAGA;
  char_T TRANSA;
  char_T UPLO;
  char_T SIDE;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  double * Aia0_t;
  double * Bib0_t;
  double * alpha1_t;
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
  if (B->size[1] == A->size[1]) {
  } else {
    y = NULL;
    m27 = emlrtCreateCharArray(2, iv74);
    for (i = 0; i < 21; i++) {
      cv65[i] = cv66[i];
    }

    emlrtInitCharArrayR2013a(sp, 21, m27, cv65);
    emlrtAssign(&y, m27);
    st.site = &gb_emlrtRSI;
    error(&st, message(&st, y, &j_emlrtMCI), &j_emlrtMCI);
  }

  b_emxInit_real_T(sp, &b_B, 1, &l_emlrtRTEI, true);
  b_emxInit_real_T(sp, &b_A, 1, &l_emlrtRTEI, true);
  b_emxInit_int32_T(sp, &lh_emlrtRSI, 2, &l_emlrtRTEI, true);
  if ((A->size[1] == 0) || (B->size[1] == 0)) {
    i = A->size[0] * A->size[1];
    A->size[0] = 1;
    A->size[1] = 1;
    emxEnsureCapacity(sp, (emxArray__common *)A, i, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    A->data[0] = 0.0;
  } else if (1 == B->size[1]) {
    st.site = &gb_emlrtRSI;
    loop_ub = B->size[0] * B->size[1];
    for (i = 0; i < loop_ub; i++) {
      A_data[i] = B->data[i];
    }

    b_st.site = &hb_emlrtRSI;
    c_st.site = &kb_emlrtRSI;
    d_st.site = &mb_emlrtRSI;
    e_st.site = &nb_emlrtRSI;
    f_st.site = &pb_emlrtRSI;
    g_st.site = &qb_emlrtRSI;
    h_st.site = &rb_emlrtRSI;
    i_st.site = &sb_emlrtRSI;
    eml_signed_integer_colon(&i_st, 1, lh_emlrtRSI);
    i = 0;
    f_st.site = &ob_emlrtRSI;
    if (!(B->data[0] != 0.0)) {
      i = 1;
    }

    if (i > 0) {
      c_st.site = &lb_emlrtRSI;
      d_st.site = &gc_emlrtRSI;
      eml_warning(&d_st);
    }

    c_st.site = &jb_emlrtRSI;
    d_st.site = &hc_emlrtRSI;
    e_st.site = &ic_emlrtRSI;
    alpha1 = 1.0;
    DIAGA = 'N';
    TRANSA = 'N';
    UPLO = 'U';
    SIDE = 'R';
    f_st.site = &ic_emlrtRSI;
    m_t = (ptrdiff_t)(1);
    f_st.site = &ic_emlrtRSI;
    n_t = (ptrdiff_t)(1);
    f_st.site = &ic_emlrtRSI;
    lda_t = (ptrdiff_t)(1);
    f_st.site = &ic_emlrtRSI;
    ldb_t = (ptrdiff_t)(1);
    Aia0_t = (double *)(&A_data[0]);
    i = A->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i, &cf_emlrtBCI, &e_st);
    Bib0_t = (double *)(&A->data[0]);
    alpha1_t = (double *)(&alpha1);
    dtrsm(&SIDE, &UPLO, &TRANSA, &DIAGA, &m_t, &n_t, alpha1_t, Aia0_t, &lda_t,
          Bib0_t, &ldb_t);
    c_st.site = &ib_emlrtRSI;
    d_st.site = &hc_emlrtRSI;
    e_st.site = &ic_emlrtRSI;
    alpha1 = 1.0;
    DIAGA = 'U';
    TRANSA = 'N';
    UPLO = 'L';
    SIDE = 'R';
    f_st.site = &ic_emlrtRSI;
    m_t = (ptrdiff_t)(1);
    f_st.site = &ic_emlrtRSI;
    n_t = (ptrdiff_t)(1);
    f_st.site = &ic_emlrtRSI;
    lda_t = (ptrdiff_t)(1);
    f_st.site = &ic_emlrtRSI;
    ldb_t = (ptrdiff_t)(1);
    Aia0_t = (double *)(&A_data[0]);
    i = A->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i, &cf_emlrtBCI, &e_st);
    Bib0_t = (double *)(&A->data[0]);
    alpha1_t = (double *)(&alpha1);
    dtrsm(&SIDE, &UPLO, &TRANSA, &DIAGA, &m_t, &n_t, alpha1_t, Aia0_t, &lda_t,
          Bib0_t, &ldb_t);
  } else {
    i = b_B->size[0];
    b_B->size[0] = B->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)b_B, i, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    loop_ub = B->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_B->data[i] = B->data[B->size[0] * i];
    }

    i = b_A->size[0];
    b_A->size[0] = A->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)b_A, i, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    loop_ub = A->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_A->data[i] = A->data[A->size[0] * i];
    }

    st.site = &gb_emlrtRSI;
    alpha1 = eml_qrsolve(&st, b_B, b_A);
    i = A->size[0] * A->size[1];
    A->size[0] = 1;
    A->size[1] = 1;
    emxEnsureCapacity(sp, (emxArray__common *)A, i, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    A->data[0] = alpha1;
  }

  emxFree_int32_T(&lh_emlrtRSI);
  emxFree_real_T(&b_A);
  emxFree_real_T(&b_B);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

real_T eml_div(real_T x, real_T y)
{
  return x / y;
}

int32_T eml_ixamax(const emlrtStack *sp, int32_T n, const emxArray_real_T *x,
                   int32_T ix0)
{
  int32_T idxmax;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  int32_T i65;
  double * xix0_t;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &xb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (n < 1) {
    idxmax = 0;
  } else {
    b_st.site = &yb_emlrtRSI;
    n_t = (ptrdiff_t)(n);
    incx_t = (ptrdiff_t)(1);
    i65 = x->size[0];
    xix0_t = (double *)(&x->data[emlrtDynamicBoundsCheckFastR2012b(ix0, 1, i65,
      &df_emlrtBCI, &b_st) - 1]);
    n_t = idamax(&n_t, xix0_t, &incx_t);
    idxmax = (int32_T)n_t;
  }

  return idxmax;
}

void eml_matlab_zlarf(const emlrtStack *sp, int32_T m, int32_T n, int32_T iv0,
                      real_T tau, emxArray_real_T *C, int32_T ic0, int32_T ldc,
                      emxArray_real_T *work)
{
  int32_T lastv;
  int32_T i;
  int32_T lastc;
  boolean_T exitg2;
  int32_T colbottom;
  boolean_T b_i;
  int32_T exitg1;
  real_T alpha1;
  real_T beta1;
  char_T TRANSA;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t lda_t;
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  double * alpha1_t;
  double * beta1_t;
  double * yiy0_t;
  double * Aia0_t;
  double * xix0_t;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  if (tau != 0.0) {
    lastv = m;
    i = iv0 + m;
    while ((lastv > 0) && (C->data[i - 2] == 0.0)) {
      lastv--;
      i--;
    }

    st.site = &fd_emlrtRSI;
    lastc = n;
    exitg2 = false;
    while ((!exitg2) && (lastc > 0)) {
      i = ic0 + (lastc - 1) * ldc;
      colbottom = (i + lastv) - 1;
      b_st.site = &ed_emlrtRSI;
      if (i > colbottom) {
        b_i = false;
      } else {
        b_i = (colbottom > 2147483646);
      }

      if (b_i) {
        c_st.site = &cb_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      do {
        exitg1 = 0;
        if (i <= colbottom) {
          if (C->data[i - 1] != 0.0) {
            exitg1 = 1;
          } else {
            i++;
          }
        } else {
          lastc--;
          exitg1 = 2;
        }
      } while (exitg1 == 0);

      if (exitg1 == 1) {
        exitg2 = true;
      }
    }
  } else {
    lastv = 0;
    lastc = 0;
  }

  if (lastv > 0) {
    st.site = &gd_emlrtRSI;
    b_st.site = &id_emlrtRSI;
    if (lastc < 1) {
    } else {
      c_st.site = &jd_emlrtRSI;
      alpha1 = 1.0;
      beta1 = 0.0;
      TRANSA = 'C';
      d_st.site = &jd_emlrtRSI;
      m_t = (ptrdiff_t)(lastv);
      d_st.site = &jd_emlrtRSI;
      n_t = (ptrdiff_t)(lastc);
      d_st.site = &jd_emlrtRSI;
      lda_t = (ptrdiff_t)(ldc);
      d_st.site = &jd_emlrtRSI;
      incx_t = (ptrdiff_t)(1);
      d_st.site = &jd_emlrtRSI;
      incy_t = (ptrdiff_t)(1);
      alpha1_t = (double *)(&alpha1);
      beta1_t = (double *)(&beta1);
      i = work->size[0];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i, &kf_emlrtBCI, &c_st);
      yiy0_t = (double *)(&work->data[0]);
      i = C->size[0] * C->size[1];
      Aia0_t = (double *)(&C->data[emlrtDynamicBoundsCheckFastR2012b(ic0, 1, i,
        &kf_emlrtBCI, &c_st) - 1]);
      i = C->size[0] * C->size[1];
      xix0_t = (double *)(&C->data[emlrtDynamicBoundsCheckFastR2012b(iv0, 1, i,
        &kf_emlrtBCI, &c_st) - 1]);
      dgemv(&TRANSA, &m_t, &n_t, alpha1_t, Aia0_t, &lda_t, xix0_t, &incx_t,
            beta1_t, yiy0_t, &incy_t);
    }

    st.site = &hd_emlrtRSI;
    alpha1 = -tau;
    b_st.site = &kd_emlrtRSI;
    c_st.site = &ld_emlrtRSI;
    if (lastc < 1) {
    } else {
      d_st.site = &fc_emlrtRSI;
      m_t = (ptrdiff_t)(lastv);
      n_t = (ptrdiff_t)(lastc);
      incx_t = (ptrdiff_t)(1);
      incy_t = (ptrdiff_t)(1);
      lda_t = (ptrdiff_t)(ldc);
      alpha1_t = (double *)(&alpha1);
      i = C->size[0] * C->size[1];
      Aia0_t = (double *)(&C->data[emlrtDynamicBoundsCheckFastR2012b(ic0, 1, i,
        &ef_emlrtBCI, &d_st) - 1]);
      i = C->size[0] * C->size[1];
      beta1_t = (double *)(&C->data[emlrtDynamicBoundsCheckFastR2012b(iv0, 1, i,
        &ef_emlrtBCI, &d_st) - 1]);
      i = work->size[0];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i, &ef_emlrtBCI, &d_st);
      yiy0_t = (double *)(&work->data[0]);
      dger(&m_t, &n_t, alpha1_t, beta1_t, &incx_t, yiy0_t, &incy_t, Aia0_t,
           &lda_t);
    }
  }
}

real_T eml_matlab_zlarfg(void)
{
  return 0.0;
}

void mrdivide(const emlrtStack *sp, const emxArray_real_T *A, const
              emxArray_real_T *B, emxArray_real_T *y)
{
  const mxArray *b_y;
  static const int32_T iv59[2] = { 1, 21 };

  const mxArray *m11;
  char_T cv57[21];
  int32_T i;
  static const char_T cv58[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'd', 'i', 'm', 'a', 'g', 'r', 'e', 'e' };

  emxArray_real_T *r23;
  emxArray_real_T *b_B;
  emxArray_real_T *b_A;
  uint32_T unnamed_idx_0;
  uint32_T unnamed_idx_1;
  int32_T loop_ub;
  int32_T b_loop_ub;
  int32_T i58;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (B->size[1] == A->size[1]) {
  } else {
    b_y = NULL;
    m11 = emlrtCreateCharArray(2, iv59);
    for (i = 0; i < 21; i++) {
      cv57[i] = cv58[i];
    }

    emlrtInitCharArrayR2013a(sp, 21, m11, cv57);
    emlrtAssign(&b_y, m11);
    st.site = &gb_emlrtRSI;
    error(&st, message(&st, b_y, &j_emlrtMCI), &j_emlrtMCI);
  }

  emxInit_real_T(sp, &r23, 2, &l_emlrtRTEI, true);
  emxInit_real_T(sp, &b_B, 2, &l_emlrtRTEI, true);
  emxInit_real_T(sp, &b_A, 2, &l_emlrtRTEI, true);
  if ((A->size[0] == 0) || (A->size[1] == 0) || ((B->size[0] == 0) || (B->size[1]
        == 0))) {
    unnamed_idx_0 = (uint32_T)A->size[0];
    unnamed_idx_1 = (uint32_T)B->size[0];
    i = y->size[0] * y->size[1];
    y->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(sp, (emxArray__common *)y, i, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    i = y->size[0] * y->size[1];
    y->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(sp, (emxArray__common *)y, i, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i = 0; i < loop_ub; i++) {
      y->data[i] = 0.0;
    }
  } else if (B->size[0] == B->size[1]) {
    st.site = &gb_emlrtRSI;
    eml_lusolve(&st, B, A, y);
  } else {
    i = b_B->size[0] * b_B->size[1];
    b_B->size[0] = B->size[1];
    b_B->size[1] = B->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)b_B, i, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    loop_ub = B->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_loop_ub = B->size[1];
      for (i58 = 0; i58 < b_loop_ub; i58++) {
        b_B->data[i58 + b_B->size[0] * i] = B->data[i + B->size[0] * i58];
      }
    }

    i = b_A->size[0] * b_A->size[1];
    b_A->size[0] = A->size[1];
    b_A->size[1] = A->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)b_A, i, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    loop_ub = A->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_loop_ub = A->size[1];
      for (i58 = 0; i58 < b_loop_ub; i58++) {
        b_A->data[i58 + b_A->size[0] * i] = A->data[i + A->size[0] * i58];
      }
    }

    st.site = &gb_emlrtRSI;
    b_eml_qrsolve(&st, b_B, b_A, r23);
    i = y->size[0] * y->size[1];
    y->size[0] = r23->size[1];
    y->size[1] = r23->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)y, i, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    loop_ub = r23->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_loop_ub = r23->size[1];
      for (i58 = 0; i58 < b_loop_ub; i58++) {
        y->data[i58 + y->size[0] * i] = r23->data[i + r23->size[0] * i58];
      }
    }
  }

  emxFree_real_T(&b_A);
  emxFree_real_T(&b_B);
  emxFree_real_T(&r23);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void warn_singular(const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &gc_emlrtRSI;
  eml_warning(&st);
}

/* End of code generation (mrdivide.c) */

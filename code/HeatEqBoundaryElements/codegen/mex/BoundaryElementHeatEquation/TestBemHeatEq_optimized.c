/*
 * TestBemHeatEq_optimized.c
 *
 * Code generation for function 'TestBemHeatEq_optimized'
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
#include "rdivide.h"
#include "BoundaryElementHeatEquation_emxutil.h"
#include "mrdivide.h"
#include "eml_int_forloop_overflow_check.h"
#include "colon.h"
#include "eml_warning.h"
#include "exp.h"
#include "error.h"
#include "mod.h"
#include "BoundaryElementHeatEquation_mexutil.h"
#include "BoundaryElementHeatEquation_data.h"

/* Variable Definitions */
static emlrtRSInfo nf_emlrtRSI = { 31, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRSInfo of_emlrtRSI = { 50, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRSInfo pf_emlrtRSI = { 54, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRSInfo qf_emlrtRSI = { 55, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRSInfo rf_emlrtRSI = { 74, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRSInfo sf_emlrtRSI = { 88, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRSInfo tf_emlrtRSI = { 93, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRSInfo uf_emlrtRSI = { 99, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRSInfo vf_emlrtRSI = { 109, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRSInfo wf_emlrtRSI = { 112, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRSInfo xf_emlrtRSI = { 119, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRSInfo yf_emlrtRSI = { 122, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRSInfo ag_emlrtRSI = { 125, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRSInfo bg_emlrtRSI = { 128, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRSInfo cg_emlrtRSI = { 133, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRSInfo dg_emlrtRSI = { 16, "max",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\max.m"
};

static emlrtRSInfo eg_emlrtRSI = { 18, "eml_min_or_max",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRSInfo fg_emlrtRSI = { 96, "eml_min_or_max",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRSInfo gg_emlrtRSI = { 229, "eml_min_or_max",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRSInfo hg_emlrtRSI = { 202, "eml_min_or_max",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRSInfo ig_emlrtRSI = { 79, "colon",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo jg_emlrtRSI = { 283, "colon",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo kg_emlrtRSI = { 291, "colon",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo lg_emlrtRSI = { 1, "mldivide",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.p"
};

static emlrtRSInfo mg_emlrtRSI = { 117, "eml_lusolve",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

static emlrtRSInfo ng_emlrtRSI = { 128, "eml_lusolve",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

static emlrtRSInfo og_emlrtRSI = { 130, "eml_lusolve",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

static emlrtMCInfo b_emlrtMCI = { 405, 5, "colon",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtMCInfo c_emlrtMCI = { 404, 15, "colon",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtMCInfo bb_emlrtMCI = { 41, 9, "eml_min_or_max",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtMCInfo cb_emlrtMCI = { 38, 19, "eml_min_or_max",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtMCInfo db_emlrtMCI = { 82, 9, "eml_min_or_max",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtMCInfo eb_emlrtMCI = { 81, 19, "eml_min_or_max",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtMCInfo fb_emlrtMCI = { 1, 1, "mldivide",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.p"
};

static emlrtRTEInfo kb_emlrtRTEI = { 1, 17, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRTEInfo lb_emlrtRTEI = { 284, 1, "colon",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRTEInfo mb_emlrtRTEI = { 23, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRTEInfo nb_emlrtRTEI = { 27, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRTEInfo ob_emlrtRTEI = { 32, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRTEInfo pb_emlrtRTEI = { 36, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRTEInfo qb_emlrtRTEI = { 38, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRTEInfo rb_emlrtRTEI = { 40, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRTEInfo sb_emlrtRTEI = { 42, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRTEInfo tb_emlrtRTEI = { 93, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRTEInfo ub_emlrtRTEI = { 94, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRTEInfo vb_emlrtRTEI = { 99, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRTEInfo wb_emlrtRTEI = { 100, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRTEInfo xb_emlrtRTEI = { 112, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRTEInfo yb_emlrtRTEI = { 122, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtECInfo t_emlrtECI = { 2, 125, 8, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtECInfo u_emlrtECI = { -1, 55, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtBCInfo af_emlrtBCI = { -1, -1, 55, 1, "u0",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtECInfo v_emlrtECI = { -1, 54, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtBCInfo bf_emlrtBCI = { -1, -1, 54, 1, "u0",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo cf_emlrtBCI = { -1, -1, 53, 1, "u0",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo df_emlrtBCI = { -1, -1, 71, 5, "f", "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo ef_emlrtBCI = { -1, -1, 24, 5, "f", "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo ff_emlrtBCI = { -1, -1, 102, 30, "gridX",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo gf_emlrtBCI = { -1, -1, 102, 16, "gridX",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo hf_emlrtBCI = { -1, -1, 96, 28, "gridT",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo if_emlrtBCI = { -1, -1, 96, 16, "gridT",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo jf_emlrtBCI = { -1, -1, 74, 16, "sigIn",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo kf_emlrtBCI = { -1, -1, 50, 16, "sigIn",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo lf_emlrtBCI = { -1, -1, 31, 16, "sigIn",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtDCInfo fc_emlrtDCI = { 23, 14, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  1 };

static emlrtDCInfo gc_emlrtDCI = { 23, 14, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  4 };

static emlrtBCInfo mf_emlrtBCI = { -1, -1, 102, 5, "x",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo nf_emlrtBCI = { -1, -1, 96, 5, "t", "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtRSInfo xg_emlrtRSI = { 405, "colon",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo yg_emlrtRSI = { 82, "eml_min_or_max",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRSInfo ah_emlrtRSI = { 41, "eml_min_or_max",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRSInfo hh_emlrtRSI = { 404, "colon",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo ih_emlrtRSI = { 81, "eml_min_or_max",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRSInfo jh_emlrtRSI = { 38, "eml_min_or_max",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
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
  int32_T i100;
  int32_T iy;
  emxArray_int32_T *ipiv;
  int32_T info;
  int32_T i101;
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
  int32_T i102;
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
  emxInit_real_T(sp, &b_A, 2, &n_emlrtRTEI, true);
  st.site = &mb_emlrtRSI;
  b_st.site = &ob_emlrtRSI;
  c_st.site = &sb_emlrtRSI;
  d_st.site = &tb_emlrtRSI;
  i100 = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity(&d_st, (emxArray__common *)b_A, i100, (int32_T)sizeof(real_T),
                    &n_emlrtRTEI);
  iy = A->size[0] * A->size[1];
  for (i100 = 0; i100 < iy; i100++) {
    b_A->data[i100] = A->data[i100];
  }

  b_emxInit_int32_T(&d_st, &ipiv, 2, &n_emlrtRTEI, true);
  e_st.site = &ub_emlrtRSI;
  f_st.site = &bc_emlrtRSI;
  g_st.site = &cc_emlrtRSI;
  h_st.site = &dc_emlrtRSI;
  eml_signed_integer_colon(&h_st, muIntScalarMin_sint32(A->size[1], A->size[1]),
    ipiv);
  info = 0;
  if (A->size[1] < 1) {
  } else {
    i101 = A->size[1] - 1;
    b = muIntScalarMin_sint32(i101, A->size[1]);
    e_st.site = &vb_emlrtRSI;
    for (j = 1; j <= b; j++) {
      mmj = A->size[1] - j;
      c = (j - 1) * (A->size[1] + 1) + 1;
      e_st.site = &wb_emlrtRSI;
      f_st.site = &jc_emlrtRSI;
      if (mmj + 1 < 1) {
        iy = -1;
      } else {
        g_st.site = &kc_emlrtRSI;
        h_st.site = &kc_emlrtRSI;
        n_t = (ptrdiff_t)(mmj + 1);
        h_st.site = &kc_emlrtRSI;
        incx_t = (ptrdiff_t)(1);
        i100 = b_A->size[0] * b_A->size[1];
        xix0_t = (double *)(&b_A->data[emlrtDynamicBoundsCheckFastR2012b(c, 1,
          i100, &ae_emlrtBCI, &g_st) - 1]);
        incx_t = idamax(&n_t, xix0_t, &incx_t);
        iy = (int32_T)incx_t - 1;
      }

      if (b_A->data[(c + iy) - 1] != 0.0) {
        if (iy != 0) {
          ipiv->data[j - 1] = j + iy;
          e_st.site = &xb_emlrtRSI;
          f_st.site = &lc_emlrtRSI;
          g_st.site = &mc_emlrtRSI;
          ix = j;
          iy += j;
          h_st.site = &nc_emlrtRSI;
          overflow = (A->size[1] > 2147483646);
          if (overflow) {
            i_st.site = &ic_emlrtRSI;
            check_forloop_overflow_error(&i_st);
          }

          for (k = 1; k <= A->size[1]; k++) {
            i100 = b_A->size[0] * b_A->size[1];
            temp = b_A->data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, i100,
              &ce_emlrtBCI, &g_st) - 1];
            i100 = b_A->size[0] * b_A->size[1];
            i102 = b_A->size[0] * b_A->size[1];
            b_A->data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, i100,
              &ce_emlrtBCI, &g_st) - 1] = b_A->
              data[emlrtDynamicBoundsCheckFastR2012b(iy, 1, i102, &ce_emlrtBCI,
              &g_st) - 1];
            i100 = b_A->size[0] * b_A->size[1];
            b_A->data[emlrtDynamicBoundsCheckFastR2012b(iy, 1, i100,
              &ce_emlrtBCI, &g_st) - 1] = temp;
            ix += A->size[1];
            iy += A->size[1];
          }
        }

        iy = c + mmj;
        e_st.site = &yb_emlrtRSI;
        if (c + 1 > iy) {
          b_c = false;
        } else {
          b_c = (iy > 2147483646);
        }

        if (b_c) {
          f_st.site = &ic_emlrtRSI;
          check_forloop_overflow_error(&f_st);
        }

        for (k = c; k + 1 <= iy; k++) {
          b_A->data[k] /= b_A->data[c - 1];
        }
      } else {
        info = j;
      }

      iy = A->size[1] - j;
      e_st.site = &ac_emlrtRSI;
      f_st.site = &oc_emlrtRSI;
      g_st.site = &pc_emlrtRSI;
      if ((mmj < 1) || (iy < 1)) {
      } else {
        h_st.site = &qc_emlrtRSI;
        temp = -1.0;
        m_t = (ptrdiff_t)(mmj);
        n_t = (ptrdiff_t)(iy);
        incx_t = (ptrdiff_t)(1);
        incy_t = (ptrdiff_t)(A->size[1]);
        lda_t = (ptrdiff_t)(A->size[1]);
        alpha1_t = (double *)(&temp);
        i100 = b_A->size[0] * b_A->size[1];
        i102 = (c + A->size[1]) + 1;
        Aia0_t = (double *)(&b_A->data[emlrtDynamicBoundsCheckFastR2012b(i102, 1,
          i100, &be_emlrtBCI, &h_st) - 1]);
        i100 = b_A->size[0] * b_A->size[1];
        xix0_t = (double *)(&b_A->data[emlrtDynamicBoundsCheckFastR2012b(c + 1,
          1, i100, &be_emlrtBCI, &h_st) - 1]);
        i100 = b_A->size[0] * b_A->size[1];
        i102 = c + A->size[1];
        Aiy0_t = (double *)(&b_A->data[emlrtDynamicBoundsCheckFastR2012b(i102, 1,
          i100, &be_emlrtBCI, &h_st) - 1]);
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
    b_st.site = &nb_emlrtRSI;
    warn_singular(&b_st);
  }

  b_st.site = &mg_emlrtRSI;
  for (iy = 0; iy + 1 < A->size[1]; iy++) {
    if (ipiv->data[iy] != iy + 1) {
      temp = B->data[iy];
      B->data[iy] = B->data[ipiv->data[iy] - 1];
      B->data[ipiv->data[iy] - 1] = temp;
    }
  }

  emxFree_int32_T(&ipiv);
  b_st.site = &ng_emlrtRSI;
  c_st.site = &sc_emlrtRSI;
  if (A->size[1] < 1) {
  } else {
    d_st.site = &tc_emlrtRSI;
    temp = 1.0;
    DIAGA = 'U';
    TRANSA = 'N';
    UPLO = 'L';
    SIDE = 'L';
    e_st.site = &tc_emlrtRSI;
    m_t = (ptrdiff_t)(A->size[1]);
    e_st.site = &tc_emlrtRSI;
    n_t = (ptrdiff_t)(1);
    e_st.site = &tc_emlrtRSI;
    lda_t = (ptrdiff_t)(A->size[1]);
    e_st.site = &tc_emlrtRSI;
    incx_t = (ptrdiff_t)(A->size[1]);
    i100 = b_A->size[0] * b_A->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i100, &yd_emlrtBCI, &d_st);
    Aia0_t = (double *)(&b_A->data[0]);
    xix0_t = (double *)(&B->data[0]);
    alpha1_t = (double *)(&temp);
    dtrsm(&SIDE, &UPLO, &TRANSA, &DIAGA, &m_t, &n_t, alpha1_t, Aia0_t, &lda_t,
          xix0_t, &incx_t);
  }

  b_st.site = &og_emlrtRSI;
  c_st.site = &sc_emlrtRSI;
  if (A->size[1] < 1) {
  } else {
    d_st.site = &tc_emlrtRSI;
    temp = 1.0;
    DIAGA = 'N';
    TRANSA = 'N';
    UPLO = 'U';
    SIDE = 'L';
    e_st.site = &tc_emlrtRSI;
    m_t = (ptrdiff_t)(A->size[1]);
    e_st.site = &tc_emlrtRSI;
    n_t = (ptrdiff_t)(1);
    e_st.site = &tc_emlrtRSI;
    lda_t = (ptrdiff_t)(A->size[1]);
    e_st.site = &tc_emlrtRSI;
    incx_t = (ptrdiff_t)(A->size[1]);
    i100 = b_A->size[0] * b_A->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i100, &yd_emlrtBCI, &d_st);
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
  int32_T i92;
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
  boolean_T b10;
  int32_T i;
  int32_T i_i;
  int32_T nmi;
  int32_T mmi;
  int32_T pvt;
  int32_T iy;
  boolean_T b11;
  real_T xnorm;
  int32_T i93;
  real_T atmp;
  real_T d13;
  boolean_T b12;
  boolean_T b_i;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  double * xix0_t;
  boolean_T exitg1;
  const mxArray *y;
  static const int32_T iv63[2] = { 1, 8 };

  const mxArray *m15;
  char_T cv68[8];
  static const char_T cv69[8] = { '%', '%', '%', 'd', '.', '%', 'd', 'e' };

  char_T cv70[14];
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
  emxInit_real_T(sp, &b_A, 2, &p_emlrtRTEI, true);
  c_emxInit_real_T(sp, &work, 1, &t_emlrtRTEI, true);
  mn = (int32_T)muDoubleScalarMin(A->size[0], A->size[1]);
  st.site = &uc_emlrtRSI;
  b_st.site = &xc_emlrtRSI;
  c_st.site = &yc_emlrtRSI;
  i92 = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity(&c_st, (emxArray__common *)b_A, i92, (int32_T)sizeof(real_T),
                    &p_emlrtRTEI);
  ix = A->size[0] * A->size[1];
  for (i92 = 0; i92 < ix; i92++) {
    b_A->data[i92] = A->data[i92];
  }

  c_emxInit_real_T(&c_st, &tau, 1, &p_emlrtRTEI, true);
  b_emxInit_int32_T(&c_st, &jpvt, 2, &p_emlrtRTEI, true);
  m = b_A->size[0];
  n = b_A->size[1];
  b_mn = muIntScalarMin_sint32(b_A->size[0], b_A->size[1]);
  i92 = tau->size[0];
  tau->size[0] = b_mn;
  emxEnsureCapacity(&c_st, (emxArray__common *)tau, i92, (int32_T)sizeof(real_T),
                    &q_emlrtRTEI);
  d_st.site = &ad_emlrtRSI;
  e_st.site = &bc_emlrtRSI;
  f_st.site = &cc_emlrtRSI;
  g_st.site = &dc_emlrtRSI;
  eml_signed_integer_colon(&g_st, b_A->size[1], jpvt);
  if ((b_A->size[0] == 0) || (b_A->size[1] == 0)) {
  } else {
    ix = b_A->size[1];
    i92 = work->size[0];
    work->size[0] = ix;
    emxEnsureCapacity(&c_st, (emxArray__common *)work, i92, (int32_T)sizeof
                      (real_T), &p_emlrtRTEI);
    for (i92 = 0; i92 < ix; i92++) {
      work->data[i92] = 0.0;
    }

    c_emxInit_real_T(&c_st, &vn1, 1, &r_emlrtRTEI, true);
    c_emxInit_real_T(&c_st, &vn2, 1, &s_emlrtRTEI, true);
    d_st.site = &bd_emlrtRSI;
    ix = b_A->size[1];
    i92 = vn1->size[0];
    vn1->size[0] = ix;
    emxEnsureCapacity(&c_st, (emxArray__common *)vn1, i92, (int32_T)sizeof
                      (real_T), &r_emlrtRTEI);
    i92 = vn2->size[0];
    vn2->size[0] = ix;
    emxEnsureCapacity(&c_st, (emxArray__common *)vn2, i92, (int32_T)sizeof
                      (real_T), &s_emlrtRTEI);
    k = 1;
    d_st.site = &cd_emlrtRSI;
    overflow = (b_A->size[1] > 2147483646);
    if (overflow) {
      e_st.site = &ic_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }

    for (ix = 0; ix + 1 <= b_A->size[1]; ix++) {
      d_st.site = &dd_emlrtRSI;
      vn1->data[ix] = eml_xnrm2(&d_st, b_A->size[0], b_A, k);
      vn2->data[ix] = vn1->data[ix];
      k += b_A->size[0];
    }

    d_st.site = &ed_emlrtRSI;
    if (1 > b_mn) {
      b10 = false;
    } else {
      b10 = (b_mn > 2147483646);
    }

    if (b10) {
      e_st.site = &ic_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }

    for (i = 1; i <= b_mn; i++) {
      i_i = (i + (i - 1) * m) - 1;
      nmi = n - i;
      mmi = m - i;
      d_st.site = &fd_emlrtRSI;
      ix = eml_ixamax(&d_st, 1 + nmi, vn1, i);
      pvt = (i + ix) - 2;
      if (pvt + 1 != i) {
        d_st.site = &gd_emlrtRSI;
        e_st.site = &lc_emlrtRSI;
        f_st.site = &mc_emlrtRSI;
        ix = 1 + m * pvt;
        iy = 1 + m * (i - 1);
        g_st.site = &nc_emlrtRSI;
        if (1 > m) {
          b11 = false;
        } else {
          b11 = (m > 2147483646);
        }

        if (b11) {
          h_st.site = &ic_emlrtRSI;
          check_forloop_overflow_error(&h_st);
        }

        for (k = 1; k <= m; k++) {
          i92 = b_A->size[0] * b_A->size[1];
          xnorm = b_A->data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, i92,
            &ce_emlrtBCI, &f_st) - 1];
          i92 = b_A->size[0] * b_A->size[1];
          i93 = b_A->size[0] * b_A->size[1];
          b_A->data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, i92, &ce_emlrtBCI,
            &f_st) - 1] = b_A->data[emlrtDynamicBoundsCheckFastR2012b(iy, 1, i93,
            &ce_emlrtBCI, &f_st) - 1];
          i92 = b_A->size[0] * b_A->size[1];
          b_A->data[emlrtDynamicBoundsCheckFastR2012b(iy, 1, i92, &ce_emlrtBCI,
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
        d_st.site = &hd_emlrtRSI;
        atmp = b_A->data[i_i];
        d13 = 0.0;
        if (1 + mmi <= 0) {
        } else {
          e_st.site = &pd_emlrtRSI;
          xnorm = eml_xnrm2(&e_st, mmi, b_A, i_i + 2);
          if (xnorm != 0.0) {
            xnorm = muDoubleScalarHypot(b_A->data[i_i], xnorm);
            if (b_A->data[i_i] >= 0.0) {
              xnorm = -xnorm;
            }

            if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
              ix = 0;
              do {
                ix++;
                e_st.site = &qd_emlrtRSI;
                eml_xscal(&e_st, mmi, 9.9792015476736E+291, b_A, i_i + 2);
                xnorm *= 9.9792015476736E+291;
                atmp *= 9.9792015476736E+291;
              } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

              e_st.site = &rd_emlrtRSI;
              xnorm = eml_xnrm2(&e_st, mmi, b_A, i_i + 2);
              xnorm = muDoubleScalarHypot(atmp, xnorm);
              if (atmp >= 0.0) {
                xnorm = -xnorm;
              }

              d13 = (xnorm - atmp) / xnorm;
              e_st.site = &sd_emlrtRSI;
              eml_xscal(&e_st, mmi, 1.0 / (atmp - xnorm), b_A, i_i + 2);
              e_st.site = &td_emlrtRSI;
              if (1 > ix) {
                b12 = false;
              } else {
                b12 = (ix > 2147483646);
              }

              if (b12) {
                f_st.site = &ic_emlrtRSI;
                check_forloop_overflow_error(&f_st);
              }

              for (k = 1; k <= ix; k++) {
                xnorm *= 1.0020841800044864E-292;
              }

              atmp = xnorm;
            } else {
              d13 = (xnorm - b_A->data[i_i]) / xnorm;
              atmp = 1.0 / (b_A->data[i_i] - xnorm);
              e_st.site = &ud_emlrtRSI;
              eml_xscal(&e_st, mmi, atmp, b_A, i_i + 2);
              atmp = xnorm;
            }
          }
        }

        tau->data[i - 1] = d13;
      } else {
        atmp = b_A->data[i_i];
        d_st.site = &id_emlrtRSI;
        tau->data[i - 1] = eml_matlab_zlarfg();
      }

      b_A->data[i_i] = atmp;
      if (i < n) {
        atmp = b_A->data[i_i];
        b_A->data[i_i] = 1.0;
        d_st.site = &jd_emlrtRSI;
        eml_matlab_zlarf(&d_st, mmi + 1, nmi, i_i + 1, tau->data[i - 1], b_A, i
                         + i * m, m, work);
        b_A->data[i_i] = atmp;
      }

      d_st.site = &kd_emlrtRSI;
      if (i + 1 > n) {
        b_i = false;
      } else {
        b_i = (n > 2147483646);
      }

      if (b_i) {
        e_st.site = &ic_emlrtRSI;
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
              d_st.site = &ld_emlrtRSI;
              e_st.site = &nd_emlrtRSI;
              if (mmi < 1) {
                xnorm = 0.0;
              } else {
                f_st.site = &od_emlrtRSI;
                g_st.site = &od_emlrtRSI;
                n_t = (ptrdiff_t)(mmi);
                g_st.site = &od_emlrtRSI;
                incx_t = (ptrdiff_t)(1);
                i92 = b_A->size[0] * b_A->size[1];
                i93 = (i + m * ix) + 1;
                xix0_t = (double *)(&b_A->data[emlrtDynamicBoundsCheckFastR2012b
                                    (i93, 1, i92, &de_emlrtBCI, &f_st) - 1]);
                xnorm = dnrm2(&n_t, xix0_t, &incx_t);
              }

              vn1->data[ix] = xnorm;
              vn2->data[ix] = vn1->data[ix];
            } else {
              vn1->data[ix] = 0.0;
              vn2->data[ix] = 0.0;
            }
          } else {
            d_st.site = &md_emlrtRSI;
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
        st.site = &vc_emlrtRSI;
        y = NULL;
        m15 = emlrtCreateCharArray(2, iv63);
        for (i = 0; i < 8; i++) {
          cv68[i] = cv69[i];
        }

        emlrtInitCharArrayR2013a(&st, 8, m15, cv68);
        emlrtAssign(&y, m15);
        b_st.site = &qh_emlrtRSI;
        emlrt_marshallIn(&b_st, c_sprintf(&b_st, b_sprintf(&b_st, y,
          emlrt_marshallOut(14.0), emlrt_marshallOut(6.0), &h_emlrtMCI),
          emlrt_marshallOut(xnorm), &i_emlrtMCI), "sprintf", cv70);
        st.site = &wc_emlrtRSI;
        b_eml_warning(&st, atmp, cv70);
        exitg1 = true;
      } else {
        atmp++;
        k++;
      }
    }
  }

  unnamed_idx_0 = (uint32_T)A->size[1];
  i92 = Y->size[0];
  Y->size[0] = (int32_T)unnamed_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)Y, i92, (int32_T)sizeof(real_T),
                    &p_emlrtRTEI);
  ix = (int32_T)unnamed_idx_0;
  for (i92 = 0; i92 < ix; i92++) {
    Y->data[i92] = 0.0;
  }

  for (ix = 0; ix < mn; ix++) {
    if (tau->data[ix] != 0.0) {
      xnorm = B->data[ix];
      i92 = A->size[0] + (int32_T)(1.0 - ((1.0 + (real_T)ix) + 1.0));
      emlrtForLoopVectorCheckR2012b((1.0 + (real_T)ix) + 1.0, 1.0, A->size[0],
        mxDOUBLE_CLASS, i92, &nc_emlrtRTEI, sp);
      for (i = 0; i < i92; i++) {
        unnamed_idx_0 = ((uint32_T)ix + i) + 2U;
        xnorm += b_A->data[((int32_T)unnamed_idx_0 + b_A->size[0] * ix) - 1] *
          B->data[(int32_T)unnamed_idx_0 - 1];
      }

      xnorm *= tau->data[ix];
      if (xnorm != 0.0) {
        B->data[ix] -= xnorm;
        i92 = A->size[0] + (int32_T)(1.0 - ((1.0 + (real_T)ix) + 1.0));
        emlrtForLoopVectorCheckR2012b((1.0 + (real_T)ix) + 1.0, 1.0, A->size[0],
          mxDOUBLE_CLASS, i92, &mc_emlrtRTEI, sp);
        for (i = 0; i < i92; i++) {
          unnamed_idx_0 = ((uint32_T)ix + i) + 2U;
          B->data[(int32_T)unnamed_idx_0 - 1] -= b_A->data[((int32_T)
            unnamed_idx_0 + b_A->size[0] * ix) - 1] * xnorm;
        }
      }
    }
  }

  emxFree_real_T(&tau);
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, atmp, mxDOUBLE_CLASS, (int32_T)atmp,
    &lc_emlrtRTEI, sp);
  for (i = 0; i < (int32_T)atmp; i++) {
    Y->data[jpvt->data[i] - 1] = B->data[i];
  }

  emlrtForLoopVectorCheckR2012b(atmp, -1.0, 1.0, mxDOUBLE_CLASS, (int32_T)-(1.0
    + (-1.0 - atmp)), &kc_emlrtRTEI, sp);
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

void TestBemHeatEq_optimized(const emlrtStack *sp, const emxArray_real_T *sigIn,
  real_T regOrder, real_T lambda, real_T alpha, real_T numSpacePoints, real_T
  initCond, boolean_T plotFlag, emxArray_real_T *u, emxArray_real_T *r)
{
  emxArray_real_T *f;
  int32_T cdiff;
  real_T sTime;
  int32_T i80;
  int32_T ndbl;
  int32_T i81;
  emxArray_real_T *E;
  emxArray_real_T *u0;
  emxArray_real_T *q0j;
  emxArray_real_T *q1j;
  emxArray_real_T *h0j;
  emxArray_real_T *h1j;
  emxArray_real_T *gridX;
  boolean_T n_too_large;
  const mxArray *y;
  static const int32_T iv49[2] = { 1, 36 };

  const mxArray *m13;
  char_T cv56[36];
  int32_T i;
  static const char_T cv57[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  const mxArray *b_y;
  static const int32_T iv50[2] = { 1, 39 };

  char_T cv58[39];
  static const char_T cv59[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'm', 'i', 'n', '_', 'o', 'r',
    '_', 'm', 'a', 'x', '_', 'v', 'a', 'r', 'D', 'i', 'm', 'Z', 'e', 'r', 'o' };

  int32_T ixstart;
  boolean_T exitg3;
  real_T midPoint;
  const mxArray *c_y;
  static const int32_T iv51[2] = { 1, 36 };

  const mxArray *d_y;
  static const int32_T iv52[2] = { 1, 39 };

  boolean_T exitg2;
  int32_T apnd;
  emxArray_real_T *b_gridX;
  int32_T i82;
  int32_T anew;
  real_T b_apnd;
  emxArray_real_T *c_gridX;
  const mxArray *e_y;
  static const int32_T iv53[2] = { 1, 36 };

  const mxArray *f_y;
  static const int32_T iv54[2] = { 1, 39 };

  boolean_T exitg1;
  uint32_T b_ndbl;
  const mxArray *g_y;
  static const int32_T iv55[2] = { 1, 21 };

  char_T cv60[21];
  static const char_T cv61[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  emxArray_real_T *gridT;
  emxArray_real_T *t;
  int32_T tIdx;
  real_T b_cdiff;
  const mxArray *h_y;
  static const int32_T iv56[2] = { 1, 21 };

  emxArray_real_T *d_gridX;
  emxArray_real_T *x;
  emxArray_real_T *C;
  emxArray_real_T *regTerm;
  emxArray_real_T *A;
  emxArray_real_T *Bstar;
  emxArray_real_T *D;
  emxArray_real_T *b_A;
  emxArray_real_T *Y;
  const mxArray *i_y;
  static const int32_T iv57[2] = { 1, 45 };

  char_T cv62[45];
  static const char_T cv63[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *j_y;
  static const int32_T iv58[2] = { 1, 21 };

  static const char_T cv64[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  uint32_T unnamed_idx_1;
  char_T TRANSB;
  char_T TRANSA;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  double * alpha1_t;
  double * Aia0_t;
  double * Bib0_t;
  double * beta1_t;
  double * Cic0_t;
  int32_T b_C[2];
  int32_T b_regTerm[2];
  const mxArray *k_y;
  static const int32_T iv59[2] = { 1, 45 };

  const mxArray *l_y;
  static const int32_T iv60[2] = { 1, 21 };

  emxArray_real_T *r18;
  const mxArray *m_y;
  static const int32_T iv61[2] = { 1, 21 };

  static const char_T cv65[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'd', 'i', 'm', 'a', 'g', 'r', 'e', 'e' };

  emxArray_real_T *b_r;
  emxArray_real_T *r19;
  int32_T j;
  emxArray_real_T *b_f;
  int32_T i83;
  int32_T i84;
  int32_T i85;
  int32_T i86;
  int32_T i87;
  int32_T i88;
  int32_T i89;
  int32_T i90;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack j_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &c_st;
  e_st.tls = c_st.tls;
  f_st.prev = &d_st;
  f_st.tls = d_st.tls;
  g_st.prev = &d_st;
  g_st.tls = d_st.tls;
  h_st.prev = &b_st;
  h_st.tls = b_st.tls;
  i_st.prev = &st;
  i_st.tls = st.tls;
  j_st.prev = &st;
  j_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*  Solve the inveerse heat equation with an unknown source */
  /*  u_t(x,t) = ku_{xx}(x,y) +r(t)*f(x,t) */
  /*  with 0<=x<=1, 0<=t<=T */
  /*  subject to the boundary conditions u(0,t) = u(1,t) */
  /*  and u_x(0,t)+alpha*u(0,t)=0 */
  /*  and initial condition */
  /*  u(x,0) = phi(x) =u0, 0<=x<=1 */
  /*  In this problem we take f(x,t) =1 for all x and t */
  /*  lambda    regularization constant (affects smoothness of source solution) */
  /*  regOrder  Tikhonov regularization term order, [0,1,or 2] */
  /*  initCond= 1 or 2, for initCond=1, the h0 and h1 function are sigIn */
  /*  for initCond = 2, the h0=h1=0, and the energy drops linearly to 0 */
  /*  The convention for most matrices is that rows are time, columns are space */
  /*  alpha    = -1e-14; % for the boundary condition */
  if (b_mod(numSpacePoints + 1.0) != 0.0) {
    numSpacePoints++;

    /*  make it odd */
  }

  emxInit_real_T(sp, &f, 2, &mb_emlrtRTEI, true);

  /*  space points; */
  /*  time points */
  cdiff = sigIn->size[1];
  sTime = emlrtNonNegativeCheckFastR2012b(numSpacePoints, &gc_emlrtDCI, sp);
  emlrtIntegerCheckFastR2012b(sTime, &fc_emlrtDCI, sp);
  i80 = f->size[0] * f->size[1];
  f->size[0] = cdiff;
  emxEnsureCapacity(sp, (emxArray__common *)f, i80, (int32_T)sizeof(real_T),
                    &kb_emlrtRTEI);
  sTime = emlrtNonNegativeCheckFastR2012b(numSpacePoints, &gc_emlrtDCI, sp);
  emlrtIntegerCheckFastR2012b(sTime, &fc_emlrtDCI, sp);
  i80 = f->size[0] * f->size[1];
  f->size[1] = (int32_T)numSpacePoints;
  emxEnsureCapacity(sp, (emxArray__common *)f, i80, (int32_T)sizeof(real_T),
                    &kb_emlrtRTEI);
  sTime = emlrtNonNegativeCheckFastR2012b(numSpacePoints, &gc_emlrtDCI, sp);
  ndbl = sigIn->size[1] * (int32_T)emlrtIntegerCheckFastR2012b(sTime,
    &fc_emlrtDCI, sp);
  for (i80 = 0; i80 < ndbl; i80++) {
    f->data[i80] = 0.0;
  }

  /*  function of N time points over N0 space points */
  cdiff = sigIn->size[1];
  i80 = (int32_T)numSpacePoints;
  i81 = (int32_T)muDoubleScalarCeil(numSpacePoints / 2.0);
  i80 = emlrtDynamicBoundsCheckFastR2012b(i81, 1, i80, &ef_emlrtBCI, sp);
  for (i81 = 0; i81 < cdiff; i81++) {
    f->data[i81 + f->size[0] * (i80 - 1)] = 1.0;
  }

  /*  the source is only active at the mid point x=0.5; */
  emxInit_real_T(sp, &E, 2, &nb_emlrtRTEI, true);
  emxInit_real_T(sp, &u0, 2, &ob_emlrtRTEI, true);
  c_emxInit_real_T(sp, &q0j, 1, &pb_emlrtRTEI, true);
  c_emxInit_real_T(sp, &q1j, 1, &qb_emlrtRTEI, true);
  emxInit_real_T(sp, &h0j, 2, &rb_emlrtRTEI, true);
  emxInit_real_T(sp, &h1j, 2, &sb_emlrtRTEI, true);
  emxInit_real_T(sp, &gridX, 2, &vb_emlrtRTEI, true);
  if (initCond == 1.0) {
    i80 = E->size[0] * E->size[1];
    E->size[0] = 1;
    E->size[1] = sigIn->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)E, i80, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    ndbl = sigIn->size[0] * sigIn->size[1];
    for (i80 = 0; i80 < ndbl; i80++) {
      E->data[i80] = sigIn->data[i80] * numSpacePoints;
    }

    /*  int(u(x,t)dx) is a time function of size 1xN % assuming the temp drops to 0 at the boundaries linearly */
    /*  determine initial wave u(x,0) is the Phi function */
    i80 = (int32_T)muDoubleScalarMin(10.0, sigIn->size[1]);
    if (1 > i80) {
      i80 = 0;
    } else {
      i81 = sigIn->size[1];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i81, &lf_emlrtBCI, sp);
      i81 = sigIn->size[1];
      i80 = emlrtDynamicBoundsCheckFastR2012b(i80, 1, i81, &lf_emlrtBCI, sp);
    }

    st.site = &nf_emlrtRSI;
    b_st.site = &dg_emlrtRSI;
    c_st.site = &eg_emlrtRSI;
    if ((i80 == 1) || (i80 != 1)) {
      n_too_large = true;
    } else {
      n_too_large = false;
    }

    if (n_too_large) {
    } else {
      y = NULL;
      m13 = emlrtCreateCharArray(2, iv49);
      for (i = 0; i < 36; i++) {
        cv56[i] = cv57[i];
      }

      emlrtInitCharArrayR2013a(&c_st, 36, m13, cv56);
      emlrtAssign(&y, m13);
      d_st.site = &jh_emlrtRSI;
      e_st.site = &ah_emlrtRSI;
      b_error(&d_st, message(&e_st, y, &bb_emlrtMCI), &cb_emlrtMCI);
    }

    if (i80 > 0) {
    } else {
      b_y = NULL;
      m13 = emlrtCreateCharArray(2, iv50);
      for (i = 0; i < 39; i++) {
        cv58[i] = cv59[i];
      }

      emlrtInitCharArrayR2013a(&c_st, 39, m13, cv58);
      emlrtAssign(&b_y, m13);
      d_st.site = &ih_emlrtRSI;
      e_st.site = &yg_emlrtRSI;
      b_error(&d_st, message(&e_st, b_y, &db_emlrtMCI), &eb_emlrtMCI);
    }

    d_st.site = &fg_emlrtRSI;
    ixstart = 1;
    sTime = sigIn->data[0];
    if (i80 > 1) {
      if (muDoubleScalarIsNaN(sTime)) {
        f_st.site = &hg_emlrtRSI;
        cdiff = 2;
        exitg3 = false;
        while ((!exitg3) && (cdiff <= i80)) {
          ixstart = cdiff;
          if (!muDoubleScalarIsNaN(sigIn->data[cdiff - 1])) {
            sTime = sigIn->data[cdiff - 1];
            exitg3 = true;
          } else {
            cdiff++;
          }
        }
      }

      if (ixstart < i80) {
        f_st.site = &gg_emlrtRSI;
        for (cdiff = ixstart + 1; cdiff <= i80; cdiff++) {
          if (sigIn->data[cdiff - 1] > sTime) {
            sTime = sigIn->data[cdiff - 1];
          }
        }
      }
    }

    /*  take the max value  */
    i80 = u0->size[0] * u0->size[1];
    u0->size[0] = 1;
    u0->size[1] = (int32_T)numSpacePoints;
    emxEnsureCapacity(sp, (emxArray__common *)u0, i80, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    ndbl = (int32_T)numSpacePoints;
    for (i80 = 0; i80 < ndbl; i80++) {
      u0->data[i80] = sTime;
    }

    /*  u(x,0) */
    /*  Determine the boundary and initial functions */
    /*  du/dn(0,t) = q0j */
    i80 = q0j->size[0];
    q0j->size[0] = sigIn->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)q0j, i80, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    ndbl = sigIn->size[1];
    for (i80 = 0; i80 < ndbl; i80++) {
      q0j->data[i80] = 0.0;
    }

    /*  the flux  */
    /* du/dn(1,t) = q1j */
    i80 = q1j->size[0];
    q1j->size[0] = sigIn->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)q1j, i80, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    ndbl = sigIn->size[1];
    for (i80 = 0; i80 < ndbl; i80++) {
      q1j->data[i80] = 0.0;
    }

    /*  the flux  */
    /*  u(0,t) = h0j */
    i80 = h0j->size[0] * h0j->size[1];
    h0j->size[0] = 1;
    h0j->size[1] = sigIn->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)h0j, i80, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    ndbl = sigIn->size[0] * sigIn->size[1];
    for (i80 = 0; i80 < ndbl; i80++) {
      h0j->data[i80] = sigIn->data[i80];
    }

    /* zeros(N,1); */
    /*  u(1,t) = h1j */
    i80 = h1j->size[0] * h1j->size[1];
    h1j->size[0] = 1;
    h1j->size[1] = sigIn->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)h1j, i80, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    ndbl = sigIn->size[0] * sigIn->size[1];
    for (i80 = 0; i80 < ndbl; i80++) {
      h1j->data[i80] = sigIn->data[i80];
    }

    /*  zeros(N,1); */
  } else if (initCond == 2.0) {
    rdivide(sp, sigIn, 2.0, E);

    /*  int(u(x,t)dx) is a time function of size 1xN % assuming the temp drops to 0 at the boundaries linearly */
    /*  determine initial wave u(x,0) is the Phi function */
    i80 = u0->size[0] * u0->size[1];
    u0->size[0] = 1;
    u0->size[1] = (int32_T)numSpacePoints;
    emxEnsureCapacity(sp, (emxArray__common *)u0, i80, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    ndbl = (int32_T)numSpacePoints;
    for (i80 = 0; i80 < ndbl; i80++) {
      u0->data[i80] = 0.0;
    }

    midPoint = muDoubleScalarCeil(numSpacePoints / 2.0);
    i80 = (int32_T)muDoubleScalarMin(10.0, sigIn->size[1]);
    if (1 > i80) {
      i80 = 0;
    } else {
      i81 = sigIn->size[1];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i81, &kf_emlrtBCI, sp);
      i81 = sigIn->size[1];
      i80 = emlrtDynamicBoundsCheckFastR2012b(i80, 1, i81, &kf_emlrtBCI, sp);
    }

    st.site = &of_emlrtRSI;
    b_st.site = &dg_emlrtRSI;
    c_st.site = &eg_emlrtRSI;
    if ((i80 == 1) || (i80 != 1)) {
      n_too_large = true;
    } else {
      n_too_large = false;
    }

    if (n_too_large) {
    } else {
      c_y = NULL;
      m13 = emlrtCreateCharArray(2, iv51);
      for (i = 0; i < 36; i++) {
        cv56[i] = cv57[i];
      }

      emlrtInitCharArrayR2013a(&c_st, 36, m13, cv56);
      emlrtAssign(&c_y, m13);
      d_st.site = &jh_emlrtRSI;
      e_st.site = &ah_emlrtRSI;
      b_error(&d_st, message(&e_st, c_y, &bb_emlrtMCI), &cb_emlrtMCI);
    }

    if (i80 > 0) {
    } else {
      d_y = NULL;
      m13 = emlrtCreateCharArray(2, iv52);
      for (i = 0; i < 39; i++) {
        cv58[i] = cv59[i];
      }

      emlrtInitCharArrayR2013a(&c_st, 39, m13, cv58);
      emlrtAssign(&d_y, m13);
      d_st.site = &ih_emlrtRSI;
      e_st.site = &yg_emlrtRSI;
      b_error(&d_st, message(&e_st, d_y, &db_emlrtMCI), &eb_emlrtMCI);
    }

    d_st.site = &fg_emlrtRSI;
    ixstart = 1;
    sTime = sigIn->data[0];
    if (i80 > 1) {
      if (muDoubleScalarIsNaN(sTime)) {
        f_st.site = &hg_emlrtRSI;
        cdiff = 2;
        exitg2 = false;
        while ((!exitg2) && (cdiff <= i80)) {
          ixstart = cdiff;
          if (!muDoubleScalarIsNaN(sigIn->data[cdiff - 1])) {
            sTime = sigIn->data[cdiff - 1];
            exitg2 = true;
          } else {
            cdiff++;
          }
        }
      }

      if (ixstart < i80) {
        f_st.site = &gg_emlrtRSI;
        for (cdiff = ixstart + 1; cdiff <= i80; cdiff++) {
          if (sigIn->data[cdiff - 1] > sTime) {
            sTime = sigIn->data[cdiff - 1];
          }
        }
      }
    }

    /*  take the max value  */
    /*  u0       = u0m*ones(1,N0); % u(x,0) */
    /*  linearly decrease to zero to match with boundary conditions */
    i80 = (int32_T)numSpacePoints;
    i81 = (int32_T)midPoint;
    u0->data[emlrtDynamicBoundsCheckFastR2012b(i81, 1, i80, &cf_emlrtBCI, sp) -
      1] = sTime;
    if (1.0 > midPoint - 1.0) {
      i80 = 0;
    } else {
      i80 = u0->size[1];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i80, &bf_emlrtBCI, sp);
      i80 = u0->size[1];
      i81 = (int32_T)midPoint - 1;
      i80 = emlrtDynamicBoundsCheckFastR2012b(i81, 1, i80, &bf_emlrtBCI, sp);
    }

    st.site = &pf_emlrtRSI;
    b_st.site = &bc_emlrtRSI;
    c_st.site = &ig_emlrtRSI;
    if (midPoint - 2.0 < 0.0) {
      ndbl = -1;
      apnd = (int32_T)midPoint - 2;
    } else {
      ndbl = (int32_T)muDoubleScalarFloor((midPoint - 2.0) + 0.5);
      apnd = ndbl;
      cdiff = (ndbl - (int32_T)midPoint) + 2;
      if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * muDoubleScalarAbs
          (midPoint - 2.0)) {
        ndbl++;
        apnd = (int32_T)midPoint - 2;
      } else if (cdiff > 0) {
        apnd = ndbl - 1;
      } else {
        ndbl++;
      }

      ndbl--;
    }

    d_st.site = &jg_emlrtRSI;
    i81 = gridX->size[0] * gridX->size[1];
    gridX->size[0] = 1;
    gridX->size[1] = ndbl + 1;
    emxEnsureCapacity(&c_st, (emxArray__common *)gridX, i81, (int32_T)sizeof
                      (real_T), &lb_emlrtRTEI);
    if (ndbl + 1 > 0) {
      gridX->data[0] = 0.0;
      if (ndbl + 1 > 1) {
        gridX->data[ndbl] = apnd;
        i81 = ndbl + (ndbl < 0);
        if (i81 >= 0) {
          ixstart = (int32_T)((uint32_T)i81 >> 1);
        } else {
          ixstart = ~(int32_T)((uint32_T)~i81 >> 1);
        }

        d_st.site = &kg_emlrtRSI;
        for (cdiff = 1; cdiff < ixstart; cdiff++) {
          gridX->data[cdiff] = cdiff;
          gridX->data[ndbl - cdiff] = apnd - cdiff;
        }

        if (ixstart << 1 == ndbl) {
          gridX->data[ixstart] = (real_T)apnd / 2.0;
        } else {
          gridX->data[ixstart] = ixstart;
          gridX->data[ixstart + 1] = apnd - ixstart;
        }
      }
    }

    emxInit_real_T(&c_st, &b_gridX, 2, &kb_emlrtRTEI, true);
    i81 = b_gridX->size[0] * b_gridX->size[1];
    b_gridX->size[0] = 1;
    b_gridX->size[1] = gridX->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)b_gridX, i81, (int32_T)sizeof
                      (real_T), &kb_emlrtRTEI);
    ndbl = gridX->size[0] * gridX->size[1];
    for (i81 = 0; i81 < ndbl; i81++) {
      b_gridX->data[i81] = gridX->data[i81];
    }

    rdivide(sp, b_gridX, midPoint, gridX);
    i81 = gridX->size[0] * gridX->size[1];
    gridX->size[0] = 1;
    emxEnsureCapacity(sp, (emxArray__common *)gridX, i81, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    ixstart = gridX->size[0];
    cdiff = gridX->size[1];
    ndbl = ixstart * cdiff;
    emxFree_real_T(&b_gridX);
    for (i81 = 0; i81 < ndbl; i81++) {
      gridX->data[i81] *= sTime;
    }

    i81 = gridX->size[1];
    emlrtSizeEqCheck1DFastR2012b(i80, i81, &v_emlrtECI, sp);
    ndbl = gridX->size[1];
    for (i80 = 0; i80 < ndbl; i80++) {
      u0->data[i80] = gridX->data[gridX->size[0] * i80];
    }

    if ((uint32_T)midPoint + 1U > (uint32_T)u0->size[1]) {
      i80 = 0;
      i81 = 0;
    } else {
      i80 = u0->size[1];
      i81 = (int32_T)((uint32_T)midPoint + 1U);
      i80 = emlrtDynamicBoundsCheckFastR2012b(i81, 1, i80, &af_emlrtBCI, sp) - 1;
      i81 = u0->size[1];
      i82 = u0->size[1];
      i81 = emlrtDynamicBoundsCheckFastR2012b(i82, 1, i81, &af_emlrtBCI, sp);
    }

    st.site = &qf_emlrtRSI;
    b_st.site = &ig_emlrtRSI;
    if (midPoint - 2.0 < 0.0) {
      ndbl = -1;
      anew = (int32_T)midPoint - 2;
      b_apnd = 0.0;
    } else {
      anew = (int32_T)midPoint - 2;
      ndbl = (int32_T)muDoubleScalarFloor(-(0.0 - (midPoint - 2.0)) + 0.5);
      apnd = ((int32_T)midPoint - ndbl) - 2;
      ixstart = (int32_T)muDoubleScalarAbs(midPoint - 2.0);
      if (muDoubleScalarAbs(0.0 - (real_T)apnd) < 4.4408920985006262E-16 *
          (real_T)muIntScalarMax_sint32(ixstart, 0)) {
        ndbl++;
        b_apnd = 0.0;
      } else if (-apnd > 0) {
        b_apnd = (midPoint - 2.0) + -((real_T)ndbl - 1.0);
      } else {
        ndbl++;
        b_apnd = apnd;
      }

      ndbl--;
    }

    c_st.site = &jg_emlrtRSI;
    i82 = gridX->size[0] * gridX->size[1];
    gridX->size[0] = 1;
    gridX->size[1] = ndbl + 1;
    emxEnsureCapacity(&b_st, (emxArray__common *)gridX, i82, (int32_T)sizeof
                      (real_T), &lb_emlrtRTEI);
    if (ndbl + 1 > 0) {
      gridX->data[0] = anew;
      if (ndbl + 1 > 1) {
        gridX->data[ndbl] = b_apnd;
        i82 = ndbl + (ndbl < 0);
        if (i82 >= 0) {
          ixstart = (int32_T)((uint32_T)i82 >> 1);
        } else {
          ixstart = ~(int32_T)((uint32_T)~i82 >> 1);
        }

        c_st.site = &kg_emlrtRSI;
        for (cdiff = 1; cdiff < ixstart; cdiff++) {
          gridX->data[cdiff] = anew - cdiff;
          gridX->data[ndbl - cdiff] = b_apnd - (-(real_T)cdiff);
        }

        if (ixstart << 1 == ndbl) {
          gridX->data[ixstart] = ((real_T)anew + b_apnd) / 2.0;
        } else {
          gridX->data[ixstart] = anew - ixstart;
          gridX->data[ixstart + 1] = b_apnd - (-(real_T)ixstart);
        }
      }
    }

    emxInit_real_T(&b_st, &c_gridX, 2, &kb_emlrtRTEI, true);
    i82 = c_gridX->size[0] * c_gridX->size[1];
    c_gridX->size[0] = 1;
    c_gridX->size[1] = gridX->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)c_gridX, i82, (int32_T)sizeof
                      (real_T), &kb_emlrtRTEI);
    ndbl = gridX->size[0] * gridX->size[1];
    for (i82 = 0; i82 < ndbl; i82++) {
      c_gridX->data[i82] = gridX->data[i82];
    }

    rdivide(sp, c_gridX, midPoint, gridX);
    i82 = gridX->size[0] * gridX->size[1];
    gridX->size[0] = 1;
    emxEnsureCapacity(sp, (emxArray__common *)gridX, i82, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    ixstart = gridX->size[0];
    cdiff = gridX->size[1];
    ndbl = ixstart * cdiff;
    emxFree_real_T(&c_gridX);
    for (i82 = 0; i82 < ndbl; i82++) {
      gridX->data[i82] *= sTime;
    }

    i81 -= i80;
    i82 = gridX->size[1];
    emlrtSizeEqCheck1DFastR2012b(i81, i82, &u_emlrtECI, sp);
    ndbl = gridX->size[1];
    for (i81 = 0; i81 < ndbl; i81++) {
      u0->data[i80 + i81] = gridX->data[gridX->size[0] * i81];
    }

    /*  Determine the boundary and initial functions */
    /*  du/dn(0,t) = q0j */
    i80 = q0j->size[0];
    q0j->size[0] = sigIn->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)q0j, i80, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    ndbl = sigIn->size[1];
    for (i80 = 0; i80 < ndbl; i80++) {
      q0j->data[i80] = 0.0;
    }

    /*  the flux  */
    /* du/dn(1,t) = q1j */
    i80 = q1j->size[0];
    q1j->size[0] = sigIn->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)q1j, i80, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    ndbl = sigIn->size[1];
    for (i80 = 0; i80 < ndbl; i80++) {
      q1j->data[i80] = 0.0;
    }

    /*  the flux  */
    /*  u(0,t) = h0j */
    cdiff = sigIn->size[1];
    i80 = h0j->size[0] * h0j->size[1];
    h0j->size[0] = cdiff;
    emxEnsureCapacity(sp, (emxArray__common *)h0j, i80, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    i80 = h0j->size[0] * h0j->size[1];
    h0j->size[1] = 1;
    emxEnsureCapacity(sp, (emxArray__common *)h0j, i80, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    cdiff = sigIn->size[1];
    for (i80 = 0; i80 < cdiff; i80++) {
      h0j->data[i80] = 0.0;
    }

    /*  u(1,t) = h1j */
    cdiff = sigIn->size[1];
    i80 = h1j->size[0] * h1j->size[1];
    h1j->size[0] = cdiff;
    emxEnsureCapacity(sp, (emxArray__common *)h1j, i80, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    i80 = h1j->size[0] * h1j->size[1];
    h1j->size[1] = 1;
    emxEnsureCapacity(sp, (emxArray__common *)h1j, i80, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    cdiff = sigIn->size[1];
    for (i80 = 0; i80 < cdiff; i80++) {
      h1j->data[i80] = 0.0;
    }
  } else if (initCond == 3.0) {
    rdivide(sp, sigIn, 2.0, E);

    /*  int(u(x,t)dx) is a time function of size 1xN % assuming the temp drops to 0 at the boundaries linearly */
    /*  set f to be active only in the initial point  */
    cdiff = sigIn->size[1];
    i80 = f->size[0] * f->size[1];
    f->size[0] = cdiff;
    emxEnsureCapacity(sp, (emxArray__common *)f, i80, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    i80 = f->size[0] * f->size[1];
    f->size[1] = (int32_T)numSpacePoints;
    emxEnsureCapacity(sp, (emxArray__common *)f, i80, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    ndbl = sigIn->size[1] * (int32_T)numSpacePoints;
    for (i80 = 0; i80 < ndbl; i80++) {
      f->data[i80] = 0.0;
    }

    /*  function of N time points over N0 space points */
    i80 = (int32_T)numSpacePoints;
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i80, &df_emlrtBCI, sp);
    cdiff = sigIn->size[1];
    for (i80 = 0; i80 < cdiff; i80++) {
      f->data[i80] = 1.0;
    }

    /*  the source is only active at the mid point x=0.5; */
    /*  determine initial wave u(x,0) is the Phi function */
    i80 = (int32_T)muDoubleScalarMin(10.0, sigIn->size[1]);
    if (1 > i80) {
      i80 = 0;
    } else {
      i81 = sigIn->size[1];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i81, &jf_emlrtBCI, sp);
      i81 = sigIn->size[1];
      i80 = emlrtDynamicBoundsCheckFastR2012b(i80, 1, i81, &jf_emlrtBCI, sp);
    }

    st.site = &rf_emlrtRSI;
    b_st.site = &dg_emlrtRSI;
    c_st.site = &eg_emlrtRSI;
    if ((i80 == 1) || (i80 != 1)) {
      n_too_large = true;
    } else {
      n_too_large = false;
    }

    if (n_too_large) {
    } else {
      e_y = NULL;
      m13 = emlrtCreateCharArray(2, iv53);
      for (i = 0; i < 36; i++) {
        cv56[i] = cv57[i];
      }

      emlrtInitCharArrayR2013a(&c_st, 36, m13, cv56);
      emlrtAssign(&e_y, m13);
      d_st.site = &jh_emlrtRSI;
      e_st.site = &ah_emlrtRSI;
      b_error(&d_st, message(&e_st, e_y, &bb_emlrtMCI), &cb_emlrtMCI);
    }

    if (i80 > 0) {
    } else {
      f_y = NULL;
      m13 = emlrtCreateCharArray(2, iv54);
      for (i = 0; i < 39; i++) {
        cv58[i] = cv59[i];
      }

      emlrtInitCharArrayR2013a(&c_st, 39, m13, cv58);
      emlrtAssign(&f_y, m13);
      d_st.site = &ih_emlrtRSI;
      e_st.site = &yg_emlrtRSI;
      b_error(&d_st, message(&e_st, f_y, &db_emlrtMCI), &eb_emlrtMCI);
    }

    d_st.site = &fg_emlrtRSI;
    ixstart = 1;
    sTime = sigIn->data[0];
    if (i80 > 1) {
      if (muDoubleScalarIsNaN(sTime)) {
        f_st.site = &hg_emlrtRSI;
        cdiff = 2;
        exitg1 = false;
        while ((!exitg1) && (cdiff <= i80)) {
          ixstart = cdiff;
          if (!muDoubleScalarIsNaN(sigIn->data[cdiff - 1])) {
            sTime = sigIn->data[cdiff - 1];
            exitg1 = true;
          } else {
            cdiff++;
          }
        }
      }

      if (ixstart < i80) {
        f_st.site = &gg_emlrtRSI;
        for (cdiff = ixstart + 1; cdiff <= i80; cdiff++) {
          if (sigIn->data[cdiff - 1] > sTime) {
            sTime = sigIn->data[cdiff - 1];
          }
        }
      }
    }

    /*  take the max value  */
    linspace(sp, numSpacePoints, u0);
    i80 = u0->size[0] * u0->size[1];
    u0->size[0] = 1;
    emxEnsureCapacity(sp, (emxArray__common *)u0, i80, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    cdiff = u0->size[0];
    ixstart = u0->size[1];
    ndbl = cdiff * ixstart;
    for (i80 = 0; i80 < ndbl; i80++) {
      u0->data[i80] = -u0->data[i80];
    }

    b_exp(u0);
    i80 = u0->size[0] * u0->size[1];
    u0->size[0] = 1;
    emxEnsureCapacity(sp, (emxArray__common *)u0, i80, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    cdiff = u0->size[0];
    ixstart = u0->size[1];
    ndbl = cdiff * ixstart;
    for (i80 = 0; i80 < ndbl; i80++) {
      u0->data[i80] *= sTime;
    }

    /* ones(1,N0); % u(x,0) */
    /*  Determine the boundary and initial functions */
    /*  du/dn(0,t) = q0j */
    i80 = q0j->size[0];
    q0j->size[0] = sigIn->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)q0j, i80, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    ndbl = sigIn->size[1];
    for (i80 = 0; i80 < ndbl; i80++) {
      q0j->data[i80] = 0.0;
    }

    /*  the flux in */
    /* du/dn(1,t) = q1j */
    i80 = q1j->size[0];
    q1j->size[0] = sigIn->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)q1j, i80, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    ndbl = sigIn->size[1];
    for (i80 = 0; i80 < ndbl; i80++) {
      q1j->data[i80] = 0.0;
    }

    /*  the flux out */
    /*  u(0,t) = h0j */
    i80 = h0j->size[0] * h0j->size[1];
    h0j->size[0] = 1;
    h0j->size[1] = sigIn->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)h0j, i80, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    ndbl = sigIn->size[0] * sigIn->size[1];
    for (i80 = 0; i80 < ndbl; i80++) {
      h0j->data[i80] = sigIn->data[i80];
    }

    /* zeros(N,1); */
    /*  u(1,t) = h1j */
    cdiff = sigIn->size[1];
    i80 = h1j->size[0] * h1j->size[1];
    h1j->size[0] = cdiff;
    emxEnsureCapacity(sp, (emxArray__common *)h1j, i80, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    i80 = h1j->size[0] * h1j->size[1];
    h1j->size[1] = 1;
    emxEnsureCapacity(sp, (emxArray__common *)h1j, i80, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    cdiff = sigIn->size[1];
    for (i80 = 0; i80 < cdiff; i80++) {
      h1j->data[i80] = 0.0;
    }
  } else {
    st.site = &sf_emlrtRSI;
    error(&st);
  }

  /*  Discretize the time domain */
  /*  max time; */
  st.site = &tf_emlrtRSI;
  b_st.site = &bc_emlrtRSI;
  c_st.site = &ig_emlrtRSI;
  b_ndbl = (uint32_T)muDoubleScalarFloor((real_T)sigIn->size[1] + 0.5);
  apnd = (int32_T)b_ndbl;
  cdiff = (int32_T)b_ndbl - sigIn->size[1];
  if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * (real_T)sigIn->size[1])
  {
    b_ndbl++;
    apnd = sigIn->size[1];
  } else if (cdiff > 0) {
    apnd = (int32_T)b_ndbl - 1;
  } else {
    b_ndbl++;
  }

  ndbl = (int32_T)b_ndbl - 1;
  d_st.site = &jg_emlrtRSI;
  if (!(2147483647U < b_ndbl)) {
  } else {
    g_y = NULL;
    m13 = emlrtCreateCharArray(2, iv55);
    for (i = 0; i < 21; i++) {
      cv60[i] = cv61[i];
    }

    emlrtInitCharArrayR2013a(&d_st, 21, m13, cv60);
    emlrtAssign(&g_y, m13);
    f_st.site = &hh_emlrtRSI;
    g_st.site = &xg_emlrtRSI;
    b_error(&f_st, message(&g_st, g_y, &b_emlrtMCI), &c_emlrtMCI);
  }

  emxInit_real_T(&d_st, &gridT, 2, &tb_emlrtRTEI, true);
  i80 = gridT->size[0] * gridT->size[1];
  gridT->size[0] = 1;
  gridT->size[1] = ndbl + 1;
  emxEnsureCapacity(&c_st, (emxArray__common *)gridT, i80, (int32_T)sizeof
                    (real_T), &lb_emlrtRTEI);
  if (ndbl + 1 > 0) {
    gridT->data[0] = 0.0;
    if (ndbl + 1 > 1) {
      gridT->data[ndbl] = apnd;
      i80 = ndbl + (ndbl < 0);
      if (i80 >= 0) {
        ixstart = (int32_T)((uint32_T)i80 >> 1);
      } else {
        ixstart = ~(int32_T)((uint32_T)~i80 >> 1);
      }

      d_st.site = &kg_emlrtRSI;
      for (cdiff = 1; cdiff < ixstart; cdiff++) {
        gridT->data[cdiff] = cdiff;
        gridT->data[ndbl - cdiff] = apnd - cdiff;
      }

      if (ixstart << 1 == ndbl) {
        gridT->data[ixstart] = (real_T)apnd / 2.0;
      } else {
        gridT->data[ixstart] = ixstart;
        gridT->data[ixstart + 1] = apnd - ixstart;
      }
    }
  }

  sTime = (real_T)sigIn->size[1] / (real_T)sigIn->size[1];
  i80 = gridT->size[0] * gridT->size[1];
  gridT->size[0] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)gridT, i80, (int32_T)sizeof(real_T),
                    &kb_emlrtRTEI);
  cdiff = gridT->size[0];
  ixstart = gridT->size[1];
  ndbl = cdiff * ixstart;
  for (i80 = 0; i80 < ndbl; i80++) {
    gridT->data[i80] *= sTime;
  }

  emxInit_real_T(sp, &t, 2, &ub_emlrtRTEI, true);

  /*  N+1 boundary time points  */
  i80 = t->size[0] * t->size[1];
  t->size[0] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)t, i80, (int32_T)sizeof(real_T),
                    &kb_emlrtRTEI);
  cdiff = sigIn->size[1];
  i80 = t->size[0] * t->size[1];
  t->size[1] = cdiff;
  emxEnsureCapacity(sp, (emxArray__common *)t, i80, (int32_T)sizeof(real_T),
                    &kb_emlrtRTEI);
  ndbl = sigIn->size[1];
  for (i80 = 0; i80 < ndbl; i80++) {
    t->data[i80] = 0.0;
  }

  /*  the points on which the solution will be calculated */
  tIdx = 0;
  while (tIdx <= sigIn->size[1] - 1) {
    i80 = gridT->size[1];
    i81 = tIdx + 1;
    emlrtDynamicBoundsCheckFastR2012b(i81, 1, i80, &if_emlrtBCI, sp);
    i80 = gridT->size[1];
    i81 = (int32_T)((1.0 + (real_T)tIdx) + 1.0);
    emlrtDynamicBoundsCheckFastR2012b(i81, 1, i80, &hf_emlrtBCI, sp);
    i80 = t->size[1];
    i81 = 1 + tIdx;
    t->data[emlrtDynamicBoundsCheckFastR2012b(i81, 1, i80, &nf_emlrtBCI, sp) - 1]
      = (gridT->data[tIdx] + gridT->data[(int32_T)((1.0 + (real_T)tIdx) + 1.0) -
         1]) / 2.0;
    tIdx++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  /*  Discretize the space domain */
  st.site = &uf_emlrtRSI;
  b_st.site = &bc_emlrtRSI;
  c_st.site = &ig_emlrtRSI;
  if (muDoubleScalarIsInf(numSpacePoints)) {
    ndbl = 0;
    sTime = rtNaN;
    b_apnd = numSpacePoints;
    n_too_large = !(0.0 == numSpacePoints);
  } else {
    sTime = 0.0;
    midPoint = muDoubleScalarFloor(numSpacePoints + 0.5);
    b_apnd = midPoint;
    b_cdiff = midPoint - numSpacePoints;
    if (muDoubleScalarAbs(b_cdiff) < 4.4408920985006262E-16 * numSpacePoints) {
      midPoint++;
      b_apnd = numSpacePoints;
    } else if (b_cdiff > 0.0) {
      b_apnd = midPoint - 1.0;
    } else {
      midPoint++;
    }

    n_too_large = (2.147483647E+9 < midPoint);
    ndbl = (int32_T)midPoint - 1;
  }

  d_st.site = &jg_emlrtRSI;
  if (!n_too_large) {
  } else {
    h_y = NULL;
    m13 = emlrtCreateCharArray(2, iv56);
    for (i = 0; i < 21; i++) {
      cv60[i] = cv61[i];
    }

    emlrtInitCharArrayR2013a(&d_st, 21, m13, cv60);
    emlrtAssign(&h_y, m13);
    f_st.site = &hh_emlrtRSI;
    g_st.site = &xg_emlrtRSI;
    b_error(&f_st, message(&g_st, h_y, &b_emlrtMCI), &c_emlrtMCI);
  }

  i80 = gridX->size[0] * gridX->size[1];
  gridX->size[0] = 1;
  gridX->size[1] = ndbl + 1;
  emxEnsureCapacity(&c_st, (emxArray__common *)gridX, i80, (int32_T)sizeof
                    (real_T), &lb_emlrtRTEI);
  if (ndbl + 1 > 0) {
    gridX->data[0] = sTime;
    if (ndbl + 1 > 1) {
      gridX->data[ndbl] = b_apnd;
      i80 = ndbl + (ndbl < 0);
      if (i80 >= 0) {
        ixstart = (int32_T)((uint32_T)i80 >> 1);
      } else {
        ixstart = ~(int32_T)((uint32_T)~i80 >> 1);
      }

      d_st.site = &kg_emlrtRSI;
      for (cdiff = 1; cdiff < ixstart; cdiff++) {
        gridX->data[cdiff] = sTime + (real_T)cdiff;
        gridX->data[ndbl - cdiff] = b_apnd - (real_T)cdiff;
      }

      if (ixstart << 1 == ndbl) {
        gridX->data[ixstart] = (sTime + b_apnd) / 2.0;
      } else {
        gridX->data[ixstart] = sTime + (real_T)ixstart;
        gridX->data[ixstart + 1] = b_apnd - (real_T)ixstart;
      }
    }
  }

  emxInit_real_T(&c_st, &d_gridX, 2, &kb_emlrtRTEI, true);
  i80 = d_gridX->size[0] * d_gridX->size[1];
  d_gridX->size[0] = 1;
  d_gridX->size[1] = gridX->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)d_gridX, i80, (int32_T)sizeof(real_T),
                    &kb_emlrtRTEI);
  ndbl = gridX->size[0] * gridX->size[1];
  for (i80 = 0; i80 < ndbl; i80++) {
    d_gridX->data[i80] = gridX->data[i80];
  }

  emxInit_real_T(sp, &x, 2, &wb_emlrtRTEI, true);
  rdivide(sp, d_gridX, numSpacePoints, gridX);

  /*  N0+1 space points */
  i80 = x->size[0] * x->size[1];
  x->size[0] = 1;
  x->size[1] = (int32_T)numSpacePoints;
  emxEnsureCapacity(sp, (emxArray__common *)x, i80, (int32_T)sizeof(real_T),
                    &kb_emlrtRTEI);
  ndbl = (int32_T)numSpacePoints;
  emxFree_real_T(&d_gridX);
  for (i80 = 0; i80 < ndbl; i80++) {
    x->data[i80] = 0.0;
  }

  /*  the points on which the solution will be calculated */
  cdiff = 0;
  while (cdiff <= (int32_T)numSpacePoints - 1) {
    i80 = gridX->size[1];
    i81 = (int32_T)((1.0 + (real_T)cdiff) + 1.0);
    emlrtDynamicBoundsCheckFastR2012b(i81, 1, i80, &gf_emlrtBCI, sp);
    i80 = gridX->size[1];
    i81 = cdiff + 1;
    emlrtDynamicBoundsCheckFastR2012b(i81, 1, i80, &ff_emlrtBCI, sp);
    i80 = x->size[1];
    i81 = 1 + cdiff;
    x->data[emlrtDynamicBoundsCheckFastR2012b(i81, 1, i80, &mf_emlrtBCI, sp) - 1]
      = (gridX->data[(int32_T)((1.0 + (real_T)cdiff) + 1.0) - 1] + gridX->
         data[cdiff]) / 2.0;
    cdiff++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxInit_real_T(sp, &C, 2, &xb_emlrtRTEI, true);
  emxInit_real_T(sp, &regTerm, 2, &yb_emlrtRTEI, true);
  emxInit_real_T(sp, &A, 2, &kb_emlrtRTEI, true);
  emxInit_real_T(sp, &Bstar, 2, &kb_emlrtRTEI, true);
  emxInit_real_T(sp, &D, 2, &kb_emlrtRTEI, true);
  emxInit_real_T(sp, &b_A, 2, &kb_emlrtRTEI, true);

  /* =========================== */
  /*  Calculate the Boundary Elements */
  /*  Calculate A and B, B*, and D */
  st.site = &vf_emlrtRSI;
  CalculateABBStarD(&st, sigIn->size[1], t, gridT, x, f, A, regTerm, Bstar, D);

  /*  call the mex */
  /*  Calculate C */
  st.site = &wf_emlrtRSI;
  CalculateC(&st, sigIn->size[1], numSpacePoints, t, gridX, C);

  /*  Solve the equation */
  /*  r =((X'*X+lambda*regTerm)^-1)*X'Y, with r the source and X and Y are to be */
  /*  calculated */
  /*  Calculate the components of X and Y */
  i80 = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_A, i80, (int32_T)sizeof(real_T),
                    &kb_emlrtRTEI);
  ndbl = A->size[0] * A->size[1];
  for (i80 = 0; i80 < ndbl; i80++) {
    b_A->data[i80] = A->data[i80];
  }

  c_emxInit_real_T(sp, &Y, 1, &kb_emlrtRTEI, true);
  st.site = &xf_emlrtRSI;
  CalculateXY(&st, sigIn->size[1], numSpacePoints, t, gridT, x, gridX, E, b_A,
              regTerm, Bstar, C, D, u0, f, alpha, A, Y);

  /*  get the regularization term  */
  st.site = &yf_emlrtRSI;
  GetRegularizationTerm(&st, sigIn->size[1], regOrder, regTerm);

  /*  get RregTerm= 'R term */
  /*  The source solution with regularization coefficient lambda */
  st.site = &ag_emlrtRSI;
  i80 = Bstar->size[0] * Bstar->size[1];
  Bstar->size[0] = A->size[1];
  Bstar->size[1] = A->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)Bstar, i80, (int32_T)sizeof(real_T),
                    &kb_emlrtRTEI);
  ndbl = A->size[0];
  emxFree_real_T(&b_A);
  emxFree_real_T(&E);
  for (i80 = 0; i80 < ndbl; i80++) {
    ixstart = A->size[1];
    for (i81 = 0; i81 < ixstart; i81++) {
      Bstar->data[i81 + Bstar->size[0] * i80] = A->data[i80 + A->size[0] * i81];
    }
  }

  b_st.site = &he_emlrtRSI;
  if (!(Bstar->size[1] == A->size[0])) {
    if (((Bstar->size[0] == 1) && (Bstar->size[1] == 1)) || ((A->size[0] == 1) &&
         (A->size[1] == 1))) {
      i_y = NULL;
      m13 = emlrtCreateCharArray(2, iv57);
      for (i = 0; i < 45; i++) {
        cv62[i] = cv63[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m13, cv62);
      emlrtAssign(&i_y, m13);
      c_st.site = &fh_emlrtRSI;
      h_st.site = &vg_emlrtRSI;
      b_error(&c_st, message(&h_st, i_y, &j_emlrtMCI), &k_emlrtMCI);
    } else {
      j_y = NULL;
      m13 = emlrtCreateCharArray(2, iv58);
      for (i = 0; i < 21; i++) {
        cv60[i] = cv64[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m13, cv60);
      emlrtAssign(&j_y, m13);
      c_st.site = &gh_emlrtRSI;
      h_st.site = &wg_emlrtRSI;
      b_error(&c_st, message(&h_st, j_y, &l_emlrtMCI), &m_emlrtMCI);
    }
  }

  if ((Bstar->size[1] == 1) || (A->size[0] == 1)) {
    i80 = C->size[0] * C->size[1];
    C->size[0] = Bstar->size[0];
    C->size[1] = A->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)C, i80, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    ndbl = Bstar->size[0];
    for (i80 = 0; i80 < ndbl; i80++) {
      ixstart = A->size[1];
      for (i81 = 0; i81 < ixstart; i81++) {
        C->data[i80 + C->size[0] * i81] = 0.0;
        cdiff = Bstar->size[1];
        for (i82 = 0; i82 < cdiff; i82++) {
          C->data[i80 + C->size[0] * i81] += Bstar->data[i80 + Bstar->size[0] *
            i82] * A->data[i82 + A->size[0] * i81];
        }
      }
    }
  } else {
    b_ndbl = (uint32_T)Bstar->size[0];
    unnamed_idx_1 = (uint32_T)A->size[1];
    i80 = D->size[0] * D->size[1];
    D->size[0] = (int32_T)b_ndbl;
    emxEnsureCapacity(&st, (emxArray__common *)D, i80, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    i80 = D->size[0] * D->size[1];
    D->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)D, i80, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    ndbl = (int32_T)b_ndbl * (int32_T)unnamed_idx_1;
    for (i80 = 0; i80 < ndbl; i80++) {
      D->data[i80] = 0.0;
    }

    b_st.site = &ge_emlrtRSI;
    c_st.site = &ie_emlrtRSI;
    i80 = C->size[0] * C->size[1];
    C->size[0] = (int32_T)b_ndbl;
    emxEnsureCapacity(&c_st, (emxArray__common *)C, i80, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    i80 = C->size[0] * C->size[1];
    C->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&c_st, (emxArray__common *)C, i80, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    ndbl = (int32_T)b_ndbl * (int32_T)unnamed_idx_1;
    for (i80 = 0; i80 < ndbl; i80++) {
      C->data[i80] = 0.0;
    }

    if ((Bstar->size[0] < 1) || (A->size[1] < 1) || (Bstar->size[1] < 1)) {
    } else {
      d_st.site = &je_emlrtRSI;
      sTime = 1.0;
      midPoint = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      f_st.site = &je_emlrtRSI;
      m_t = (ptrdiff_t)(Bstar->size[0]);
      f_st.site = &je_emlrtRSI;
      n_t = (ptrdiff_t)(A->size[1]);
      f_st.site = &je_emlrtRSI;
      k_t = (ptrdiff_t)(Bstar->size[1]);
      f_st.site = &je_emlrtRSI;
      lda_t = (ptrdiff_t)(Bstar->size[0]);
      f_st.site = &je_emlrtRSI;
      ldb_t = (ptrdiff_t)(Bstar->size[1]);
      f_st.site = &je_emlrtRSI;
      ldc_t = (ptrdiff_t)(Bstar->size[0]);
      alpha1_t = (double *)(&sTime);
      i80 = Bstar->size[0] * Bstar->size[1];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i80, &td_emlrtBCI, &d_st);
      Aia0_t = (double *)(&Bstar->data[0]);
      i80 = A->size[0] * A->size[1];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i80, &td_emlrtBCI, &d_st);
      Bib0_t = (double *)(&A->data[0]);
      beta1_t = (double *)(&midPoint);
      i80 = D->size[0] * D->size[1];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i80, &td_emlrtBCI, &d_st);
      Cic0_t = (double *)(&C->data[0]);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t, Bib0_t,
            &ldb_t, beta1_t, Cic0_t, &ldc_t);
    }
  }

  emxFree_real_T(&D);
  i80 = regTerm->size[0] * regTerm->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)regTerm, i80, (int32_T)sizeof(real_T),
                    &kb_emlrtRTEI);
  cdiff = regTerm->size[0];
  ixstart = regTerm->size[1];
  ndbl = cdiff * ixstart;
  for (i80 = 0; i80 < ndbl; i80++) {
    regTerm->data[i80] *= lambda;
  }

  for (i80 = 0; i80 < 2; i80++) {
    b_C[i80] = C->size[i80];
  }

  for (i80 = 0; i80 < 2; i80++) {
    b_regTerm[i80] = regTerm->size[i80];
  }

  emlrtSizeEqCheck2DFastR2012b(b_C, b_regTerm, &t_emlrtECI, sp);
  st.site = &ag_emlrtRSI;
  i80 = Bstar->size[0] * Bstar->size[1];
  Bstar->size[0] = A->size[1];
  Bstar->size[1] = A->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)Bstar, i80, (int32_T)sizeof(real_T),
                    &kb_emlrtRTEI);
  ndbl = A->size[0];
  for (i80 = 0; i80 < ndbl; i80++) {
    ixstart = A->size[1];
    for (i81 = 0; i81 < ixstart; i81++) {
      Bstar->data[i81 + Bstar->size[0] * i80] = A->data[i80 + A->size[0] * i81];
    }
  }

  emxFree_real_T(&A);
  b_st.site = &he_emlrtRSI;
  if (!(Bstar->size[1] == Y->size[0])) {
    if (((Bstar->size[0] == 1) && (Bstar->size[1] == 1)) || (Y->size[0] == 1)) {
      k_y = NULL;
      m13 = emlrtCreateCharArray(2, iv59);
      for (i = 0; i < 45; i++) {
        cv62[i] = cv63[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m13, cv62);
      emlrtAssign(&k_y, m13);
      c_st.site = &fh_emlrtRSI;
      h_st.site = &vg_emlrtRSI;
      b_error(&c_st, message(&h_st, k_y, &j_emlrtMCI), &k_emlrtMCI);
    } else {
      l_y = NULL;
      m13 = emlrtCreateCharArray(2, iv60);
      for (i = 0; i < 21; i++) {
        cv60[i] = cv64[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m13, cv60);
      emlrtAssign(&l_y, m13);
      c_st.site = &gh_emlrtRSI;
      h_st.site = &wg_emlrtRSI;
      b_error(&c_st, message(&h_st, l_y, &l_emlrtMCI), &m_emlrtMCI);
    }
  }

  c_emxInit_real_T(&st, &r18, 1, &kb_emlrtRTEI, true);
  if ((Bstar->size[1] == 1) || (Y->size[0] == 1)) {
    i80 = r->size[0];
    r->size[0] = Bstar->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)r, i80, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    ndbl = Bstar->size[0];
    for (i80 = 0; i80 < ndbl; i80++) {
      r->data[i80] = 0.0;
      ixstart = Bstar->size[1];
      for (i81 = 0; i81 < ixstart; i81++) {
        r->data[i80] += Bstar->data[i80 + Bstar->size[0] * i81] * Y->data[i81];
      }
    }
  } else {
    b_ndbl = (uint32_T)Bstar->size[0];
    i80 = r18->size[0];
    r18->size[0] = (int32_T)b_ndbl;
    emxEnsureCapacity(&st, (emxArray__common *)r18, i80, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    ndbl = (int32_T)b_ndbl;
    for (i80 = 0; i80 < ndbl; i80++) {
      r18->data[i80] = 0.0;
    }

    b_st.site = &ge_emlrtRSI;
    c_st.site = &ie_emlrtRSI;
    i80 = r->size[0];
    r->size[0] = (int32_T)b_ndbl;
    emxEnsureCapacity(&c_st, (emxArray__common *)r, i80, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    ndbl = (int32_T)b_ndbl;
    for (i80 = 0; i80 < ndbl; i80++) {
      r->data[i80] = 0.0;
    }

    if ((Bstar->size[0] < 1) || (Bstar->size[1] < 1)) {
    } else {
      d_st.site = &je_emlrtRSI;
      sTime = 1.0;
      midPoint = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      f_st.site = &je_emlrtRSI;
      m_t = (ptrdiff_t)(Bstar->size[0]);
      f_st.site = &je_emlrtRSI;
      n_t = (ptrdiff_t)(1);
      f_st.site = &je_emlrtRSI;
      k_t = (ptrdiff_t)(Bstar->size[1]);
      f_st.site = &je_emlrtRSI;
      lda_t = (ptrdiff_t)(Bstar->size[0]);
      f_st.site = &je_emlrtRSI;
      ldb_t = (ptrdiff_t)(Bstar->size[1]);
      f_st.site = &je_emlrtRSI;
      ldc_t = (ptrdiff_t)(Bstar->size[0]);
      alpha1_t = (double *)(&sTime);
      i80 = Bstar->size[0] * Bstar->size[1];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i80, &td_emlrtBCI, &d_st);
      Aia0_t = (double *)(&Bstar->data[0]);
      i80 = Y->size[0];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i80, &td_emlrtBCI, &d_st);
      Bib0_t = (double *)(&Y->data[0]);
      beta1_t = (double *)(&midPoint);
      i80 = r18->size[0];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i80, &td_emlrtBCI, &d_st);
      Cic0_t = (double *)(&r->data[0]);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t, Bib0_t,
            &ldb_t, beta1_t, Cic0_t, &ldc_t);
    }
  }

  emxFree_real_T(&r18);
  emxFree_real_T(&Y);
  emxFree_real_T(&Bstar);
  st.site = &ag_emlrtRSI;
  i80 = C->size[0] * C->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)C, i80, (int32_T)sizeof(real_T),
                    &kb_emlrtRTEI);
  cdiff = C->size[0];
  ixstart = C->size[1];
  ndbl = cdiff * ixstart;
  for (i80 = 0; i80 < ndbl; i80++) {
    C->data[i80] += regTerm->data[i80];
  }

  emxFree_real_T(&regTerm);
  if (r->size[0] == C->size[0]) {
  } else {
    m_y = NULL;
    m13 = emlrtCreateCharArray(2, iv61);
    for (i = 0; i < 21; i++) {
      cv60[i] = cv65[i];
    }

    emlrtInitCharArrayR2013a(&st, 21, m13, cv60);
    emlrtAssign(&m_y, m13);
    b_st.site = &lg_emlrtRSI;
    b_error(&b_st, message(&b_st, m_y, &fb_emlrtMCI), &fb_emlrtMCI);
  }

  c_emxInit_real_T(&st, &b_r, 1, &kb_emlrtRTEI, true);
  c_emxInit_real_T(&st, &r19, 1, &kb_emlrtRTEI, true);
  if ((C->size[0] == 0) || (C->size[1] == 0) || (r->size[0] == 0)) {
    b_ndbl = (uint32_T)C->size[1];
    i80 = r->size[0];
    r->size[0] = (int32_T)b_ndbl;
    emxEnsureCapacity(&st, (emxArray__common *)r, i80, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    ndbl = (int32_T)b_ndbl;
    for (i80 = 0; i80 < ndbl; i80++) {
      r->data[i80] = 0.0;
    }
  } else if (C->size[0] == C->size[1]) {
    b_st.site = &lg_emlrtRSI;
    b_eml_lusolve(&b_st, C, r);
  } else {
    i80 = b_r->size[0];
    b_r->size[0] = r->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)b_r, i80, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    ndbl = r->size[0];
    for (i80 = 0; i80 < ndbl; i80++) {
      b_r->data[i80] = r->data[i80];
    }

    b_st.site = &lg_emlrtRSI;
    c_eml_qrsolve(&b_st, C, b_r, r19);
    i80 = r->size[0];
    r->size[0] = r19->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)r, i80, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    ndbl = r19->size[0];
    for (i80 = 0; i80 < ndbl; i80++) {
      r->data[i80] = r19->data[i80];
    }
  }

  emxFree_real_T(&r19);
  emxFree_real_T(&b_r);
  emxFree_real_T(&C);

  /*  Calculate the solution u(x,t) */
  st.site = &bg_emlrtRSI;

  /*  get the solution for the inverse heat source, u(x,t),  */
  /*  N0 - number of space points */
  /*  N  - number of time points */
  /*  t  - time points */
  /*  gridT - time points grid */
  /*  x space points */
  /*  q0j flux at x=0 du/dn */
  /*  q1j flux at x=1 du/dn */
  /*  h0j boundary condition u(0,t) */
  /*  u1j boundary condition u(1,t) */
  /*  f multiplier of the source f(x,t)r(t) size[N N0] */
  /*  r calculated source term size [N,1] */
  i80 = gridX->size[0] * gridX->size[1];
  gridX->size[0] = 1;
  gridX->size[1] = (int32_T)numSpacePoints;
  emxEnsureCapacity(&st, (emxArray__common *)gridX, i80, (int32_T)sizeof(real_T),
                    &kb_emlrtRTEI);
  ndbl = (int32_T)numSpacePoints;
  for (i80 = 0; i80 < ndbl; i80++) {
    gridX->data[i80] = 1.0;
  }

  i80 = (int32_T)numSpacePoints;
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i80, &tc_emlrtBCI, &st);
  gridX->data[0] = 0.5;
  i80 = (int32_T)numSpacePoints;
  i81 = (int32_T)numSpacePoints;
  gridX->data[emlrtDynamicBoundsCheckFastR2012b(i81, 1, i80, &uc_emlrtBCI, &st)
    - 1] = 0.5;
  cdiff = sigIn->size[1];
  i80 = u->size[0] * u->size[1];
  u->size[0] = cdiff;
  emxEnsureCapacity(&st, (emxArray__common *)u, i80, (int32_T)sizeof(real_T),
                    &kb_emlrtRTEI);
  i80 = u->size[0] * u->size[1];
  u->size[1] = (int32_T)numSpacePoints;
  emxEnsureCapacity(&st, (emxArray__common *)u, i80, (int32_T)sizeof(real_T),
                    &kb_emlrtRTEI);
  ndbl = sigIn->size[1] * (int32_T)numSpacePoints;
  for (i80 = 0; i80 < ndbl; i80++) {
    u->data[i80] = 0.0;
  }

  j = 1;
  emxInit_real_T(&st, &b_f, 2, &kb_emlrtRTEI, true);
  while (j - 1 <= (int32_T)numSpacePoints - 1) {
    /*  space index */
    i = 1;
    while (i - 1 <= sigIn->size[1] - 1) {
      /*  time index */
      sTime = 0.0;

      /*  cumulative sums */
      midPoint = 0.0;
      tIdx = 0;
      while (tIdx <= sigIn->size[1] - 1) {
        /*  time index */
        i80 = q0j->size[0];
        i81 = tIdx + 1;
        emlrtDynamicBoundsCheckFastR2012b(i81, 1, i80, &ed_emlrtBCI, &st);
        i80 = q1j->size[0];
        i81 = tIdx + 1;
        emlrtDynamicBoundsCheckFastR2012b(i81, 1, i80, &hd_emlrtBCI, &st);
        ndbl = f->size[1];
        i80 = f->size[0];
        ixstart = emlrtDynamicBoundsCheckFastR2012b(i, 1, i80, &sc_emlrtBCI, &st);
        i80 = b_f->size[0] * b_f->size[1];
        b_f->size[0] = 1;
        b_f->size[1] = ndbl;
        emxEnsureCapacity(&st, (emxArray__common *)b_f, i80, (int32_T)sizeof
                          (real_T), &kb_emlrtRTEI);
        for (i80 = 0; i80 < ndbl; i80++) {
          b_f->data[b_f->size[0] * i80] = f->data[(ixstart + f->size[0] * i80) -
            1];
        }

        i80 = x->size[1];
        i81 = t->size[1];
        i82 = x->size[1];
        i83 = t->size[1];
        ixstart = x->size[1];
        cdiff = t->size[1];
        ndbl = h0j->size[0] * h0j->size[1];
        anew = 1 + tIdx;
        apnd = x->size[1];
        i84 = t->size[1];
        i85 = h1j->size[0] * h1j->size[1];
        i86 = 1 + tIdx;
        i87 = x->size[1];
        i88 = t->size[1];
        i89 = r->size[0];
        i90 = 1 + tIdx;
        b_st.site = &bb_emlrtRSI;
        i_st.site = &cb_emlrtRSI;
        j_st.site = &db_emlrtRSI;
        sTime = ((((sTime + Acoeff(&b_st, 0.0, 1.0 + (real_T)tIdx, x->
          data[emlrtDynamicBoundsCheckFastR2012b(j, 1, i80, &cd_emlrtBCI, &st) -
          1], t->data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i81, &dd_emlrtBCI,
          &st) - 1], gridT) * 0.0) + Acoeff(&b_st, 1.0, 1.0 + (real_T)tIdx,
                    x->data[emlrtDynamicBoundsCheckFastR2012b(j, 1, i82,
          &fd_emlrtBCI, &st) - 1], t->data[emlrtDynamicBoundsCheckFastR2012b(i,
          1, i83, &gd_emlrtBCI, &st) - 1], gridT) * 0.0) - Bcoeff(&i_st, 0.0,
                   1.0 + (real_T)tIdx, x->data[emlrtDynamicBoundsCheckFastR2012b
                   (j, 1, ixstart, &id_emlrtBCI, &st) - 1], t->
                   data[emlrtDynamicBoundsCheckFastR2012b(i, 1, cdiff,
                    &jd_emlrtBCI, &st) - 1], gridT) * h0j->
                  data[emlrtDynamicBoundsCheckFastR2012b(anew, 1, ndbl,
                   &kd_emlrtBCI, &st) - 1]) - Bcoeff(&i_st, 1.0, 1.0 + (real_T)
                  tIdx, x->data[emlrtDynamicBoundsCheckFastR2012b(j, 1, apnd,
                   &ld_emlrtBCI, &st) - 1], t->
                  data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i84, &md_emlrtBCI,
                   &st) - 1], gridT) * h1j->
                 data[emlrtDynamicBoundsCheckFastR2012b(i86, 1, i85,
                  &nd_emlrtBCI, &st) - 1]) + b_Dcoeff(&j_st, x, 1.0 + (real_T)
          tIdx, x->data[emlrtDynamicBoundsCheckFastR2012b(j, 1, i87,
          &od_emlrtBCI, &st) - 1], t->data[emlrtDynamicBoundsCheckFastR2012b(i,
          1, i88, &pd_emlrtBCI, &st) - 1], gridT, b_f) * r->
          data[emlrtDynamicBoundsCheckFastR2012b(i90, 1, i89, &qd_emlrtBCI, &st)
          - 1];
        tIdx++;
        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &st);
      }

      ixstart = 0;
      while (ixstart <= (int32_T)numSpacePoints - 1) {
        /*  space index */
        i80 = x->size[1];
        i81 = t->size[1];
        i82 = u0->size[1];
        i83 = 1 + ixstart;
        b_st.site = &eb_emlrtRSI;
        midPoint += b_Ccoeff(&b_st, 1.0 + (real_T)ixstart, x->
                             data[emlrtDynamicBoundsCheckFastR2012b(j, 1, i80,
          &yc_emlrtBCI, &st) - 1], t->data[emlrtDynamicBoundsCheckFastR2012b(i,
          1, i81, &ad_emlrtBCI, &st) - 1], gridT) * u0->
          data[emlrtDynamicBoundsCheckFastR2012b(i83, 1, i82, &bd_emlrtBCI, &st)
          - 1];
        ixstart++;
        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &st);
      }

      i80 = u->size[0];
      i81 = u->size[1];
      i82 = gridX->size[1];
      u->data[(emlrtDynamicBoundsCheckFastR2012b(i, 1, i80, &vc_emlrtBCI, &st) +
               u->size[0] * (emlrtDynamicBoundsCheckFastR2012b(j, 1, i81,
                 &wc_emlrtBCI, &st) - 1)) - 1] = (sTime + midPoint) *
        gridX->data[emlrtDynamicBoundsCheckFastR2012b(j, 1, i82, &xc_emlrtBCI,
        &st) - 1];
      i++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &st);
    }

    j++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &st);
  }

  emxFree_real_T(&b_f);
  emxFree_real_T(&x);
  emxFree_real_T(&gridX);
  emxFree_real_T(&gridT);
  emxFree_real_T(&h1j);
  emxFree_real_T(&h0j);
  emxFree_real_T(&q1j);
  emxFree_real_T(&q0j);
  emxFree_real_T(&u0);
  emxFree_real_T(&f);

  /*  plot source, signal and solution */
  if (plotFlag) {
    st.site = &cg_emlrtRSI;
    PlotResults(&st, t, sigIn, u, r);
  }

  emxFree_real_T(&t);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (TestBemHeatEq_optimized.c) */

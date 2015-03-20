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
#include "Ccoeff.h"
#include "Cone.h"
#include "Dcoeff.h"
#include "Done.h"
#include "GetRegularizationTerm.h"
#include "PlotResults.h"
#include "TestBemHeatEq_optimized.h"
#include "BoundaryElementHeatEquation_emxutil.h"
#include "rdivide.h"
#include "mrdivide.h"
#include "eml_int_forloop_overflow_check.h"
#include "colon.h"
#include "eml_warning.h"
#include "sum.h"
#include "mod.h"
#include "BoundaryElementHeatEquation_mexutil.h"
#include "BoundaryElementHeatEquation_data.h"

/* Variable Definitions */
static emlrtRSInfo be_emlrtRSI = { 29, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRSInfo ce_emlrtRSI = { 33, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRSInfo de_emlrtRSI = { 34, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRSInfo ee_emlrtRSI = { 50, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRSInfo fe_emlrtRSI = { 55, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRSInfo ge_emlrtRSI = { 74, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRSInfo he_emlrtRSI = { 75, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRSInfo ie_emlrtRSI = { 77, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRSInfo je_emlrtRSI = { 78, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRSInfo ke_emlrtRSI = { 80, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRSInfo le_emlrtRSI = { 81, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRSInfo me_emlrtRSI = { 86, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRSInfo ne_emlrtRSI = { 87, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRSInfo oe_emlrtRSI = { 95, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRSInfo pe_emlrtRSI = { 96, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRSInfo qe_emlrtRSI = { 112, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRSInfo re_emlrtRSI = { 113, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRSInfo se_emlrtRSI = { 115, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRSInfo te_emlrtRSI = { 118, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRSInfo ue_emlrtRSI = { 120, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRSInfo ve_emlrtRSI = { 123, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRSInfo we_emlrtRSI = { 125, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRSInfo xe_emlrtRSI = { 127, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRSInfo ye_emlrtRSI = { 129, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRSInfo af_emlrtRSI = { 142, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRSInfo bf_emlrtRSI = { 143, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRSInfo cf_emlrtRSI = { 144, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRSInfo df_emlrtRSI = { 148, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRSInfo ef_emlrtRSI = { 156, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRSInfo ff_emlrtRSI = { 16, "max",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\max.m"
};

static emlrtRSInfo gf_emlrtRSI = { 18, "eml_min_or_max",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRSInfo hf_emlrtRSI = { 96, "eml_min_or_max",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRSInfo if_emlrtRSI = { 229, "eml_min_or_max",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRSInfo jf_emlrtRSI = { 202, "eml_min_or_max",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRSInfo kf_emlrtRSI = { 79, "colon",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo lf_emlrtRSI = { 283, "colon",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo mf_emlrtRSI = { 291, "colon",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo bg_emlrtRSI = { 68, "eml_mtimes_helper",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

static emlrtRSInfo cg_emlrtRSI = { 54, "eml_xgemm",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\blas\\eml_xgemm.m"
};

static emlrtRSInfo dg_emlrtRSI = { 1, "xgemm",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xgemm.p"
};

static emlrtRSInfo fg_emlrtRSI = { 1, "mldivide",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.p"
};

static emlrtRSInfo gg_emlrtRSI = { 117, "eml_lusolve",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

static emlrtRSInfo hg_emlrtRSI = { 128, "eml_lusolve",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

static emlrtRSInfo ig_emlrtRSI = { 130, "eml_lusolve",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

static emlrtMCInfo k_emlrtMCI = { 405, 5, "colon",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtMCInfo l_emlrtMCI = { 404, 15, "colon",
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

static emlrtRTEInfo w_emlrtRTEI = { 1, 17, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRTEInfo x_emlrtRTEI = { 284, 1, "colon",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRTEInfo y_emlrtRTEI = { 23, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRTEInfo ab_emlrtRTEI = { 27, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRTEInfo bb_emlrtRTEI = { 50, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRTEInfo cb_emlrtRTEI = { 51, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRTEInfo db_emlrtRTEI = { 55, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRTEInfo eb_emlrtRTEI = { 56, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRTEInfo fb_emlrtRTEI = { 66, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRTEInfo gb_emlrtRTEI = { 67, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRTEInfo hb_emlrtRTEI = { 68, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRTEInfo ib_emlrtRTEI = { 69, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRTEInfo jb_emlrtRTEI = { 92, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRTEInfo kb_emlrtRTEI = { 105, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRTEInfo lb_emlrtRTEI = { 106, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRTEInfo mb_emlrtRTEI = { 123, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRTEInfo nb_emlrtRTEI = { 125, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRTEInfo ob_emlrtRTEI = { 127, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtBCInfo fc_emlrtBCI = { -1, -1, 1, 1, "", "xgemm",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xgemm.p",
  0 };

static emlrtBCInfo gc_emlrtBCI = { -1, -1, 134, 1, "eta",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo hc_emlrtBCI = { -1, -1, 133, 1, "eta",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo ic_emlrtBCI = { -1, -1, 144, 49, "f",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo jc_emlrtBCI = { -1, -1, 143, 92, "h1j",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo kc_emlrtBCI = { -1, -1, 143, 48, "h0j",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo lc_emlrtBCI = { -1, -1, 142, 102, "q1j",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo mc_emlrtBCI = { -1, -1, 142, 59, "q0j",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtECInfo l_emlrtECI = { 2, 129, 8, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtECInfo m_emlrtECI = { -1, 125, 5, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtECInfo n_emlrtECI = { -1, 120, 5, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtBCInfo nc_emlrtBCI = { -1, -1, 120, 10, "s2",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtECInfo o_emlrtECI = { -1, 115, 5, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtBCInfo oc_emlrtBCI = { -1, -1, 115, 12, "s1",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtECInfo p_emlrtECI = { -1, 34, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtBCInfo pc_emlrtBCI = { -1, -1, 34, 1, "u0",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtECInfo q_emlrtECI = { -1, 33, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtBCInfo qc_emlrtBCI = { -1, -1, 33, 1, "u0",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo rc_emlrtBCI = { -1, -1, 32, 1, "u0",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtECInfo r_emlrtECI = { 2, 120, 16, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtBCInfo sc_emlrtBCI = { -1, -1, 95, 23, "C",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtECInfo s_emlrtECI = { 2, 119, 11, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtECInfo t_emlrtECI = { 2, 119, 24, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtECInfo u_emlrtECI = { 2, 118, 11, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtECInfo v_emlrtECI = { 2, 118, 26, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtECInfo w_emlrtECI = { 2, 115, 18, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtBCInfo tc_emlrtBCI = { -1, -1, 86, 23, "D",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtECInfo x_emlrtECI = { 2, 114, 12, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtECInfo y_emlrtECI = { 2, 114, 25, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtECInfo ab_emlrtECI = { 2, 113, 12, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtECInfo bb_emlrtECI = { 2, 113, 27, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRTEInfo yb_emlrtRTEI = { 107, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtRTEInfo ac_emlrtRTEI = { 93, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m"
};

static emlrtBCInfo uc_emlrtBCI = { -1, -1, 87, 51, "f",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo vc_emlrtBCI = { -1, -1, 86, 53, "f",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo wc_emlrtBCI = { -1, -1, 24, 5, "f", "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo xc_emlrtBCI = { -1, -1, 58, 30, "gridX",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo yc_emlrtBCI = { -1, -1, 58, 16, "gridX",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo ad_emlrtBCI = { -1, -1, 53, 28, "gridT",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo bd_emlrtBCI = { -1, -1, 53, 16, "gridT",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo cd_emlrtBCI = { -1, -1, 29, 16, "sigIn",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtDCInfo u_emlrtDCI = { 23, 14, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  1 };

static emlrtDCInfo v_emlrtDCI = { 23, 14, "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  4 };

static emlrtBCInfo dd_emlrtBCI = { -1, -1, 150, 11, "u",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo ed_emlrtBCI = { -1, -1, 150, 13, "u",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo fd_emlrtBCI = { -1, -1, 150, 33, "eta",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo gd_emlrtBCI = { -1, -1, 148, 43, "x",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo hd_emlrtBCI = { -1, -1, 148, 48, "t",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo id_emlrtBCI = { -1, -1, 148, 60, "u0",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo jd_emlrtBCI = { -1, -1, 142, 42, "x",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo kd_emlrtBCI = { -1, -1, 142, 47, "t",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo ld_emlrtBCI = { -1, -1, 142, 85, "x",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo md_emlrtBCI = { -1, -1, 142, 90, "t",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo nd_emlrtBCI = { -1, -1, 143, 31, "x",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo od_emlrtBCI = { -1, -1, 143, 36, "t",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo pd_emlrtBCI = { -1, -1, 143, 74, "x",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo qd_emlrtBCI = { -1, -1, 143, 79, "t",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo rd_emlrtBCI = { -1, -1, 144, 31, "x",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo sd_emlrtBCI = { -1, -1, 144, 36, "t",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo td_emlrtBCI = { -1, -1, 144, 55, "r",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo ud_emlrtBCI = { -1, -1, 95, 40, "t",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo vd_emlrtBCI = { -1, -1, 96, 40, "t",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo wd_emlrtBCI = { -1, -1, 95, 11, "C",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo xd_emlrtBCI = { -1, -1, 74, 52, "t",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo yd_emlrtBCI = { -1, -1, 74, 78, "t",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo ae_emlrtBCI = { -1, -1, 75, 52, "t",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo be_emlrtBCI = { -1, -1, 75, 78, "t",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo ce_emlrtBCI = { -1, -1, 74, 11, "A",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo de_emlrtBCI = { -1, -1, 74, 23, "A",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo ee_emlrtBCI = { -1, -1, 77, 30, "t",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo fe_emlrtBCI = { -1, -1, 78, 30, "t",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo ge_emlrtBCI = { -1, -1, 80, 52, "t",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo he_emlrtBCI = { -1, -1, 81, 52, "t",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo ie_emlrtBCI = { -1, -1, 80, 11, "B",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo je_emlrtBCI = { -1, -1, 80, 23, "B",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo ke_emlrtBCI = { -1, -1, 83, 15, "Bstar",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo le_emlrtBCI = { -1, -1, 83, 27, "Bstar",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo me_emlrtBCI = { -1, -1, 86, 40, "t",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo ne_emlrtBCI = { -1, -1, 87, 38, "t",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo oe_emlrtBCI = { -1, -1, 86, 11, "D",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo pe_emlrtBCI = { -1, -1, 58, 5, "x", "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtBCInfo qe_emlrtBCI = { -1, -1, 53, 5, "t", "TestBemHeatEq_optimized",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\TestBemHeatEq_optimized.m",
  0 };

static emlrtRSInfo lg_emlrtRSI = { 404, "colon",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo mg_emlrtRSI = { 81, "eml_min_or_max",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRSInfo ng_emlrtRSI = { 38, "eml_min_or_max",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRSInfo wg_emlrtRSI = { 405, "colon",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo xg_emlrtRSI = { 82, "eml_min_or_max",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRSInfo yg_emlrtRSI = { 41, "eml_min_or_max",
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
  int32_T i86;
  int32_T iy;
  emxArray_int32_T *ipiv;
  int32_T info;
  int32_T i87;
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
  int32_T i88;
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
  i86 = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity(&d_st, (emxArray__common *)b_A, i86, (int32_T)sizeof(real_T),
                    &qb_emlrtRTEI);
  iy = A->size[0] * A->size[1];
  for (i86 = 0; i86 < iy; i86++) {
    b_A->data[i86] = A->data[i86];
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
    i87 = A->size[1] - 1;
    b = muIntScalarMin_sint32(i87, A->size[1]);
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
        i86 = b_A->size[0] * b_A->size[1];
        xix0_t = (double *)(&b_A->data[emlrtDynamicBoundsCheckFastR2012b(c, 1,
          i86, &df_emlrtBCI, &g_st) - 1]);
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
            i86 = b_A->size[0] * b_A->size[1];
            temp = b_A->data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, i86,
              &ff_emlrtBCI, &g_st) - 1];
            i86 = b_A->size[0] * b_A->size[1];
            i88 = b_A->size[0] * b_A->size[1];
            b_A->data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, i86, &ff_emlrtBCI,
              &g_st) - 1] = b_A->data[emlrtDynamicBoundsCheckFastR2012b(iy, 1,
              i88, &ff_emlrtBCI, &g_st) - 1];
            i86 = b_A->size[0] * b_A->size[1];
            b_A->data[emlrtDynamicBoundsCheckFastR2012b(iy, 1, i86, &ff_emlrtBCI,
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
        i86 = b_A->size[0] * b_A->size[1];
        i88 = (c + A->size[1]) + 1;
        Aia0_t = (double *)(&b_A->data[emlrtDynamicBoundsCheckFastR2012b(i88, 1,
          i86, &ef_emlrtBCI, &h_st) - 1]);
        i86 = b_A->size[0] * b_A->size[1];
        xix0_t = (double *)(&b_A->data[emlrtDynamicBoundsCheckFastR2012b(c + 1,
          1, i86, &ef_emlrtBCI, &h_st) - 1]);
        i86 = b_A->size[0] * b_A->size[1];
        i88 = c + A->size[1];
        Aiy0_t = (double *)(&b_A->data[emlrtDynamicBoundsCheckFastR2012b(i88, 1,
          i86, &ef_emlrtBCI, &h_st) - 1]);
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

  b_st.site = &gg_emlrtRSI;
  for (iy = 0; iy + 1 < A->size[1]; iy++) {
    if (ipiv->data[iy] != iy + 1) {
      temp = B->data[iy];
      B->data[iy] = B->data[ipiv->data[iy] - 1];
      B->data[ipiv->data[iy] - 1] = temp;
    }
  }

  emxFree_int32_T(&ipiv);
  b_st.site = &hg_emlrtRSI;
  c_st.site = &hc_emlrtRSI;
  if (A->size[1] < 1) {
  } else {
    d_st.site = &ic_emlrtRSI;
    temp = 1.0;
    DIAGA = 'U';
    TRANSA = 'N';
    UPLO = 'L';
    SIDE = 'L';
    e_st.site = &ic_emlrtRSI;
    m_t = (ptrdiff_t)(A->size[1]);
    e_st.site = &ic_emlrtRSI;
    n_t = (ptrdiff_t)(1);
    e_st.site = &ic_emlrtRSI;
    lda_t = (ptrdiff_t)(A->size[1]);
    e_st.site = &ic_emlrtRSI;
    incx_t = (ptrdiff_t)(A->size[1]);
    i86 = b_A->size[0] * b_A->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i86, &cf_emlrtBCI, &d_st);
    Aia0_t = (double *)(&b_A->data[0]);
    xix0_t = (double *)(&B->data[0]);
    alpha1_t = (double *)(&temp);
    dtrsm(&SIDE, &UPLO, &TRANSA, &DIAGA, &m_t, &n_t, alpha1_t, Aia0_t, &lda_t,
          xix0_t, &incx_t);
  }

  b_st.site = &ig_emlrtRSI;
  c_st.site = &hc_emlrtRSI;
  if (A->size[1] < 1) {
  } else {
    d_st.site = &ic_emlrtRSI;
    temp = 1.0;
    DIAGA = 'N';
    TRANSA = 'N';
    UPLO = 'U';
    SIDE = 'L';
    e_st.site = &ic_emlrtRSI;
    m_t = (ptrdiff_t)(A->size[1]);
    e_st.site = &ic_emlrtRSI;
    n_t = (ptrdiff_t)(1);
    e_st.site = &ic_emlrtRSI;
    lda_t = (ptrdiff_t)(A->size[1]);
    e_st.site = &ic_emlrtRSI;
    incx_t = (ptrdiff_t)(A->size[1]);
    i86 = b_A->size[0] * b_A->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i86, &cf_emlrtBCI, &d_st);
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
  int32_T i79;
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
  int32_T i80;
  real_T atmp;
  real_T d7;
  boolean_T b12;
  boolean_T b_i;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  double * xix0_t;
  boolean_T exitg1;
  const mxArray *y;
  static const int32_T iv61[2] = { 1, 8 };

  const mxArray *m13;
  char_T cv62[8];
  static const char_T cv63[8] = { '%', '%', '%', 'd', '.', '%', 'd', 'e' };

  char_T cv64[14];
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
  emxInit_real_T(sp, &b_A, 2, &n_emlrtRTEI, true);
  b_emxInit_real_T(sp, &work, 1, &tb_emlrtRTEI, true);
  mn = (int32_T)muDoubleScalarMin(A->size[0], A->size[1]);
  st.site = &lc_emlrtRSI;
  b_st.site = &mc_emlrtRSI;
  c_st.site = &nc_emlrtRSI;
  i79 = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity(&c_st, (emxArray__common *)b_A, i79, (int32_T)sizeof(real_T),
                    &n_emlrtRTEI);
  ix = A->size[0] * A->size[1];
  for (i79 = 0; i79 < ix; i79++) {
    b_A->data[i79] = A->data[i79];
  }

  b_emxInit_real_T(&c_st, &tau, 1, &n_emlrtRTEI, true);
  b_emxInit_int32_T(&c_st, &jpvt, 2, &n_emlrtRTEI, true);
  m = b_A->size[0];
  n = b_A->size[1];
  b_mn = muIntScalarMin_sint32(b_A->size[0], b_A->size[1]);
  i79 = tau->size[0];
  tau->size[0] = b_mn;
  emxEnsureCapacity(&c_st, (emxArray__common *)tau, i79, (int32_T)sizeof(real_T),
                    &o_emlrtRTEI);
  d_st.site = &sf_emlrtRSI;
  e_st.site = &qb_emlrtRSI;
  f_st.site = &rb_emlrtRSI;
  g_st.site = &sb_emlrtRSI;
  eml_signed_integer_colon(&g_st, b_A->size[1], jpvt);
  if ((b_A->size[0] == 0) || (b_A->size[1] == 0)) {
  } else {
    ix = b_A->size[1];
    i79 = work->size[0];
    work->size[0] = ix;
    emxEnsureCapacity(&c_st, (emxArray__common *)work, i79, (int32_T)sizeof
                      (real_T), &n_emlrtRTEI);
    for (i79 = 0; i79 < ix; i79++) {
      work->data[i79] = 0.0;
    }

    b_emxInit_real_T(&c_st, &vn1, 1, &rb_emlrtRTEI, true);
    b_emxInit_real_T(&c_st, &vn2, 1, &sb_emlrtRTEI, true);
    d_st.site = &sc_emlrtRSI;
    ix = b_A->size[1];
    i79 = vn1->size[0];
    vn1->size[0] = ix;
    emxEnsureCapacity(&c_st, (emxArray__common *)vn1, i79, (int32_T)sizeof
                      (real_T), &rb_emlrtRTEI);
    i79 = vn2->size[0];
    vn2->size[0] = ix;
    emxEnsureCapacity(&c_st, (emxArray__common *)vn2, i79, (int32_T)sizeof
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
      b10 = false;
    } else {
      b10 = (b_mn > 2147483646);
    }

    if (b10) {
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
          b11 = false;
        } else {
          b11 = (m > 2147483646);
        }

        if (b11) {
          h_st.site = &cb_emlrtRSI;
          check_forloop_overflow_error(&h_st);
        }

        for (k = 1; k <= m; k++) {
          i79 = b_A->size[0] * b_A->size[1];
          xnorm = b_A->data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, i79,
            &ff_emlrtBCI, &f_st) - 1];
          i79 = b_A->size[0] * b_A->size[1];
          i80 = b_A->size[0] * b_A->size[1];
          b_A->data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, i79, &ff_emlrtBCI,
            &f_st) - 1] = b_A->data[emlrtDynamicBoundsCheckFastR2012b(iy, 1, i80,
            &ff_emlrtBCI, &f_st) - 1];
          i79 = b_A->size[0] * b_A->size[1];
          b_A->data[emlrtDynamicBoundsCheckFastR2012b(iy, 1, i79, &ff_emlrtBCI,
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
        d7 = 0.0;
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

              d7 = (xnorm - atmp) / xnorm;
              e_st.site = &yc_emlrtRSI;
              b_eml_xscal(&e_st, mmi, 1.0 / (atmp - xnorm), b_A, i_i + 2);
              e_st.site = &ad_emlrtRSI;
              if (1 > ix) {
                b12 = false;
              } else {
                b12 = (ix > 2147483646);
              }

              if (b12) {
                f_st.site = &cb_emlrtRSI;
                check_forloop_overflow_error(&f_st);
              }

              for (k = 1; k <= ix; k++) {
                xnorm *= 1.0020841800044864E-292;
              }

              atmp = xnorm;
            } else {
              d7 = (xnorm - b_A->data[i_i]) / xnorm;
              atmp = 1.0 / (b_A->data[i_i] - xnorm);
              e_st.site = &bd_emlrtRSI;
              b_eml_xscal(&e_st, mmi, atmp, b_A, i_i + 2);
              atmp = xnorm;
            }
          }
        }

        tau->data[i - 1] = d7;
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
                i79 = b_A->size[0] * b_A->size[1];
                i80 = (i + m * ix) + 1;
                xix0_t = (double *)(&b_A->data[emlrtDynamicBoundsCheckFastR2012b
                                    (i80, 1, i79, &ub_emlrtBCI, &f_st) - 1]);
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
        m13 = emlrtCreateCharArray(2, iv61);
        for (i = 0; i < 8; i++) {
          cv62[i] = cv63[i];
        }

        emlrtInitCharArrayR2013a(&st, 8, m13, cv62);
        emlrtAssign(&y, m13);
        b_st.site = &fh_emlrtRSI;
        emlrt_marshallIn(&b_st, c_sprintf(&b_st, b_sprintf(&b_st, y,
          emlrt_marshallOut(14.0), emlrt_marshallOut(6.0), &o_emlrtMCI),
          emlrt_marshallOut(xnorm), &p_emlrtMCI), "sprintf", cv64);
        st.site = &jc_emlrtRSI;
        b_eml_warning(&st, atmp, cv64);
        exitg1 = true;
      } else {
        atmp++;
        k++;
      }
    }
  }

  unnamed_idx_0 = (uint32_T)A->size[1];
  i79 = Y->size[0];
  Y->size[0] = (int32_T)unnamed_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)Y, i79, (int32_T)sizeof(real_T),
                    &n_emlrtRTEI);
  ix = (int32_T)unnamed_idx_0;
  for (i79 = 0; i79 < ix; i79++) {
    Y->data[i79] = 0.0;
  }

  for (ix = 0; ix < mn; ix++) {
    if (tau->data[ix] != 0.0) {
      xnorm = B->data[ix];
      i79 = A->size[0] + (int32_T)(1.0 - ((1.0 + (real_T)ix) + 1.0));
      emlrtForLoopVectorCheckR2012b((1.0 + (real_T)ix) + 1.0, 1.0, A->size[0],
        mxDOUBLE_CLASS, i79, &cc_emlrtRTEI, sp);
      for (i = 0; i < i79; i++) {
        unnamed_idx_0 = ((uint32_T)ix + i) + 2U;
        xnorm += b_A->data[((int32_T)unnamed_idx_0 + b_A->size[0] * ix) - 1] *
          B->data[(int32_T)unnamed_idx_0 - 1];
      }

      xnorm *= tau->data[ix];
      if (xnorm != 0.0) {
        B->data[ix] -= xnorm;
        i79 = A->size[0] + (int32_T)(1.0 - ((1.0 + (real_T)ix) + 1.0));
        emlrtForLoopVectorCheckR2012b((1.0 + (real_T)ix) + 1.0, 1.0, A->size[0],
          mxDOUBLE_CLASS, i79, &bc_emlrtRTEI, sp);
        for (i = 0; i < i79; i++) {
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

void TestBemHeatEq_optimized(const emlrtStack *sp, const emxArray_real_T *sigIn,
  real_T regOrder, real_T lambda, real_T alpha, real_T numSpacePoints, boolean_T
  plotFlag, emxArray_real_T *u, emxArray_real_T *r)
{
  emxArray_real_T *f;
  int32_T ixstart;
  real_T apnd;
  int32_T i29;
  int32_T deltaij;
  int32_T i30;
  emxArray_real_T *u0;
  real_T midPoint;
  boolean_T n_too_large;
  const mxArray *y;
  static const int32_T iv42[2] = { 1, 36 };

  const mxArray *m10;
  char_T cv47[36];
  int32_T i;
  static const char_T cv48[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  const mxArray *b_y;
  static const int32_T iv43[2] = { 1, 39 };

  char_T cv49[39];
  static const char_T cv50[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'm', 'i', 'n', '_', 'o', 'r',
    '_', 'm', 'a', 'x', '_', 'v', 'a', 'r', 'D', 'i', 'm', 'Z', 'e', 'r', 'o' };

  real_T sSpace;
  int32_T ndbl;
  boolean_T exitg1;
  int32_T b_apnd;
  emxArray_real_T *gridX;
  int32_T k;
  emxArray_real_T *b_gridX;
  int32_T i31;
  emxArray_real_T *c_gridX;
  uint32_T b_ndbl;
  const mxArray *c_y;
  static const int32_T iv44[2] = { 1, 21 };

  char_T cv51[21];
  static const char_T cv52[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  emxArray_real_T *gridT;
  emxArray_real_T *t;
  int32_T tIdx;
  real_T cdiff;
  const mxArray *d_y;
  static const int32_T iv45[2] = { 1, 21 };

  emxArray_real_T *d_gridX;
  emxArray_real_T *x;
  emxArray_real_T *A;
  emxArray_real_T *B;
  emxArray_real_T *Bstar;
  emxArray_real_T *D;
  int32_T j;
  emxArray_real_T *b_f;
  emxArray_real_T *c_f;
  real_T d2;
  real_T d3;
  emxArray_real_T *C;
  emxArray_real_T *s1;
  emxArray_real_T *s2;
  emxArray_real_T *X;
  emxArray_real_T *Y;
  emxArray_real_T *regTerm;
  emxArray_real_T *b1s;
  emxArray_real_T *b_C;
  emxArray_int32_T *r18;
  emxArray_int32_T *r19;
  emxArray_real_T *b;
  emxArray_real_T *a;
  emxArray_real_T *r20;
  emxArray_real_T *r21;
  emxArray_real_T *b_a;
  emxArray_real_T *b_A;
  emxArray_real_T *c_a;
  emxArray_real_T *c_A;
  int32_T b_regTerm[2];
  int32_T c_C[2];
  const mxArray *e_y;
  static const int32_T iv46[2] = { 1, 45 };

  char_T cv53[45];
  static const char_T cv54[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *f_y;
  static const int32_T iv47[2] = { 1, 21 };

  static const char_T cv55[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
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
  int32_T iv48[2];
  const mxArray *g_y;
  static const int32_T iv49[2] = { 1, 45 };

  const mxArray *h_y;
  static const int32_T iv50[2] = { 1, 21 };

  const mxArray *i_y;
  static const int32_T iv51[2] = { 1, 45 };

  const mxArray *j_y;
  static const int32_T iv52[2] = { 1, 21 };

  int32_T iv53[1];
  const mxArray *k_y;
  static const int32_T iv54[2] = { 1, 45 };

  const mxArray *l_y;
  static const int32_T iv55[2] = { 1, 21 };

  const mxArray *m_y;
  static const int32_T iv56[2] = { 1, 45 };

  const mxArray *n_y;
  static const int32_T iv57[2] = { 1, 21 };

  const mxArray *o_y;
  static const int32_T iv58[2] = { 1, 21 };

  static const char_T cv56[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'd', 'i', 'm', 'a', 'g', 'r', 'e', 'e' };

  emxArray_real_T *b_r;
  emxArray_real_T *r22;
  emxArray_real_T *d_f;
  int32_T i32;
  int32_T i33;
  int32_T i34;
  int32_T i35;
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
  i_st.prev = sp;
  i_st.tls = sp->tls;
  j_st.prev = sp;
  j_st.tls = sp->tls;
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
  /*  The convention for most matrices is that rows are time, columns are space */
  /*  alpha    = -1e-14; % for the boundary condition */
  if (b_mod(numSpacePoints + 1.0) != 0.0) {
    numSpacePoints++;

    /*  make it odd */
  }

  emxInit_real_T(sp, &f, 2, &y_emlrtRTEI, true);

  /*  space points; */
  /*  int(u(x,t)dx) is a time function of size 1xN % assuming the temp drops to 0 at the boundaries linearly */
  /*  time points */
  ixstart = sigIn->size[1];
  apnd = emlrtNonNegativeCheckFastR2012b(numSpacePoints, &v_emlrtDCI, sp);
  emlrtIntegerCheckFastR2012b(apnd, &u_emlrtDCI, sp);
  i29 = f->size[0] * f->size[1];
  f->size[0] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)f, i29, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  apnd = emlrtNonNegativeCheckFastR2012b(numSpacePoints, &v_emlrtDCI, sp);
  emlrtIntegerCheckFastR2012b(apnd, &u_emlrtDCI, sp);
  i29 = f->size[0] * f->size[1];
  f->size[1] = (int32_T)numSpacePoints;
  emxEnsureCapacity(sp, (emxArray__common *)f, i29, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  apnd = emlrtNonNegativeCheckFastR2012b(numSpacePoints, &v_emlrtDCI, sp);
  deltaij = sigIn->size[1] * (int32_T)emlrtIntegerCheckFastR2012b(apnd,
    &u_emlrtDCI, sp);
  for (i29 = 0; i29 < deltaij; i29++) {
    f->data[i29] = 0.0;
  }

  /*  function of N time points over N0 space points */
  ixstart = sigIn->size[1];
  i29 = (int32_T)numSpacePoints;
  i30 = (int32_T)muDoubleScalarCeil(numSpacePoints / 2.0);
  i29 = emlrtDynamicBoundsCheckFastR2012b(i30, 1, i29, &wc_emlrtBCI, sp);
  for (i30 = 0; i30 < ixstart; i30++) {
    f->data[i30 + f->size[0] * (i29 - 1)] = 1.0;
  }

  emxInit_real_T(sp, &u0, 2, &ab_emlrtRTEI, true);

  /*  the source is only active at the mid point x=0.5; */
  /*  determine initial wave  */
  i29 = u0->size[0] * u0->size[1];
  u0->size[0] = 1;
  u0->size[1] = (int32_T)numSpacePoints;
  emxEnsureCapacity(sp, (emxArray__common *)u0, i29, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  deltaij = (int32_T)numSpacePoints;
  for (i29 = 0; i29 < deltaij; i29++) {
    u0->data[i29] = 0.0;
  }

  midPoint = muDoubleScalarCeil(numSpacePoints / 2.0);
  i29 = (int32_T)muDoubleScalarMin(10.0, sigIn->size[1]);
  if (1 > i29) {
    i29 = 0;
  } else {
    i30 = sigIn->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i30, &cd_emlrtBCI, sp);
    i30 = sigIn->size[1];
    i29 = emlrtDynamicBoundsCheckFastR2012b(i29, 1, i30, &cd_emlrtBCI, sp);
  }

  st.site = &be_emlrtRSI;
  b_st.site = &ff_emlrtRSI;
  c_st.site = &gf_emlrtRSI;
  if ((i29 == 1) || (i29 != 1)) {
    n_too_large = true;
  } else {
    n_too_large = false;
  }

  if (n_too_large) {
  } else {
    y = NULL;
    m10 = emlrtCreateCharArray(2, iv42);
    for (i = 0; i < 36; i++) {
      cv47[i] = cv48[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 36, m10, cv47);
    emlrtAssign(&y, m10);
    d_st.site = &ng_emlrtRSI;
    e_st.site = &yg_emlrtRSI;
    error(&d_st, message(&e_st, y, &bb_emlrtMCI), &cb_emlrtMCI);
  }

  if (i29 > 0) {
  } else {
    b_y = NULL;
    m10 = emlrtCreateCharArray(2, iv43);
    for (i = 0; i < 39; i++) {
      cv49[i] = cv50[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 39, m10, cv49);
    emlrtAssign(&b_y, m10);
    d_st.site = &mg_emlrtRSI;
    e_st.site = &xg_emlrtRSI;
    error(&d_st, message(&e_st, b_y, &db_emlrtMCI), &eb_emlrtMCI);
  }

  d_st.site = &hf_emlrtRSI;
  ixstart = 1;
  sSpace = sigIn->data[0];
  if (i29 > 1) {
    if (muDoubleScalarIsNaN(sSpace)) {
      f_st.site = &jf_emlrtRSI;
      ndbl = 2;
      exitg1 = false;
      while ((!exitg1) && (ndbl <= i29)) {
        ixstart = ndbl;
        if (!muDoubleScalarIsNaN(sigIn->data[ndbl - 1])) {
          sSpace = sigIn->data[ndbl - 1];
          exitg1 = true;
        } else {
          ndbl++;
        }
      }
    }

    if (ixstart < i29) {
      f_st.site = &if_emlrtRSI;
      for (ndbl = ixstart + 1; ndbl <= i29; ndbl++) {
        if (sigIn->data[ndbl - 1] > sSpace) {
          sSpace = sigIn->data[ndbl - 1];
        }
      }
    }
  }

  /*  take the max value  */
  /*  u0       = u0m*ones(1,N0); */
  /*  linearly decrease to zero to match with boundary conditions */
  i29 = (int32_T)numSpacePoints;
  i30 = (int32_T)midPoint;
  u0->data[emlrtDynamicBoundsCheckFastR2012b(i30, 1, i29, &rc_emlrtBCI, sp) - 1]
    = sSpace;
  if (1.0 > midPoint - 1.0) {
    i29 = 0;
  } else {
    i29 = u0->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i29, &qc_emlrtBCI, sp);
    i29 = u0->size[1];
    i30 = (int32_T)midPoint - 1;
    i29 = emlrtDynamicBoundsCheckFastR2012b(i30, 1, i29, &qc_emlrtBCI, sp);
  }

  st.site = &ce_emlrtRSI;
  b_st.site = &qb_emlrtRSI;
  c_st.site = &kf_emlrtRSI;
  if (midPoint - 2.0 < 0.0) {
    ndbl = -1;
    b_apnd = (int32_T)midPoint - 2;
  } else {
    ndbl = (int32_T)muDoubleScalarFloor((midPoint - 2.0) + 0.5);
    b_apnd = ndbl;
    ixstart = (ndbl - (int32_T)midPoint) + 2;
    if (muDoubleScalarAbs(ixstart) < 4.4408920985006262E-16 * muDoubleScalarAbs
        (midPoint - 2.0)) {
      ndbl++;
      b_apnd = (int32_T)midPoint - 2;
    } else if (ixstart > 0) {
      b_apnd = ndbl - 1;
    } else {
      ndbl++;
    }

    ndbl--;
  }

  emxInit_real_T(&c_st, &gridX, 2, &db_emlrtRTEI, true);
  d_st.site = &lf_emlrtRSI;
  i30 = gridX->size[0] * gridX->size[1];
  gridX->size[0] = 1;
  gridX->size[1] = ndbl + 1;
  emxEnsureCapacity(&c_st, (emxArray__common *)gridX, i30, (int32_T)sizeof
                    (real_T), &x_emlrtRTEI);
  if (ndbl + 1 > 0) {
    gridX->data[0] = 0.0;
    if (ndbl + 1 > 1) {
      gridX->data[ndbl] = b_apnd;
      i30 = ndbl + (ndbl < 0);
      if (i30 >= 0) {
        ixstart = (int32_T)((uint32_T)i30 >> 1);
      } else {
        ixstart = ~(int32_T)((uint32_T)~i30 >> 1);
      }

      d_st.site = &mf_emlrtRSI;
      for (k = 1; k < ixstart; k++) {
        gridX->data[k] = k;
        gridX->data[ndbl - k] = b_apnd - k;
      }

      if (ixstart << 1 == ndbl) {
        gridX->data[ixstart] = (real_T)b_apnd / 2.0;
      } else {
        gridX->data[ixstart] = ixstart;
        gridX->data[ixstart + 1] = b_apnd - ixstart;
      }
    }
  }

  emxInit_real_T(&c_st, &b_gridX, 2, &w_emlrtRTEI, true);
  i30 = b_gridX->size[0] * b_gridX->size[1];
  b_gridX->size[0] = 1;
  b_gridX->size[1] = gridX->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_gridX, i30, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  deltaij = gridX->size[0] * gridX->size[1];
  for (i30 = 0; i30 < deltaij; i30++) {
    b_gridX->data[i30] = gridX->data[i30];
  }

  rdivide(sp, b_gridX, midPoint, gridX);
  i30 = gridX->size[0] * gridX->size[1];
  gridX->size[0] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)gridX, i30, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  ixstart = gridX->size[0];
  ndbl = gridX->size[1];
  deltaij = ixstart * ndbl;
  emxFree_real_T(&b_gridX);
  for (i30 = 0; i30 < deltaij; i30++) {
    gridX->data[i30] *= sSpace;
  }

  i30 = gridX->size[1];
  emlrtSizeEqCheck1DFastR2012b(i29, i30, &q_emlrtECI, sp);
  deltaij = gridX->size[1];
  for (i29 = 0; i29 < deltaij; i29++) {
    u0->data[i29] = gridX->data[gridX->size[0] * i29];
  }

  if ((uint32_T)midPoint + 1U > (uint32_T)u0->size[1]) {
    i29 = 0;
    i30 = 0;
  } else {
    i29 = u0->size[1];
    i30 = (int32_T)((uint32_T)midPoint + 1U);
    i29 = emlrtDynamicBoundsCheckFastR2012b(i30, 1, i29, &pc_emlrtBCI, sp) - 1;
    i30 = u0->size[1];
    i31 = u0->size[1];
    i30 = emlrtDynamicBoundsCheckFastR2012b(i31, 1, i30, &pc_emlrtBCI, sp);
  }

  st.site = &de_emlrtRSI;
  b_st.site = &kf_emlrtRSI;
  if (midPoint - 2.0 < 0.0) {
    ndbl = -1;
    deltaij = (int32_T)midPoint - 2;
    apnd = 0.0;
  } else {
    deltaij = (int32_T)midPoint - 2;
    ndbl = (int32_T)muDoubleScalarFloor(-(0.0 - (midPoint - 2.0)) + 0.5);
    b_apnd = ((int32_T)midPoint - ndbl) - 2;
    ixstart = (int32_T)muDoubleScalarAbs(midPoint - 2.0);
    if (muDoubleScalarAbs(0.0 - (real_T)b_apnd) < 4.4408920985006262E-16 *
        (real_T)muIntScalarMax_sint32(ixstart, 0)) {
      ndbl++;
      apnd = 0.0;
    } else if (-b_apnd > 0) {
      apnd = (midPoint - 2.0) + -((real_T)ndbl - 1.0);
    } else {
      ndbl++;
      apnd = b_apnd;
    }

    ndbl--;
  }

  c_st.site = &lf_emlrtRSI;
  i31 = gridX->size[0] * gridX->size[1];
  gridX->size[0] = 1;
  gridX->size[1] = ndbl + 1;
  emxEnsureCapacity(&b_st, (emxArray__common *)gridX, i31, (int32_T)sizeof
                    (real_T), &x_emlrtRTEI);
  if (ndbl + 1 > 0) {
    gridX->data[0] = deltaij;
    if (ndbl + 1 > 1) {
      gridX->data[ndbl] = apnd;
      i31 = ndbl + (ndbl < 0);
      if (i31 >= 0) {
        ixstart = (int32_T)((uint32_T)i31 >> 1);
      } else {
        ixstart = ~(int32_T)((uint32_T)~i31 >> 1);
      }

      c_st.site = &mf_emlrtRSI;
      for (k = 1; k < ixstart; k++) {
        gridX->data[k] = deltaij - k;
        gridX->data[ndbl - k] = apnd - (-(real_T)k);
      }

      if (ixstart << 1 == ndbl) {
        gridX->data[ixstart] = ((real_T)deltaij + apnd) / 2.0;
      } else {
        gridX->data[ixstart] = deltaij - ixstart;
        gridX->data[ixstart + 1] = apnd - (-(real_T)ixstart);
      }
    }
  }

  emxInit_real_T(&b_st, &c_gridX, 2, &w_emlrtRTEI, true);
  i31 = c_gridX->size[0] * c_gridX->size[1];
  c_gridX->size[0] = 1;
  c_gridX->size[1] = gridX->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c_gridX, i31, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  deltaij = gridX->size[0] * gridX->size[1];
  for (i31 = 0; i31 < deltaij; i31++) {
    c_gridX->data[i31] = gridX->data[i31];
  }

  rdivide(sp, c_gridX, midPoint, gridX);
  i31 = gridX->size[0] * gridX->size[1];
  gridX->size[0] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)gridX, i31, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  ixstart = gridX->size[0];
  ndbl = gridX->size[1];
  deltaij = ixstart * ndbl;
  emxFree_real_T(&c_gridX);
  for (i31 = 0; i31 < deltaij; i31++) {
    gridX->data[i31] *= sSpace;
  }

  i30 -= i29;
  i31 = gridX->size[1];
  emlrtSizeEqCheck1DFastR2012b(i30, i31, &p_emlrtECI, sp);
  deltaij = gridX->size[1];
  for (i30 = 0; i30 < deltaij; i30++) {
    u0->data[i29 + i30] = gridX->data[gridX->size[0] * i30];
  }

  /*  is the Phi function */
  /*  Determine the boundary and initial functions */
  /*  du/dn(0,t) = q0j */
  /* du/dn(1,t) = q1j */
  /*  u(0,t) = h0j */
  /*  u(1,t) = h1j */
  /*  Discretize the time and space domain */
  /*  max time; */
  st.site = &ee_emlrtRSI;
  b_st.site = &qb_emlrtRSI;
  c_st.site = &kf_emlrtRSI;
  b_ndbl = (uint32_T)muDoubleScalarFloor((real_T)sigIn->size[1] + 0.5);
  b_apnd = (int32_T)b_ndbl;
  ixstart = (int32_T)b_ndbl - sigIn->size[1];
  if (muDoubleScalarAbs(ixstart) < 4.4408920985006262E-16 * (real_T)sigIn->size
      [1]) {
    b_ndbl++;
    b_apnd = sigIn->size[1];
  } else if (ixstart > 0) {
    b_apnd = (int32_T)b_ndbl - 1;
  } else {
    b_ndbl++;
  }

  ndbl = (int32_T)b_ndbl - 1;
  d_st.site = &lf_emlrtRSI;
  if (!(2147483647U < b_ndbl)) {
  } else {
    c_y = NULL;
    m10 = emlrtCreateCharArray(2, iv44);
    for (i = 0; i < 21; i++) {
      cv51[i] = cv52[i];
    }

    emlrtInitCharArrayR2013a(&d_st, 21, m10, cv51);
    emlrtAssign(&c_y, m10);
    f_st.site = &lg_emlrtRSI;
    g_st.site = &wg_emlrtRSI;
    error(&f_st, message(&g_st, c_y, &k_emlrtMCI), &l_emlrtMCI);
  }

  emxInit_real_T(&d_st, &gridT, 2, &bb_emlrtRTEI, true);
  i29 = gridT->size[0] * gridT->size[1];
  gridT->size[0] = 1;
  gridT->size[1] = ndbl + 1;
  emxEnsureCapacity(&c_st, (emxArray__common *)gridT, i29, (int32_T)sizeof
                    (real_T), &x_emlrtRTEI);
  if (ndbl + 1 > 0) {
    gridT->data[0] = 0.0;
    if (ndbl + 1 > 1) {
      gridT->data[ndbl] = b_apnd;
      i29 = ndbl + (ndbl < 0);
      if (i29 >= 0) {
        ixstart = (int32_T)((uint32_T)i29 >> 1);
      } else {
        ixstart = ~(int32_T)((uint32_T)~i29 >> 1);
      }

      d_st.site = &mf_emlrtRSI;
      for (k = 1; k < ixstart; k++) {
        gridT->data[k] = k;
        gridT->data[ndbl - k] = b_apnd - k;
      }

      if (ixstart << 1 == ndbl) {
        gridT->data[ixstart] = (real_T)b_apnd / 2.0;
      } else {
        gridT->data[ixstart] = ixstart;
        gridT->data[ixstart + 1] = b_apnd - ixstart;
      }
    }
  }

  midPoint = (real_T)sigIn->size[1] / (real_T)sigIn->size[1];
  i29 = gridT->size[0] * gridT->size[1];
  gridT->size[0] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)gridT, i29, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  ixstart = gridT->size[0];
  ndbl = gridT->size[1];
  deltaij = ixstart * ndbl;
  for (i29 = 0; i29 < deltaij; i29++) {
    gridT->data[i29] *= midPoint;
  }

  emxInit_real_T(sp, &t, 2, &cb_emlrtRTEI, true);

  /*  N+1 points */
  i29 = t->size[0] * t->size[1];
  t->size[0] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)t, i29, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  ixstart = sigIn->size[1];
  i29 = t->size[0] * t->size[1];
  t->size[1] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)t, i29, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  deltaij = sigIn->size[1];
  for (i29 = 0; i29 < deltaij; i29++) {
    t->data[i29] = 0.0;
  }

  tIdx = 0;
  while (tIdx <= sigIn->size[1] - 1) {
    i29 = gridT->size[1];
    i30 = tIdx + 1;
    emlrtDynamicBoundsCheckFastR2012b(i30, 1, i29, &bd_emlrtBCI, sp);
    i29 = gridT->size[1];
    i30 = (int32_T)((1.0 + (real_T)tIdx) + 1.0);
    emlrtDynamicBoundsCheckFastR2012b(i30, 1, i29, &ad_emlrtBCI, sp);
    i29 = t->size[1];
    i30 = 1 + tIdx;
    t->data[emlrtDynamicBoundsCheckFastR2012b(i30, 1, i29, &qe_emlrtBCI, sp) - 1]
      = (gridT->data[tIdx] + gridT->data[(int32_T)((1.0 + (real_T)tIdx) + 1.0) -
         1]) / 2.0;
    tIdx++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  st.site = &fe_emlrtRSI;
  b_st.site = &qb_emlrtRSI;
  c_st.site = &kf_emlrtRSI;
  if (muDoubleScalarIsInf(numSpacePoints)) {
    ndbl = 0;
    sSpace = rtNaN;
    apnd = numSpacePoints;
    n_too_large = !(0.0 == numSpacePoints);
  } else {
    sSpace = 0.0;
    midPoint = muDoubleScalarFloor(numSpacePoints + 0.5);
    apnd = midPoint;
    cdiff = midPoint - numSpacePoints;
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * numSpacePoints) {
      midPoint++;
      apnd = numSpacePoints;
    } else if (cdiff > 0.0) {
      apnd = midPoint - 1.0;
    } else {
      midPoint++;
    }

    n_too_large = (2.147483647E+9 < midPoint);
    ndbl = (int32_T)midPoint - 1;
  }

  d_st.site = &lf_emlrtRSI;
  if (!n_too_large) {
  } else {
    d_y = NULL;
    m10 = emlrtCreateCharArray(2, iv45);
    for (i = 0; i < 21; i++) {
      cv51[i] = cv52[i];
    }

    emlrtInitCharArrayR2013a(&d_st, 21, m10, cv51);
    emlrtAssign(&d_y, m10);
    f_st.site = &lg_emlrtRSI;
    g_st.site = &wg_emlrtRSI;
    error(&f_st, message(&g_st, d_y, &k_emlrtMCI), &l_emlrtMCI);
  }

  i29 = gridX->size[0] * gridX->size[1];
  gridX->size[0] = 1;
  gridX->size[1] = ndbl + 1;
  emxEnsureCapacity(&c_st, (emxArray__common *)gridX, i29, (int32_T)sizeof
                    (real_T), &x_emlrtRTEI);
  if (ndbl + 1 > 0) {
    gridX->data[0] = sSpace;
    if (ndbl + 1 > 1) {
      gridX->data[ndbl] = apnd;
      i29 = ndbl + (ndbl < 0);
      if (i29 >= 0) {
        ixstart = (int32_T)((uint32_T)i29 >> 1);
      } else {
        ixstart = ~(int32_T)((uint32_T)~i29 >> 1);
      }

      d_st.site = &mf_emlrtRSI;
      for (k = 1; k < ixstart; k++) {
        gridX->data[k] = sSpace + (real_T)k;
        gridX->data[ndbl - k] = apnd - (real_T)k;
      }

      if (ixstart << 1 == ndbl) {
        gridX->data[ixstart] = (sSpace + apnd) / 2.0;
      } else {
        gridX->data[ixstart] = sSpace + (real_T)ixstart;
        gridX->data[ixstart + 1] = apnd - (real_T)ixstart;
      }
    }
  }

  emxInit_real_T(&c_st, &d_gridX, 2, &w_emlrtRTEI, true);
  i29 = d_gridX->size[0] * d_gridX->size[1];
  d_gridX->size[0] = 1;
  d_gridX->size[1] = gridX->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)d_gridX, i29, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  deltaij = gridX->size[0] * gridX->size[1];
  for (i29 = 0; i29 < deltaij; i29++) {
    d_gridX->data[i29] = gridX->data[i29];
  }

  emxInit_real_T(sp, &x, 2, &eb_emlrtRTEI, true);
  rdivide(sp, d_gridX, numSpacePoints, gridX);
  i29 = x->size[0] * x->size[1];
  x->size[0] = 1;
  x->size[1] = (int32_T)numSpacePoints;
  emxEnsureCapacity(sp, (emxArray__common *)x, i29, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  deltaij = (int32_T)numSpacePoints;
  emxFree_real_T(&d_gridX);
  for (i29 = 0; i29 < deltaij; i29++) {
    x->data[i29] = 0.0;
  }

  ixstart = 0;
  while (ixstart <= (int32_T)numSpacePoints - 1) {
    i29 = gridX->size[1];
    i30 = (int32_T)((1.0 + (real_T)ixstart) + 1.0);
    emlrtDynamicBoundsCheckFastR2012b(i30, 1, i29, &yc_emlrtBCI, sp);
    i29 = gridX->size[1];
    i30 = ixstart + 1;
    emlrtDynamicBoundsCheckFastR2012b(i30, 1, i29, &xc_emlrtBCI, sp);
    i29 = x->size[1];
    i30 = 1 + ixstart;
    x->data[emlrtDynamicBoundsCheckFastR2012b(i30, 1, i29, &pe_emlrtBCI, sp) - 1]
      = (gridX->data[(int32_T)((1.0 + (real_T)ixstart) + 1.0) - 1] + gridX->
         data[ixstart]) / 2.0;
    ixstart++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxInit_real_T(sp, &A, 2, &fb_emlrtRTEI, true);

  /* =========================== */
  /*  Calculate the Boundary Elements */
  /*  Calculate A and B, B*, and D */
  ixstart = (int32_T)(2.0 * (real_T)sigIn->size[1]);
  i29 = A->size[0] * A->size[1];
  A->size[0] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)A, i29, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  ixstart = (int32_T)(2.0 * (real_T)sigIn->size[1]);
  i29 = A->size[0] * A->size[1];
  A->size[1] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)A, i29, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  deltaij = (int32_T)(2.0 * (real_T)sigIn->size[1]) * (int32_T)(2.0 * (real_T)
    sigIn->size[1]);
  for (i29 = 0; i29 < deltaij; i29++) {
    A->data[i29] = 0.0;
  }

  emxInit_real_T(sp, &B, 2, &gb_emlrtRTEI, true);
  ixstart = (int32_T)(2.0 * (real_T)sigIn->size[1]);
  i29 = B->size[0] * B->size[1];
  B->size[0] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)B, i29, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  ixstart = (int32_T)(2.0 * (real_T)sigIn->size[1]);
  i29 = B->size[0] * B->size[1];
  B->size[1] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)B, i29, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  deltaij = (int32_T)(2.0 * (real_T)sigIn->size[1]) * (int32_T)(2.0 * (real_T)
    sigIn->size[1]);
  for (i29 = 0; i29 < deltaij; i29++) {
    B->data[i29] = 0.0;
  }

  emxInit_real_T(sp, &Bstar, 2, &hb_emlrtRTEI, true);
  ixstart = (int32_T)(2.0 * (real_T)sigIn->size[1]);
  i29 = Bstar->size[0] * Bstar->size[1];
  Bstar->size[0] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)Bstar, i29, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  ixstart = (int32_T)(2.0 * (real_T)sigIn->size[1]);
  i29 = Bstar->size[0] * Bstar->size[1];
  Bstar->size[1] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)Bstar, i29, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  deltaij = (int32_T)(2.0 * (real_T)sigIn->size[1]) * (int32_T)(2.0 * (real_T)
    sigIn->size[1]);
  for (i29 = 0; i29 < deltaij; i29++) {
    Bstar->data[i29] = 0.0;
  }

  emxInit_real_T(sp, &D, 2, &ib_emlrtRTEI, true);
  ixstart = (int32_T)(2.0 * (real_T)sigIn->size[1]);
  i29 = D->size[0] * D->size[1];
  D->size[0] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)D, i29, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  ixstart = sigIn->size[1];
  i29 = D->size[0] * D->size[1];
  D->size[1] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)D, i29, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  deltaij = (int32_T)(2.0 * (real_T)sigIn->size[1]) * sigIn->size[1];
  for (i29 = 0; i29 < deltaij; i29++) {
    D->data[i29] = 0.0;
  }

  j = 0;
  emxInit_real_T(sp, &b_f, 2, &w_emlrtRTEI, true);
  emxInit_real_T(sp, &c_f, 2, &w_emlrtRTEI, true);
  while (j <= sigIn->size[1] - 1) {
    /*  time */
    i = 1;
    while (i - 1 <= sigIn->size[1] - 1) {
      /*  time */
      deltaij = (i == 1 + j);
      apnd = 2.0 * (1.0 + (real_T)(i - 1));
      ixstart = A->size[0];
      cdiff = 2.0 * (1.0 + (real_T)j);
      ndbl = A->size[1];
      i29 = t->size[1];
      st.site = &ge_emlrtRSI;
      d2 = Acoeff(&st, 0.0, 1.0 + (real_T)j, 0.0, t->
                  data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i29, &xd_emlrtBCI,
        sp) - 1], gridT);
      i29 = t->size[1];
      st.site = &ge_emlrtRSI;
      d3 = Acoeff(&st, 1.0, 1.0 + (real_T)j, 0.0, t->
                  data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i29, &yd_emlrtBCI,
        sp) - 1], gridT);
      i29 = t->size[1];
      st.site = &he_emlrtRSI;
      sSpace = Acoeff(&st, 0.0, 1.0 + (real_T)j, 1.0, t->
                      data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i29,
        &ae_emlrtBCI, sp) - 1], gridT);
      i29 = t->size[1];
      st.site = &he_emlrtRSI;
      midPoint = Acoeff(&st, 1.0, 1.0 + (real_T)j, 1.0, t->
                        data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i29,
        &be_emlrtBCI, sp) - 1], gridT);
      i29 = (int32_T)(apnd + -1.0);
      i30 = (int32_T)(cdiff + -1.0);
      A->data[(emlrtDynamicBoundsCheckFastR2012b(i29, 1, ixstart, &ce_emlrtBCI,
                sp) + A->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i30, 1,
                 ndbl, &de_emlrtBCI, sp) - 1)) - 1] = d2;
      i29 = (int32_T)(apnd + -1.0);
      i30 = (int32_T)cdiff;
      A->data[(emlrtDynamicBoundsCheckFastR2012b(i29, 1, ixstart, &ce_emlrtBCI,
                sp) + A->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i30, 1,
                 ndbl, &de_emlrtBCI, sp) - 1)) - 1] = d3;
      i29 = (int32_T)apnd;
      i30 = (int32_T)(cdiff + -1.0);
      A->data[(emlrtDynamicBoundsCheckFastR2012b(i29, 1, ixstart, &ce_emlrtBCI,
                sp) + A->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i30, 1,
                 ndbl, &de_emlrtBCI, sp) - 1)) - 1] = sSpace;
      i29 = (int32_T)apnd;
      i30 = (int32_T)cdiff;
      A->data[(emlrtDynamicBoundsCheckFastR2012b(i29, 1, ixstart, &ce_emlrtBCI,
                sp) + A->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i30, 1,
                 ndbl, &de_emlrtBCI, sp) - 1)) - 1] = midPoint;

      /*  temp terms */
      i29 = t->size[1];
      st.site = &ie_emlrtRSI;
      sSpace = Bcoeff(&st, 1.0, 1.0 + (real_T)j, 0.0, t->
                      data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i29,
        &ee_emlrtBCI, sp) - 1], gridT);
      i29 = t->size[1];
      st.site = &je_emlrtRSI;
      midPoint = Bcoeff(&st, 1.0, 1.0 + (real_T)j, 1.0, t->
                        data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i29,
        &fe_emlrtBCI, sp) - 1], gridT);
      apnd = 2.0 * (1.0 + (real_T)(i - 1));
      ixstart = B->size[0];
      cdiff = 2.0 * (1.0 + (real_T)j);
      ndbl = B->size[1];
      i29 = t->size[1];
      st.site = &ke_emlrtRSI;
      d2 = Bcoeff(&st, 0.0, 1.0 + (real_T)j, 0.0, t->
                  data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i29, &ge_emlrtBCI,
        sp) - 1], gridT);
      i29 = t->size[1];
      st.site = &le_emlrtRSI;
      d3 = Bcoeff(&st, 0.0, 1.0 + (real_T)j, 1.0, t->
                  data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i29, &he_emlrtBCI,
        sp) - 1], gridT);
      i29 = (int32_T)(apnd + -1.0);
      i30 = (int32_T)(cdiff + -1.0);
      B->data[(emlrtDynamicBoundsCheckFastR2012b(i29, 1, ixstart, &ie_emlrtBCI,
                sp) + B->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i30, 1,
                 ndbl, &je_emlrtBCI, sp) - 1)) - 1] = d2 + 0.5 * (real_T)deltaij;
      i29 = (int32_T)(apnd + -1.0);
      i30 = (int32_T)cdiff;
      B->data[(emlrtDynamicBoundsCheckFastR2012b(i29, 1, ixstart, &ie_emlrtBCI,
                sp) + B->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i30, 1,
                 ndbl, &je_emlrtBCI, sp) - 1)) - 1] = sSpace;
      i29 = (int32_T)apnd;
      i30 = (int32_T)(cdiff + -1.0);
      B->data[(emlrtDynamicBoundsCheckFastR2012b(i29, 1, ixstart, &ie_emlrtBCI,
                sp) + B->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i30, 1,
                 ndbl, &je_emlrtBCI, sp) - 1)) - 1] = d3;
      i29 = (int32_T)apnd;
      i30 = (int32_T)cdiff;
      B->data[(emlrtDynamicBoundsCheckFastR2012b(i29, 1, ixstart, &ie_emlrtBCI,
                sp) + B->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i30, 1,
                 ndbl, &je_emlrtBCI, sp) - 1)) - 1] = midPoint + 0.5 * (real_T)
        deltaij;
      apnd = 2.0 * (1.0 + (real_T)(i - 1));
      ixstart = Bstar->size[0];
      cdiff = 2.0 * (1.0 + (real_T)j);
      ndbl = Bstar->size[1];
      i29 = (int32_T)(apnd + -1.0);
      i30 = (int32_T)(cdiff + -1.0);
      Bstar->data[(emlrtDynamicBoundsCheckFastR2012b(i29, 1, ixstart,
        &ke_emlrtBCI, sp) + Bstar->size[0] * (emlrtDynamicBoundsCheckFastR2012b
        (i30, 1, ndbl, &le_emlrtBCI, sp) - 1)) - 1] = sSpace;
      i29 = (int32_T)(apnd + -1.0);
      i30 = (int32_T)cdiff;
      Bstar->data[(emlrtDynamicBoundsCheckFastR2012b(i29, 1, ixstart,
        &ke_emlrtBCI, sp) + Bstar->size[0] * (emlrtDynamicBoundsCheckFastR2012b
        (i30, 1, ndbl, &le_emlrtBCI, sp) - 1)) - 1] = -sSpace;
      i29 = (int32_T)apnd;
      i30 = (int32_T)(cdiff + -1.0);
      Bstar->data[(emlrtDynamicBoundsCheckFastR2012b(i29, 1, ixstart,
        &ke_emlrtBCI, sp) + Bstar->size[0] * (emlrtDynamicBoundsCheckFastR2012b
        (i30, 1, ndbl, &le_emlrtBCI, sp) - 1)) - 1] = midPoint + (real_T)deltaij
        / 2.0;
      i29 = (int32_T)apnd;
      i30 = (int32_T)cdiff;
      Bstar->data[(emlrtDynamicBoundsCheckFastR2012b(i29, 1, ixstart,
        &ke_emlrtBCI, sp) + Bstar->size[0] * (emlrtDynamicBoundsCheckFastR2012b
        (i30, 1, ndbl, &le_emlrtBCI, sp) - 1)) - 1] = -midPoint - 0.5 * (real_T)
        deltaij;
      deltaij = f->size[1];
      i29 = f->size[0];
      ixstart = emlrtDynamicBoundsCheckFastR2012b(i, 1, i29, &vc_emlrtBCI, sp);
      i29 = b_f->size[0] * b_f->size[1];
      b_f->size[0] = 1;
      b_f->size[1] = deltaij;
      emxEnsureCapacity(sp, (emxArray__common *)b_f, i29, (int32_T)sizeof(real_T),
                        &w_emlrtRTEI);
      for (i29 = 0; i29 < deltaij; i29++) {
        b_f->data[b_f->size[0] * i29] = f->data[(ixstart + f->size[0] * i29) - 1];
      }

      deltaij = f->size[1];
      i29 = f->size[0];
      ixstart = emlrtDynamicBoundsCheckFastR2012b(i, 1, i29, &uc_emlrtBCI, sp);
      i29 = c_f->size[0] * c_f->size[1];
      c_f->size[0] = 1;
      c_f->size[1] = deltaij;
      emxEnsureCapacity(sp, (emxArray__common *)c_f, i29, (int32_T)sizeof(real_T),
                        &w_emlrtRTEI);
      for (i29 = 0; i29 < deltaij; i29++) {
        c_f->data[c_f->size[0] * i29] = f->data[(ixstart + f->size[0] * i29) - 1];
      }

      apnd = 2.0 * (1.0 + (real_T)(i - 1));
      ixstart = D->size[0];
      ndbl = D->size[1];
      i29 = 1 + j;
      emlrtDynamicBoundsCheckFastR2012b(i29, 1, ndbl, &tc_emlrtBCI, sp);
      i29 = t->size[1];
      st.site = &me_emlrtRSI;
      cdiff = b_Dcoeff(&st, x, 1.0 + (real_T)j, t->
                       data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i29,
        &me_emlrtBCI, sp) - 1], gridT, b_f);
      i29 = t->size[1];
      st.site = &ne_emlrtRSI;
      d2 = c_Dcoeff(&st, x, 1.0 + (real_T)j, t->
                    data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i29,
        &ne_emlrtBCI, sp) - 1], gridT, c_f);
      i29 = (int32_T)(apnd + -1.0);
      D->data[(emlrtDynamicBoundsCheckFastR2012b(i29, 1, ixstart, &oe_emlrtBCI,
                sp) + D->size[0] * j) - 1] = cdiff;
      i29 = (int32_T)apnd;
      D->data[(emlrtDynamicBoundsCheckFastR2012b(i29, 1, ixstart, &oe_emlrtBCI,
                sp) + D->size[0] * j) - 1] = d2;
      i++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    j++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&c_f);
  emxFree_real_T(&b_f);
  emxInit_real_T(sp, &C, 2, &jb_emlrtRTEI, true);

  /*  Calculate C */
  ixstart = (int32_T)(2.0 * (real_T)sigIn->size[1]);
  i29 = C->size[0] * C->size[1];
  C->size[0] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)C, i29, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  i29 = C->size[0] * C->size[1];
  C->size[1] = (int32_T)numSpacePoints;
  emxEnsureCapacity(sp, (emxArray__common *)C, i29, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  deltaij = (int32_T)(2.0 * (real_T)sigIn->size[1]) * (int32_T)numSpacePoints;
  for (i29 = 0; i29 < deltaij; i29++) {
    C->data[i29] = 0.0;
  }

  emlrtForLoopVectorCheckR2012b(1.0, 1.0, numSpacePoints, mxDOUBLE_CLASS,
    (int32_T)numSpacePoints, &ac_emlrtRTEI, sp);
  k = 0;
  while (k <= (int32_T)numSpacePoints - 1) {
    /*  space */
    i = 0;
    while (i <= sigIn->size[1] - 1) {
      /*  time */
      apnd = 2.0 * (1.0 + (real_T)i);
      ndbl = C->size[0];
      ixstart = C->size[1];
      emlrtDynamicBoundsCheckFastR2012b(k + 1, 1, ixstart, &sc_emlrtBCI, sp);
      i29 = t->size[1];
      st.site = &oe_emlrtRSI;
      cdiff = b_Ccoeff(&st, 1.0 + (real_T)k, 0.0, t->
                       data[emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, i29,
        &ud_emlrtBCI, sp) - 1], gridX);
      i29 = t->size[1];
      st.site = &pe_emlrtRSI;
      d2 = b_Ccoeff(&st, 1.0 + (real_T)k, 1.0, t->
                    data[emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, i29,
        &vd_emlrtBCI, sp) - 1], gridX);
      i29 = (int32_T)(apnd + -1.0);
      C->data[(emlrtDynamicBoundsCheckFastR2012b(i29, 1, ndbl, &wd_emlrtBCI, sp)
               + C->size[0] * k) - 1] = cdiff;
      i29 = (int32_T)apnd;
      C->data[(emlrtDynamicBoundsCheckFastR2012b(i29, 1, ndbl, &wd_emlrtBCI, sp)
               + C->size[0] * k) - 1] = d2;
      i++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    k++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  c_emxInit_real_T(sp, &s1, 3, &kb_emlrtRTEI, true);

  /*  Solve the equation */
  /*  r =((X'*X+lambda*regTerm)^-1)*X'Y, with r the source and X and Y are to be */
  /*  calculated */
  /*  Calculate the components of X and Y */
  ixstart = sigIn->size[1];
  i29 = s1->size[0] * s1->size[1] * s1->size[2];
  s1->size[0] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)s1, i29, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  ixstart = sigIn->size[1];
  i29 = s1->size[0] * s1->size[1] * s1->size[2];
  s1->size[1] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)s1, i29, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  i29 = s1->size[0] * s1->size[1] * s1->size[2];
  s1->size[2] = (int32_T)numSpacePoints;
  emxEnsureCapacity(sp, (emxArray__common *)s1, i29, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  deltaij = sigIn->size[1] * sigIn->size[1] * (int32_T)numSpacePoints;
  for (i29 = 0; i29 < deltaij; i29++) {
    s1->data[i29] = 0.0;
  }

  emxInit_real_T(sp, &s2, 2, &lb_emlrtRTEI, true);
  ixstart = sigIn->size[1];
  i29 = s2->size[0] * s2->size[1];
  s2->size[0] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)s2, i29, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  i29 = s2->size[0] * s2->size[1];
  s2->size[1] = (int32_T)numSpacePoints;
  emxEnsureCapacity(sp, (emxArray__common *)s2, i29, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  deltaij = sigIn->size[1] * (int32_T)numSpacePoints;
  for (i29 = 0; i29 < deltaij; i29++) {
    s2->data[i29] = 0.0;
  }

  emlrtForLoopVectorCheckR2012b(1.0, 1.0, numSpacePoints, mxDOUBLE_CLASS,
    (int32_T)numSpacePoints, &yb_emlrtRTEI, sp);
  k = 0;
  emxInit_real_T(sp, &X, 2, &mb_emlrtRTEI, true);
  b_emxInit_real_T(sp, &Y, 1, &nb_emlrtRTEI, true);
  emxInit_real_T(sp, &regTerm, 2, &ob_emlrtRTEI, true);
  emxInit_real_T(sp, &b1s, 2, &w_emlrtRTEI, true);
  emxInit_real_T(sp, &b_C, 2, &w_emlrtRTEI, true);
  emxInit_int32_T(sp, &r18, 1, &w_emlrtRTEI, true);
  emxInit_int32_T(sp, &r19, 1, &w_emlrtRTEI, true);
  b_emxInit_real_T(sp, &b, 1, &w_emlrtRTEI, true);
  emxInit_real_T(sp, &a, 2, &w_emlrtRTEI, true);
  emxInit_real_T(sp, &r20, 2, &w_emlrtRTEI, true);
  b_emxInit_real_T(sp, &r21, 1, &w_emlrtRTEI, true);
  emxInit_real_T(sp, &b_a, 2, &w_emlrtRTEI, true);
  emxInit_real_T(sp, &b_A, 2, &w_emlrtRTEI, true);
  emxInit_real_T(sp, &c_a, 2, &w_emlrtRTEI, true);
  emxInit_real_T(sp, &c_A, 2, &w_emlrtRTEI, true);
  while (k <= (int32_T)numSpacePoints - 1) {
    /*  space variable */
    /*  components of X */
    /*      a1k = Aone(k,x,t,gridT); % replaced */
    /*      b1k = Bone(k,x,t,gridT); */
    /*      b1s = BoneStar(k,x,t,gridT);  */
    st.site = &qe_emlrtRSI;
    b_CalculateA1B1B1Star(&st, 1.0 + (real_T)k, x, t, gridT, a, X, b1s);

    /*  %(a1k-(1/alpha)*(b1k-b1s)) */
    for (i29 = 0; i29 < 2; i29++) {
      b_regTerm[i29] = X->size[i29];
    }

    for (i29 = 0; i29 < 2; i29++) {
      c_C[i29] = b1s->size[i29];
    }

    emlrtSizeEqCheck2DFastR2012b(b_regTerm, c_C, &bb_emlrtECI, sp);
    midPoint = 1.0 / alpha;
    i29 = r20->size[0] * r20->size[1];
    r20->size[0] = X->size[0];
    r20->size[1] = X->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)r20, i29, (int32_T)sizeof(real_T),
                      &w_emlrtRTEI);
    deltaij = X->size[0] * X->size[1];
    for (i29 = 0; i29 < deltaij; i29++) {
      r20->data[i29] = midPoint * (X->data[i29] + b1s->data[i29]);
    }

    for (i29 = 0; i29 < 2; i29++) {
      c_C[i29] = a->size[i29];
    }

    for (i29 = 0; i29 < 2; i29++) {
      b_regTerm[i29] = r20->size[i29];
    }

    emlrtSizeEqCheck2DFastR2012b(c_C, b_regTerm, &ab_emlrtECI, sp);
    for (i29 = 0; i29 < 2; i29++) {
      c_C[i29] = B->size[i29];
    }

    for (i29 = 0; i29 < 2; i29++) {
      b_regTerm[i29] = Bstar->size[i29];
    }

    emlrtSizeEqCheck2DFastR2012b(c_C, b_regTerm, &y_emlrtECI, sp);
    midPoint = 1.0 / alpha;
    i29 = regTerm->size[0] * regTerm->size[1];
    regTerm->size[0] = B->size[0];
    regTerm->size[1] = B->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)regTerm, i29, (int32_T)sizeof
                      (real_T), &w_emlrtRTEI);
    deltaij = B->size[0] * B->size[1];
    for (i29 = 0; i29 < deltaij; i29++) {
      regTerm->data[i29] = midPoint * (B->data[i29] + Bstar->data[i29]);
    }

    for (i29 = 0; i29 < 2; i29++) {
      c_C[i29] = A->size[i29];
    }

    for (i29 = 0; i29 < 2; i29++) {
      b_regTerm[i29] = regTerm->size[i29];
    }

    emlrtSizeEqCheck2DFastR2012b(c_C, b_regTerm, &x_emlrtECI, sp);
    i29 = c_a->size[0] * c_a->size[1];
    c_a->size[0] = a->size[0];
    c_a->size[1] = a->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)c_a, i29, (int32_T)sizeof(real_T),
                      &w_emlrtRTEI);
    deltaij = a->size[0] * a->size[1];
    for (i29 = 0; i29 < deltaij; i29++) {
      c_a->data[i29] = a->data[i29] - r20->data[i29];
    }

    i29 = c_A->size[0] * c_A->size[1];
    c_A->size[0] = A->size[0];
    c_A->size[1] = A->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)c_A, i29, (int32_T)sizeof(real_T),
                      &w_emlrtRTEI);
    deltaij = A->size[0] * A->size[1];
    for (i29 = 0; i29 < deltaij; i29++) {
      c_A->data[i29] = A->data[i29] - regTerm->data[i29];
    }

    st.site = &re_emlrtRSI;
    mrdivide(&st, c_a, c_A, regTerm);
    st.site = &se_emlrtRSI;
    i29 = regTerm->size[0] * regTerm->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)regTerm, i29, (int32_T)sizeof
                      (real_T), &w_emlrtRTEI);
    ixstart = regTerm->size[0];
    ndbl = regTerm->size[1];
    deltaij = ixstart * ndbl;
    for (i29 = 0; i29 < deltaij; i29++) {
      regTerm->data[i29] = -regTerm->data[i29];
    }

    b_st.site = &fb_emlrtRSI;
    if (!(regTerm->size[1] == D->size[0])) {
      if (((regTerm->size[0] == 1) && (regTerm->size[1] == 1)) || ((D->size[0] ==
            1) && (D->size[1] == 1))) {
        e_y = NULL;
        m10 = emlrtCreateCharArray(2, iv46);
        for (i = 0; i < 45; i++) {
          cv53[i] = cv54[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 45, m10, cv53);
        emlrtAssign(&e_y, m10);
        c_st.site = &jg_emlrtRSI;
        h_st.site = &ug_emlrtRSI;
        error(&c_st, message(&h_st, e_y, &f_emlrtMCI), &g_emlrtMCI);
      } else {
        f_y = NULL;
        m10 = emlrtCreateCharArray(2, iv47);
        for (i = 0; i < 21; i++) {
          cv51[i] = cv55[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m10, cv51);
        emlrtAssign(&f_y, m10);
        c_st.site = &kg_emlrtRSI;
        h_st.site = &vg_emlrtRSI;
        error(&c_st, message(&h_st, f_y, &h_emlrtMCI), &i_emlrtMCI);
      }
    }

    if ((regTerm->size[1] == 1) || (D->size[0] == 1)) {
      i29 = b_C->size[0] * b_C->size[1];
      b_C->size[0] = regTerm->size[0];
      b_C->size[1] = D->size[1];
      emxEnsureCapacity(&st, (emxArray__common *)b_C, i29, (int32_T)sizeof
                        (real_T), &w_emlrtRTEI);
      deltaij = regTerm->size[0];
      for (i29 = 0; i29 < deltaij; i29++) {
        ixstart = D->size[1];
        for (i30 = 0; i30 < ixstart; i30++) {
          b_C->data[i29 + b_C->size[0] * i30] = 0.0;
          ndbl = regTerm->size[1];
          for (i31 = 0; i31 < ndbl; i31++) {
            b_C->data[i29 + b_C->size[0] * i30] += regTerm->data[i29 +
              regTerm->size[0] * i31] * D->data[i31 + D->size[0] * i30];
          }
        }
      }
    } else {
      b_ndbl = (uint32_T)regTerm->size[0];
      unnamed_idx_1 = (uint32_T)D->size[1];
      i29 = r20->size[0] * r20->size[1];
      r20->size[0] = (int32_T)b_ndbl;
      emxEnsureCapacity(&st, (emxArray__common *)r20, i29, (int32_T)sizeof
                        (real_T), &w_emlrtRTEI);
      i29 = r20->size[0] * r20->size[1];
      r20->size[1] = (int32_T)unnamed_idx_1;
      emxEnsureCapacity(&st, (emxArray__common *)r20, i29, (int32_T)sizeof
                        (real_T), &w_emlrtRTEI);
      deltaij = (int32_T)b_ndbl * (int32_T)unnamed_idx_1;
      for (i29 = 0; i29 < deltaij; i29++) {
        r20->data[i29] = 0.0;
      }

      b_st.site = &bg_emlrtRSI;
      c_st.site = &cg_emlrtRSI;
      i29 = b_C->size[0] * b_C->size[1];
      b_C->size[0] = (int32_T)b_ndbl;
      emxEnsureCapacity(&c_st, (emxArray__common *)b_C, i29, (int32_T)sizeof
                        (real_T), &w_emlrtRTEI);
      i29 = b_C->size[0] * b_C->size[1];
      b_C->size[1] = (int32_T)unnamed_idx_1;
      emxEnsureCapacity(&c_st, (emxArray__common *)b_C, i29, (int32_T)sizeof
                        (real_T), &w_emlrtRTEI);
      deltaij = (int32_T)b_ndbl * (int32_T)unnamed_idx_1;
      for (i29 = 0; i29 < deltaij; i29++) {
        b_C->data[i29] = 0.0;
      }

      if ((regTerm->size[0] < 1) || (D->size[1] < 1) || (regTerm->size[1] < 1))
      {
      } else {
        d_st.site = &dg_emlrtRSI;
        midPoint = 1.0;
        sSpace = 0.0;
        TRANSB = 'N';
        TRANSA = 'N';
        f_st.site = &dg_emlrtRSI;
        m_t = (ptrdiff_t)(regTerm->size[0]);
        f_st.site = &dg_emlrtRSI;
        n_t = (ptrdiff_t)(D->size[1]);
        f_st.site = &dg_emlrtRSI;
        k_t = (ptrdiff_t)(regTerm->size[1]);
        f_st.site = &dg_emlrtRSI;
        lda_t = (ptrdiff_t)(regTerm->size[0]);
        f_st.site = &dg_emlrtRSI;
        ldb_t = (ptrdiff_t)(regTerm->size[1]);
        f_st.site = &dg_emlrtRSI;
        ldc_t = (ptrdiff_t)(regTerm->size[0]);
        alpha1_t = (double *)(&midPoint);
        i29 = regTerm->size[0] * regTerm->size[1];
        emlrtDynamicBoundsCheckFastR2012b(1, 1, i29, &fc_emlrtBCI, &d_st);
        Aia0_t = (double *)(&regTerm->data[0]);
        i29 = D->size[0] * D->size[1];
        emlrtDynamicBoundsCheckFastR2012b(1, 1, i29, &fc_emlrtBCI, &d_st);
        Bib0_t = (double *)(&D->data[0]);
        beta1_t = (double *)(&sSpace);
        i29 = r20->size[0] * r20->size[1];
        emlrtDynamicBoundsCheckFastR2012b(1, 1, i29, &fc_emlrtBCI, &d_st);
        Cic0_t = (double *)(&b_C->data[0]);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t,
              Bib0_t, &ldb_t, beta1_t, Cic0_t, &ldc_t);
      }
    }

    st.site = &se_emlrtRSI;
    b_Done(&st, 1.0 + (real_T)k, x, t, gridT, f, r20);
    for (i29 = 0; i29 < 2; i29++) {
      c_C[i29] = b_C->size[i29];
    }

    for (i29 = 0; i29 < 2; i29++) {
      b_regTerm[i29] = r20->size[i29];
    }

    emlrtSizeEqCheck2DFastR2012b(c_C, b_regTerm, &w_emlrtECI, sp);
    deltaij = s1->size[0];
    i29 = r18->size[0];
    r18->size[0] = deltaij;
    emxEnsureCapacity(sp, (emxArray__common *)r18, i29, (int32_T)sizeof(int32_T),
                      &w_emlrtRTEI);
    for (i29 = 0; i29 < deltaij; i29++) {
      r18->data[i29] = i29;
    }

    deltaij = s1->size[1];
    i29 = r19->size[0];
    r19->size[0] = deltaij;
    emxEnsureCapacity(sp, (emxArray__common *)r19, i29, (int32_T)sizeof(int32_T),
                      &w_emlrtRTEI);
    for (i29 = 0; i29 < deltaij; i29++) {
      r19->data[i29] = i29;
    }

    i29 = s1->size[2];
    i30 = k + 1;
    emlrtDynamicBoundsCheckFastR2012b(i30, 1, i29, &oc_emlrtBCI, sp);
    iv48[0] = r18->size[0];
    iv48[1] = r19->size[0];
    emlrtSubAssignSizeCheckR2012b(iv48, 2, *(int32_T (*)[2])b_C->size, 2,
      &o_emlrtECI, sp);
    deltaij = b_C->size[1];
    for (i29 = 0; i29 < deltaij; i29++) {
      ixstart = b_C->size[0];
      for (i30 = 0; i30 < ixstart; i30++) {
        s1->data[(r18->data[i30] + s1->size[0] * r19->data[i29]) + s1->size[0] *
          s1->size[1] * k] = b_C->data[i30 + b_C->size[0] * i29] + r20->data[i30
          + r20->size[0] * i29];
      }
    }

    /*  components of Y */
    for (i29 = 0; i29 < 2; i29++) {
      b_regTerm[i29] = X->size[i29];
    }

    for (i29 = 0; i29 < 2; i29++) {
      c_C[i29] = b1s->size[i29];
    }

    emlrtSizeEqCheck2DFastR2012b(b_regTerm, c_C, &v_emlrtECI, sp);
    midPoint = 1.0 / alpha;
    i29 = X->size[0] * X->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)X, i29, (int32_T)sizeof(real_T),
                      &w_emlrtRTEI);
    ixstart = X->size[0];
    ndbl = X->size[1];
    deltaij = ixstart * ndbl;
    for (i29 = 0; i29 < deltaij; i29++) {
      X->data[i29] = midPoint * (X->data[i29] + b1s->data[i29]);
    }

    for (i29 = 0; i29 < 2; i29++) {
      c_C[i29] = a->size[i29];
    }

    for (i29 = 0; i29 < 2; i29++) {
      b_regTerm[i29] = X->size[i29];
    }

    emlrtSizeEqCheck2DFastR2012b(c_C, b_regTerm, &u_emlrtECI, sp);
    for (i29 = 0; i29 < 2; i29++) {
      c_C[i29] = B->size[i29];
    }

    for (i29 = 0; i29 < 2; i29++) {
      b_regTerm[i29] = Bstar->size[i29];
    }

    emlrtSizeEqCheck2DFastR2012b(c_C, b_regTerm, &t_emlrtECI, sp);
    midPoint = 1.0 / alpha;
    i29 = r20->size[0] * r20->size[1];
    r20->size[0] = B->size[0];
    r20->size[1] = B->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)r20, i29, (int32_T)sizeof(real_T),
                      &w_emlrtRTEI);
    deltaij = B->size[0] * B->size[1];
    for (i29 = 0; i29 < deltaij; i29++) {
      r20->data[i29] = midPoint * (B->data[i29] + Bstar->data[i29]);
    }

    for (i29 = 0; i29 < 2; i29++) {
      c_C[i29] = A->size[i29];
    }

    for (i29 = 0; i29 < 2; i29++) {
      b_regTerm[i29] = r20->size[i29];
    }

    emlrtSizeEqCheck2DFastR2012b(c_C, b_regTerm, &s_emlrtECI, sp);
    i29 = b_a->size[0] * b_a->size[1];
    b_a->size[0] = a->size[0];
    b_a->size[1] = a->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)b_a, i29, (int32_T)sizeof(real_T),
                      &w_emlrtRTEI);
    deltaij = a->size[0] * a->size[1];
    for (i29 = 0; i29 < deltaij; i29++) {
      b_a->data[i29] = a->data[i29] - X->data[i29];
    }

    i29 = b_A->size[0] * b_A->size[1];
    b_A->size[0] = A->size[0];
    b_A->size[1] = A->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)b_A, i29, (int32_T)sizeof(real_T),
                      &w_emlrtRTEI);
    deltaij = A->size[0] * A->size[1];
    for (i29 = 0; i29 < deltaij; i29++) {
      b_A->data[i29] = A->data[i29] - r20->data[i29];
    }

    st.site = &te_emlrtRSI;
    mrdivide(&st, b_a, b_A, regTerm);
    st.site = &ue_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    if (!(regTerm->size[1] == C->size[0])) {
      if (((regTerm->size[0] == 1) && (regTerm->size[1] == 1)) || ((C->size[0] ==
            1) && (C->size[1] == 1))) {
        g_y = NULL;
        m10 = emlrtCreateCharArray(2, iv49);
        for (i = 0; i < 45; i++) {
          cv53[i] = cv54[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 45, m10, cv53);
        emlrtAssign(&g_y, m10);
        c_st.site = &jg_emlrtRSI;
        h_st.site = &ug_emlrtRSI;
        error(&c_st, message(&h_st, g_y, &f_emlrtMCI), &g_emlrtMCI);
      } else {
        h_y = NULL;
        m10 = emlrtCreateCharArray(2, iv50);
        for (i = 0; i < 21; i++) {
          cv51[i] = cv55[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m10, cv51);
        emlrtAssign(&h_y, m10);
        c_st.site = &kg_emlrtRSI;
        h_st.site = &vg_emlrtRSI;
        error(&c_st, message(&h_st, h_y, &h_emlrtMCI), &i_emlrtMCI);
      }
    }

    if ((regTerm->size[1] == 1) || (C->size[0] == 1)) {
      i29 = b_C->size[0] * b_C->size[1];
      b_C->size[0] = regTerm->size[0];
      b_C->size[1] = C->size[1];
      emxEnsureCapacity(&st, (emxArray__common *)b_C, i29, (int32_T)sizeof
                        (real_T), &w_emlrtRTEI);
      deltaij = regTerm->size[0];
      for (i29 = 0; i29 < deltaij; i29++) {
        ixstart = C->size[1];
        for (i30 = 0; i30 < ixstart; i30++) {
          b_C->data[i29 + b_C->size[0] * i30] = 0.0;
          ndbl = regTerm->size[1];
          for (i31 = 0; i31 < ndbl; i31++) {
            b_C->data[i29 + b_C->size[0] * i30] += regTerm->data[i29 +
              regTerm->size[0] * i31] * C->data[i31 + C->size[0] * i30];
          }
        }
      }
    } else {
      b_ndbl = (uint32_T)regTerm->size[0];
      unnamed_idx_1 = (uint32_T)C->size[1];
      i29 = r20->size[0] * r20->size[1];
      r20->size[0] = (int32_T)b_ndbl;
      emxEnsureCapacity(&st, (emxArray__common *)r20, i29, (int32_T)sizeof
                        (real_T), &w_emlrtRTEI);
      i29 = r20->size[0] * r20->size[1];
      r20->size[1] = (int32_T)unnamed_idx_1;
      emxEnsureCapacity(&st, (emxArray__common *)r20, i29, (int32_T)sizeof
                        (real_T), &w_emlrtRTEI);
      deltaij = (int32_T)b_ndbl * (int32_T)unnamed_idx_1;
      for (i29 = 0; i29 < deltaij; i29++) {
        r20->data[i29] = 0.0;
      }

      b_st.site = &bg_emlrtRSI;
      c_st.site = &cg_emlrtRSI;
      i29 = b_C->size[0] * b_C->size[1];
      b_C->size[0] = (int32_T)b_ndbl;
      emxEnsureCapacity(&c_st, (emxArray__common *)b_C, i29, (int32_T)sizeof
                        (real_T), &w_emlrtRTEI);
      i29 = b_C->size[0] * b_C->size[1];
      b_C->size[1] = (int32_T)unnamed_idx_1;
      emxEnsureCapacity(&c_st, (emxArray__common *)b_C, i29, (int32_T)sizeof
                        (real_T), &w_emlrtRTEI);
      deltaij = (int32_T)b_ndbl * (int32_T)unnamed_idx_1;
      for (i29 = 0; i29 < deltaij; i29++) {
        b_C->data[i29] = 0.0;
      }

      if ((regTerm->size[0] < 1) || (C->size[1] < 1) || (regTerm->size[1] < 1))
      {
      } else {
        d_st.site = &dg_emlrtRSI;
        midPoint = 1.0;
        sSpace = 0.0;
        TRANSB = 'N';
        TRANSA = 'N';
        f_st.site = &dg_emlrtRSI;
        m_t = (ptrdiff_t)(regTerm->size[0]);
        f_st.site = &dg_emlrtRSI;
        n_t = (ptrdiff_t)(C->size[1]);
        f_st.site = &dg_emlrtRSI;
        k_t = (ptrdiff_t)(regTerm->size[1]);
        f_st.site = &dg_emlrtRSI;
        lda_t = (ptrdiff_t)(regTerm->size[0]);
        f_st.site = &dg_emlrtRSI;
        ldb_t = (ptrdiff_t)(regTerm->size[1]);
        f_st.site = &dg_emlrtRSI;
        ldc_t = (ptrdiff_t)(regTerm->size[0]);
        alpha1_t = (double *)(&midPoint);
        i29 = regTerm->size[0] * regTerm->size[1];
        emlrtDynamicBoundsCheckFastR2012b(1, 1, i29, &fc_emlrtBCI, &d_st);
        Aia0_t = (double *)(&regTerm->data[0]);
        i29 = C->size[0] * C->size[1];
        emlrtDynamicBoundsCheckFastR2012b(1, 1, i29, &fc_emlrtBCI, &d_st);
        Bib0_t = (double *)(&C->data[0]);
        beta1_t = (double *)(&sSpace);
        i29 = r20->size[0] * r20->size[1];
        emlrtDynamicBoundsCheckFastR2012b(1, 1, i29, &fc_emlrtBCI, &d_st);
        Cic0_t = (double *)(&b_C->data[0]);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t,
              Bib0_t, &ldb_t, beta1_t, Cic0_t, &ldc_t);
      }
    }

    st.site = &ue_emlrtRSI;
    Cone(&st, x, gridX, t, r20);
    for (i29 = 0; i29 < 2; i29++) {
      c_C[i29] = b_C->size[i29];
    }

    for (i29 = 0; i29 < 2; i29++) {
      b_regTerm[i29] = r20->size[i29];
    }

    emlrtSizeEqCheck2DFastR2012b(c_C, b_regTerm, &r_emlrtECI, sp);
    deltaij = s2->size[0];
    i29 = r18->size[0];
    r18->size[0] = deltaij;
    emxEnsureCapacity(sp, (emxArray__common *)r18, i29, (int32_T)sizeof(int32_T),
                      &w_emlrtRTEI);
    for (i29 = 0; i29 < deltaij; i29++) {
      r18->data[i29] = i29;
    }

    i29 = s2->size[1];
    i30 = k + 1;
    emlrtDynamicBoundsCheckFastR2012b(i30, 1, i29, &nc_emlrtBCI, sp);
    st.site = &ue_emlrtRSI;
    i29 = b_C->size[0] * b_C->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)b_C, i29, (int32_T)sizeof(real_T),
                      &w_emlrtRTEI);
    ndbl = b_C->size[0];
    ixstart = b_C->size[1];
    deltaij = ndbl * ixstart;
    for (i29 = 0; i29 < deltaij; i29++) {
      b_C->data[i29] -= r20->data[i29];
    }

    i29 = b->size[0];
    b->size[0] = u0->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)b, i29, (int32_T)sizeof(real_T),
                      &w_emlrtRTEI);
    deltaij = u0->size[1];
    for (i29 = 0; i29 < deltaij; i29++) {
      b->data[i29] = u0->data[u0->size[0] * i29];
    }

    b_st.site = &fb_emlrtRSI;
    if (!(b_C->size[1] == b->size[0])) {
      if (((b_C->size[0] == 1) && (b_C->size[1] == 1)) || (b->size[0] == 1)) {
        i_y = NULL;
        m10 = emlrtCreateCharArray(2, iv51);
        for (i = 0; i < 45; i++) {
          cv53[i] = cv54[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 45, m10, cv53);
        emlrtAssign(&i_y, m10);
        c_st.site = &jg_emlrtRSI;
        h_st.site = &ug_emlrtRSI;
        error(&c_st, message(&h_st, i_y, &f_emlrtMCI), &g_emlrtMCI);
      } else {
        j_y = NULL;
        m10 = emlrtCreateCharArray(2, iv52);
        for (i = 0; i < 21; i++) {
          cv51[i] = cv55[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m10, cv51);
        emlrtAssign(&j_y, m10);
        c_st.site = &kg_emlrtRSI;
        h_st.site = &vg_emlrtRSI;
        error(&c_st, message(&h_st, j_y, &h_emlrtMCI), &i_emlrtMCI);
      }
    }

    if ((b_C->size[1] == 1) || (b->size[0] == 1)) {
      i29 = Y->size[0];
      Y->size[0] = b_C->size[0];
      emxEnsureCapacity(&st, (emxArray__common *)Y, i29, (int32_T)sizeof(real_T),
                        &w_emlrtRTEI);
      deltaij = b_C->size[0];
      for (i29 = 0; i29 < deltaij; i29++) {
        Y->data[i29] = 0.0;
        ixstart = b_C->size[1];
        for (i30 = 0; i30 < ixstart; i30++) {
          Y->data[i29] += b_C->data[i29 + b_C->size[0] * i30] * b->data[i30];
        }
      }
    } else {
      b_ndbl = (uint32_T)b_C->size[0];
      i29 = r21->size[0];
      r21->size[0] = (int32_T)b_ndbl;
      emxEnsureCapacity(&st, (emxArray__common *)r21, i29, (int32_T)sizeof
                        (real_T), &w_emlrtRTEI);
      deltaij = (int32_T)b_ndbl;
      for (i29 = 0; i29 < deltaij; i29++) {
        r21->data[i29] = 0.0;
      }

      b_st.site = &bg_emlrtRSI;
      c_st.site = &cg_emlrtRSI;
      i29 = Y->size[0];
      Y->size[0] = (int32_T)b_ndbl;
      emxEnsureCapacity(&c_st, (emxArray__common *)Y, i29, (int32_T)sizeof
                        (real_T), &w_emlrtRTEI);
      deltaij = (int32_T)b_ndbl;
      for (i29 = 0; i29 < deltaij; i29++) {
        Y->data[i29] = 0.0;
      }

      if ((b_C->size[0] < 1) || (b_C->size[1] < 1)) {
      } else {
        d_st.site = &dg_emlrtRSI;
        midPoint = 1.0;
        sSpace = 0.0;
        TRANSB = 'N';
        TRANSA = 'N';
        f_st.site = &dg_emlrtRSI;
        m_t = (ptrdiff_t)(b_C->size[0]);
        f_st.site = &dg_emlrtRSI;
        n_t = (ptrdiff_t)(1);
        f_st.site = &dg_emlrtRSI;
        k_t = (ptrdiff_t)(b_C->size[1]);
        f_st.site = &dg_emlrtRSI;
        lda_t = (ptrdiff_t)(b_C->size[0]);
        f_st.site = &dg_emlrtRSI;
        ldb_t = (ptrdiff_t)(b_C->size[1]);
        f_st.site = &dg_emlrtRSI;
        ldc_t = (ptrdiff_t)(b_C->size[0]);
        alpha1_t = (double *)(&midPoint);
        i29 = b_C->size[0] * b_C->size[1];
        emlrtDynamicBoundsCheckFastR2012b(1, 1, i29, &fc_emlrtBCI, &d_st);
        Aia0_t = (double *)(&b_C->data[0]);
        i29 = b->size[0];
        emlrtDynamicBoundsCheckFastR2012b(1, 1, i29, &fc_emlrtBCI, &d_st);
        Bib0_t = (double *)(&b->data[0]);
        beta1_t = (double *)(&sSpace);
        i29 = r21->size[0];
        emlrtDynamicBoundsCheckFastR2012b(1, 1, i29, &fc_emlrtBCI, &d_st);
        Cic0_t = (double *)(&Y->data[0]);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t,
              Bib0_t, &ldb_t, beta1_t, Cic0_t, &ldc_t);
      }
    }

    iv53[0] = r18->size[0];
    emlrtSubAssignSizeCheckR2012b(iv53, 1, *(int32_T (*)[1])Y->size, 1,
      &n_emlrtECI, sp);
    deltaij = Y->size[0];
    for (i29 = 0; i29 < deltaij; i29++) {
      s2->data[r18->data[i29] + s2->size[0] * k] = Y->data[i29];
    }

    k++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&c_A);
  emxFree_real_T(&c_a);
  emxFree_real_T(&b_A);
  emxFree_real_T(&b_a);
  emxFree_int32_T(&r19);
  emxFree_int32_T(&r18);
  emxFree_real_T(&b_C);
  emxFree_real_T(&b1s);
  emxFree_real_T(&D);
  emxFree_real_T(&Bstar);
  emxFree_real_T(&B);
  emxFree_real_T(&A);
  midPoint = 1.0 / numSpacePoints;
  st.site = &ve_emlrtRSI;
  b_sum(&st, s1, X);
  i29 = X->size[0] * X->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)X, i29, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  ixstart = X->size[0];
  ndbl = X->size[1];
  deltaij = ixstart * ndbl;
  emxFree_real_T(&s1);
  for (i29 = 0; i29 < deltaij; i29++) {
    X->data[i29] *= midPoint;
  }

  rdivide(sp, sigIn, 2.0, gridX);
  i29 = Y->size[0];
  Y->size[0] = gridX->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)Y, i29, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  deltaij = gridX->size[1];
  for (i29 = 0; i29 < deltaij; i29++) {
    Y->data[i29] = gridX->data[gridX->size[0] * i29];
  }

  midPoint = 1.0 / numSpacePoints;
  st.site = &we_emlrtRSI;
  sum(&st, s2, b);
  i29 = b->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)b, i29, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  deltaij = b->size[0];
  emxFree_real_T(&s2);
  for (i29 = 0; i29 < deltaij; i29++) {
    b->data[i29] *= midPoint;
  }

  i29 = Y->size[0];
  i30 = b->size[0];
  emlrtSizeEqCheck1DFastR2012b(i29, i30, &m_emlrtECI, sp);
  i29 = Y->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)Y, i29, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  deltaij = Y->size[0];
  for (i29 = 0; i29 < deltaij; i29++) {
    Y->data[i29] += b->data[i29];
  }

  emxFree_real_T(&b);
  st.site = &xe_emlrtRSI;
  GetRegularizationTerm(&st, sigIn->size[1], regOrder, regTerm);

  /*  get RregTerm= 'R term */
  /*  The source solution with regularization coefficient lambda is */
  st.site = &ye_emlrtRSI;
  i29 = a->size[0] * a->size[1];
  a->size[0] = X->size[1];
  a->size[1] = X->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)a, i29, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  deltaij = X->size[0];
  for (i29 = 0; i29 < deltaij; i29++) {
    ixstart = X->size[1];
    for (i30 = 0; i30 < ixstart; i30++) {
      a->data[i30 + a->size[0] * i29] = X->data[i29 + X->size[0] * i30];
    }
  }

  b_st.site = &fb_emlrtRSI;
  if (!(a->size[1] == X->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || ((X->size[0] == 1) &&
         (X->size[1] == 1))) {
      k_y = NULL;
      m10 = emlrtCreateCharArray(2, iv54);
      for (i = 0; i < 45; i++) {
        cv53[i] = cv54[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m10, cv53);
      emlrtAssign(&k_y, m10);
      c_st.site = &jg_emlrtRSI;
      h_st.site = &ug_emlrtRSI;
      error(&c_st, message(&h_st, k_y, &f_emlrtMCI), &g_emlrtMCI);
    } else {
      l_y = NULL;
      m10 = emlrtCreateCharArray(2, iv55);
      for (i = 0; i < 21; i++) {
        cv51[i] = cv55[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m10, cv51);
      emlrtAssign(&l_y, m10);
      c_st.site = &kg_emlrtRSI;
      h_st.site = &vg_emlrtRSI;
      error(&c_st, message(&h_st, l_y, &h_emlrtMCI), &i_emlrtMCI);
    }
  }

  if ((a->size[1] == 1) || (X->size[0] == 1)) {
    i29 = C->size[0] * C->size[1];
    C->size[0] = a->size[0];
    C->size[1] = X->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)C, i29, (int32_T)sizeof(real_T),
                      &w_emlrtRTEI);
    deltaij = a->size[0];
    for (i29 = 0; i29 < deltaij; i29++) {
      ixstart = X->size[1];
      for (i30 = 0; i30 < ixstart; i30++) {
        C->data[i29 + C->size[0] * i30] = 0.0;
        ndbl = a->size[1];
        for (i31 = 0; i31 < ndbl; i31++) {
          C->data[i29 + C->size[0] * i30] += a->data[i29 + a->size[0] * i31] *
            X->data[i31 + X->size[0] * i30];
        }
      }
    }
  } else {
    b_ndbl = (uint32_T)a->size[0];
    unnamed_idx_1 = (uint32_T)X->size[1];
    i29 = r20->size[0] * r20->size[1];
    r20->size[0] = (int32_T)b_ndbl;
    emxEnsureCapacity(&st, (emxArray__common *)r20, i29, (int32_T)sizeof(real_T),
                      &w_emlrtRTEI);
    i29 = r20->size[0] * r20->size[1];
    r20->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)r20, i29, (int32_T)sizeof(real_T),
                      &w_emlrtRTEI);
    deltaij = (int32_T)b_ndbl * (int32_T)unnamed_idx_1;
    for (i29 = 0; i29 < deltaij; i29++) {
      r20->data[i29] = 0.0;
    }

    b_st.site = &bg_emlrtRSI;
    c_st.site = &cg_emlrtRSI;
    i29 = C->size[0] * C->size[1];
    C->size[0] = (int32_T)b_ndbl;
    emxEnsureCapacity(&c_st, (emxArray__common *)C, i29, (int32_T)sizeof(real_T),
                      &w_emlrtRTEI);
    i29 = C->size[0] * C->size[1];
    C->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&c_st, (emxArray__common *)C, i29, (int32_T)sizeof(real_T),
                      &w_emlrtRTEI);
    deltaij = (int32_T)b_ndbl * (int32_T)unnamed_idx_1;
    for (i29 = 0; i29 < deltaij; i29++) {
      C->data[i29] = 0.0;
    }

    if ((a->size[0] < 1) || (X->size[1] < 1) || (a->size[1] < 1)) {
    } else {
      d_st.site = &dg_emlrtRSI;
      midPoint = 1.0;
      sSpace = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      f_st.site = &dg_emlrtRSI;
      m_t = (ptrdiff_t)(a->size[0]);
      f_st.site = &dg_emlrtRSI;
      n_t = (ptrdiff_t)(X->size[1]);
      f_st.site = &dg_emlrtRSI;
      k_t = (ptrdiff_t)(a->size[1]);
      f_st.site = &dg_emlrtRSI;
      lda_t = (ptrdiff_t)(a->size[0]);
      f_st.site = &dg_emlrtRSI;
      ldb_t = (ptrdiff_t)(a->size[1]);
      f_st.site = &dg_emlrtRSI;
      ldc_t = (ptrdiff_t)(a->size[0]);
      alpha1_t = (double *)(&midPoint);
      i29 = a->size[0] * a->size[1];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i29, &fc_emlrtBCI, &d_st);
      Aia0_t = (double *)(&a->data[0]);
      i29 = X->size[0] * X->size[1];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i29, &fc_emlrtBCI, &d_st);
      Bib0_t = (double *)(&X->data[0]);
      beta1_t = (double *)(&sSpace);
      i29 = r20->size[0] * r20->size[1];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i29, &fc_emlrtBCI, &d_st);
      Cic0_t = (double *)(&C->data[0]);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t, Bib0_t,
            &ldb_t, beta1_t, Cic0_t, &ldc_t);
    }
  }

  emxFree_real_T(&r20);
  i29 = regTerm->size[0] * regTerm->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)regTerm, i29, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  ixstart = regTerm->size[0];
  ndbl = regTerm->size[1];
  deltaij = ixstart * ndbl;
  for (i29 = 0; i29 < deltaij; i29++) {
    regTerm->data[i29] *= lambda;
  }

  for (i29 = 0; i29 < 2; i29++) {
    c_C[i29] = C->size[i29];
  }

  for (i29 = 0; i29 < 2; i29++) {
    b_regTerm[i29] = regTerm->size[i29];
  }

  emlrtSizeEqCheck2DFastR2012b(c_C, b_regTerm, &l_emlrtECI, sp);
  st.site = &ye_emlrtRSI;
  i29 = a->size[0] * a->size[1];
  a->size[0] = X->size[1];
  a->size[1] = X->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)a, i29, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  deltaij = X->size[0];
  for (i29 = 0; i29 < deltaij; i29++) {
    ixstart = X->size[1];
    for (i30 = 0; i30 < ixstart; i30++) {
      a->data[i30 + a->size[0] * i29] = X->data[i29 + X->size[0] * i30];
    }
  }

  emxFree_real_T(&X);
  b_st.site = &fb_emlrtRSI;
  if (!(a->size[1] == Y->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || (Y->size[0] == 1)) {
      m_y = NULL;
      m10 = emlrtCreateCharArray(2, iv56);
      for (i = 0; i < 45; i++) {
        cv53[i] = cv54[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m10, cv53);
      emlrtAssign(&m_y, m10);
      c_st.site = &jg_emlrtRSI;
      h_st.site = &ug_emlrtRSI;
      error(&c_st, message(&h_st, m_y, &f_emlrtMCI), &g_emlrtMCI);
    } else {
      n_y = NULL;
      m10 = emlrtCreateCharArray(2, iv57);
      for (i = 0; i < 21; i++) {
        cv51[i] = cv55[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m10, cv51);
      emlrtAssign(&n_y, m10);
      c_st.site = &kg_emlrtRSI;
      h_st.site = &vg_emlrtRSI;
      error(&c_st, message(&h_st, n_y, &h_emlrtMCI), &i_emlrtMCI);
    }
  }

  if ((a->size[1] == 1) || (Y->size[0] == 1)) {
    i29 = r->size[0];
    r->size[0] = a->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)r, i29, (int32_T)sizeof(real_T),
                      &w_emlrtRTEI);
    deltaij = a->size[0];
    for (i29 = 0; i29 < deltaij; i29++) {
      r->data[i29] = 0.0;
      ixstart = a->size[1];
      for (i30 = 0; i30 < ixstart; i30++) {
        r->data[i29] += a->data[i29 + a->size[0] * i30] * Y->data[i30];
      }
    }
  } else {
    b_ndbl = (uint32_T)a->size[0];
    i29 = r21->size[0];
    r21->size[0] = (int32_T)b_ndbl;
    emxEnsureCapacity(&st, (emxArray__common *)r21, i29, (int32_T)sizeof(real_T),
                      &w_emlrtRTEI);
    deltaij = (int32_T)b_ndbl;
    for (i29 = 0; i29 < deltaij; i29++) {
      r21->data[i29] = 0.0;
    }

    b_st.site = &bg_emlrtRSI;
    c_st.site = &cg_emlrtRSI;
    i29 = r->size[0];
    r->size[0] = (int32_T)b_ndbl;
    emxEnsureCapacity(&c_st, (emxArray__common *)r, i29, (int32_T)sizeof(real_T),
                      &w_emlrtRTEI);
    deltaij = (int32_T)b_ndbl;
    for (i29 = 0; i29 < deltaij; i29++) {
      r->data[i29] = 0.0;
    }

    if ((a->size[0] < 1) || (a->size[1] < 1)) {
    } else {
      d_st.site = &dg_emlrtRSI;
      midPoint = 1.0;
      sSpace = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      f_st.site = &dg_emlrtRSI;
      m_t = (ptrdiff_t)(a->size[0]);
      f_st.site = &dg_emlrtRSI;
      n_t = (ptrdiff_t)(1);
      f_st.site = &dg_emlrtRSI;
      k_t = (ptrdiff_t)(a->size[1]);
      f_st.site = &dg_emlrtRSI;
      lda_t = (ptrdiff_t)(a->size[0]);
      f_st.site = &dg_emlrtRSI;
      ldb_t = (ptrdiff_t)(a->size[1]);
      f_st.site = &dg_emlrtRSI;
      ldc_t = (ptrdiff_t)(a->size[0]);
      alpha1_t = (double *)(&midPoint);
      i29 = a->size[0] * a->size[1];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i29, &fc_emlrtBCI, &d_st);
      Aia0_t = (double *)(&a->data[0]);
      i29 = Y->size[0];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i29, &fc_emlrtBCI, &d_st);
      Bib0_t = (double *)(&Y->data[0]);
      beta1_t = (double *)(&sSpace);
      i29 = r21->size[0];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i29, &fc_emlrtBCI, &d_st);
      Cic0_t = (double *)(&r->data[0]);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t, Bib0_t,
            &ldb_t, beta1_t, Cic0_t, &ldc_t);
    }
  }

  emxFree_real_T(&r21);
  emxFree_real_T(&a);
  emxFree_real_T(&Y);
  st.site = &ye_emlrtRSI;
  i29 = C->size[0] * C->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)C, i29, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  ndbl = C->size[0];
  ixstart = C->size[1];
  deltaij = ndbl * ixstart;
  for (i29 = 0; i29 < deltaij; i29++) {
    C->data[i29] += regTerm->data[i29];
  }

  emxFree_real_T(&regTerm);
  if (r->size[0] == C->size[0]) {
  } else {
    o_y = NULL;
    m10 = emlrtCreateCharArray(2, iv58);
    for (i = 0; i < 21; i++) {
      cv51[i] = cv56[i];
    }

    emlrtInitCharArrayR2013a(&st, 21, m10, cv51);
    emlrtAssign(&o_y, m10);
    b_st.site = &fg_emlrtRSI;
    error(&b_st, message(&b_st, o_y, &fb_emlrtMCI), &fb_emlrtMCI);
  }

  b_emxInit_real_T(&st, &b_r, 1, &w_emlrtRTEI, true);
  b_emxInit_real_T(&st, &r22, 1, &w_emlrtRTEI, true);
  if ((C->size[0] == 0) || (C->size[1] == 0) || (r->size[0] == 0)) {
    b_ndbl = (uint32_T)C->size[1];
    i29 = r->size[0];
    r->size[0] = (int32_T)b_ndbl;
    emxEnsureCapacity(&st, (emxArray__common *)r, i29, (int32_T)sizeof(real_T),
                      &w_emlrtRTEI);
    deltaij = (int32_T)b_ndbl;
    for (i29 = 0; i29 < deltaij; i29++) {
      r->data[i29] = 0.0;
    }
  } else if (C->size[0] == C->size[1]) {
    b_st.site = &fg_emlrtRSI;
    b_eml_lusolve(&b_st, C, r);
  } else {
    i29 = b_r->size[0];
    b_r->size[0] = r->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)b_r, i29, (int32_T)sizeof(real_T),
                      &w_emlrtRTEI);
    deltaij = r->size[0];
    for (i29 = 0; i29 < deltaij; i29++) {
      b_r->data[i29] = r->data[i29];
    }

    b_st.site = &fg_emlrtRSI;
    c_eml_qrsolve(&b_st, C, b_r, r22);
    i29 = r->size[0];
    r->size[0] = r22->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)r, i29, (int32_T)sizeof(real_T),
                      &w_emlrtRTEI);
    deltaij = r22->size[0];
    for (i29 = 0; i29 < deltaij; i29++) {
      r->data[i29] = r22->data[i29];
    }
  }

  emxFree_real_T(&r22);
  emxFree_real_T(&b_r);
  emxFree_real_T(&C);

  /*  Calculate the solution u(x,t) */
  i29 = gridX->size[0] * gridX->size[1];
  gridX->size[0] = 1;
  gridX->size[1] = (int32_T)numSpacePoints;
  emxEnsureCapacity(sp, (emxArray__common *)gridX, i29, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  deltaij = (int32_T)numSpacePoints;
  for (i29 = 0; i29 < deltaij; i29++) {
    gridX->data[i29] = 1.0;
  }

  i29 = (int32_T)numSpacePoints;
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i29, &hc_emlrtBCI, sp);
  gridX->data[0] = 0.5;
  i29 = (int32_T)numSpacePoints;
  i30 = (int32_T)numSpacePoints;
  gridX->data[emlrtDynamicBoundsCheckFastR2012b(i30, 1, i29, &gc_emlrtBCI, sp) -
    1] = 0.5;
  ixstart = sigIn->size[1];
  i29 = u->size[0] * u->size[1];
  u->size[0] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)u, i29, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  i29 = u->size[0] * u->size[1];
  u->size[1] = (int32_T)numSpacePoints;
  emxEnsureCapacity(sp, (emxArray__common *)u, i29, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  deltaij = sigIn->size[1] * (int32_T)numSpacePoints;
  for (i29 = 0; i29 < deltaij; i29++) {
    u->data[i29] = 0.0;
  }

  j = 1;
  emxInit_real_T(sp, &d_f, 2, &w_emlrtRTEI, true);
  while (j - 1 <= (int32_T)numSpacePoints - 1) {
    /*  space index */
    i = 1;
    while (i - 1 <= sigIn->size[1] - 1) {
      /*  time index */
      midPoint = 0.0;

      /*  cumulative sums */
      sSpace = 0.0;
      tIdx = 0;
      while (tIdx <= sigIn->size[1] - 1) {
        /*  time index */
        ixstart = sigIn->size[1];
        i29 = tIdx + 1;
        emlrtDynamicBoundsCheckFastR2012b(i29, 1, ixstart, &mc_emlrtBCI, sp);
        ixstart = sigIn->size[1];
        i29 = tIdx + 1;
        emlrtDynamicBoundsCheckFastR2012b(i29, 1, ixstart, &lc_emlrtBCI, sp);
        ixstart = sigIn->size[1];
        i29 = tIdx + 1;
        emlrtDynamicBoundsCheckFastR2012b(i29, 1, ixstart, &kc_emlrtBCI, sp);
        ixstart = sigIn->size[1];
        i29 = tIdx + 1;
        emlrtDynamicBoundsCheckFastR2012b(i29, 1, ixstart, &jc_emlrtBCI, sp);
        deltaij = f->size[1];
        i29 = f->size[0];
        ixstart = emlrtDynamicBoundsCheckFastR2012b(i, 1, i29, &ic_emlrtBCI, sp);
        i29 = d_f->size[0] * d_f->size[1];
        d_f->size[0] = 1;
        d_f->size[1] = deltaij;
        emxEnsureCapacity(sp, (emxArray__common *)d_f, i29, (int32_T)sizeof
                          (real_T), &w_emlrtRTEI);
        for (i29 = 0; i29 < deltaij; i29++) {
          d_f->data[d_f->size[0] * i29] = f->data[(ixstart + f->size[0] * i29) -
            1];
        }

        i29 = x->size[1];
        i30 = t->size[1];
        i31 = x->size[1];
        i32 = t->size[1];
        ixstart = x->size[1];
        ndbl = t->size[1];
        b_apnd = x->size[1];
        deltaij = t->size[1];
        k = x->size[1];
        i33 = t->size[1];
        i34 = r->size[0];
        i35 = 1 + tIdx;
        st.site = &af_emlrtRSI;
        i_st.site = &bf_emlrtRSI;
        j_st.site = &cf_emlrtRSI;
        midPoint = ((((midPoint + Acoeff(&st, 0.0, 1.0 + (real_T)tIdx, x->
          data[emlrtDynamicBoundsCheckFastR2012b(j, 1, i29, &jd_emlrtBCI, sp) -
          1], t->data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i30, &kd_emlrtBCI,
          sp) - 1], gridT) * 0.0) + Acoeff(&st, 1.0, 1.0 + (real_T)tIdx, x->
          data[emlrtDynamicBoundsCheckFastR2012b(j, 1, i31, &ld_emlrtBCI, sp) -
          1], t->data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i32, &md_emlrtBCI,
          sp) - 1], gridT) * 0.0) - Bcoeff(&i_st, 0.0, 1.0 + (real_T)tIdx,
          x->data[emlrtDynamicBoundsCheckFastR2012b(j, 1, ixstart, &nd_emlrtBCI,
          sp) - 1], t->data[emlrtDynamicBoundsCheckFastR2012b(i, 1, ndbl,
          &od_emlrtBCI, sp) - 1], gridT) * 0.0) - Bcoeff(&i_st, 1.0, 1.0 +
          (real_T)tIdx, x->data[emlrtDynamicBoundsCheckFastR2012b(j, 1, b_apnd,
          &pd_emlrtBCI, sp) - 1], t->data[emlrtDynamicBoundsCheckFastR2012b(i, 1,
          deltaij, &qd_emlrtBCI, sp) - 1], gridT) * 0.0) + d_Dcoeff(&j_st, x,
          1.0 + (real_T)tIdx, x->data[emlrtDynamicBoundsCheckFastR2012b(j, 1, k,
          &rd_emlrtBCI, sp) - 1], t->data[emlrtDynamicBoundsCheckFastR2012b(i, 1,
          i33, &sd_emlrtBCI, sp) - 1], gridT, d_f) * r->
          data[emlrtDynamicBoundsCheckFastR2012b(i35, 1, i34, &td_emlrtBCI, sp)
          - 1];
        tIdx++;
        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
      }

      ixstart = 0;
      while (ixstart <= (int32_T)numSpacePoints - 1) {
        /*  space index */
        i29 = x->size[1];
        i30 = t->size[1];
        i31 = u0->size[1];
        i32 = 1 + ixstart;
        st.site = &df_emlrtRSI;
        sSpace += b_Ccoeff(&st, 1.0 + (real_T)ixstart, x->
                           data[emlrtDynamicBoundsCheckFastR2012b(j, 1, i29,
          &gd_emlrtBCI, sp) - 1], t->data[emlrtDynamicBoundsCheckFastR2012b(i, 1,
          i30, &hd_emlrtBCI, sp) - 1], gridT) * u0->
          data[emlrtDynamicBoundsCheckFastR2012b(i32, 1, i31, &id_emlrtBCI, sp)
          - 1];
        ixstart++;
        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
      }

      i29 = u->size[0];
      i30 = u->size[1];
      i31 = gridX->size[1];
      u->data[(emlrtDynamicBoundsCheckFastR2012b(i, 1, i29, &dd_emlrtBCI, sp) +
               u->size[0] * (emlrtDynamicBoundsCheckFastR2012b(j, 1, i30,
                 &ed_emlrtBCI, sp) - 1)) - 1] = (midPoint + sSpace) *
        gridX->data[emlrtDynamicBoundsCheckFastR2012b(j, 1, i31, &fd_emlrtBCI,
        sp) - 1];
      i++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    j++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&d_f);
  emxFree_real_T(&x);
  emxFree_real_T(&gridX);
  emxFree_real_T(&gridT);
  emxFree_real_T(&u0);
  emxFree_real_T(&f);

  /*  plot source, signal and solution */
  if (plotFlag) {
    st.site = &ef_emlrtRSI;
    PlotResults(&st, t, sigIn, u, r);
  }

  emxFree_real_T(&t);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (TestBemHeatEq_optimized.c) */

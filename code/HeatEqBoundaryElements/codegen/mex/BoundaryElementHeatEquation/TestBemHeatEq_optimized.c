/*
 * TestBemHeatEq_optimized.c
 *
 * Code generation for function 'TestBemHeatEq_optimized'
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
#include "BoundaryElementHeatEquation_emxutil.h"
#include "eml_error.h"
#include "mrdivide.h"
#include "mldivide.h"
#include "sum.h"
#include "BoundaryElementHeatEquation_mexutil.h"
#include "BoundaryElementHeatEquation_data.h"

/* Variable Definitions */
static emlrtRSInfo ce_emlrtRSI = { 29, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtRSInfo de_emlrtRSI = { 33, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtRSInfo ee_emlrtRSI = { 87, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtRSInfo fe_emlrtRSI = { 88, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtRSInfo ge_emlrtRSI = { 90, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtRSInfo he_emlrtRSI = { 91, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtRSInfo ie_emlrtRSI = { 93, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtRSInfo je_emlrtRSI = { 94, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtRSInfo ke_emlrtRSI = { 99, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtRSInfo le_emlrtRSI = { 100, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtRSInfo me_emlrtRSI = { 108, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtRSInfo ne_emlrtRSI = { 109, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtRSInfo oe_emlrtRSI = { 122, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtRSInfo pe_emlrtRSI = { 123, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtRSInfo qe_emlrtRSI = { 124, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtRSInfo re_emlrtRSI = { 125, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtRSInfo se_emlrtRSI = { 127, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtRSInfo te_emlrtRSI = { 130, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtRSInfo ue_emlrtRSI = { 132, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtRSInfo ve_emlrtRSI = { 135, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtRSInfo we_emlrtRSI = { 137, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtRSInfo xe_emlrtRSI = { 139, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtRSInfo ye_emlrtRSI = { 141, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtRSInfo af_emlrtRSI = { 154, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtRSInfo bf_emlrtRSI = { 155, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtRSInfo cf_emlrtRSI = { 156, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtRSInfo df_emlrtRSI = { 160, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtRSInfo ef_emlrtRSI = { 166, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

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

static emlrtRTEInfo u_emlrtRTEI = { 1, 17, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtRTEInfo v_emlrtRTEI = { 284, 1, "colon",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRTEInfo w_emlrtRTEI = { 33, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtRTEInfo x_emlrtRTEI = { 34, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtRTEInfo y_emlrtRTEI = { 78, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtRTEInfo ab_emlrtRTEI = { 79, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtRTEInfo bb_emlrtRTEI = { 80, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtRTEInfo cb_emlrtRTEI = { 81, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtRTEInfo db_emlrtRTEI = { 105, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtRTEInfo eb_emlrtRTEI = { 118, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtRTEInfo fb_emlrtRTEI = { 119, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtRTEInfo gb_emlrtRTEI = { 123, 5, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtRTEInfo hb_emlrtRTEI = { 124, 5, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtRTEInfo ib_emlrtRTEI = { 135, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtRTEInfo jb_emlrtRTEI = { 137, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtRTEInfo kb_emlrtRTEI = { 139, 1, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtBCInfo gc_emlrtBCI = { -1, -1, 1, 1, "", "xgemm",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xgemm.p",
  0 };

static emlrtBCInfo hc_emlrtBCI = { -1, -1, 160, 48, "t",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m", 0 };

static emlrtBCInfo ic_emlrtBCI = { -1, -1, 156, 50, "f",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m", 0 };

static emlrtBCInfo jc_emlrtBCI = { -1, -1, 156, 37, "t",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m", 0 };

static emlrtBCInfo kc_emlrtBCI = { -1, -1, 155, 95, "h1j",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m", 0 };

static emlrtBCInfo lc_emlrtBCI = { -1, -1, 155, 49, "h0j",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m", 0 };

static emlrtBCInfo mc_emlrtBCI = { -1, -1, 154, 106, "q1j",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m", 0 };

static emlrtBCInfo nc_emlrtBCI = { -1, -1, 154, 60, "q0j",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m", 0 };

static emlrtECInfo l_emlrtECI = { 2, 141, 8, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtECInfo m_emlrtECI = { -1, 137, 5, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtECInfo n_emlrtECI = { -1, 132, 5, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtECInfo o_emlrtECI = { -1, 127, 5, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtECInfo p_emlrtECI = { 2, 132, 23, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtECInfo q_emlrtECI = { 2, 131, 11, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtECInfo r_emlrtECI = { 2, 131, 24, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtECInfo s_emlrtECI = { 2, 130, 11, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtECInfo t_emlrtECI = { 2, 130, 26, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtECInfo u_emlrtECI = { 2, 127, 26, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtBCInfo oc_emlrtBCI = { -1, -1, 99, 21, "D",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m", 0 };

static emlrtECInfo v_emlrtECI = { 2, 126, 11, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtECInfo w_emlrtECI = { 2, 126, 24, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtECInfo x_emlrtECI = { 2, 125, 12, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtECInfo y_emlrtECI = { 2, 125, 27, "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m" };

static emlrtBCInfo pc_emlrtBCI = { -1, -1, 100, 51, "f",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m", 0 };

static emlrtBCInfo qc_emlrtBCI = { -1, -1, 99, 51, "f",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m", 0 };

static emlrtBCInfo rc_emlrtBCI = { -1, -1, 36, 28, "gridT",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m", 0 };

static emlrtBCInfo sc_emlrtBCI = { -1, -1, 36, 16, "gridT",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m", 0 };

static emlrtBCInfo tc_emlrtBCI = { -1, -1, 29, 14, "E",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m", 0 };

static emlrtBCInfo uc_emlrtBCI = { -1, -1, 162, 11, "u",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m", 0 };

static emlrtBCInfo vc_emlrtBCI = { -1, -1, 154, 48, "t",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m", 0 };

static emlrtBCInfo wc_emlrtBCI = { -1, -1, 154, 93, "t",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m", 0 };

static emlrtBCInfo xc_emlrtBCI = { -1, -1, 155, 37, "t",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m", 0 };

static emlrtBCInfo yc_emlrtBCI = { -1, -1, 155, 82, "t",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m", 0 };

static emlrtBCInfo ad_emlrtBCI = { -1, -1, 156, 56, "r",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m", 0 };

static emlrtBCInfo bd_emlrtBCI = { -1, -1, 108, 38, "t",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m", 0 };

static emlrtBCInfo cd_emlrtBCI = { -1, -1, 109, 38, "t",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m", 0 };

static emlrtBCInfo dd_emlrtBCI = { -1, -1, 108, 11, "C",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m", 0 };

static emlrtBCInfo ed_emlrtBCI = { -1, -1, 87, 48, "t",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m", 0 };

static emlrtBCInfo fd_emlrtBCI = { -1, -1, 87, 74, "t",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m", 0 };

static emlrtBCInfo gd_emlrtBCI = { -1, -1, 88, 48, "t",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m", 0 };

static emlrtBCInfo hd_emlrtBCI = { -1, -1, 88, 74, "t",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m", 0 };

static emlrtBCInfo id_emlrtBCI = { -1, -1, 87, 11, "A",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m", 0 };

static emlrtBCInfo jd_emlrtBCI = { -1, -1, 87, 21, "A",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m", 0 };

static emlrtBCInfo kd_emlrtBCI = { -1, -1, 90, 30, "t",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m", 0 };

static emlrtBCInfo ld_emlrtBCI = { -1, -1, 91, 30, "t",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m", 0 };

static emlrtBCInfo md_emlrtBCI = { -1, -1, 93, 48, "t",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m", 0 };

static emlrtBCInfo nd_emlrtBCI = { -1, -1, 94, 48, "t",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m", 0 };

static emlrtBCInfo od_emlrtBCI = { -1, -1, 93, 11, "B",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m", 0 };

static emlrtBCInfo pd_emlrtBCI = { -1, -1, 93, 21, "B",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m", 0 };

static emlrtBCInfo qd_emlrtBCI = { -1, -1, 96, 15, "Bstar",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m", 0 };

static emlrtBCInfo rd_emlrtBCI = { -1, -1, 96, 25, "Bstar",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m", 0 };

static emlrtBCInfo sd_emlrtBCI = { -1, -1, 99, 38, "t",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m", 0 };

static emlrtBCInfo td_emlrtBCI = { -1, -1, 100, 38, "t",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m", 0 };

static emlrtBCInfo ud_emlrtBCI = { -1, -1, 99, 11, "D",
  "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m", 0 };

static emlrtBCInfo vd_emlrtBCI = { -1, -1, 36, 5, "t", "TestBemHeatEq_optimized",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\TestBemHeatEq_optimized.m", 0 };

static emlrtRSInfo kg_emlrtRSI = { 404, "colon",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo lg_emlrtRSI = { 81, "eml_min_or_max",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRSInfo mg_emlrtRSI = { 38, "eml_min_or_max",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRSInfo vg_emlrtRSI = { 405, "colon",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo wg_emlrtRSI = { 82, "eml_min_or_max",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRSInfo xg_emlrtRSI = { 41, "eml_min_or_max",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

/* Function Definitions */
void TestBemHeatEq_optimized(const emlrtStack *sp, const emxArray_real_T *sigIn,
  real_T regOrder, real_T lambda, boolean_T plotFlag, emxArray_real_T *u,
  emxArray_real_T *r)
{
  emxArray_real_T *b;
  emxArray_real_T *b_u;
  emxArray_real_T *c_u;
  boolean_T b6;
  boolean_T b7;
  int32_T ixstart;
  int32_T i30;
  int32_T i31;
  boolean_T b8;
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

  real_T sTime;
  int32_T ix;
  boolean_T exitg1;
  real_T u0[3];
  uint32_T ndbl;
  int32_T apnd;
  const mxArray *c_y;
  static const int32_T iv44[2] = { 1, 21 };

  char_T cv51[21];
  static const char_T cv52[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  emxArray_real_T *gridT;
  int32_T k;
  emxArray_real_T *t;
  real_T x[3];
  emxArray_real_T *A;
  emxArray_real_T *B;
  emxArray_real_T *Bstar;
  emxArray_real_T *D;
  int32_T j;
  real_T vals;
  real_T d4;
  real_T d5;
  real_T d6;
  real_T sSpace;
  emxArray_real_T *C;
  real_T dv0[4];
  real_T dv1[4];
  emxArray_real_T *s1;
  emxArray_real_T *s2;
  emxArray_real_T *b1s;
  emxArray_real_T *b_C;
  emxArray_int32_T *r11;
  emxArray_int32_T *r12;
  emxArray_real_T *r13;
  emxArray_real_T *r14;
  emxArray_real_T *b1k;
  emxArray_real_T *X;
  emxArray_real_T *regTerm;
  emxArray_real_T *r15;
  emxArray_real_T *c_C;
  emxArray_real_T *d_C;
  emxArray_real_T *b_regTerm;
  emxArray_real_T *b_A;
  emxArray_real_T *c_regTerm;
  emxArray_real_T *c_A;
  int32_T b_b1k[2];
  int32_T e_C[2];
  int32_T d_regTerm[2];
  int32_T iv45[2];
  const mxArray *d_y;
  static const int32_T iv46[2] = { 1, 45 };

  char_T cv53[45];
  static const char_T cv54[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *e_y;
  static const int32_T iv47[2] = { 1, 21 };

  static const char_T cv55[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  int32_T i32;
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
  const mxArray *f_y;
  static const int32_T iv49[2] = { 1, 45 };

  const mxArray *g_y;
  static const int32_T iv50[2] = { 1, 21 };

  real_T eta[3];
  int32_T iv51[1];
  emxArray_real_T *Y;
  const mxArray *h_y;
  static const int32_T iv52[2] = { 1, 45 };

  const mxArray *i_y;
  static const int32_T iv53[2] = { 1, 21 };

  const mxArray *j_y;
  static const int32_T iv54[2] = { 1, 45 };

  const mxArray *k_y;
  static const int32_T iv55[2] = { 1, 21 };

  emxArray_real_T *f_C;
  int32_T stIdx;
  real_T a[3];
  int32_T i33;
  int32_T i34;
  int32_T i35;
  const mxArray *fig = NULL;
  const mxArray *l_y;
  static const int32_T iv56[2] = { 1, 6 };

  char_T cv56[6];
  static const char_T cv57[6] = { 'P', 'a', 'r', 'e', 'n', 't' };

  const mxArray *m_y;
  static const int32_T iv57[2] = { 1, 8 };

  char_T cv58[8];
  static const char_T cv59[8] = { 'n', 'e', 'x', 't', 'P', 'l', 'o', 't' };

  const mxArray *n_y;
  static const int32_T iv58[2] = { 1, 3 };

  char_T cv60[3];
  static const char_T cv61[3] = { 'A', 'd', 'd' };

  const mxArray *ax = NULL;
  const mxArray *o_y;
  static const int32_T iv59[2] = { 1, 5 };

  char_T cv62[5];
  static const char_T cv63[5] = { 'X', 'D', 'a', 't', 'a' };

  const mxArray *p_y;
  static const int32_T iv60[2] = { 1, 5 };

  static const char_T cv64[5] = { 'Y', 'D', 'a', 't', 'a' };

  const mxArray *q_y;
  real_T *pData;
  const mxArray *r_y;
  static const int32_T iv61[2] = { 1, 11 };

  char_T cv65[11];
  static const char_T cv66[11] = { 'D', 'i', 's', 'p', 'l', 'a', 'y', 'N', 'a',
    'm', 'e' };

  const mxArray *s_y;
  static const int32_T iv62[2] = { 1, 6 };

  static const char_T cv67[6] = { 'S', 'o', 'u', 'r', 'c', 'e' };

  const mxArray *t_y;
  static const int32_T iv63[2] = { 1, 5 };

  static const char_T cv68[5] = { 'C', 'o', 'l', 'o', 'r' };

  const mxArray *u_y;
  const mxArray *v_y;
  static const int32_T iv64[2] = { 1, 6 };

  const mxArray *w_y;
  static const int32_T iv65[2] = { 1, 5 };

  const mxArray *x_y;
  static const int32_T iv66[2] = { 1, 5 };

  const mxArray *y_y;
  static const int32_T iv67[2] = { 1, 11 };

  const mxArray *ab_y;
  static const int32_T iv68[2] = { 1, 11 };

  static const char_T cv69[11] = { 'h', 'e', 'a', 't', ' ', 'e', 'n', 'e', 'r',
    'g', 'y' };

  const mxArray *bb_y;
  static const int32_T iv69[2] = { 1, 5 };

  const mxArray *cb_y;
  const mxArray *db_y;
  static const int32_T iv70[2] = { 1, 6 };

  static const char_T cv70[6] = { 'p', 'a', 'r', 'e', 'n', 't' };

  const mxArray *eb_y;
  static const int32_T iv71[2] = { 1, 5 };

  const mxArray *fb_y;
  static const int32_T iv72[2] = { 1, 5 };

  const mxArray *gb_y;
  const mxArray *hb_y;
  static const int32_T iv73[2] = { 1, 11 };

  const mxArray *ib_y;
  static const int32_T iv74[2] = { 1, 4 };

  char_T cv71[4];
  static const char_T cv72[4] = { 'u', '(', 't', ')' };

  const mxArray *jb_y;
  static const int32_T iv75[2] = { 1, 5 };

  const mxArray *kb_y;
  const mxArray *lb_y;
  static const int32_T iv76[2] = { 1, 6 };

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
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &b, 2, &u_emlrtRTEI, true);
  b_emxInit_real_T(sp, &b_u, 1, &u_emlrtRTEI, true);
  b_emxInit_real_T(sp, &c_u, 1, &u_emlrtRTEI, true);
  b6 = false;
  b7 = false;

  /*  Solve the inveerse heat equation with an unknown source */
  /*  u_t(x,t) = ku_{xx}(x,y) +r(t)*f(x,t) */
  /*  with 0<=x<=1, 0<=t<=T */
  /*  subject to the boundary conditions u(0,t) = u(1,t) */
  /*  and u_x(0,t)+alpha*u(0,t)=0 */
  /*  and initial condition */
  /*  u(x,0) = phi(x) =u0, 0<=x<=1 */
  /*  In this problem we take f(x,t) =1 for all x and t */
  /*  The convention for most matrices is that rows are time, columns are space */
  /*  for the boundary condition */
  /*  lambda   = 1.7; % regularization constant (affects smoothness of source solution) */
  /*  regOrder = 2;  % Tikhonov regularization term order, [0,1,or 2] */
  /*  if ~exist('sigIn','var') */
  /*      N0     = 3;   % space points */
  /*      N      = 150; % time points */
  /*      % test signal */
  /*      sigIn      = (3*cos((1:N) *pi/8)./N+0.5*randn(1,N));% a vector of N points is the integral of the solution over the space */
  /*      E          = sigIn; */
  /*  else */
  /*  space points; */
  /*  int(u(x,t)dx) is a time function of size 1xN */
  /*  time points */
  /*  end */
  ixstart = sigIn->size[1];
  i30 = b->size[0] * b->size[1];
  b->size[0] = ixstart;
  b->size[1] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)b, i30, (int32_T)sizeof(real_T),
                    &u_emlrtRTEI);
  ixstart = sigIn->size[1] * 3;
  for (i30 = 0; i30 < ixstart; i30++) {
    b->data[i30] = 1.0;
  }

  /*  function of N time points over N0 space points */
  i30 = (int32_T)muDoubleScalarMin(10.0, sigIn->size[1]);
  if (1 > i30) {
    i30 = 0;
  } else {
    i31 = sigIn->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i31, &tc_emlrtBCI, sp);
    i31 = sigIn->size[1];
    i30 = emlrtDynamicBoundsCheckFastR2012b(i30, 1, i31, &tc_emlrtBCI, sp);
  }

  st.site = &ce_emlrtRSI;
  b_st.site = &ff_emlrtRSI;
  c_st.site = &gf_emlrtRSI;
  if ((i30 == 1) || (i30 != 1)) {
    b8 = true;
  } else {
    b8 = false;
  }

  if (b8) {
  } else {
    y = NULL;
    m10 = emlrtCreateCharArray(2, iv42);
    for (i = 0; i < 36; i++) {
      cv47[i] = cv48[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 36, m10, cv47);
    emlrtAssign(&y, m10);
    d_st.site = &mg_emlrtRSI;
    e_st.site = &xg_emlrtRSI;
    error(&d_st, message(&e_st, y, &bb_emlrtMCI), &cb_emlrtMCI);
  }

  if (i30 > 0) {
  } else {
    b_y = NULL;
    m10 = emlrtCreateCharArray(2, iv43);
    for (i = 0; i < 39; i++) {
      cv49[i] = cv50[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 39, m10, cv49);
    emlrtAssign(&b_y, m10);
    d_st.site = &lg_emlrtRSI;
    e_st.site = &wg_emlrtRSI;
    error(&d_st, message(&e_st, b_y, &db_emlrtMCI), &eb_emlrtMCI);
  }

  d_st.site = &hf_emlrtRSI;
  ixstart = 1;
  sTime = sigIn->data[0];
  if (i30 > 1) {
    if (muDoubleScalarIsNaN(sTime)) {
      f_st.site = &jf_emlrtRSI;
      ix = 2;
      exitg1 = false;
      while ((!exitg1) && (ix <= i30)) {
        ixstart = ix;
        if (!muDoubleScalarIsNaN(sigIn->data[ix - 1])) {
          sTime = sigIn->data[ix - 1];
          exitg1 = true;
        } else {
          ix++;
        }
      }
    }

    if (ixstart < i30) {
      f_st.site = &if_emlrtRSI;
      for (ix = ixstart + 1; ix <= i30; ix++) {
        if (sigIn->data[ix - 1] > sTime) {
          sTime = sigIn->data[ix - 1];
        }
      }
    }
  }

  for (i30 = 0; i30 < 3; i30++) {
    u0[i30] = sTime;
  }

  /*  is the phi function */
  /*  Discretize the time and space domain */
  /*  max time; */
  st.site = &de_emlrtRSI;
  b_st.site = &rb_emlrtRSI;
  c_st.site = &kf_emlrtRSI;
  ndbl = (uint32_T)muDoubleScalarFloor((real_T)sigIn->size[1] + 0.5);
  apnd = (int32_T)ndbl;
  ixstart = (int32_T)ndbl - sigIn->size[1];
  if (muDoubleScalarAbs(ixstart) < 4.4408920985006262E-16 * (real_T)sigIn->size
      [1]) {
    ndbl++;
    apnd = sigIn->size[1];
  } else if (ixstart > 0) {
    apnd = (int32_T)ndbl - 1;
  } else {
    ndbl++;
  }

  ix = (int32_T)ndbl - 1;
  d_st.site = &lf_emlrtRSI;
  if (!(2147483647U < ndbl)) {
  } else {
    c_y = NULL;
    m10 = emlrtCreateCharArray(2, iv44);
    for (i = 0; i < 21; i++) {
      cv51[i] = cv52[i];
    }

    emlrtInitCharArrayR2013a(&d_st, 21, m10, cv51);
    emlrtAssign(&c_y, m10);
    f_st.site = &kg_emlrtRSI;
    g_st.site = &vg_emlrtRSI;
    error(&f_st, message(&g_st, c_y, &k_emlrtMCI), &l_emlrtMCI);
  }

  emxInit_real_T(&d_st, &gridT, 2, &w_emlrtRTEI, true);
  i30 = gridT->size[0] * gridT->size[1];
  gridT->size[0] = 1;
  gridT->size[1] = ix + 1;
  emxEnsureCapacity(&c_st, (emxArray__common *)gridT, i30, (int32_T)sizeof
                    (real_T), &v_emlrtRTEI);
  if (ix + 1 > 0) {
    gridT->data[0] = 0.0;
    if (ix + 1 > 1) {
      gridT->data[ix] = apnd;
      i30 = ix + (ix < 0);
      if (i30 >= 0) {
        ixstart = (int32_T)((uint32_T)i30 >> 1);
      } else {
        ixstart = ~(int32_T)((uint32_T)~i30 >> 1);
      }

      d_st.site = &mf_emlrtRSI;
      for (k = 1; k < ixstart; k++) {
        gridT->data[k] = k;
        gridT->data[ix - k] = apnd - k;
      }

      if (ixstart << 1 == ix) {
        gridT->data[ixstart] = (real_T)apnd / 2.0;
      } else {
        gridT->data[ixstart] = ixstart;
        gridT->data[ixstart + 1] = apnd - ixstart;
      }
    }
  }

  sTime = (real_T)sigIn->size[1] / (real_T)sigIn->size[1];
  i30 = gridT->size[0] * gridT->size[1];
  gridT->size[0] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)gridT, i30, (int32_T)sizeof(real_T),
                    &u_emlrtRTEI);
  ixstart = gridT->size[0];
  ix = gridT->size[1];
  ixstart *= ix;
  for (i30 = 0; i30 < ixstart; i30++) {
    gridT->data[i30] *= sTime;
  }

  emxInit_real_T(sp, &t, 2, &x_emlrtRTEI, true);

  /*  N+1 points */
  i30 = t->size[0] * t->size[1];
  t->size[0] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)t, i30, (int32_T)sizeof(real_T),
                    &u_emlrtRTEI);
  ixstart = sigIn->size[1];
  i30 = t->size[0] * t->size[1];
  t->size[1] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)t, i30, (int32_T)sizeof(real_T),
                    &u_emlrtRTEI);
  ixstart = sigIn->size[1];
  for (i30 = 0; i30 < ixstart; i30++) {
    t->data[i30] = 0.0;
  }

  ixstart = 0;
  while (ixstart <= sigIn->size[1] - 1) {
    i30 = gridT->size[1];
    i31 = ixstart + 1;
    emlrtDynamicBoundsCheckFastR2012b(i31, 1, i30, &sc_emlrtBCI, sp);
    i30 = gridT->size[1];
    i31 = (int32_T)((1.0 + (real_T)ixstart) + 1.0);
    emlrtDynamicBoundsCheckFastR2012b(i31, 1, i30, &rc_emlrtBCI, sp);
    i30 = t->size[1];
    i31 = 1 + ixstart;
    t->data[emlrtDynamicBoundsCheckFastR2012b(i31, 1, i30, &vd_emlrtBCI, sp) - 1]
      = (gridT->data[ixstart] + gridT->data[(int32_T)((1.0 + (real_T)ixstart) +
          1.0) - 1]) / 2.0;
    ixstart++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  for (ixstart = 0; ixstart < 3; ixstart++) {
    x[ixstart] = (0.33333333333333331 * (1.0 + (real_T)ixstart) +
                  0.33333333333333331 * (real_T)ixstart) / 2.0;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxInit_real_T(sp, &A, 2, &y_emlrtRTEI, true);

  /*  Determine the boundary and initial functions */
  /*  u(0,t) = h0j */
  /*  u(1,t) = h1j */
  /*  du/dn(0,t) = q0j */
  /* du/dn(1,t) = q1j */
  /* =========================== */
  /*  Calculate the matrix for the Acoeff,Bcoeff, BStar, D, C to be used later */
  /*  for A,B,C,D */
  /*  the spatial domain for the calculation is the [0, x, 1] */
  /*  xPoints   = [0, x, 1]; % add boundary points to the intermidiate ones */
  /*  Nx        = numel(xPoints); */
  /*  aCoeffMat0 = zeros(N,Nx); */
  /*  aCoeffMat1 = zeros(N,Nx); */
  /*  bCoeffMat0 = zeros(N,Nx); */
  /*  bCoeffMat1 = zeros(N,Nx); */
  /*  for j=1:numel(xPoints) */
  /*      for i=1:N */
  /*          aCoeffMat0(i,j) = Acoeff(0,xPoints(j),t(i),gridT(i:i+1)); */
  /*          aCoeffMat1(i,j) = Acoeff(1,xPoints(j),t(i),gridT(i:i+1)); */
  /*          bCoeffMat0(i,j) = Bcoeff(0,xPoints(j),t(i),gridT(i:i+1)); */
  /*          bCoeffMat1(i,j) = Bcoeff(1,xPoints(j),t(i),gridT(i:i+1)); */
  /*      end */
  /*  end */
  /*  Calculate the Boundary Elements */
  /*  Calculate A and B, B*, and D */
  ixstart = (int32_T)(2.0 * (real_T)sigIn->size[1]);
  i30 = A->size[0] * A->size[1];
  A->size[0] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)A, i30, (int32_T)sizeof(real_T),
                    &u_emlrtRTEI);
  ixstart = (int32_T)(2.0 * (real_T)sigIn->size[1]);
  i30 = A->size[0] * A->size[1];
  A->size[1] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)A, i30, (int32_T)sizeof(real_T),
                    &u_emlrtRTEI);
  ixstart = (int32_T)(2.0 * (real_T)sigIn->size[1]) * (int32_T)(2.0 * (real_T)
    sigIn->size[1]);
  for (i30 = 0; i30 < ixstart; i30++) {
    A->data[i30] = 0.0;
  }

  emxInit_real_T(sp, &B, 2, &ab_emlrtRTEI, true);
  ixstart = (int32_T)(2.0 * (real_T)sigIn->size[1]);
  i30 = B->size[0] * B->size[1];
  B->size[0] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)B, i30, (int32_T)sizeof(real_T),
                    &u_emlrtRTEI);
  ixstart = (int32_T)(2.0 * (real_T)sigIn->size[1]);
  i30 = B->size[0] * B->size[1];
  B->size[1] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)B, i30, (int32_T)sizeof(real_T),
                    &u_emlrtRTEI);
  ixstart = (int32_T)(2.0 * (real_T)sigIn->size[1]) * (int32_T)(2.0 * (real_T)
    sigIn->size[1]);
  for (i30 = 0; i30 < ixstart; i30++) {
    B->data[i30] = 0.0;
  }

  emxInit_real_T(sp, &Bstar, 2, &bb_emlrtRTEI, true);
  ixstart = (int32_T)(2.0 * (real_T)sigIn->size[1]);
  i30 = Bstar->size[0] * Bstar->size[1];
  Bstar->size[0] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)Bstar, i30, (int32_T)sizeof(real_T),
                    &u_emlrtRTEI);
  ixstart = (int32_T)(2.0 * (real_T)sigIn->size[1]);
  i30 = Bstar->size[0] * Bstar->size[1];
  Bstar->size[1] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)Bstar, i30, (int32_T)sizeof(real_T),
                    &u_emlrtRTEI);
  ixstart = (int32_T)(2.0 * (real_T)sigIn->size[1]) * (int32_T)(2.0 * (real_T)
    sigIn->size[1]);
  for (i30 = 0; i30 < ixstart; i30++) {
    Bstar->data[i30] = 0.0;
  }

  emxInit_real_T(sp, &D, 2, &cb_emlrtRTEI, true);
  ixstart = (int32_T)(2.0 * (real_T)sigIn->size[1]);
  i30 = D->size[0] * D->size[1];
  D->size[0] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)D, i30, (int32_T)sizeof(real_T),
                    &u_emlrtRTEI);
  ixstart = sigIn->size[1];
  i30 = D->size[0] * D->size[1];
  D->size[1] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)D, i30, (int32_T)sizeof(real_T),
                    &u_emlrtRTEI);
  ixstart = (int32_T)(2.0 * (real_T)sigIn->size[1]) * sigIn->size[1];
  for (i30 = 0; i30 < ixstart; i30++) {
    D->data[i30] = 0.0;
  }

  j = 0;
  while (j <= sigIn->size[1] - 1) {
    /*  time */
    i = 1;
    while (i - 1 <= sigIn->size[1] - 1) {
      /*  time */
      apnd = (i == 1 + j);

      /*          A(2*i-1:2*i,2*j-1:2*j) = [aCoeffMat0(1,i), aCoeffMat1(1,i);... */
      /*                                    aCoeffMat0(end,i), aCoeffMat1(end,i)]; */
      vals = 2.0 * (1.0 + (real_T)(i - 1));
      ixstart = A->size[0];
      d4 = 2.0 * (1.0 + (real_T)j);
      ix = A->size[1];
      i30 = t->size[1];
      st.site = &ee_emlrtRSI;
      d5 = Acoeff(&st, 0.0, 1.0 + (real_T)j, 0.0, t->
                  data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i30, &ed_emlrtBCI,
        sp) - 1], gridT);
      i30 = t->size[1];
      st.site = &ee_emlrtRSI;
      d6 = Acoeff(&st, 1.0, 1.0 + (real_T)j, 0.0, t->
                  data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i30, &fd_emlrtBCI,
        sp) - 1], gridT);
      i30 = t->size[1];
      st.site = &fe_emlrtRSI;
      sTime = Acoeff(&st, 0.0, 1.0 + (real_T)j, 1.0, t->
                     data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i30,
        &gd_emlrtBCI, sp) - 1], gridT);
      i30 = t->size[1];
      st.site = &fe_emlrtRSI;
      sSpace = Acoeff(&st, 1.0, 1.0 + (real_T)j, 1.0, t->
                      data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i30,
        &hd_emlrtBCI, sp) - 1], gridT);
      i30 = (int32_T)(vals + -1.0);
      i31 = (int32_T)(d4 + -1.0);
      A->data[(emlrtDynamicBoundsCheckFastR2012b(i30, 1, ixstart, &id_emlrtBCI,
                sp) + A->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i31, 1, ix,
                 &jd_emlrtBCI, sp) - 1)) - 1] = d5;
      i30 = (int32_T)(vals + -1.0);
      i31 = (int32_T)d4;
      A->data[(emlrtDynamicBoundsCheckFastR2012b(i30, 1, ixstart, &id_emlrtBCI,
                sp) + A->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i31, 1, ix,
                 &jd_emlrtBCI, sp) - 1)) - 1] = d6;
      i30 = (int32_T)vals;
      i31 = (int32_T)(d4 + -1.0);
      A->data[(emlrtDynamicBoundsCheckFastR2012b(i30, 1, ixstart, &id_emlrtBCI,
                sp) + A->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i31, 1, ix,
                 &jd_emlrtBCI, sp) - 1)) - 1] = sTime;
      i30 = (int32_T)vals;
      i31 = (int32_T)d4;
      A->data[(emlrtDynamicBoundsCheckFastR2012b(i30, 1, ixstart, &id_emlrtBCI,
                sp) + A->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i31, 1, ix,
                 &jd_emlrtBCI, sp) - 1)) - 1] = sSpace;

      /*  temp terms */
      i30 = t->size[1];
      st.site = &ge_emlrtRSI;
      sTime = Bcoeff(&st, 1.0, 1.0 + (real_T)j, 0.0, t->
                     data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i30,
        &kd_emlrtBCI, sp) - 1], gridT);
      i30 = t->size[1];
      st.site = &he_emlrtRSI;
      sSpace = Bcoeff(&st, 1.0, 1.0 + (real_T)j, 1.0, t->
                      data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i30,
        &ld_emlrtBCI, sp) - 1], gridT);
      vals = 2.0 * (1.0 + (real_T)(i - 1));
      ixstart = B->size[0];
      d4 = 2.0 * (1.0 + (real_T)j);
      ix = B->size[1];
      i30 = t->size[1];
      st.site = &ie_emlrtRSI;
      d5 = Bcoeff(&st, 0.0, 1.0 + (real_T)j, 0.0, t->
                  data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i30, &md_emlrtBCI,
        sp) - 1], gridT);
      i30 = t->size[1];
      st.site = &je_emlrtRSI;
      d6 = Bcoeff(&st, 0.0, 1.0 + (real_T)j, 1.0, t->
                  data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i30, &nd_emlrtBCI,
        sp) - 1], gridT);
      i30 = (int32_T)(vals + -1.0);
      i31 = (int32_T)(d4 + -1.0);
      B->data[(emlrtDynamicBoundsCheckFastR2012b(i30, 1, ixstart, &od_emlrtBCI,
                sp) + B->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i31, 1, ix,
                 &pd_emlrtBCI, sp) - 1)) - 1] = d5 + 0.5 * (real_T)apnd;
      i30 = (int32_T)(vals + -1.0);
      i31 = (int32_T)d4;
      B->data[(emlrtDynamicBoundsCheckFastR2012b(i30, 1, ixstart, &od_emlrtBCI,
                sp) + B->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i31, 1, ix,
                 &pd_emlrtBCI, sp) - 1)) - 1] = sTime;
      i30 = (int32_T)vals;
      i31 = (int32_T)(d4 + -1.0);
      B->data[(emlrtDynamicBoundsCheckFastR2012b(i30, 1, ixstart, &od_emlrtBCI,
                sp) + B->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i31, 1, ix,
                 &pd_emlrtBCI, sp) - 1)) - 1] = d6;
      i30 = (int32_T)vals;
      i31 = (int32_T)d4;
      B->data[(emlrtDynamicBoundsCheckFastR2012b(i30, 1, ixstart, &od_emlrtBCI,
                sp) + B->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i31, 1, ix,
                 &pd_emlrtBCI, sp) - 1)) - 1] = sSpace + 0.5 * (real_T)apnd;
      vals = 2.0 * (1.0 + (real_T)(i - 1));
      ixstart = Bstar->size[0];
      d4 = 2.0 * (1.0 + (real_T)j);
      ix = Bstar->size[1];
      i30 = (int32_T)(vals + -1.0);
      i31 = (int32_T)(d4 + -1.0);
      Bstar->data[(emlrtDynamicBoundsCheckFastR2012b(i30, 1, ixstart,
        &qd_emlrtBCI, sp) + Bstar->size[0] * (emlrtDynamicBoundsCheckFastR2012b
        (i31, 1, ix, &rd_emlrtBCI, sp) - 1)) - 1] = sTime;
      i30 = (int32_T)(vals + -1.0);
      i31 = (int32_T)d4;
      Bstar->data[(emlrtDynamicBoundsCheckFastR2012b(i30, 1, ixstart,
        &qd_emlrtBCI, sp) + Bstar->size[0] * (emlrtDynamicBoundsCheckFastR2012b
        (i31, 1, ix, &rd_emlrtBCI, sp) - 1)) - 1] = -sTime;
      i30 = (int32_T)vals;
      i31 = (int32_T)(d4 + -1.0);
      Bstar->data[(emlrtDynamicBoundsCheckFastR2012b(i30, 1, ixstart,
        &qd_emlrtBCI, sp) + Bstar->size[0] * (emlrtDynamicBoundsCheckFastR2012b
        (i31, 1, ix, &rd_emlrtBCI, sp) - 1)) - 1] = sSpace + (real_T)apnd / 2.0;
      i30 = (int32_T)vals;
      i31 = (int32_T)d4;
      Bstar->data[(emlrtDynamicBoundsCheckFastR2012b(i30, 1, ixstart,
        &qd_emlrtBCI, sp) + Bstar->size[0] * (emlrtDynamicBoundsCheckFastR2012b
        (i31, 1, ix, &rd_emlrtBCI, sp) - 1)) - 1] = -sSpace - 0.5 * (real_T)apnd;
      ixstart = sigIn->size[1];
      emlrtDynamicBoundsCheckFastR2012b(i, 1, ixstart, &qc_emlrtBCI, sp);
      ixstart = sigIn->size[1];
      emlrtDynamicBoundsCheckFastR2012b(i, 1, ixstart, &pc_emlrtBCI, sp);
      vals = 2.0 * (1.0 + (real_T)(i - 1));
      ixstart = D->size[0];
      ix = D->size[1];
      i30 = 1 + j;
      emlrtDynamicBoundsCheckFastR2012b(i30, 1, ix, &oc_emlrtBCI, sp);
      i30 = t->size[1];
      st.site = &ke_emlrtRSI;
      d4 = b_Dcoeff(&st, x, 1.0 + (real_T)j, 0.0, t->
                    data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i30,
        &sd_emlrtBCI, sp) - 1], gridT);
      i30 = t->size[1];
      st.site = &le_emlrtRSI;
      d5 = b_Dcoeff(&st, x, 1.0 + (real_T)j, 1.0, t->
                    data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i30,
        &td_emlrtBCI, sp) - 1], gridT);
      i30 = (int32_T)(vals + -1.0);
      D->data[(emlrtDynamicBoundsCheckFastR2012b(i30, 1, ixstart, &ud_emlrtBCI,
                sp) + D->size[0] * j) - 1] = d4;
      i30 = (int32_T)vals;
      D->data[(emlrtDynamicBoundsCheckFastR2012b(i30, 1, ixstart, &ud_emlrtBCI,
                sp) + D->size[0] * j) - 1] = d5;
      i++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    j++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxInit_real_T(sp, &C, 2, &db_emlrtRTEI, true);

  /*  Calculate C */
  ixstart = (int32_T)(2.0 * (real_T)sigIn->size[1]);
  i30 = C->size[0] * C->size[1];
  C->size[0] = ixstart;
  C->size[1] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)C, i30, (int32_T)sizeof(real_T),
                    &u_emlrtRTEI);
  ixstart = (int32_T)(2.0 * (real_T)sigIn->size[1]) * 3;
  for (i30 = 0; i30 < ixstart; i30++) {
    C->data[i30] = 0.0;
  }

  for (k = 0; k < 3; k++) {
    /*  space */
    i = 0;
    while (i <= sigIn->size[1] - 1) {
      /*  time */
      if (!b7) {
        for (i30 = 0; i30 < 4; i30++) {
          dv0[i30] = 0.33333333333333331 * (real_T)i30;
        }

        b7 = true;
      }

      if (!b6) {
        for (i30 = 0; i30 < 4; i30++) {
          dv1[i30] = 0.33333333333333331 * (real_T)i30;
        }

        b6 = true;
      }

      vals = 2.0 * (1.0 + (real_T)i);
      ix = C->size[0];
      i30 = t->size[1];
      st.site = &me_emlrtRSI;
      d4 = b_Ccoeff(&st, 1.0 + (real_T)k, 0.0, t->
                    data[emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, i30,
        &bd_emlrtBCI, sp) - 1], dv0);
      i30 = t->size[1];
      st.site = &ne_emlrtRSI;
      d5 = b_Ccoeff(&st, 1.0 + (real_T)k, 1.0, t->
                    data[emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, i30,
        &cd_emlrtBCI, sp) - 1], dv1);
      i30 = (int32_T)(vals + -1.0);
      C->data[(emlrtDynamicBoundsCheckFastR2012b(i30, 1, ix, &dd_emlrtBCI, sp) +
               C->size[0] * k) - 1] = d4;
      i30 = (int32_T)vals;
      C->data[(emlrtDynamicBoundsCheckFastR2012b(i30, 1, ix, &dd_emlrtBCI, sp) +
               C->size[0] * k) - 1] = d5;
      i++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  c_emxInit_real_T(sp, &s1, 3, &eb_emlrtRTEI, true);

  /*  Solve the equation */
  /*  r =((X'*X+lambda*regTerm)^-1)*X'Y, with r the source and X and Y are to be */
  /*  calculated */
  /*  Calculate the components of X and Y */
  ixstart = sigIn->size[1];
  i30 = s1->size[0] * s1->size[1] * s1->size[2];
  s1->size[0] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)s1, i30, (int32_T)sizeof(real_T),
                    &u_emlrtRTEI);
  ixstart = sigIn->size[1];
  i30 = s1->size[0] * s1->size[1] * s1->size[2];
  s1->size[1] = ixstart;
  s1->size[2] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)s1, i30, (int32_T)sizeof(real_T),
                    &u_emlrtRTEI);
  ixstart = sigIn->size[1] * sigIn->size[1] * 3;
  for (i30 = 0; i30 < ixstart; i30++) {
    s1->data[i30] = 0.0;
  }

  emxInit_real_T(sp, &s2, 2, &fb_emlrtRTEI, true);
  ixstart = sigIn->size[1];
  i30 = s2->size[0] * s2->size[1];
  s2->size[0] = ixstart;
  s2->size[1] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)s2, i30, (int32_T)sizeof(real_T),
                    &u_emlrtRTEI);
  ixstart = sigIn->size[1] * 3;
  for (i30 = 0; i30 < ixstart; i30++) {
    s2->data[i30] = 0.0;
  }

  emxInit_real_T(sp, &b1s, 2, &hb_emlrtRTEI, true);
  emxInit_real_T(sp, &b_C, 2, &u_emlrtRTEI, true);
  emxInit_int32_T(sp, &r11, 1, &u_emlrtRTEI, true);
  emxInit_int32_T(sp, &r12, 1, &u_emlrtRTEI, true);
  emxInit_real_T(sp, &r13, 2, &u_emlrtRTEI, true);
  emxInit_real_T(sp, &r14, 2, &u_emlrtRTEI, true);
  emxInit_real_T(sp, &b1k, 2, &gb_emlrtRTEI, true);
  emxInit_real_T(sp, &X, 2, &ib_emlrtRTEI, true);
  emxInit_real_T(sp, &regTerm, 2, &kb_emlrtRTEI, true);
  b_emxInit_real_T(sp, &r15, 1, &u_emlrtRTEI, true);
  emxInit_real_T(sp, &c_C, 2, &u_emlrtRTEI, true);
  b_emxInit_real_T(sp, &d_C, 1, &u_emlrtRTEI, true);
  emxInit_real_T(sp, &b_regTerm, 2, &u_emlrtRTEI, true);
  emxInit_real_T(sp, &b_A, 2, &u_emlrtRTEI, true);
  emxInit_real_T(sp, &c_regTerm, 2, &u_emlrtRTEI, true);
  emxInit_real_T(sp, &c_A, 2, &u_emlrtRTEI, true);
  for (k = 0; k < 3; k++) {
    /*  space variable */
    /*  components of X */
    st.site = &oe_emlrtRSI;
    b_Aone(&st, 1.0 + (real_T)k, x, t, gridT, regTerm);
    st.site = &pe_emlrtRSI;
    b_Bone(&st, 1.0 + (real_T)k, x, t, gridT, b1k);
    st.site = &qe_emlrtRSI;
    b_BoneStar(&st, 1.0 + (real_T)k, x, t, gridT, b1s);
    for (i30 = 0; i30 < 2; i30++) {
      b_b1k[i30] = b1k->size[i30];
    }

    for (i30 = 0; i30 < 2; i30++) {
      e_C[i30] = b1s->size[i30];
    }

    emlrtSizeEqCheck2DFastR2012b(b_b1k, e_C, &y_emlrtECI, sp);
    i30 = r13->size[0] * r13->size[1];
    r13->size[0] = b1k->size[0];
    r13->size[1] = b1k->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)r13, i30, (int32_T)sizeof(real_T),
                      &u_emlrtRTEI);
    ixstart = b1k->size[0] * b1k->size[1];
    for (i30 = 0; i30 < ixstart; i30++) {
      r13->data[i30] = -(b1k->data[i30] - b1s->data[i30]);
    }

    for (i30 = 0; i30 < 2; i30++) {
      d_regTerm[i30] = regTerm->size[i30];
    }

    for (i30 = 0; i30 < 2; i30++) {
      iv45[i30] = r13->size[i30];
    }

    emlrtSizeEqCheck2DFastR2012b(d_regTerm, iv45, &x_emlrtECI, sp);
    for (i30 = 0; i30 < 2; i30++) {
      e_C[i30] = B->size[i30];
    }

    for (i30 = 0; i30 < 2; i30++) {
      b_b1k[i30] = Bstar->size[i30];
    }

    emlrtSizeEqCheck2DFastR2012b(e_C, b_b1k, &w_emlrtECI, sp);
    i30 = X->size[0] * X->size[1];
    X->size[0] = B->size[0];
    X->size[1] = B->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)X, i30, (int32_T)sizeof(real_T),
                      &u_emlrtRTEI);
    ixstart = B->size[0] * B->size[1];
    for (i30 = 0; i30 < ixstart; i30++) {
      X->data[i30] = -(B->data[i30] + Bstar->data[i30]);
    }

    for (i30 = 0; i30 < 2; i30++) {
      b_b1k[i30] = A->size[i30];
    }

    for (i30 = 0; i30 < 2; i30++) {
      e_C[i30] = X->size[i30];
    }

    emlrtSizeEqCheck2DFastR2012b(b_b1k, e_C, &v_emlrtECI, sp);
    i30 = c_regTerm->size[0] * c_regTerm->size[1];
    c_regTerm->size[0] = regTerm->size[0];
    c_regTerm->size[1] = regTerm->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)c_regTerm, i30, (int32_T)sizeof
                      (real_T), &u_emlrtRTEI);
    ixstart = regTerm->size[0] * regTerm->size[1];
    for (i30 = 0; i30 < ixstart; i30++) {
      c_regTerm->data[i30] = regTerm->data[i30] - r13->data[i30];
    }

    i30 = c_A->size[0] * c_A->size[1];
    c_A->size[0] = A->size[0];
    c_A->size[1] = A->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)c_A, i30, (int32_T)sizeof(real_T),
                      &u_emlrtRTEI);
    ixstart = A->size[0] * A->size[1];
    for (i30 = 0; i30 < ixstart; i30++) {
      c_A->data[i30] = A->data[i30] - X->data[i30];
    }

    st.site = &re_emlrtRSI;
    mrdivide(&st, c_regTerm, c_A, X);
    st.site = &se_emlrtRSI;
    i30 = X->size[0] * X->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)X, i30, (int32_T)sizeof(real_T),
                      &u_emlrtRTEI);
    ixstart = X->size[0];
    ix = X->size[1];
    ixstart *= ix;
    for (i30 = 0; i30 < ixstart; i30++) {
      X->data[i30] = -X->data[i30];
    }

    b_st.site = &gb_emlrtRSI;
    if (!(X->size[1] == D->size[0])) {
      if (((X->size[0] == 1) && (X->size[1] == 1)) || ((D->size[0] == 1) &&
           (D->size[1] == 1))) {
        d_y = NULL;
        m10 = emlrtCreateCharArray(2, iv46);
        for (i = 0; i < 45; i++) {
          cv53[i] = cv54[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 45, m10, cv53);
        emlrtAssign(&d_y, m10);
        c_st.site = &ig_emlrtRSI;
        h_st.site = &tg_emlrtRSI;
        error(&c_st, message(&h_st, d_y, &f_emlrtMCI), &g_emlrtMCI);
      } else {
        e_y = NULL;
        m10 = emlrtCreateCharArray(2, iv47);
        for (i = 0; i < 21; i++) {
          cv51[i] = cv55[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m10, cv51);
        emlrtAssign(&e_y, m10);
        c_st.site = &jg_emlrtRSI;
        h_st.site = &ug_emlrtRSI;
        error(&c_st, message(&h_st, e_y, &h_emlrtMCI), &i_emlrtMCI);
      }
    }

    if ((X->size[1] == 1) || (D->size[0] == 1)) {
      i30 = c_C->size[0] * c_C->size[1];
      c_C->size[0] = X->size[0];
      c_C->size[1] = D->size[1];
      emxEnsureCapacity(&st, (emxArray__common *)c_C, i30, (int32_T)sizeof
                        (real_T), &u_emlrtRTEI);
      ixstart = X->size[0];
      for (i30 = 0; i30 < ixstart; i30++) {
        ix = D->size[1];
        for (i31 = 0; i31 < ix; i31++) {
          c_C->data[i30 + c_C->size[0] * i31] = 0.0;
          apnd = X->size[1];
          for (i32 = 0; i32 < apnd; i32++) {
            c_C->data[i30 + c_C->size[0] * i31] += X->data[i30 + X->size[0] *
              i32] * D->data[i32 + D->size[0] * i31];
          }
        }
      }
    } else {
      ndbl = (uint32_T)X->size[0];
      unnamed_idx_1 = (uint32_T)D->size[1];
      i30 = r13->size[0] * r13->size[1];
      r13->size[0] = (int32_T)ndbl;
      emxEnsureCapacity(&st, (emxArray__common *)r13, i30, (int32_T)sizeof
                        (real_T), &u_emlrtRTEI);
      i30 = r13->size[0] * r13->size[1];
      r13->size[1] = (int32_T)unnamed_idx_1;
      emxEnsureCapacity(&st, (emxArray__common *)r13, i30, (int32_T)sizeof
                        (real_T), &u_emlrtRTEI);
      ixstart = (int32_T)ndbl * (int32_T)unnamed_idx_1;
      for (i30 = 0; i30 < ixstart; i30++) {
        r13->data[i30] = 0.0;
      }

      b_st.site = &bg_emlrtRSI;
      c_st.site = &cg_emlrtRSI;
      i30 = c_C->size[0] * c_C->size[1];
      c_C->size[0] = (int32_T)ndbl;
      emxEnsureCapacity(&c_st, (emxArray__common *)c_C, i30, (int32_T)sizeof
                        (real_T), &u_emlrtRTEI);
      i30 = c_C->size[0] * c_C->size[1];
      c_C->size[1] = (int32_T)unnamed_idx_1;
      emxEnsureCapacity(&c_st, (emxArray__common *)c_C, i30, (int32_T)sizeof
                        (real_T), &u_emlrtRTEI);
      ixstart = (int32_T)ndbl * (int32_T)unnamed_idx_1;
      for (i30 = 0; i30 < ixstart; i30++) {
        c_C->data[i30] = 0.0;
      }

      if ((X->size[0] < 1) || (D->size[1] < 1) || (X->size[1] < 1)) {
      } else {
        d_st.site = &dg_emlrtRSI;
        sTime = 1.0;
        sSpace = 0.0;
        TRANSB = 'N';
        TRANSA = 'N';
        f_st.site = &dg_emlrtRSI;
        m_t = (ptrdiff_t)(X->size[0]);
        f_st.site = &dg_emlrtRSI;
        n_t = (ptrdiff_t)(D->size[1]);
        f_st.site = &dg_emlrtRSI;
        k_t = (ptrdiff_t)(X->size[1]);
        f_st.site = &dg_emlrtRSI;
        lda_t = (ptrdiff_t)(X->size[0]);
        f_st.site = &dg_emlrtRSI;
        ldb_t = (ptrdiff_t)(X->size[1]);
        f_st.site = &dg_emlrtRSI;
        ldc_t = (ptrdiff_t)(X->size[0]);
        alpha1_t = (double *)(&sTime);
        i30 = X->size[0] * X->size[1];
        emlrtDynamicBoundsCheckFastR2012b(1, 1, i30, &gc_emlrtBCI, &d_st);
        Aia0_t = (double *)(&X->data[0]);
        i30 = D->size[0] * D->size[1];
        emlrtDynamicBoundsCheckFastR2012b(1, 1, i30, &gc_emlrtBCI, &d_st);
        Bib0_t = (double *)(&D->data[0]);
        beta1_t = (double *)(&sSpace);
        i30 = r13->size[0] * r13->size[1];
        emlrtDynamicBoundsCheckFastR2012b(1, 1, i30, &gc_emlrtBCI, &d_st);
        Cic0_t = (double *)(&c_C->data[0]);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t,
              Bib0_t, &ldb_t, beta1_t, Cic0_t, &ldc_t);
      }
    }

    st.site = &se_emlrtRSI;
    b_Done(&st, 1.0 + (real_T)k, x, t, gridT, b, r13);
    for (i30 = 0; i30 < 2; i30++) {
      e_C[i30] = c_C->size[i30];
    }

    for (i30 = 0; i30 < 2; i30++) {
      iv45[i30] = r13->size[i30];
    }

    emlrtSizeEqCheck2DFastR2012b(e_C, iv45, &u_emlrtECI, sp);
    ixstart = s1->size[0];
    i30 = r11->size[0];
    r11->size[0] = ixstart;
    emxEnsureCapacity(sp, (emxArray__common *)r11, i30, (int32_T)sizeof(int32_T),
                      &u_emlrtRTEI);
    for (i30 = 0; i30 < ixstart; i30++) {
      r11->data[i30] = i30;
    }

    ixstart = s1->size[1];
    i30 = r12->size[0];
    r12->size[0] = ixstart;
    emxEnsureCapacity(sp, (emxArray__common *)r12, i30, (int32_T)sizeof(int32_T),
                      &u_emlrtRTEI);
    for (i30 = 0; i30 < ixstart; i30++) {
      r12->data[i30] = i30;
    }

    i30 = c_C->size[0] * c_C->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)c_C, i30, (int32_T)sizeof(real_T),
                      &u_emlrtRTEI);
    ix = c_C->size[0];
    ixstart = c_C->size[1];
    ixstart *= ix;
    for (i30 = 0; i30 < ixstart; i30++) {
      c_C->data[i30] = 0.33333333333333331 * (c_C->data[i30] + r13->data[i30]);
    }

    iv48[0] = r11->size[0];
    iv48[1] = r12->size[0];
    emlrtSubAssignSizeCheckR2012b(iv48, 2, *(int32_T (*)[2])c_C->size, 2,
      &o_emlrtECI, sp);
    ixstart = c_C->size[1];
    for (i30 = 0; i30 < ixstart; i30++) {
      ix = c_C->size[0];
      for (i31 = 0; i31 < ix; i31++) {
        s1->data[(r11->data[i31] + s1->size[0] * r12->data[i30]) + s1->size[0] *
          s1->size[1] * k] = c_C->data[i31 + c_C->size[0] * i30];
      }
    }

    /*  components of Y */
    for (i30 = 0; i30 < 2; i30++) {
      b_b1k[i30] = b1k->size[i30];
    }

    for (i30 = 0; i30 < 2; i30++) {
      e_C[i30] = b1s->size[i30];
    }

    emlrtSizeEqCheck2DFastR2012b(b_b1k, e_C, &t_emlrtECI, sp);
    i30 = b1k->size[0] * b1k->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)b1k, i30, (int32_T)sizeof(real_T),
                      &u_emlrtRTEI);
    ixstart = b1k->size[0];
    ix = b1k->size[1];
    ixstart *= ix;
    for (i30 = 0; i30 < ixstart; i30++) {
      b1k->data[i30] = -(b1k->data[i30] + b1s->data[i30]);
    }

    for (i30 = 0; i30 < 2; i30++) {
      d_regTerm[i30] = regTerm->size[i30];
    }

    for (i30 = 0; i30 < 2; i30++) {
      b_b1k[i30] = b1k->size[i30];
    }

    emlrtSizeEqCheck2DFastR2012b(d_regTerm, b_b1k, &s_emlrtECI, sp);
    for (i30 = 0; i30 < 2; i30++) {
      e_C[i30] = B->size[i30];
    }

    for (i30 = 0; i30 < 2; i30++) {
      b_b1k[i30] = Bstar->size[i30];
    }

    emlrtSizeEqCheck2DFastR2012b(e_C, b_b1k, &r_emlrtECI, sp);
    i30 = r13->size[0] * r13->size[1];
    r13->size[0] = B->size[0];
    r13->size[1] = B->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)r13, i30, (int32_T)sizeof(real_T),
                      &u_emlrtRTEI);
    ixstart = B->size[0] * B->size[1];
    for (i30 = 0; i30 < ixstart; i30++) {
      r13->data[i30] = -(B->data[i30] + Bstar->data[i30]);
    }

    for (i30 = 0; i30 < 2; i30++) {
      b_b1k[i30] = A->size[i30];
    }

    for (i30 = 0; i30 < 2; i30++) {
      iv45[i30] = r13->size[i30];
    }

    emlrtSizeEqCheck2DFastR2012b(b_b1k, iv45, &q_emlrtECI, sp);
    i30 = b_regTerm->size[0] * b_regTerm->size[1];
    b_regTerm->size[0] = regTerm->size[0];
    b_regTerm->size[1] = regTerm->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)b_regTerm, i30, (int32_T)sizeof
                      (real_T), &u_emlrtRTEI);
    ixstart = regTerm->size[0] * regTerm->size[1];
    for (i30 = 0; i30 < ixstart; i30++) {
      b_regTerm->data[i30] = regTerm->data[i30] - b1k->data[i30];
    }

    i30 = b_A->size[0] * b_A->size[1];
    b_A->size[0] = A->size[0];
    b_A->size[1] = A->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)b_A, i30, (int32_T)sizeof(real_T),
                      &u_emlrtRTEI);
    ixstart = A->size[0] * A->size[1];
    for (i30 = 0; i30 < ixstart; i30++) {
      b_A->data[i30] = A->data[i30] - r13->data[i30];
    }

    st.site = &te_emlrtRSI;
    mrdivide(&st, b_regTerm, b_A, X);
    st.site = &ue_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    if (!(X->size[1] == C->size[0])) {
      if ((X->size[0] == 1) && (X->size[1] == 1)) {
        f_y = NULL;
        m10 = emlrtCreateCharArray(2, iv49);
        for (i = 0; i < 45; i++) {
          cv53[i] = cv54[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 45, m10, cv53);
        emlrtAssign(&f_y, m10);
        c_st.site = &ig_emlrtRSI;
        h_st.site = &tg_emlrtRSI;
        error(&c_st, message(&h_st, f_y, &f_emlrtMCI), &g_emlrtMCI);
      } else {
        g_y = NULL;
        m10 = emlrtCreateCharArray(2, iv50);
        for (i = 0; i < 21; i++) {
          cv51[i] = cv55[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m10, cv51);
        emlrtAssign(&g_y, m10);
        c_st.site = &jg_emlrtRSI;
        h_st.site = &ug_emlrtRSI;
        error(&c_st, message(&h_st, g_y, &h_emlrtMCI), &i_emlrtMCI);
      }
    }

    if ((X->size[1] == 1) || (C->size[0] == 1)) {
      i30 = b_C->size[0] * b_C->size[1];
      b_C->size[0] = X->size[0];
      b_C->size[1] = 3;
      emxEnsureCapacity(&st, (emxArray__common *)b_C, i30, (int32_T)sizeof
                        (real_T), &u_emlrtRTEI);
      ixstart = X->size[0];
      for (i30 = 0; i30 < ixstart; i30++) {
        for (i31 = 0; i31 < 3; i31++) {
          b_C->data[i30 + b_C->size[0] * i31] = 0.0;
          ix = X->size[1];
          for (i32 = 0; i32 < ix; i32++) {
            b_C->data[i30 + b_C->size[0] * i31] += X->data[i30 + X->size[0] *
              i32] * C->data[i32 + C->size[0] * i31];
          }
        }
      }
    } else {
      ndbl = (uint32_T)X->size[0];
      i30 = r14->size[0] * r14->size[1];
      r14->size[0] = (int32_T)ndbl;
      r14->size[1] = 3;
      emxEnsureCapacity(&st, (emxArray__common *)r14, i30, (int32_T)sizeof
                        (real_T), &u_emlrtRTEI);
      ixstart = (int32_T)ndbl * 3;
      for (i30 = 0; i30 < ixstart; i30++) {
        r14->data[i30] = 0.0;
      }

      b_st.site = &bg_emlrtRSI;
      c_st.site = &cg_emlrtRSI;
      i30 = b_C->size[0] * b_C->size[1];
      b_C->size[0] = (int32_T)ndbl;
      b_C->size[1] = 3;
      emxEnsureCapacity(&c_st, (emxArray__common *)b_C, i30, (int32_T)sizeof
                        (real_T), &u_emlrtRTEI);
      ixstart = (int32_T)ndbl * 3;
      for (i30 = 0; i30 < ixstart; i30++) {
        b_C->data[i30] = 0.0;
      }

      if ((X->size[0] < 1) || (X->size[1] < 1)) {
      } else {
        d_st.site = &dg_emlrtRSI;
        sTime = 1.0;
        sSpace = 0.0;
        TRANSB = 'N';
        TRANSA = 'N';
        f_st.site = &dg_emlrtRSI;
        m_t = (ptrdiff_t)(X->size[0]);
        f_st.site = &dg_emlrtRSI;
        n_t = (ptrdiff_t)(3);
        f_st.site = &dg_emlrtRSI;
        k_t = (ptrdiff_t)(X->size[1]);
        f_st.site = &dg_emlrtRSI;
        lda_t = (ptrdiff_t)(X->size[0]);
        f_st.site = &dg_emlrtRSI;
        ldb_t = (ptrdiff_t)(X->size[1]);
        f_st.site = &dg_emlrtRSI;
        ldc_t = (ptrdiff_t)(X->size[0]);
        alpha1_t = (double *)(&sTime);
        i30 = X->size[0] * X->size[1];
        emlrtDynamicBoundsCheckFastR2012b(1, 1, i30, &gc_emlrtBCI, &d_st);
        Aia0_t = (double *)(&X->data[0]);
        i30 = C->size[0] * 3;
        emlrtDynamicBoundsCheckFastR2012b(1, 1, i30, &gc_emlrtBCI, &d_st);
        Bib0_t = (double *)(&C->data[0]);
        beta1_t = (double *)(&sSpace);
        i30 = r14->size[0] * 3;
        emlrtDynamicBoundsCheckFastR2012b(1, 1, i30, &gc_emlrtBCI, &d_st);
        Cic0_t = (double *)(&b_C->data[0]);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t,
              Bib0_t, &ldb_t, beta1_t, Cic0_t, &ldc_t);
      }
    }

    st.site = &ue_emlrtRSI;
    b_Cone(&st, x, t, r14);
    for (i30 = 0; i30 < 2; i30++) {
      e_C[i30] = b_C->size[i30];
    }

    for (i30 = 0; i30 < 2; i30++) {
      iv45[i30] = r14->size[i30];
    }

    emlrtSizeEqCheck2DFastR2012b(e_C, iv45, &p_emlrtECI, sp);
    ixstart = s2->size[0];
    i30 = r11->size[0];
    r11->size[0] = ixstart;
    emxEnsureCapacity(sp, (emxArray__common *)r11, i30, (int32_T)sizeof(int32_T),
                      &u_emlrtRTEI);
    for (i30 = 0; i30 < ixstart; i30++) {
      r11->data[i30] = i30;
    }

    i30 = b_C->size[0] * b_C->size[1];
    b_C->size[1] = 3;
    emxEnsureCapacity(sp, (emxArray__common *)b_C, i30, (int32_T)sizeof(real_T),
                      &u_emlrtRTEI);
    ix = b_C->size[0];
    ixstart = b_C->size[1];
    ixstart *= ix;
    for (i30 = 0; i30 < ixstart; i30++) {
      b_C->data[i30] = 0.33333333333333331 * (b_C->data[i30] - r14->data[i30]);
    }

    st.site = &ue_emlrtRSI;
    for (i30 = 0; i30 < 3; i30++) {
      eta[i30] = u0[i30];
    }

    ndbl = (uint32_T)b_C->size[0];
    i30 = r15->size[0];
    r15->size[0] = (int32_T)ndbl;
    emxEnsureCapacity(&st, (emxArray__common *)r15, i30, (int32_T)sizeof(real_T),
                      &u_emlrtRTEI);
    ixstart = (int32_T)ndbl;
    for (i30 = 0; i30 < ixstart; i30++) {
      r15->data[i30] = 0.0;
    }

    b_st.site = &bg_emlrtRSI;
    c_st.site = &cg_emlrtRSI;
    i30 = d_C->size[0];
    d_C->size[0] = (int32_T)ndbl;
    emxEnsureCapacity(&c_st, (emxArray__common *)d_C, i30, (int32_T)sizeof
                      (real_T), &u_emlrtRTEI);
    ixstart = (int32_T)ndbl;
    for (i30 = 0; i30 < ixstart; i30++) {
      d_C->data[i30] = 0.0;
    }

    if (b_C->size[0] < 1) {
    } else {
      d_st.site = &dg_emlrtRSI;
      sTime = 1.0;
      sSpace = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      f_st.site = &dg_emlrtRSI;
      m_t = (ptrdiff_t)(b_C->size[0]);
      f_st.site = &dg_emlrtRSI;
      n_t = (ptrdiff_t)(1);
      f_st.site = &dg_emlrtRSI;
      k_t = (ptrdiff_t)(3);
      f_st.site = &dg_emlrtRSI;
      lda_t = (ptrdiff_t)(b_C->size[0]);
      f_st.site = &dg_emlrtRSI;
      ldb_t = (ptrdiff_t)(3);
      f_st.site = &dg_emlrtRSI;
      ldc_t = (ptrdiff_t)(b_C->size[0]);
      alpha1_t = (double *)(&sTime);
      i30 = b_C->size[0] * 3;
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i30, &gc_emlrtBCI, &d_st);
      Aia0_t = (double *)(&b_C->data[0]);
      Bib0_t = (double *)(&eta[0]);
      beta1_t = (double *)(&sSpace);
      i30 = r15->size[0];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i30, &gc_emlrtBCI, &d_st);
      Cic0_t = (double *)(&d_C->data[0]);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t, Bib0_t,
            &ldb_t, beta1_t, Cic0_t, &ldc_t);
    }

    iv51[0] = r11->size[0];
    emlrtSubAssignSizeCheckR2012b(iv51, 1, *(int32_T (*)[1])d_C->size, 1,
      &n_emlrtECI, sp);
    ixstart = d_C->size[0];
    for (i30 = 0; i30 < ixstart; i30++) {
      s2->data[r11->data[i30] + s2->size[0] * k] = d_C->data[i30];
    }

    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&c_A);
  emxFree_real_T(&c_regTerm);
  emxFree_real_T(&b_A);
  emxFree_real_T(&b_regTerm);
  emxFree_real_T(&r14);
  emxFree_real_T(&b);
  emxFree_int32_T(&r12);
  emxFree_int32_T(&r11);
  emxFree_real_T(&b_C);
  emxFree_real_T(&b1s);
  emxFree_real_T(&C);
  emxFree_real_T(&D);
  emxFree_real_T(&Bstar);
  emxFree_real_T(&B);
  emxFree_real_T(&A);
  b_emxInit_real_T(sp, &Y, 1, &jb_emlrtRTEI, true);
  st.site = &ve_emlrtRSI;
  sum(&st, s1, X);
  i30 = Y->size[0];
  Y->size[0] = sigIn->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)Y, i30, (int32_T)sizeof(real_T),
                    &u_emlrtRTEI);
  ixstart = sigIn->size[1];
  emxFree_real_T(&s1);
  for (i30 = 0; i30 < ixstart; i30++) {
    Y->data[i30] = sigIn->data[sigIn->size[0] * i30];
  }

  st.site = &we_emlrtRSI;
  b_sum(&st, s2, r15);
  i30 = Y->size[0];
  i31 = r15->size[0];
  emlrtSizeEqCheck1DFastR2012b(i30, i31, &m_emlrtECI, sp);
  i30 = Y->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)Y, i30, (int32_T)sizeof(real_T),
                    &u_emlrtRTEI);
  ixstart = Y->size[0];
  emxFree_real_T(&s2);
  for (i30 = 0; i30 < ixstart; i30++) {
    Y->data[i30] += r15->data[i30];
  }

  st.site = &xe_emlrtRSI;
  GetRegularizationTerm(&st, sigIn->size[1], regOrder, regTerm);

  /*  get RregTerm= 'R term */
  /*  The source solution with regularization coefficient lambda is */
  st.site = &ye_emlrtRSI;
  i30 = b1k->size[0] * b1k->size[1];
  b1k->size[0] = X->size[1];
  b1k->size[1] = X->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)b1k, i30, (int32_T)sizeof(real_T),
                    &u_emlrtRTEI);
  ixstart = X->size[0];
  for (i30 = 0; i30 < ixstart; i30++) {
    ix = X->size[1];
    for (i31 = 0; i31 < ix; i31++) {
      b1k->data[i31 + b1k->size[0] * i30] = X->data[i30 + X->size[0] * i31];
    }
  }

  b_st.site = &gb_emlrtRSI;
  if (!(b1k->size[1] == X->size[0])) {
    if (((b1k->size[0] == 1) && (b1k->size[1] == 1)) || ((X->size[0] == 1) &&
         (X->size[1] == 1))) {
      h_y = NULL;
      m10 = emlrtCreateCharArray(2, iv52);
      for (i = 0; i < 45; i++) {
        cv53[i] = cv54[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m10, cv53);
      emlrtAssign(&h_y, m10);
      c_st.site = &ig_emlrtRSI;
      h_st.site = &tg_emlrtRSI;
      error(&c_st, message(&h_st, h_y, &f_emlrtMCI), &g_emlrtMCI);
    } else {
      i_y = NULL;
      m10 = emlrtCreateCharArray(2, iv53);
      for (i = 0; i < 21; i++) {
        cv51[i] = cv55[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m10, cv51);
      emlrtAssign(&i_y, m10);
      c_st.site = &jg_emlrtRSI;
      h_st.site = &ug_emlrtRSI;
      error(&c_st, message(&h_st, i_y, &h_emlrtMCI), &i_emlrtMCI);
    }
  }

  if ((b1k->size[1] == 1) || (X->size[0] == 1)) {
    i30 = c_C->size[0] * c_C->size[1];
    c_C->size[0] = b1k->size[0];
    c_C->size[1] = X->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)c_C, i30, (int32_T)sizeof(real_T),
                      &u_emlrtRTEI);
    ixstart = b1k->size[0];
    for (i30 = 0; i30 < ixstart; i30++) {
      ix = X->size[1];
      for (i31 = 0; i31 < ix; i31++) {
        c_C->data[i30 + c_C->size[0] * i31] = 0.0;
        apnd = b1k->size[1];
        for (i32 = 0; i32 < apnd; i32++) {
          c_C->data[i30 + c_C->size[0] * i31] += b1k->data[i30 + b1k->size[0] *
            i32] * X->data[i32 + X->size[0] * i31];
        }
      }
    }
  } else {
    ndbl = (uint32_T)b1k->size[0];
    unnamed_idx_1 = (uint32_T)X->size[1];
    i30 = r13->size[0] * r13->size[1];
    r13->size[0] = (int32_T)ndbl;
    emxEnsureCapacity(&st, (emxArray__common *)r13, i30, (int32_T)sizeof(real_T),
                      &u_emlrtRTEI);
    i30 = r13->size[0] * r13->size[1];
    r13->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)r13, i30, (int32_T)sizeof(real_T),
                      &u_emlrtRTEI);
    ixstart = (int32_T)ndbl * (int32_T)unnamed_idx_1;
    for (i30 = 0; i30 < ixstart; i30++) {
      r13->data[i30] = 0.0;
    }

    b_st.site = &bg_emlrtRSI;
    c_st.site = &cg_emlrtRSI;
    i30 = c_C->size[0] * c_C->size[1];
    c_C->size[0] = (int32_T)ndbl;
    emxEnsureCapacity(&c_st, (emxArray__common *)c_C, i30, (int32_T)sizeof
                      (real_T), &u_emlrtRTEI);
    i30 = c_C->size[0] * c_C->size[1];
    c_C->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&c_st, (emxArray__common *)c_C, i30, (int32_T)sizeof
                      (real_T), &u_emlrtRTEI);
    ixstart = (int32_T)ndbl * (int32_T)unnamed_idx_1;
    for (i30 = 0; i30 < ixstart; i30++) {
      c_C->data[i30] = 0.0;
    }

    if ((b1k->size[0] < 1) || (X->size[1] < 1) || (b1k->size[1] < 1)) {
    } else {
      d_st.site = &dg_emlrtRSI;
      sTime = 1.0;
      sSpace = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      f_st.site = &dg_emlrtRSI;
      m_t = (ptrdiff_t)(b1k->size[0]);
      f_st.site = &dg_emlrtRSI;
      n_t = (ptrdiff_t)(X->size[1]);
      f_st.site = &dg_emlrtRSI;
      k_t = (ptrdiff_t)(b1k->size[1]);
      f_st.site = &dg_emlrtRSI;
      lda_t = (ptrdiff_t)(b1k->size[0]);
      f_st.site = &dg_emlrtRSI;
      ldb_t = (ptrdiff_t)(b1k->size[1]);
      f_st.site = &dg_emlrtRSI;
      ldc_t = (ptrdiff_t)(b1k->size[0]);
      alpha1_t = (double *)(&sTime);
      i30 = b1k->size[0] * b1k->size[1];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i30, &gc_emlrtBCI, &d_st);
      Aia0_t = (double *)(&b1k->data[0]);
      i30 = X->size[0] * X->size[1];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i30, &gc_emlrtBCI, &d_st);
      Bib0_t = (double *)(&X->data[0]);
      beta1_t = (double *)(&sSpace);
      i30 = r13->size[0] * r13->size[1];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i30, &gc_emlrtBCI, &d_st);
      Cic0_t = (double *)(&c_C->data[0]);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t, Bib0_t,
            &ldb_t, beta1_t, Cic0_t, &ldc_t);
    }
  }

  emxFree_real_T(&r13);
  i30 = regTerm->size[0] * regTerm->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)regTerm, i30, (int32_T)sizeof(real_T),
                    &u_emlrtRTEI);
  ixstart = regTerm->size[0];
  ix = regTerm->size[1];
  ixstart *= ix;
  for (i30 = 0; i30 < ixstart; i30++) {
    regTerm->data[i30] *= lambda;
  }

  for (i30 = 0; i30 < 2; i30++) {
    e_C[i30] = c_C->size[i30];
  }

  for (i30 = 0; i30 < 2; i30++) {
    d_regTerm[i30] = regTerm->size[i30];
  }

  emlrtSizeEqCheck2DFastR2012b(e_C, d_regTerm, &l_emlrtECI, sp);
  st.site = &ye_emlrtRSI;
  i30 = b1k->size[0] * b1k->size[1];
  b1k->size[0] = X->size[1];
  b1k->size[1] = X->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)b1k, i30, (int32_T)sizeof(real_T),
                    &u_emlrtRTEI);
  ixstart = X->size[0];
  for (i30 = 0; i30 < ixstart; i30++) {
    ix = X->size[1];
    for (i31 = 0; i31 < ix; i31++) {
      b1k->data[i31 + b1k->size[0] * i30] = X->data[i30 + X->size[0] * i31];
    }
  }

  emxFree_real_T(&X);
  b_st.site = &gb_emlrtRSI;
  if (!(b1k->size[1] == Y->size[0])) {
    if (((b1k->size[0] == 1) && (b1k->size[1] == 1)) || (Y->size[0] == 1)) {
      j_y = NULL;
      m10 = emlrtCreateCharArray(2, iv54);
      for (i = 0; i < 45; i++) {
        cv53[i] = cv54[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m10, cv53);
      emlrtAssign(&j_y, m10);
      c_st.site = &ig_emlrtRSI;
      h_st.site = &tg_emlrtRSI;
      error(&c_st, message(&h_st, j_y, &f_emlrtMCI), &g_emlrtMCI);
    } else {
      k_y = NULL;
      m10 = emlrtCreateCharArray(2, iv55);
      for (i = 0; i < 21; i++) {
        cv51[i] = cv55[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m10, cv51);
      emlrtAssign(&k_y, m10);
      c_st.site = &jg_emlrtRSI;
      h_st.site = &ug_emlrtRSI;
      error(&c_st, message(&h_st, k_y, &h_emlrtMCI), &i_emlrtMCI);
    }
  }

  if ((b1k->size[1] == 1) || (Y->size[0] == 1)) {
    i30 = d_C->size[0];
    d_C->size[0] = b1k->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)d_C, i30, (int32_T)sizeof(real_T),
                      &u_emlrtRTEI);
    ixstart = b1k->size[0];
    for (i30 = 0; i30 < ixstart; i30++) {
      d_C->data[i30] = 0.0;
      ix = b1k->size[1];
      for (i31 = 0; i31 < ix; i31++) {
        d_C->data[i30] += b1k->data[i30 + b1k->size[0] * i31] * Y->data[i31];
      }
    }
  } else {
    ndbl = (uint32_T)b1k->size[0];
    i30 = r15->size[0];
    r15->size[0] = (int32_T)ndbl;
    emxEnsureCapacity(&st, (emxArray__common *)r15, i30, (int32_T)sizeof(real_T),
                      &u_emlrtRTEI);
    ixstart = (int32_T)ndbl;
    for (i30 = 0; i30 < ixstart; i30++) {
      r15->data[i30] = 0.0;
    }

    b_st.site = &bg_emlrtRSI;
    c_st.site = &cg_emlrtRSI;
    i30 = d_C->size[0];
    d_C->size[0] = (int32_T)ndbl;
    emxEnsureCapacity(&c_st, (emxArray__common *)d_C, i30, (int32_T)sizeof
                      (real_T), &u_emlrtRTEI);
    ixstart = (int32_T)ndbl;
    for (i30 = 0; i30 < ixstart; i30++) {
      d_C->data[i30] = 0.0;
    }

    if ((b1k->size[0] < 1) || (b1k->size[1] < 1)) {
    } else {
      d_st.site = &dg_emlrtRSI;
      sTime = 1.0;
      sSpace = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      f_st.site = &dg_emlrtRSI;
      m_t = (ptrdiff_t)(b1k->size[0]);
      f_st.site = &dg_emlrtRSI;
      n_t = (ptrdiff_t)(1);
      f_st.site = &dg_emlrtRSI;
      k_t = (ptrdiff_t)(b1k->size[1]);
      f_st.site = &dg_emlrtRSI;
      lda_t = (ptrdiff_t)(b1k->size[0]);
      f_st.site = &dg_emlrtRSI;
      ldb_t = (ptrdiff_t)(b1k->size[1]);
      f_st.site = &dg_emlrtRSI;
      ldc_t = (ptrdiff_t)(b1k->size[0]);
      alpha1_t = (double *)(&sTime);
      i30 = b1k->size[0] * b1k->size[1];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i30, &gc_emlrtBCI, &d_st);
      Aia0_t = (double *)(&b1k->data[0]);
      i30 = Y->size[0];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i30, &gc_emlrtBCI, &d_st);
      Bib0_t = (double *)(&Y->data[0]);
      beta1_t = (double *)(&sSpace);
      i30 = r15->size[0];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i30, &gc_emlrtBCI, &d_st);
      Cic0_t = (double *)(&d_C->data[0]);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t, Bib0_t,
            &ldb_t, beta1_t, Cic0_t, &ldc_t);
    }
  }

  emxFree_real_T(&r15);
  emxFree_real_T(&Y);
  emxFree_real_T(&b1k);
  emxInit_real_T(&st, &f_C, 2, &u_emlrtRTEI, true);
  i30 = f_C->size[0] * f_C->size[1];
  f_C->size[0] = c_C->size[0];
  f_C->size[1] = c_C->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)f_C, i30, (int32_T)sizeof(real_T),
                    &u_emlrtRTEI);
  ixstart = c_C->size[0] * c_C->size[1];
  for (i30 = 0; i30 < ixstart; i30++) {
    f_C->data[i30] = c_C->data[i30] + regTerm->data[i30];
  }

  emxFree_real_T(&c_C);
  emxFree_real_T(&regTerm);
  st.site = &ye_emlrtRSI;
  mldivide(&st, f_C, d_C, r);

  /*  Calculate the solution u(x,t) */
  emxFree_real_T(&f_C);
  emxFree_real_T(&d_C);
  for (i30 = 0; i30 < 3; i30++) {
    eta[i30] = 1.0;
  }

  eta[0] = 0.5;
  eta[2] = 0.5;
  ixstart = sigIn->size[1];
  i30 = u->size[0] * u->size[1];
  u->size[0] = ixstart;
  u->size[1] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)u, i30, (int32_T)sizeof(real_T),
                    &u_emlrtRTEI);
  ixstart = sigIn->size[1] * 3;
  for (i30 = 0; i30 < ixstart; i30++) {
    u->data[i30] = 0.0;
  }

  for (j = 0; j < 3; j++) {
    /*  space index */
    i = 0;
    while (i <= sigIn->size[1] - 1) {
      /*  time index */
      sTime = 0.0;

      /*  cumulative sums */
      sSpace = 0.0;
      stIdx = 0;
      while (stIdx <= sigIn->size[1] - 1) {
        /*  time index */
        ixstart = sigIn->size[1];
        i30 = stIdx + 1;
        emlrtDynamicBoundsCheckFastR2012b(i30, 1, ixstart, &nc_emlrtBCI, sp);
        ixstart = sigIn->size[1];
        i30 = stIdx + 1;
        emlrtDynamicBoundsCheckFastR2012b(i30, 1, ixstart, &mc_emlrtBCI, sp);
        ixstart = sigIn->size[1];
        i30 = stIdx + 1;
        emlrtDynamicBoundsCheckFastR2012b(i30, 1, ixstart, &lc_emlrtBCI, sp);
        ixstart = sigIn->size[1];
        i30 = stIdx + 1;
        emlrtDynamicBoundsCheckFastR2012b(i30, 1, ixstart, &kc_emlrtBCI, sp);
        st.site = &cf_emlrtRSI;
        i30 = t->size[1];
        i31 = i + 1;
        emlrtDynamicBoundsCheckFastR2012b(i31, 1, i30, &jc_emlrtBCI, &st);
        ixstart = sigIn->size[1];
        i30 = i + 1;
        emlrtDynamicBoundsCheckFastR2012b(i30, 1, ixstart, &ic_emlrtBCI, &st);

        /*  Calculate the integral int_0^1(f(y,t_j)*A_{yj}(x,t)dy) by midpoint */
        /*  integration rule */
        /*  the spatial integration of all points y at time t_j */
        for (i30 = 0; i30 < 3; i30++) {
          a[i30] = 0.0;
        }

        vals = 0.0;
        b_st.site = &q_emlrtRSI;
        a[0] = Acoeff(&b_st, x[0], 1.0 + (real_T)stIdx, x[j], t->data[i], gridT);
        for (ixstart = 0; ixstart < 2; ixstart++) {
          b_st.site = &r_emlrtRSI;
          a[ixstart + 1] = Acoeff(&b_st, x[ixstart + 1], 1.0 + (real_T)stIdx,
            x[j], t->data[i], gridT);
          vals += 0.5 * (a[ixstart + 1] + a[ixstart]) * (x[ixstart + 1] -
            x[ixstart]);
          emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &st);
        }

        i30 = t->size[1];
        i31 = 1 + i;
        i32 = t->size[1];
        ixstart = 1 + i;
        ix = t->size[1];
        apnd = 1 + i;
        k = t->size[1];
        i33 = 1 + i;
        i34 = r->size[0];
        i35 = 1 + stIdx;
        st.site = &af_emlrtRSI;
        i_st.site = &bf_emlrtRSI;
        sTime = ((((sTime + Acoeff(&st, 0.0, 1.0 + (real_T)stIdx, x[j], t->
          data[emlrtDynamicBoundsCheckFastR2012b(i31, 1, i30, &vc_emlrtBCI, sp)
          - 1], gridT) * 0.0) + Acoeff(&st, 1.0, 1.0 + (real_T)stIdx, x[j],
                    t->data[emlrtDynamicBoundsCheckFastR2012b(ixstart, 1, i32,
          &wc_emlrtBCI, sp) - 1], gridT) * 0.0) - Bcoeff(&i_st, 0.0, 1.0 +
                   (real_T)stIdx, x[j], t->
                   data[emlrtDynamicBoundsCheckFastR2012b(apnd, 1, ix,
                    &xc_emlrtBCI, sp) - 1], gridT) * 0.0) - Bcoeff(&i_st, 1.0,
                  1.0 + (real_T)stIdx, x[j], t->
                  data[emlrtDynamicBoundsCheckFastR2012b(i33, 1, k, &yc_emlrtBCI,
                   sp) - 1], gridT) * 0.0) + vals * r->
          data[emlrtDynamicBoundsCheckFastR2012b(i35, 1, i34, &ad_emlrtBCI, sp)
          - 1];
        stIdx++;
        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
      }

      for (ixstart = 0; ixstart < 3; ixstart++) {
        /*  space index */
        st.site = &df_emlrtRSI;
        i30 = t->size[1];
        i31 = i + 1;
        emlrtDynamicBoundsCheckFastR2012b(i31, 1, i30, &hc_emlrtBCI, &st);

        /*  evaluate the coefficient C for index k which describes the discretization */
        /*  of the space variable spacePoints in [0 1], at time t */
        b_st.site = &o_emlrtRSI;
        if (t->data[i] < 0.0) {
          c_st.site = &f_emlrtRSI;
          eml_error(&c_st);
        }

        i30 = gridT->size[1];
        i31 = 1 + ixstart;
        emlrtDynamicBoundsCheckFastR2012b(i31, 1, i30, &fb_emlrtBCI, &st);
        b_st.site = &o_emlrtRSI;
        if (t->data[i] < 0.0) {
          c_st.site = &f_emlrtRSI;
          eml_error(&c_st);
        }

        i30 = gridT->size[1];
        i31 = ixstart + 2;
        emlrtDynamicBoundsCheckFastR2012b(i31, 1, i30, &eb_emlrtBCI, &st);
        sSpace += 0.5 * (b_scalar_erf((x[j] - gridT->data[ixstart]) / (2.0 *
          muDoubleScalarSqrt(t->data[i]))) - b_scalar_erf((x[j] - gridT->data[1
          + ixstart]) / (2.0 * muDoubleScalarSqrt(t->data[i])))) * u0[ixstart];
        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
      }

      i30 = u->size[0];
      i31 = 1 + i;
      u->data[(emlrtDynamicBoundsCheckFastR2012b(i31, 1, i30, &uc_emlrtBCI, sp)
               + u->size[0] * j) - 1] = (sTime + sSpace) * eta[j];
      i++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&gridT);
  if (plotFlag) {
    st.site = &ef_emlrtRSI;

    /*  plot the input signal as a function of time, the solution u(x,t) and the */
    /*  source solution r(t) */
    b_st.site = &jh_emlrtRSI;
    emlrtAssign(&fig, figure(&b_st, &v_emlrtMCI));
    l_y = NULL;
    m10 = emlrtCreateCharArray(2, iv56);
    for (i = 0; i < 6; i++) {
      cv56[i] = cv57[i];
    }

    emlrtInitCharArrayR2013a(&st, 6, m10, cv56);
    emlrtAssign(&l_y, m10);
    m_y = NULL;
    m10 = emlrtCreateCharArray(2, iv57);
    for (i = 0; i < 8; i++) {
      cv58[i] = cv59[i];
    }

    emlrtInitCharArrayR2013a(&st, 8, m10, cv58);
    emlrtAssign(&m_y, m10);
    n_y = NULL;
    m10 = emlrtCreateCharArray(2, iv58);
    for (i = 0; i < 3; i++) {
      cv60[i] = cv61[i];
    }

    emlrtInitCharArrayR2013a(&st, 3, m10, cv60);
    emlrtAssign(&n_y, m10);
    b_st.site = &ih_emlrtRSI;
    emlrtAssign(&ax, axes(&b_st, l_y, emlrtAlias(fig), m_y, n_y, &w_emlrtMCI));
    o_y = NULL;
    m10 = emlrtCreateCharArray(2, iv59);
    for (i = 0; i < 5; i++) {
      cv62[i] = cv63[i];
    }

    emlrtInitCharArrayR2013a(&st, 5, m10, cv62);
    emlrtAssign(&o_y, m10);
    p_y = NULL;
    m10 = emlrtCreateCharArray(2, iv60);
    for (i = 0; i < 5; i++) {
      cv62[i] = cv64[i];
    }

    emlrtInitCharArrayR2013a(&st, 5, m10, cv62);
    emlrtAssign(&p_y, m10);
    i30 = b_u->size[0];
    b_u->size[0] = r->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)b_u, i30, (int32_T)sizeof(real_T),
                      &u_emlrtRTEI);
    ixstart = r->size[0];
    for (i30 = 0; i30 < ixstart; i30++) {
      b_u->data[i30] = r->data[i30];
    }

    q_y = NULL;
    m10 = emlrtCreateNumericArray(1, *(int32_T (*)[2])b_u->size, mxDOUBLE_CLASS,
      mxREAL);
    pData = (real_T *)mxGetPr(m10);
    i30 = 0;
    for (i = 0; i < b_u->size[0]; i++) {
      pData[i30] = b_u->data[i];
      i30++;
    }

    emlrtAssign(&q_y, m10);
    r_y = NULL;
    m10 = emlrtCreateCharArray(2, iv61);
    for (i = 0; i < 11; i++) {
      cv65[i] = cv66[i];
    }

    emlrtInitCharArrayR2013a(&st, 11, m10, cv65);
    emlrtAssign(&r_y, m10);
    s_y = NULL;
    m10 = emlrtCreateCharArray(2, iv62);
    for (i = 0; i < 6; i++) {
      cv56[i] = cv67[i];
    }

    emlrtInitCharArrayR2013a(&st, 6, m10, cv56);
    emlrtAssign(&s_y, m10);
    t_y = NULL;
    m10 = emlrtCreateCharArray(2, iv63);
    for (i = 0; i < 5; i++) {
      cv62[i] = cv68[i];
    }

    emlrtInitCharArrayR2013a(&st, 5, m10, cv62);
    emlrtAssign(&t_y, m10);
    u_y = NULL;
    m10 = emlrtCreateString1('r');
    emlrtAssign(&u_y, m10);
    v_y = NULL;
    m10 = emlrtCreateCharArray(2, iv64);
    for (i = 0; i < 6; i++) {
      cv56[i] = cv57[i];
    }

    emlrtInitCharArrayR2013a(&st, 6, m10, cv56);
    emlrtAssign(&v_y, m10);
    b_st.site = &hh_emlrtRSI;
    line(&b_st, o_y, b_emlrt_marshallOut(t), p_y, q_y, r_y, s_y, t_y, u_y, v_y,
         emlrtAlias(ax), &x_emlrtMCI);
    w_y = NULL;
    m10 = emlrtCreateCharArray(2, iv65);
    for (i = 0; i < 5; i++) {
      cv62[i] = cv63[i];
    }

    emlrtInitCharArrayR2013a(&st, 5, m10, cv62);
    emlrtAssign(&w_y, m10);
    x_y = NULL;
    m10 = emlrtCreateCharArray(2, iv66);
    for (i = 0; i < 5; i++) {
      cv62[i] = cv64[i];
    }

    emlrtInitCharArrayR2013a(&st, 5, m10, cv62);
    emlrtAssign(&x_y, m10);
    y_y = NULL;
    m10 = emlrtCreateCharArray(2, iv67);
    for (i = 0; i < 11; i++) {
      cv65[i] = cv66[i];
    }

    emlrtInitCharArrayR2013a(&st, 11, m10, cv65);
    emlrtAssign(&y_y, m10);
    ab_y = NULL;
    m10 = emlrtCreateCharArray(2, iv68);
    for (i = 0; i < 11; i++) {
      cv65[i] = cv69[i];
    }

    emlrtInitCharArrayR2013a(&st, 11, m10, cv65);
    emlrtAssign(&ab_y, m10);
    bb_y = NULL;
    m10 = emlrtCreateCharArray(2, iv69);
    for (i = 0; i < 5; i++) {
      cv62[i] = cv68[i];
    }

    emlrtInitCharArrayR2013a(&st, 5, m10, cv62);
    emlrtAssign(&bb_y, m10);
    cb_y = NULL;
    m10 = emlrtCreateString1('b');
    emlrtAssign(&cb_y, m10);
    db_y = NULL;
    m10 = emlrtCreateCharArray(2, iv70);
    for (i = 0; i < 6; i++) {
      cv56[i] = cv70[i];
    }

    emlrtInitCharArrayR2013a(&st, 6, m10, cv56);
    emlrtAssign(&db_y, m10);
    b_st.site = &gh_emlrtRSI;
    line(&b_st, w_y, b_emlrt_marshallOut(t), x_y, b_emlrt_marshallOut(sigIn),
         y_y, ab_y, bb_y, cb_y, db_y, emlrtAlias(ax), &y_emlrtMCI);

    /*  legend(get(ax,'Children')); */
    eb_y = NULL;
    m10 = emlrtCreateCharArray(2, iv71);
    for (i = 0; i < 5; i++) {
      cv62[i] = cv63[i];
    }

    emlrtInitCharArrayR2013a(&st, 5, m10, cv62);
    emlrtAssign(&eb_y, m10);
    fb_y = NULL;
    m10 = emlrtCreateCharArray(2, iv72);
    for (i = 0; i < 5; i++) {
      cv62[i] = cv64[i];
    }

    emlrtInitCharArrayR2013a(&st, 5, m10, cv62);
    emlrtAssign(&fb_y, m10);
    ixstart = u->size[0];
    i30 = c_u->size[0];
    c_u->size[0] = ixstart;
    emxEnsureCapacity(&st, (emxArray__common *)c_u, i30, (int32_T)sizeof(real_T),
                      &u_emlrtRTEI);
    for (i30 = 0; i30 < ixstart; i30++) {
      c_u->data[i30] = u->data[i30 + u->size[0]];
    }

    gb_y = NULL;
    m10 = emlrtCreateNumericArray(1, *(int32_T (*)[2])c_u->size, mxDOUBLE_CLASS,
      mxREAL);
    pData = (real_T *)mxGetPr(m10);
    i30 = 0;
    for (i = 0; i < c_u->size[0]; i++) {
      pData[i30] = c_u->data[i];
      i30++;
    }

    emlrtAssign(&gb_y, m10);
    hb_y = NULL;
    m10 = emlrtCreateCharArray(2, iv73);
    for (i = 0; i < 11; i++) {
      cv65[i] = cv66[i];
    }

    emlrtInitCharArrayR2013a(&st, 11, m10, cv65);
    emlrtAssign(&hb_y, m10);
    ib_y = NULL;
    m10 = emlrtCreateCharArray(2, iv74);
    for (i = 0; i < 4; i++) {
      cv71[i] = cv72[i];
    }

    emlrtInitCharArrayR2013a(&st, 4, m10, cv71);
    emlrtAssign(&ib_y, m10);
    jb_y = NULL;
    m10 = emlrtCreateCharArray(2, iv75);
    for (i = 0; i < 5; i++) {
      cv62[i] = cv68[i];
    }

    emlrtInitCharArrayR2013a(&st, 5, m10, cv62);
    emlrtAssign(&jb_y, m10);
    kb_y = NULL;
    m10 = emlrtCreateString1('g');
    emlrtAssign(&kb_y, m10);
    lb_y = NULL;
    m10 = emlrtCreateCharArray(2, iv76);
    for (i = 0; i < 6; i++) {
      cv56[i] = cv70[i];
    }

    emlrtInitCharArrayR2013a(&st, 6, m10, cv56);
    emlrtAssign(&lb_y, m10);
    b_st.site = &fh_emlrtRSI;
    line(&b_st, eb_y, b_emlrt_marshallOut(t), fb_y, gb_y, hb_y, ib_y, jb_y, kb_y,
         lb_y, emlrtAlias(ax), &ab_emlrtMCI);

    /*  legend(get(ax,'Children')); */
    emlrtDestroyArray(&fig);
    emlrtDestroyArray(&ax);
  }

  emxFree_real_T(&t);
  emxFree_real_T(&c_u);
  emxFree_real_T(&b_u);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (TestBemHeatEq_optimized.c) */

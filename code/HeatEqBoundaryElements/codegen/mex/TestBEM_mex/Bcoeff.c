/*
 * Bcoeff.c
 *
 * Code generation for function 'Bcoeff'
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
#include "eml_error.h"
#include "TestBEM_mex_data.h"

/* Variable Definitions */
static emlrtRSInfo i_emlrtRSI = { 12, "Bcoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Bcoeff.m" };

static emlrtRSInfo j_emlrtRSI = { 15, "Bcoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Bcoeff.m" };

static emlrtRSInfo k_emlrtRSI = { 16, "Bcoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Bcoeff.m" };

static emlrtBCInfo p_emlrtBCI = { -1, -1, 7, 7, "timePoints", "Bcoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Bcoeff.m", 0 };

static emlrtDCInfo d_emlrtDCI = { 7, 7, "Bcoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Bcoeff.m", 1 };

static emlrtBCInfo q_emlrtBCI = { -1, -1, 9, 10, "timePoints", "Bcoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Bcoeff.m", 0 };

static emlrtBCInfo r_emlrtBCI = { -1, -1, 9, 31, "timePoints", "Bcoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Bcoeff.m", 0 };

static emlrtBCInfo s_emlrtBCI = { -1, -1, 11, 10, "timePoints", "Bcoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Bcoeff.m", 0 };

static emlrtBCInfo t_emlrtBCI = { -1, -1, 11, 31, "timePoints", "Bcoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Bcoeff.m", 0 };

static emlrtBCInfo u_emlrtBCI = { -1, -1, 14, 10, "timePoints", "Bcoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Bcoeff.m", 0 };

static emlrtBCInfo v_emlrtBCI = { -1, -1, 15, 33, "timePoints", "Bcoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Bcoeff.m", 0 };

static emlrtBCInfo w_emlrtBCI = { -1, -1, 16, 33, "timePoints", "Bcoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Bcoeff.m", 0 };

static emlrtBCInfo x_emlrtBCI = { -1, -1, 12, 33, "timePoints", "Bcoeff",
  "D:\\Ofir\\ENS\\TestFiles\\code\\New folder\\Bcoeff.m", 0 };

/* Function Definitions */
real_T Bcoeff(const emlrtStack *sp, real_T ksi, real_T j, real_T x, real_T t,
              const emxArray_real_T *timePoints)
{
  real_T vals;
  int32_T i3;
  int32_T i4;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  real_T b_x;
  real_T c_x;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /*  evaluate the coefficient B at the  boundary ksi=0 or ksi=1; */
  /*  for the index j which describes the time steps timePoints_j, at time t and space */
  /*  point x */
  /*  timePoints is a vector describing the time descritized domain */
  i3 = timePoints->size[1];
  i4 = (int32_T)emlrtIntegerCheckFastR2012b(j, &d_emlrtDCI, sp);
  if (t <= timePoints->data[emlrtDynamicBoundsCheckFastR2012b(i4, 1, i3,
       &p_emlrtBCI, sp) - 1]) {
    vals = 0.0;
  } else {
    i3 = timePoints->size[1];
    i4 = (int32_T)j;
    guard1 = false;
    guard2 = false;
    if (t > timePoints->data[emlrtDynamicBoundsCheckFastR2012b(i4, 1, i3,
         &q_emlrtBCI, sp) - 1]) {
      i3 = timePoints->size[1];
      i4 = (int32_T)((uint32_T)j + 1U);
      if ((t <= timePoints->data[emlrtDynamicBoundsCheckFastR2012b(i4, 1, i3,
            &r_emlrtBCI, sp) - 1]) && (x == ksi)) {
        vals = 0.0;
      } else {
        guard2 = true;
      }
    } else {
      guard2 = true;
    }

    if (guard2) {
      i3 = timePoints->size[1];
      i4 = (int32_T)j;
      if (t > timePoints->data[emlrtDynamicBoundsCheckFastR2012b(i4, 1, i3,
           &s_emlrtBCI, sp) - 1]) {
        i3 = timePoints->size[1];
        i4 = (int32_T)((uint32_T)j + 1U);
        if ((t <= timePoints->data[emlrtDynamicBoundsCheckFastR2012b(i4, 1, i3,
              &t_emlrtBCI, sp) - 1]) && (x != ksi)) {
          st.site = &i_emlrtRSI;
          i3 = timePoints->size[1];
          i4 = (int32_T)j;
          b_x = t - timePoints->data[emlrtDynamicBoundsCheckFastR2012b(i4, 1, i3,
            &x_emlrtBCI, &st) - 1];
          if (b_x < 0.0) {
            b_st.site = &f_emlrtRSI;
            eml_error(&b_st);
          }

          vals = -scalar_erf(muDoubleScalarAbs(x - ksi) / (2.0 *
            muDoubleScalarSqrt(b_x))) / 2.0;
        } else {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }
    }

    if (guard1) {
      i3 = timePoints->size[1];
      i4 = (int32_T)((uint32_T)j + 1U);
      if (t > timePoints->data[emlrtDynamicBoundsCheckFastR2012b(i4, 1, i3,
           &u_emlrtBCI, sp) - 1]) {
        st.site = &j_emlrtRSI;
        i3 = timePoints->size[1];
        i4 = (int32_T)j;
        b_x = t - timePoints->data[emlrtDynamicBoundsCheckFastR2012b(i4, 1, i3,
          &v_emlrtBCI, &st) - 1];
        if (b_x < 0.0) {
          b_st.site = &f_emlrtRSI;
          eml_error(&b_st);
        }

        st.site = &k_emlrtRSI;
        i3 = timePoints->size[1];
        i4 = (int32_T)((uint32_T)j + 1U);
        c_x = t - timePoints->data[emlrtDynamicBoundsCheckFastR2012b(i4, 1, i3,
          &w_emlrtBCI, &st) - 1];
        if (c_x < 0.0) {
          b_st.site = &f_emlrtRSI;
          eml_error(&b_st);
        }

        vals = (b_scalar_erf(muDoubleScalarAbs(x - ksi) / (2.0 *
                  muDoubleScalarSqrt(b_x))) - b_scalar_erf(muDoubleScalarAbs(x -
                  ksi) / (2.0 * muDoubleScalarSqrt(c_x)))) / 2.0;
      } else {
        vals = 0.0;
      }
    }
  }

  return vals;
}

/* End of code generation (Bcoeff.c) */

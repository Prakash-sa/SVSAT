/*
 * File: panel.c
 *
 * MATLAB Coder version            : 3.4
 * C/C++ source code generated on  : 03-Jun-2018 00:19:22
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "panel.h"

/* Function Definitions */

/*
 * upper panel
 * Arguments    : double t0
 *                double t1
 *                double t2
 *                double t3
 *                double t4
 *                double pos[15]
 * Return Type  : void
 */
void panel(double t0, double t1, double t2, double t3, double t4, double pos[15])
{
  double T14u[16];
  double dv0[16];
  int i0;
  double dv1[16];
  static const signed char iv0[4] = { 0, -1, 0, 0 };

  static const signed char iv1[4] = { 0, 0, 0, 1 };

  static const signed char iv2[4] = { 0, 1, 0, 15 };

  int i1;
  static const signed char iv3[4] = { 0, 0, 1, 15 };

  double T12u[16];
  int i2;
  static const signed char iv4[4] = { 0, 0, 1, 0 };

  double T13u[16];
  double b_T14u[16];
  T14u[0] = -sin(t0);
  T14u[4] = 0.0;
  T14u[8] = -cos(t0);
  T14u[12] = 0.0;
  T14u[1] = cos(t0);
  T14u[5] = 0.0;
  T14u[9] = -sin(t0);
  T14u[13] = 0.0;
  dv0[0] = cos(t1);
  dv0[4] = 0.0;
  dv0[8] = sin(t1);
  dv0[12] = 0.0;
  dv0[1] = sin(t1);
  dv0[5] = 0.0;
  dv0[9] = -cos(t1);
  dv0[13] = 0.0;
  for (i0 = 0; i0 < 4; i0++) {
    T14u[2 + (i0 << 2)] = iv0[i0];
    T14u[3 + (i0 << 2)] = iv1[i0];
    dv0[2 + (i0 << 2)] = iv2[i0];
    dv0[3 + (i0 << 2)] = iv1[i0];
  }

  dv1[0] = -sin(t2);
  dv1[4] = -cos(t2);
  dv1[8] = 0.0;
  dv1[12] = -30.0 * sin(t2);
  dv1[1] = cos(t2);
  dv1[5] = -sin(t2);
  dv1[9] = 0.0;
  dv1[13] = 30.0 * cos(t2);
  for (i0 = 0; i0 < 4; i0++) {
    for (i1 = 0; i1 < 4; i1++) {
      T12u[i0 + (i1 << 2)] = 0.0;
      for (i2 = 0; i2 < 4; i2++) {
        T12u[i0 + (i1 << 2)] += T14u[i0 + (i2 << 2)] * dv0[i2 + (i1 << 2)];
      }
    }

    dv1[2 + (i0 << 2)] = iv3[i0];
    dv1[3 + (i0 << 2)] = iv1[i0];
  }

  T14u[0] = cos(t3);
  T14u[4] = -sin(t3);
  T14u[8] = 0.0;
  T14u[12] = 30.0 * cos(t3);
  T14u[1] = sin(t3);
  T14u[5] = cos(t3);
  T14u[9] = 0.0;
  T14u[13] = 30.0 * sin(t3);
  for (i0 = 0; i0 < 4; i0++) {
    for (i1 = 0; i1 < 4; i1++) {
      T13u[i0 + (i1 << 2)] = 0.0;
      for (i2 = 0; i2 < 4; i2++) {
        T13u[i0 + (i1 << 2)] += T12u[i0 + (i2 << 2)] * dv1[i2 + (i1 << 2)];
      }
    }

    T14u[2 + (i0 << 2)] = iv4[i0];
    T14u[3 + (i0 << 2)] = iv1[i0];
  }

  /* one panel code */
  /* pos=[p0';p1u';p2u';p3u';p3u'-pn;p2u'-pn;p1u']; */
  /* two panel code */
  dv0[0] = cos(t4);
  dv0[4] = -sin(t4);
  dv0[8] = 0.0;
  dv0[12] = 30.0 * cos(t4);
  dv0[1] = sin(t4);
  dv0[5] = cos(t4);
  dv0[9] = 0.0;
  dv0[13] = 30.0 * sin(t4);
  for (i0 = 0; i0 < 4; i0++) {
    for (i1 = 0; i1 < 4; i1++) {
      b_T14u[i0 + (i1 << 2)] = 0.0;
      for (i2 = 0; i2 < 4; i2++) {
        b_T14u[i0 + (i1 << 2)] += T13u[i0 + (i2 << 2)] * T14u[i2 + (i1 << 2)];
      }
    }

    dv0[2 + (i0 << 2)] = iv4[i0];
    dv0[3 + (i0 << 2)] = iv1[i0];
  }

  for (i0 = 0; i0 < 4; i0++) {
    for (i1 = 0; i1 < 4; i1++) {
      T14u[i0 + (i1 << 2)] = 0.0;
      for (i2 = 0; i2 < 4; i2++) {
        T14u[i0 + (i1 << 2)] += b_T14u[i0 + (i2 << 2)] * dv0[i2 + (i1 << 2)];
      }
    }
  }

  for (i0 = 0; i0 < 3; i0++) {
    pos[5 * i0] = 0.0;
    pos[1 + 5 * i0] = T12u[12 + i0];
    pos[2 + 5 * i0] = T13u[12 + i0];
    pos[3 + 5 * i0] = b_T14u[12 + i0];
    pos[4 + 5 * i0] = T14u[12 + i0];
  }
}

/*
 * File trailer for panel.c
 *
 * [EOF]
 */

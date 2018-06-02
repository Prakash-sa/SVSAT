/*
 * File: _coder_panel_api.h
 *
 * MATLAB Coder version            : 3.4
 * C/C++ source code generated on  : 03-Jun-2018 00:19:22
 */

#ifndef _CODER_PANEL_API_H
#define _CODER_PANEL_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_panel_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void panel(real_T t0, real_T t1, real_T t2, real_T t3, real_T t4, real_T
                  pos[15]);
extern void panel_api(const mxArray * const prhs[5], const mxArray *plhs[1]);
extern void panel_atexit(void);
extern void panel_initialize(void);
extern void panel_terminate(void);
extern void panel_xil_terminate(void);

#endif

/*
 * File trailer for _coder_panel_api.h
 *
 * [EOF]
 */

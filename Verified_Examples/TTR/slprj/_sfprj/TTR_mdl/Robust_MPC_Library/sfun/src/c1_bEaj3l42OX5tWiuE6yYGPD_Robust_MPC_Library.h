#ifndef __c1_bEaj3l42OX5tWiuE6yYGPD_Robust_MPC_Library_h__
#define __c1_bEaj3l42OX5tWiuE6yYGPD_Robust_MPC_Library_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
#ifndef typedef_c1_bEaj3l42OX5tWiuE6yYGPD_ResolvedFunctionInfo
#define typedef_c1_bEaj3l42OX5tWiuE6yYGPD_ResolvedFunctionInfo

typedef struct {
  const char * context;
  const char * name;
  const char * dominantType;
  const char * resolved;
  uint32_T fileTimeLo;
  uint32_T fileTimeHi;
  uint32_T mFileTimeLo;
  uint32_T mFileTimeHi;
} c1_bEaj3l42OX5tWiuE6yYGPD_ResolvedFunctionInfo;

#endif                                 /*typedef_c1_bEaj3l42OX5tWiuE6yYGPD_ResolvedFunctionInfo*/

#ifndef typedef_SFc1_bEaj3l42OX5tWiuE6yYGPD_Robust_MPC_LibraryInstanceStruct
#define typedef_SFc1_bEaj3l42OX5tWiuE6yYGPD_Robust_MPC_LibraryInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c1_bEaj3l42OX5tWiuE6yYGPD_sfEvent;
  boolean_T c1_bEaj3l42OX5tWiuE6yYGPD_isStable;
  boolean_T c1_bEaj3l42OX5tWiuE6yYGPD_doneDoubleBufferReInit;
  uint8_T c1_bEaj3l42OX5tWiuE6yYGPD_is_active_c1_bEaj3l42OX5tWiuE6yYGPD_Ro;
} SFc1_bEaj3l42OX5tWiuE6yYGPD_Robust_MPC_LibraryInstanceStruct;

#endif                                 /*typedef_SFc1_bEaj3l42OX5tWiuE6yYGPD_Robust_MPC_LibraryInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c1_bEaj3l42OX5tWiuE6yYGPD_Robust_MPC_Library_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c1_bEaj3l42OX5tWiuE6yYGPD_Robust_MPC_Library_get_check_sum
  (mxArray *plhs[]);
extern void c1_bEaj3l42OX5tWiuE6yYGPD_Robust_MPC_Library_method_dispatcher
  (SimStruct *S, int_T method, void *data);

#endif

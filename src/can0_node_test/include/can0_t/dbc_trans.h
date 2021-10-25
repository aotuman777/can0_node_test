//
// File: dbc_trans.h
//
// Code generated for Simulink model 'dbc_trans'.
//
// Model version                  : 1.22
// Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
// C/C++ source code generated on : Thu Oct 21 21:03:46 2021
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives:
//    1. Execution efficiency
//    2. RAM efficiency
// Validation result: Not run
//
#ifndef RTW_HEADER_dbc_trans_h_
#define RTW_HEADER_dbc_trans_h_
#include "rtwtypes.h"
#ifndef dbc_trans_COMMON_INCLUDES_
# define dbc_trans_COMMON_INCLUDES_
#include <string.h>
#include "rtwtypes.h"
#include "can_message.h"
#endif                                 // dbc_trans_COMMON_INCLUDES_

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

// Forward declaration for rtModel
typedef struct tag_RTM RT_MODEL;

// user code (top of export header file)
#include "can_message.h"
#ifndef DEFINED_TYPEDEF_FOR_ESR_Input_
#define DEFINED_TYPEDEF_FOR_ESR_Input_

typedef struct {
  real_T speed;
  real_T direction;
  real_T yaw_rate;
} ESR_Input;

#endif

#ifndef DEFINED_TYPEDEF_FOR_gear_command_
#define DEFINED_TYPEDEF_FOR_gear_command_

typedef struct {
  real_T Gear_Enable_control;
  real_T Gear_Shift_Req;
  real_T IPC_Mode_Shift;
  real_T IPC_Stop_Eme;
} gear_command;

#endif

#ifndef DEFINED_TYPEDEF_FOR_ObstacleDataA1_739_
#define DEFINED_TYPEDEF_FOR_ObstacleDataA1_739_

typedef struct {
  real_T BlinkerInfo;
  real_T Cut_in_and_Out;
  real_T ObstacleBrakeLights;
  real_T ObstacleID;
  real_T OBstaclePosX;
  real_T ObstaclePosY;
  real_T ObstacleStatus;
  real_T ObstacleType;
  real_T ObstacleValid;
  real_T ObstacleVelX;
} ObstacleDataA1_739;

#endif

#ifndef DEFINED_TYPEDEF_FOR_ObstacleStatus_738_
#define DEFINED_TYPEDEF_FOR_ObstacleStatus_738_

typedef struct {
  real_T ActiveVersionNumberSection;
  real_T ApplictionVersion;
  real_T Close_car;
  real_T Failsafe;
  real_T Go;
  real_T LeftCloseRangeCutIn;
  real_T NumObstacle;
  real_T ProtocolVersion;
  real_T RightCloseRangeCutIn;
  real_T Timestamp;
} ObstacleStatus_738;

#endif

// Block signals and states (auto storage) for system '<Root>'
typedef struct {
  real_T ObstacleDataA1_739_unpk_o1;   // '<Root>/ObstacleDataA1_739_unpk'
  real_T ObstacleDataA1_739_unpk_o2;   // '<Root>/ObstacleDataA1_739_unpk'
  real_T ObstacleDataA1_739_unpk_o3;   // '<Root>/ObstacleDataA1_739_unpk'
  real_T ObstacleDataA1_739_unpk_o4;   // '<Root>/ObstacleDataA1_739_unpk'
  real_T ObstacleDataA1_739_unpk_o5;   // '<Root>/ObstacleDataA1_739_unpk'
  real_T ObstacleDataA1_739_unpk_o6;   // '<Root>/ObstacleDataA1_739_unpk'
  real_T ObstacleDataA1_739_unpk_o7;   // '<Root>/ObstacleDataA1_739_unpk'
  real_T ObstacleDataA1_739_unpk_o8;   // '<Root>/ObstacleDataA1_739_unpk'
  real_T ObstacleDataA1_739_unpk_o9;   // '<Root>/ObstacleDataA1_739_unpk'
  real_T ObstacleDataA1_739_unpk_o10;  // '<Root>/ObstacleDataA1_739_unpk'
  real_T ObstacleStatus_738_unpk_o1;   // '<Root>/ObstacleStatus_738_unpk'
  real_T ObstacleStatus_738_unpk_o2;   // '<Root>/ObstacleStatus_738_unpk'
  real_T ObstacleStatus_738_unpk_o3;   // '<Root>/ObstacleStatus_738_unpk'
  real_T ObstacleStatus_738_unpk_o4;   // '<Root>/ObstacleStatus_738_unpk'
  real_T ObstacleStatus_738_unpk_o5;   // '<Root>/ObstacleStatus_738_unpk'
  real_T ObstacleStatus_738_unpk_o6;   // '<Root>/ObstacleStatus_738_unpk'
  real_T ObstacleStatus_738_unpk_o7;   // '<Root>/ObstacleStatus_738_unpk'
  real_T ObstacleStatus_738_unpk_o8;   // '<Root>/ObstacleStatus_738_unpk'
  real_T ObstacleStatus_738_unpk_o9;   // '<Root>/ObstacleStatus_738_unpk'
  real_T ObstacleStatus_738_unpk_o10;  // '<Root>/ObstacleStatus_738_unpk'
  real_T BMS_FeedBack_unpk_o1;         // '<Root>/BMS_FeedBack_unpk'
  real_T BMS_FeedBack_unpk_o2;         // '<Root>/BMS_FeedBack_unpk'
  real_T BMS_FeedBack_unpk_o3;         // '<Root>/BMS_FeedBack_unpk'
  real_T BMS_FeedBack_unpk_o4;         // '<Root>/BMS_FeedBack_unpk'
  int_T MzdBrake_085_pk_ModeSignalID;  // '<Root>/MzdBrake_085_pk'
  int_T MzdSpeed_216_pk_ModeSignalID;  // '<Root>/MzdSpeed_216_pk'
  int_T ESR_Vehicle_Status_ModeSignalID;// '<Root>/ESR_Vehicle_Status'
  int_T ObstacleDataA1_739_unpk_ModeSig;// '<Root>/ObstacleDataA1_739_unpk'
  int_T ObstacleDataA1_739_unpk_StatusP;// '<Root>/ObstacleDataA1_739_unpk'
  int_T ObstacleStatus_738_unpk_ModeSig;// '<Root>/ObstacleStatus_738_unpk'
  int_T ObstacleStatus_738_unpk_StatusP;// '<Root>/ObstacleStatus_738_unpk'
  int_T BMS_FeedBack_unpk_ModeSignalID;// '<Root>/BMS_FeedBack_unpk'
  int_T BMS_FeedBack_unpk_StatusPortID;// '<Root>/BMS_FeedBack_unpk'
  int_T Gear_Command_ModeSignalID;     // '<Root>/Gear_Command'
} DW;

// Constant parameters (auto storage)
typedef struct {
  // Expression: 8191
  //  Referenced by: '<Root>/Constant5'

  real_T Constant5_Value;
} ConstP;

// External inputs (root inport signals with auto storage)
typedef struct {
  CAN_DATATYPE Obstacle738_msg;        // '<Root>/Obstacle738_msg'
  real_T uiBrake_param;                // '<Root>/uiBrake_param'
  real_T uiSpeed_param;                // '<Root>/uiSpeed_param'
  CAN_DATATYPE Obstacle739_msg;        // '<Root>/Obstacle739_msg'
  ESR_Input spd_dirc_yaw_param;        // '<Root>/spd_dirc_yaw_param'
  CAN_DATATYPE test_Bms_msg;           // '<Root>/test_Bms_msg'
  gear_command gear_command_param;     // '<Root>/gear_command_param'
} ExtU;

// External outputs (root outports fed by signals with auto storage)
typedef struct {
  CAN_DATATYPE BrakeMsg_Camera;        // '<Root>/BrakeMsg_Camera'
  CAN_DATATYPE SpeedMsg_Camera_msg;    // '<Root>/SpeedMsg_Camera_msg'
  CAN_DATATYPE SpeedMsg_ESR_msg;       // '<Root>/SpeedMsg_ESR_msg'
  ObstacleDataA1_739 ObstacleDataA1_739_k;// '<Root>/ObstacleDataA1_739'
  ObstacleStatus_738 ObstacleStatus_738_c;// '<Root>/ObstacleStatus_738'
  real_T BMS_feedback[4];              // '<Root>/BMS_feedback'
  CAN_DATATYPE Gear_command_msg;       // '<Root>/Gear_command_msg'
} ExtY;

// Real-time Model Data Structure
struct tag_RTM {
  const char_T * volatile errorStatus;
};

#ifdef __cplusplus

extern "C" {

#endif

#ifdef __cplusplus

}
#endif

// Constant parameters (auto storage)
extern const ConstP rtConstP;

// Class declaration for model dbc_trans
class camera_dbcModelClass {
  // public data and function members
 public:
  // External inputs
  ExtU rtU;

  // External outputs
  ExtY rtY;

  // model initialize function
  void initialize();

  // model step function
  void step();

  // Constructor
  camera_dbcModelClass();

  // Destructor
  ~camera_dbcModelClass();

  // Real-Time Model get method
  RT_MODEL * getRTM();

  // private data and function members
 private:
  // Block signals and states
  DW rtDW;

  // Real-Time Model
  RT_MODEL rtM;
};

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'dbc_trans'

#endif                                 // RTW_HEADER_dbc_trans_h_

//
// File trailer for generated code.
//
// [EOF]
//

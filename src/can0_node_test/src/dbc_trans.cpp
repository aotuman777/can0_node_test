//
// File: dbc_trans.cpp
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
#include "can0_t/dbc_trans.h"

// Model step function
void camera_dbcModelClass::step()
{
  // S-Function (scanpack): '<Root>/MzdBrake_085_pk'
  rtY.BrakeMsg_Camera.ID = 133U;
  rtY.BrakeMsg_Camera.Length = 8U;
  rtY.BrakeMsg_Camera.Extended = 0U;
  rtY.BrakeMsg_Camera.Remote = 0;
  rtY.BrakeMsg_Camera.Data[0] = 0;
  rtY.BrakeMsg_Camera.Data[1] = 0;
  rtY.BrakeMsg_Camera.Data[2] = 0;
  rtY.BrakeMsg_Camera.Data[3] = 0;
  rtY.BrakeMsg_Camera.Data[4] = 0;
  rtY.BrakeMsg_Camera.Data[5] = 0;
  rtY.BrakeMsg_Camera.Data[6] = 0;
  rtY.BrakeMsg_Camera.Data[7] = 0;

  {
    // --------------- START Packing signal 0 ------------------
    //   startBit                = 23
    //   length                  = 1
    //   desiredSignalByteLayout = BIGENDIAN
    //   dataType                = UNSIGNED
    //   factor                  = 1.0
    //   offset                  = 0.0
    //   minimum                 = 0.0
    //   maximum                 = 0.0
    //  -----------------------------------------------------------------------
    {
      {
        real64_T outValue = 0;

        {
          real64_T result = rtU.uiBrake_param;

          // no scaling required
          outValue = result;
        }

        {
          {
            uint8_T packedValue;
            if (outValue > (real64_T)(1)) {
              packedValue = (uint8_T) 1;
            } else if (outValue < (real64_T)(0)) {
              packedValue = (uint8_T) 0;
            } else {
              packedValue = (uint8_T) (outValue);
            }

            {
              {
                rtY.BrakeMsg_Camera.Data[2] = rtY.BrakeMsg_Camera.Data[2] |
                  (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 0)) >> 0)<<7);
              }
            }
          }
        }
      }
    }
  }

  // S-Function (scanpack): '<Root>/MzdSpeed_216_pk'
  rtY.SpeedMsg_Camera_msg.ID = 534U;
  rtY.SpeedMsg_Camera_msg.Length = 8U;
  rtY.SpeedMsg_Camera_msg.Extended = 0U;
  rtY.SpeedMsg_Camera_msg.Remote = 0;
  rtY.SpeedMsg_Camera_msg.Data[0] = 0;
  rtY.SpeedMsg_Camera_msg.Data[1] = 0;
  rtY.SpeedMsg_Camera_msg.Data[2] = 0;
  rtY.SpeedMsg_Camera_msg.Data[3] = 0;
  rtY.SpeedMsg_Camera_msg.Data[4] = 0;
  rtY.SpeedMsg_Camera_msg.Data[5] = 0;
  rtY.SpeedMsg_Camera_msg.Data[6] = 0;
  rtY.SpeedMsg_Camera_msg.Data[7] = 0;

  {
    // --------------- START Packing signal 0 ------------------
    //   startBit                = 32
    //   length                  = 8
    //   desiredSignalByteLayout = BIGENDIAN
    //   dataType                = UNSIGNED
    //   factor                  = 1.613924
    //   offset                  = 0.0
    //   minimum                 = 0.0
    //   maximum                 = 0.0
    //  -----------------------------------------------------------------------
    {
      {
        real64_T outValue = 0;

        {
          real64_T result = rtU.uiSpeed_param;

          // no offset to apply
          result = result / 1.613924;
          outValue = result;
        }

        {
          {
            uint8_T packedValue;
            if (outValue > (real64_T)(255)) {
              packedValue = (uint8_T) 255;
            } else if (outValue < (real64_T)(0)) {
              packedValue = (uint8_T) 0;
            } else {
              packedValue = (uint8_T) (outValue);
            }

            {
              {
                rtY.SpeedMsg_Camera_msg.Data[4] = rtY.SpeedMsg_Camera_msg.Data[4]
                  | (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 0)) >> 0)<<0);
              }

              {
                rtY.SpeedMsg_Camera_msg.Data[4] = rtY.SpeedMsg_Camera_msg.Data[4]
                  | (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 1)) >> 1)<<1);
              }

              {
                rtY.SpeedMsg_Camera_msg.Data[4] = rtY.SpeedMsg_Camera_msg.Data[4]
                  | (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 2)) >> 2)<<2);
              }

              {
                rtY.SpeedMsg_Camera_msg.Data[4] = rtY.SpeedMsg_Camera_msg.Data[4]
                  | (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 3)) >> 3)<<3);
              }

              {
                rtY.SpeedMsg_Camera_msg.Data[4] = rtY.SpeedMsg_Camera_msg.Data[4]
                  | (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 4)) >> 4)<<4);
              }

              {
                rtY.SpeedMsg_Camera_msg.Data[4] = rtY.SpeedMsg_Camera_msg.Data[4]
                  | (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 5)) >> 5)<<5);
              }

              {
                rtY.SpeedMsg_Camera_msg.Data[4] = rtY.SpeedMsg_Camera_msg.Data[4]
                  | (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 6)) >> 6)<<6);
              }

              {
                rtY.SpeedMsg_Camera_msg.Data[4] = rtY.SpeedMsg_Camera_msg.Data[4]
                  | (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 7)) >> 7)<<7);
              }
            }
          }
        }
      }
    }
  }

  // S-Function (scanpack): '<Root>/ESR_Vehicle_Status'
  rtY.SpeedMsg_ESR_msg.ID = 1264U;
  rtY.SpeedMsg_ESR_msg.Length = 8U;
  rtY.SpeedMsg_ESR_msg.Extended = 0U;
  rtY.SpeedMsg_ESR_msg.Remote = 0;
  rtY.SpeedMsg_ESR_msg.Data[0] = 0;
  rtY.SpeedMsg_ESR_msg.Data[1] = 0;
  rtY.SpeedMsg_ESR_msg.Data[2] = 0;
  rtY.SpeedMsg_ESR_msg.Data[3] = 0;
  rtY.SpeedMsg_ESR_msg.Data[4] = 0;
  rtY.SpeedMsg_ESR_msg.Data[5] = 0;
  rtY.SpeedMsg_ESR_msg.Data[6] = 0;
  rtY.SpeedMsg_ESR_msg.Data[7] = 0;

  {
    // --------------- START Packing signal 0 ------------------
    //   startBit                = 32
    //   length                  = 14
    //   desiredSignalByteLayout = BIGENDIAN
    //   dataType                = SIGNED
    //   factor                  = 1.0
    //   offset                  = 0.0
    //   minimum                 = -8192.0
    //   maximum                 = 8191.0
    //  -----------------------------------------------------------------------
    {
      {
        real64_T outValue = 0;

        {
          real64_T result = 8191.0;

          // no scaling required
          outValue = result;
        }

        {
          {
            int16_T packedValue;
            int32_T scaledValue;
            scaledValue = (int32_T) (outValue);
            if (scaledValue > (int32_T) (8191)) {
              packedValue = 8191;
            } else if (scaledValue < (int32_T)((-(8191)-1))) {
              packedValue = (-(8191)-1);
            } else {
              packedValue = (int16_T) (scaledValue);
            }

            {
              // The following cast from int16_T to uint16_T is intetional for bit copy. 
              uint16_T tempValue = (uint16_T) (packedValue);

              {
                rtY.SpeedMsg_ESR_msg.Data[4] = rtY.SpeedMsg_ESR_msg.Data[4] |
                  (uint8_T)((uint8_T)((uint16_T)(tempValue & (uint16_T)
                  (((uint16_T)(1)) << 0)) >> 0)<<0);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[4] = rtY.SpeedMsg_ESR_msg.Data[4] |
                  (uint8_T)((uint8_T)((uint16_T)(tempValue & (uint16_T)
                  (((uint16_T)(1)) << 1)) >> 1)<<1);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[4] = rtY.SpeedMsg_ESR_msg.Data[4] |
                  (uint8_T)((uint8_T)((uint16_T)(tempValue & (uint16_T)
                  (((uint16_T)(1)) << 2)) >> 2)<<2);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[4] = rtY.SpeedMsg_ESR_msg.Data[4] |
                  (uint8_T)((uint8_T)((uint16_T)(tempValue & (uint16_T)
                  (((uint16_T)(1)) << 3)) >> 3)<<3);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[4] = rtY.SpeedMsg_ESR_msg.Data[4] |
                  (uint8_T)((uint8_T)((uint16_T)(tempValue & (uint16_T)
                  (((uint16_T)(1)) << 4)) >> 4)<<4);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[4] = rtY.SpeedMsg_ESR_msg.Data[4] |
                  (uint8_T)((uint8_T)((uint16_T)(tempValue & (uint16_T)
                  (((uint16_T)(1)) << 5)) >> 5)<<5);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[4] = rtY.SpeedMsg_ESR_msg.Data[4] |
                  (uint8_T)((uint8_T)((uint16_T)(tempValue & (uint16_T)
                  (((uint16_T)(1)) << 6)) >> 6)<<6);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[4] = rtY.SpeedMsg_ESR_msg.Data[4] |
                  (uint8_T)((uint8_T)((uint16_T)(tempValue & (uint16_T)
                  (((uint16_T)(1)) << 7)) >> 7)<<7);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[3] = rtY.SpeedMsg_ESR_msg.Data[3] |
                  (uint8_T)((uint8_T)((uint16_T)(tempValue & (uint16_T)
                  (((uint16_T)(1)) << 8)) >> 8)<<0);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[3] = rtY.SpeedMsg_ESR_msg.Data[3] |
                  (uint8_T)((uint8_T)((uint16_T)(tempValue & (uint16_T)
                  (((uint16_T)(1)) << 9)) >> 9)<<1);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[3] = rtY.SpeedMsg_ESR_msg.Data[3] |
                  (uint8_T)((uint8_T)((uint16_T)(tempValue & (uint16_T)
                  (((uint16_T)(1)) << 10)) >> 10)<<2);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[3] = rtY.SpeedMsg_ESR_msg.Data[3] |
                  (uint8_T)((uint8_T)((uint16_T)(tempValue & (uint16_T)
                  (((uint16_T)(1)) << 11)) >> 11)<<3);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[3] = rtY.SpeedMsg_ESR_msg.Data[3] |
                  (uint8_T)((uint8_T)((uint16_T)(tempValue & (uint16_T)
                  (((uint16_T)(1)) << 12)) >> 12)<<4);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[3] = rtY.SpeedMsg_ESR_msg.Data[3] |
                  (uint8_T)((uint8_T)((uint16_T)(tempValue & (uint16_T)
                  (((uint16_T)(1)) << 13)) >> 13)<<5);
              }
            }
          }
        }
      }
    }

    // --------------- START Packing signal 1 ------------------
    //   startBit                = 51
    //   length                  = 11
    //   desiredSignalByteLayout = BIGENDIAN
    //   dataType                = UNSIGNED
    //   factor                  = 1.0
    //   offset                  = 0.0
    //   minimum                 = 0.0
    //   maximum                 = 2047.0
    //  -----------------------------------------------------------------------
    {
      {
        real64_T outValue = 0;

        {
          real64_T result = 0.0;

          // no scaling required
          outValue = result;
        }

        {
          {
            uint16_T packedValue;
            if (outValue > (real64_T)(2047)) {
              packedValue = (uint16_T) 2047;
            } else if (outValue < (real64_T)(0)) {
              packedValue = (uint16_T) 0;
            } else {
              packedValue = (uint16_T) (outValue);
            }

            {
              {
                rtY.SpeedMsg_ESR_msg.Data[6] = rtY.SpeedMsg_ESR_msg.Data[6] |
                  (uint8_T)((uint8_T)((uint16_T)(packedValue & (uint16_T)
                  (((uint16_T)(1)) << 0)) >> 0)<<3);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[6] = rtY.SpeedMsg_ESR_msg.Data[6] |
                  (uint8_T)((uint8_T)((uint16_T)(packedValue & (uint16_T)
                  (((uint16_T)(1)) << 1)) >> 1)<<4);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[6] = rtY.SpeedMsg_ESR_msg.Data[6] |
                  (uint8_T)((uint8_T)((uint16_T)(packedValue & (uint16_T)
                  (((uint16_T)(1)) << 2)) >> 2)<<5);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[6] = rtY.SpeedMsg_ESR_msg.Data[6] |
                  (uint8_T)((uint8_T)((uint16_T)(packedValue & (uint16_T)
                  (((uint16_T)(1)) << 3)) >> 3)<<6);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[6] = rtY.SpeedMsg_ESR_msg.Data[6] |
                  (uint8_T)((uint8_T)((uint16_T)(packedValue & (uint16_T)
                  (((uint16_T)(1)) << 4)) >> 4)<<7);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[5] = rtY.SpeedMsg_ESR_msg.Data[5] |
                  (uint8_T)((uint8_T)((uint16_T)(packedValue & (uint16_T)
                  (((uint16_T)(1)) << 5)) >> 5)<<0);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[5] = rtY.SpeedMsg_ESR_msg.Data[5] |
                  (uint8_T)((uint8_T)((uint16_T)(packedValue & (uint16_T)
                  (((uint16_T)(1)) << 6)) >> 6)<<1);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[5] = rtY.SpeedMsg_ESR_msg.Data[5] |
                  (uint8_T)((uint8_T)((uint16_T)(packedValue & (uint16_T)
                  (((uint16_T)(1)) << 7)) >> 7)<<2);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[5] = rtY.SpeedMsg_ESR_msg.Data[5] |
                  (uint8_T)((uint8_T)((uint16_T)(packedValue & (uint16_T)
                  (((uint16_T)(1)) << 8)) >> 8)<<3);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[5] = rtY.SpeedMsg_ESR_msg.Data[5] |
                  (uint8_T)((uint8_T)((uint16_T)(packedValue & (uint16_T)
                  (((uint16_T)(1)) << 9)) >> 9)<<4);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[5] = rtY.SpeedMsg_ESR_msg.Data[5] |
                  (uint8_T)((uint8_T)((uint16_T)(packedValue & (uint16_T)
                  (((uint16_T)(1)) << 10)) >> 10)<<5);
              }
            }
          }
        }
      }
    }

    // --------------- START Packing signal 2 ------------------
    //   startBit                = 56
    //   length                  = 11
    //   desiredSignalByteLayout = BIGENDIAN
    //   dataType                = UNSIGNED
    //   factor                  = 1.0
    //   offset                  = 0.0
    //   minimum                 = 0.0
    //   maximum                 = 2047.0
    //  -----------------------------------------------------------------------
    {
      {
        real64_T outValue = 0;

        {
          real64_T result = 0.0;

          // no scaling required
          outValue = result;
        }

        {
          {
            uint16_T packedValue;
            if (outValue > (real64_T)(2047)) {
              packedValue = (uint16_T) 2047;
            } else if (outValue < (real64_T)(0)) {
              packedValue = (uint16_T) 0;
            } else {
              packedValue = (uint16_T) (outValue);
            }

            {
              {
                rtY.SpeedMsg_ESR_msg.Data[7] = rtY.SpeedMsg_ESR_msg.Data[7] |
                  (uint8_T)((uint8_T)((uint16_T)(packedValue & (uint16_T)
                  (((uint16_T)(1)) << 0)) >> 0)<<0);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[7] = rtY.SpeedMsg_ESR_msg.Data[7] |
                  (uint8_T)((uint8_T)((uint16_T)(packedValue & (uint16_T)
                  (((uint16_T)(1)) << 1)) >> 1)<<1);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[7] = rtY.SpeedMsg_ESR_msg.Data[7] |
                  (uint8_T)((uint8_T)((uint16_T)(packedValue & (uint16_T)
                  (((uint16_T)(1)) << 2)) >> 2)<<2);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[7] = rtY.SpeedMsg_ESR_msg.Data[7] |
                  (uint8_T)((uint8_T)((uint16_T)(packedValue & (uint16_T)
                  (((uint16_T)(1)) << 3)) >> 3)<<3);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[7] = rtY.SpeedMsg_ESR_msg.Data[7] |
                  (uint8_T)((uint8_T)((uint16_T)(packedValue & (uint16_T)
                  (((uint16_T)(1)) << 4)) >> 4)<<4);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[7] = rtY.SpeedMsg_ESR_msg.Data[7] |
                  (uint8_T)((uint8_T)((uint16_T)(packedValue & (uint16_T)
                  (((uint16_T)(1)) << 5)) >> 5)<<5);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[7] = rtY.SpeedMsg_ESR_msg.Data[7] |
                  (uint8_T)((uint8_T)((uint16_T)(packedValue & (uint16_T)
                  (((uint16_T)(1)) << 6)) >> 6)<<6);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[7] = rtY.SpeedMsg_ESR_msg.Data[7] |
                  (uint8_T)((uint8_T)((uint16_T)(packedValue & (uint16_T)
                  (((uint16_T)(1)) << 7)) >> 7)<<7);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[6] = rtY.SpeedMsg_ESR_msg.Data[6] |
                  (uint8_T)((uint8_T)((uint16_T)(packedValue & (uint16_T)
                  (((uint16_T)(1)) << 8)) >> 8)<<0);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[6] = rtY.SpeedMsg_ESR_msg.Data[6] |
                  (uint8_T)((uint8_T)((uint16_T)(packedValue & (uint16_T)
                  (((uint16_T)(1)) << 9)) >> 9)<<1);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[6] = rtY.SpeedMsg_ESR_msg.Data[6] |
                  (uint8_T)((uint8_T)((uint16_T)(packedValue & (uint16_T)
                  (((uint16_T)(1)) << 10)) >> 10)<<2);
              }
            }
          }
        }
      }
    }

    // --------------- START Packing signal 3 ------------------
    //   startBit                = 30
    //   length                  = 1
    //   desiredSignalByteLayout = BIGENDIAN
    //   dataType                = UNSIGNED
    //   factor                  = 1.0
    //   offset                  = 0.0
    //   minimum                 = 0.0
    //   maximum                 = 0.0
    //  -----------------------------------------------------------------------
    {
      {
        real64_T outValue = 0;

        {
          real64_T result = 0.0;

          // no scaling required
          outValue = result;
        }

        {
          {
            uint8_T packedValue;
            if (outValue > (real64_T)(1)) {
              packedValue = (uint8_T) 1;
            } else if (outValue < (real64_T)(0)) {
              packedValue = (uint8_T) 0;
            } else {
              packedValue = (uint8_T) (outValue);
            }

            {
              {
                rtY.SpeedMsg_ESR_msg.Data[3] = rtY.SpeedMsg_ESR_msg.Data[3] |
                  (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 0)) >> 0)<<6);
              }
            }
          }
        }
      }
    }

    // --------------- START Packing signal 4 ------------------
    //   startBit                = 46
    //   length                  = 1
    //   desiredSignalByteLayout = BIGENDIAN
    //   dataType                = UNSIGNED
    //   factor                  = 1.0
    //   offset                  = 0.0
    //   minimum                 = 0.0
    //   maximum                 = 0.0
    //  -----------------------------------------------------------------------
    {
      {
        real64_T outValue = 0;

        {
          real64_T result = 0.0;

          // no scaling required
          outValue = result;
        }

        {
          {
            uint8_T packedValue;
            if (outValue > (real64_T)(1)) {
              packedValue = (uint8_T) 1;
            } else if (outValue < (real64_T)(0)) {
              packedValue = (uint8_T) 0;
            } else {
              packedValue = (uint8_T) (outValue);
            }

            {
              {
                rtY.SpeedMsg_ESR_msg.Data[5] = rtY.SpeedMsg_ESR_msg.Data[5] |
                  (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 0)) >> 0)<<6);
              }
            }
          }
        }
      }
    }

    // --------------- START Packing signal 5 ------------------
    //   startBit                = 47
    //   length                  = 1
    //   desiredSignalByteLayout = BIGENDIAN
    //   dataType                = UNSIGNED
    //   factor                  = 1.0
    //   offset                  = 0.0
    //   minimum                 = 0.0
    //   maximum                 = 0.0
    //  -----------------------------------------------------------------------
    {
      {
        real64_T outValue = 0;

        {
          real64_T result = 1.0;

          // no scaling required
          outValue = result;
        }

        {
          {
            uint8_T packedValue;
            if (outValue > (real64_T)(1)) {
              packedValue = (uint8_T) 1;
            } else if (outValue < (real64_T)(0)) {
              packedValue = (uint8_T) 0;
            } else {
              packedValue = (uint8_T) (outValue);
            }

            {
              {
                rtY.SpeedMsg_ESR_msg.Data[5] = rtY.SpeedMsg_ESR_msg.Data[5] |
                  (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 0)) >> 0)<<7);
              }
            }
          }
        }
      }
    }

    // --------------- START Packing signal 6 ------------------
    //   startBit                = 13
    //   length                  = 11
    //   desiredSignalByteLayout = BIGENDIAN
    //   dataType                = UNSIGNED
    //   factor                  = 0.0625
    //   offset                  = 0.0
    //   minimum                 = 0.0
    //   maximum                 = 127.9375
    //  -----------------------------------------------------------------------
    {
      {
        real64_T outValue = 0;

        {
          real64_T result = rtU.spd_dirc_yaw_param.speed;

          // no offset to apply
          result = result / 0.0625;
          outValue = result;
        }

        {
          {
            uint16_T packedValue;
            if (outValue > (real64_T)(2047)) {
              packedValue = (uint16_T) 2047;
            } else if (outValue < (real64_T)(0)) {
              packedValue = (uint16_T) 0;
            } else {
              packedValue = (uint16_T) (outValue);
            }

            {
              {
                rtY.SpeedMsg_ESR_msg.Data[1] = rtY.SpeedMsg_ESR_msg.Data[1] |
                  (uint8_T)((uint8_T)((uint16_T)(packedValue & (uint16_T)
                  (((uint16_T)(1)) << 0)) >> 0)<<5);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[1] = rtY.SpeedMsg_ESR_msg.Data[1] |
                  (uint8_T)((uint8_T)((uint16_T)(packedValue & (uint16_T)
                  (((uint16_T)(1)) << 1)) >> 1)<<6);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[1] = rtY.SpeedMsg_ESR_msg.Data[1] |
                  (uint8_T)((uint8_T)((uint16_T)(packedValue & (uint16_T)
                  (((uint16_T)(1)) << 2)) >> 2)<<7);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[0] = rtY.SpeedMsg_ESR_msg.Data[0] |
                  (uint8_T)((uint8_T)((uint16_T)(packedValue & (uint16_T)
                  (((uint16_T)(1)) << 3)) >> 3)<<0);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[0] = rtY.SpeedMsg_ESR_msg.Data[0] |
                  (uint8_T)((uint8_T)((uint16_T)(packedValue & (uint16_T)
                  (((uint16_T)(1)) << 4)) >> 4)<<1);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[0] = rtY.SpeedMsg_ESR_msg.Data[0] |
                  (uint8_T)((uint8_T)((uint16_T)(packedValue & (uint16_T)
                  (((uint16_T)(1)) << 5)) >> 5)<<2);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[0] = rtY.SpeedMsg_ESR_msg.Data[0] |
                  (uint8_T)((uint8_T)((uint16_T)(packedValue & (uint16_T)
                  (((uint16_T)(1)) << 6)) >> 6)<<3);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[0] = rtY.SpeedMsg_ESR_msg.Data[0] |
                  (uint8_T)((uint8_T)((uint16_T)(packedValue & (uint16_T)
                  (((uint16_T)(1)) << 7)) >> 7)<<4);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[0] = rtY.SpeedMsg_ESR_msg.Data[0] |
                  (uint8_T)((uint8_T)((uint16_T)(packedValue & (uint16_T)
                  (((uint16_T)(1)) << 8)) >> 8)<<5);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[0] = rtY.SpeedMsg_ESR_msg.Data[0] |
                  (uint8_T)((uint8_T)((uint16_T)(packedValue & (uint16_T)
                  (((uint16_T)(1)) << 9)) >> 9)<<6);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[0] = rtY.SpeedMsg_ESR_msg.Data[0] |
                  (uint8_T)((uint8_T)((uint16_T)(packedValue & (uint16_T)
                  (((uint16_T)(1)) << 10)) >> 10)<<7);
              }
            }
          }
        }
      }
    }

    // --------------- START Packing signal 7 ------------------
    //   startBit                = 12
    //   length                  = 1
    //   desiredSignalByteLayout = BIGENDIAN
    //   dataType                = UNSIGNED
    //   factor                  = 1.0
    //   offset                  = 0.0
    //   minimum                 = 0.0
    //   maximum                 = 0.0
    //  -----------------------------------------------------------------------
    {
      {
        real64_T outValue = 0;

        {
          real64_T result = rtU.spd_dirc_yaw_param.direction;

          // no scaling required
          outValue = result;
        }

        {
          {
            uint8_T packedValue;
            if (outValue > (real64_T)(1)) {
              packedValue = (uint8_T) 1;
            } else if (outValue < (real64_T)(0)) {
              packedValue = (uint8_T) 0;
            } else {
              packedValue = (uint8_T) (outValue);
            }

            {
              {
                rtY.SpeedMsg_ESR_msg.Data[1] = rtY.SpeedMsg_ESR_msg.Data[1] |
                  (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 0)) >> 0)<<4);
              }
            }
          }
        }
      }
    }

    // --------------- START Packing signal 8 ------------------
    //   startBit                = 16
    //   length                  = 12
    //   desiredSignalByteLayout = BIGENDIAN
    //   dataType                = SIGNED
    //   factor                  = 0.0625
    //   offset                  = 0.0
    //   minimum                 = -128.0
    //   maximum                 = 127.9375
    //  -----------------------------------------------------------------------
    {
      {
        real64_T outValue = 0;

        {
          real64_T result = rtU.spd_dirc_yaw_param.yaw_rate;

          // no offset to apply
          result = result / 0.0625;
          outValue = result;
        }

        {
          {
            int16_T packedValue;
            int32_T scaledValue;
            scaledValue = (int32_T) (outValue);
            if (scaledValue > (int32_T) (2047)) {
              packedValue = 2047;
            } else if (scaledValue < (int32_T)((-(2047)-1))) {
              packedValue = (-(2047)-1);
            } else {
              packedValue = (int16_T) (scaledValue);
            }

            {
              // The following cast from int16_T to uint16_T is intetional for bit copy. 
              uint16_T tempValue = (uint16_T) (packedValue);

              {
                rtY.SpeedMsg_ESR_msg.Data[2] = rtY.SpeedMsg_ESR_msg.Data[2] |
                  (uint8_T)((uint8_T)((uint16_T)(tempValue & (uint16_T)
                  (((uint16_T)(1)) << 0)) >> 0)<<0);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[2] = rtY.SpeedMsg_ESR_msg.Data[2] |
                  (uint8_T)((uint8_T)((uint16_T)(tempValue & (uint16_T)
                  (((uint16_T)(1)) << 1)) >> 1)<<1);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[2] = rtY.SpeedMsg_ESR_msg.Data[2] |
                  (uint8_T)((uint8_T)((uint16_T)(tempValue & (uint16_T)
                  (((uint16_T)(1)) << 2)) >> 2)<<2);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[2] = rtY.SpeedMsg_ESR_msg.Data[2] |
                  (uint8_T)((uint8_T)((uint16_T)(tempValue & (uint16_T)
                  (((uint16_T)(1)) << 3)) >> 3)<<3);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[2] = rtY.SpeedMsg_ESR_msg.Data[2] |
                  (uint8_T)((uint8_T)((uint16_T)(tempValue & (uint16_T)
                  (((uint16_T)(1)) << 4)) >> 4)<<4);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[2] = rtY.SpeedMsg_ESR_msg.Data[2] |
                  (uint8_T)((uint8_T)((uint16_T)(tempValue & (uint16_T)
                  (((uint16_T)(1)) << 5)) >> 5)<<5);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[2] = rtY.SpeedMsg_ESR_msg.Data[2] |
                  (uint8_T)((uint8_T)((uint16_T)(tempValue & (uint16_T)
                  (((uint16_T)(1)) << 6)) >> 6)<<6);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[2] = rtY.SpeedMsg_ESR_msg.Data[2] |
                  (uint8_T)((uint8_T)((uint16_T)(tempValue & (uint16_T)
                  (((uint16_T)(1)) << 7)) >> 7)<<7);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[1] = rtY.SpeedMsg_ESR_msg.Data[1] |
                  (uint8_T)((uint8_T)((uint16_T)(tempValue & (uint16_T)
                  (((uint16_T)(1)) << 8)) >> 8)<<0);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[1] = rtY.SpeedMsg_ESR_msg.Data[1] |
                  (uint8_T)((uint8_T)((uint16_T)(tempValue & (uint16_T)
                  (((uint16_T)(1)) << 9)) >> 9)<<1);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[1] = rtY.SpeedMsg_ESR_msg.Data[1] |
                  (uint8_T)((uint8_T)((uint16_T)(tempValue & (uint16_T)
                  (((uint16_T)(1)) << 10)) >> 10)<<2);
              }

              {
                rtY.SpeedMsg_ESR_msg.Data[1] = rtY.SpeedMsg_ESR_msg.Data[1] |
                  (uint8_T)((uint8_T)((uint16_T)(tempValue & (uint16_T)
                  (((uint16_T)(1)) << 11)) >> 11)<<3);
              }
            }
          }
        }
      }
    }

    // --------------- START Packing signal 9 ------------------
    //   startBit                = 31
    //   length                  = 1
    //   desiredSignalByteLayout = BIGENDIAN
    //   dataType                = UNSIGNED
    //   factor                  = 1.0
    //   offset                  = 0.0
    //   minimum                 = 0.0
    //   maximum                 = 0.0
    //  -----------------------------------------------------------------------
    {
      {
        real64_T outValue = 0;

        {
          real64_T result = 1.0;

          // no scaling required
          outValue = result;
        }

        {
          {
            uint8_T packedValue;
            if (outValue > (real64_T)(1)) {
              packedValue = (uint8_T) 1;
            } else if (outValue < (real64_T)(0)) {
              packedValue = (uint8_T) 0;
            } else {
              packedValue = (uint8_T) (outValue);
            }

            {
              {
                rtY.SpeedMsg_ESR_msg.Data[3] = rtY.SpeedMsg_ESR_msg.Data[3] |
                  (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 0)) >> 0)<<7);
              }
            }
          }
        }
      }
    }
  }

  // S-Function (scanunpack): '<Root>/ObstacleDataA1_739_unpk'
  {
    // S-Function (scanunpack): '<Root>/ObstacleDataA1_739_unpk'
    if ((8 == rtU.Obstacle739_msg.Length) && (rtU.Obstacle739_msg.ID !=
         INVALID_CAN_ID) ) {
      if ((1849U == rtU.Obstacle739_msg.ID) && (0U ==
           rtU.Obstacle739_msg.Extended) ) {
        {
          // --------------- START Unpacking signal 0 ------------------
          //   startBit                = 34
          //   length                  = 3
          //   desiredSignalByteLayout = LITTLEENDIAN
          //   dataType                = UNSIGNED
          //   factor                  = 1.0
          //   offset                  = 0.0
          //  -----------------------------------------------------------------------
          {
            {
              real64_T outValue = 0;

              {
                {
                  uint8_T unpackedValue = 0;

                  {
                    uint8_T tempValue = (uint8_T) (0);

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle739_msg.Data[4]) & (uint8_T)( (uint8_T) (1)<<
                        2)) >> 2)<<0);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle739_msg.Data[4]) & (uint8_T)( (uint8_T) (1)<<
                        3)) >> 3)<<1);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle739_msg.Data[4]) & (uint8_T)( (uint8_T) (1)<<
                        4)) >> 4)<<2);
                    }

                    unpackedValue = tempValue;
                  }

                  outValue = (real64_T) (unpackedValue);
                }
              }

              {
                real64_T result = (real64_T) outValue;
                rtDW.ObstacleDataA1_739_unpk_o1 = result;
              }
            }
          }

          // --------------- START Unpacking signal 1 ------------------
          //   startBit                = 37
          //   length                  = 3
          //   desiredSignalByteLayout = LITTLEENDIAN
          //   dataType                = UNSIGNED
          //   factor                  = 1.0
          //   offset                  = 0.0
          //  -----------------------------------------------------------------------
          {
            {
              real64_T outValue = 0;

              {
                {
                  uint8_T unpackedValue = 0;

                  {
                    uint8_T tempValue = (uint8_T) (0);

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle739_msg.Data[4]) & (uint8_T)( (uint8_T) (1)<<
                        5)) >> 5)<<0);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle739_msg.Data[4]) & (uint8_T)( (uint8_T) (1)<<
                        6)) >> 6)<<1);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle739_msg.Data[4]) & (uint8_T)( (uint8_T) (1)<<
                        7)) >> 7)<<2);
                    }

                    unpackedValue = tempValue;
                  }

                  outValue = (real64_T) (unpackedValue);
                }
              }

              {
                real64_T result = (real64_T) outValue;
                rtDW.ObstacleDataA1_739_unpk_o2 = result;
              }
            }
          }

          // --------------- START Unpacking signal 2 ------------------
          //   startBit                = 59
          //   length                  = 1
          //   desiredSignalByteLayout = LITTLEENDIAN
          //   dataType                = UNSIGNED
          //   factor                  = 1.0
          //   offset                  = 0.0
          //  -----------------------------------------------------------------------
          {
            {
              real64_T outValue = 0;

              {
                {
                  uint8_T unpackedValue = 0;

                  {
                    uint8_T tempValue = (uint8_T) (0);

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle739_msg.Data[7]) & (uint8_T)( (uint8_T) (1)<<
                        3)) >> 3)<<0);
                    }

                    unpackedValue = tempValue;
                  }

                  outValue = (real64_T) (unpackedValue);
                }
              }

              {
                real64_T result = (real64_T) outValue;
                rtDW.ObstacleDataA1_739_unpk_o3 = result;
              }
            }
          }

          // --------------- START Unpacking signal 3 ------------------
          //   startBit                = 0
          //   length                  = 8
          //   desiredSignalByteLayout = LITTLEENDIAN
          //   dataType                = UNSIGNED
          //   factor                  = 1.0
          //   offset                  = 0.0
          //  -----------------------------------------------------------------------
          {
            {
              real64_T outValue = 0;

              {
                {
                  uint8_T unpackedValue = 0;

                  {
                    uint8_T tempValue = (uint8_T) (0);

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle739_msg.Data[0]) & (uint8_T)( (uint8_T) (1)<<
                        0)) >> 0)<<0);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle739_msg.Data[0]) & (uint8_T)( (uint8_T) (1)<<
                        1)) >> 1)<<1);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle739_msg.Data[0]) & (uint8_T)( (uint8_T) (1)<<
                        2)) >> 2)<<2);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle739_msg.Data[0]) & (uint8_T)( (uint8_T) (1)<<
                        3)) >> 3)<<3);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle739_msg.Data[0]) & (uint8_T)( (uint8_T) (1)<<
                        4)) >> 4)<<4);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle739_msg.Data[0]) & (uint8_T)( (uint8_T) (1)<<
                        5)) >> 5)<<5);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle739_msg.Data[0]) & (uint8_T)( (uint8_T) (1)<<
                        6)) >> 6)<<6);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle739_msg.Data[0]) & (uint8_T)( (uint8_T) (1)<<
                        7)) >> 7)<<7);
                    }

                    unpackedValue = tempValue;
                  }

                  outValue = (real64_T) (unpackedValue);
                }
              }

              {
                real64_T result = (real64_T) outValue;
                if (result > 63.0) {
                  result = 63.0;
                }

                rtDW.ObstacleDataA1_739_unpk_o4 = result;
              }
            }
          }

          // --------------- START Unpacking signal 4 ------------------
          //   startBit                = 8
          //   length                  = 12
          //   desiredSignalByteLayout = LITTLEENDIAN
          //   dataType                = UNSIGNED
          //   factor                  = 0.0625
          //   offset                  = 0.0
          //  -----------------------------------------------------------------------
          {
            {
              real64_T outValue = 0;

              {
                {
                  uint16_T unpackedValue = 0;

                  {
                    uint16_T tempValue = (uint16_T) (0);

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle739_msg.Data[1]) & (uint16_T)( (uint16_T)
                        (1)<< 0)) >> 0)<<0);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle739_msg.Data[1]) & (uint16_T)( (uint16_T)
                        (1)<< 1)) >> 1)<<1);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle739_msg.Data[1]) & (uint16_T)( (uint16_T)
                        (1)<< 2)) >> 2)<<2);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle739_msg.Data[1]) & (uint16_T)( (uint16_T)
                        (1)<< 3)) >> 3)<<3);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle739_msg.Data[1]) & (uint16_T)( (uint16_T)
                        (1)<< 4)) >> 4)<<4);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle739_msg.Data[1]) & (uint16_T)( (uint16_T)
                        (1)<< 5)) >> 5)<<5);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle739_msg.Data[1]) & (uint16_T)( (uint16_T)
                        (1)<< 6)) >> 6)<<6);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle739_msg.Data[1]) & (uint16_T)( (uint16_T)
                        (1)<< 7)) >> 7)<<7);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle739_msg.Data[2]) & (uint16_T)( (uint16_T)
                        (1)<< 0)) >> 0)<<8);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle739_msg.Data[2]) & (uint16_T)( (uint16_T)
                        (1)<< 1)) >> 1)<<9);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle739_msg.Data[2]) & (uint16_T)( (uint16_T)
                        (1)<< 2)) >> 2)<<10);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle739_msg.Data[2]) & (uint16_T)( (uint16_T)
                        (1)<< 3)) >> 3)<<11);
                    }

                    unpackedValue = tempValue;
                  }

                  outValue = (real64_T) (unpackedValue);
                }
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.0625;
                if (result > 250.0) {
                  result = 250.0;
                }

                rtDW.ObstacleDataA1_739_unpk_o5 = result;
              }
            }
          }

          // --------------- START Unpacking signal 5 ------------------
          //   startBit                = 24
          //   length                  = 10
          //   desiredSignalByteLayout = LITTLEENDIAN
          //   dataType                = SIGNED
          //   factor                  = 0.0625
          //   offset                  = 0.0
          //  -----------------------------------------------------------------------
          {
            {
              real64_T outValue = 0;

              {
                {
                  int16_T unpackedValue = 0;

                  {
                    uint16_T tempValue = (uint16_T) (0);

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle739_msg.Data[3]) & (uint16_T)( (uint16_T)
                        (1)<< 0)) >> 0)<<0);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle739_msg.Data[3]) & (uint16_T)( (uint16_T)
                        (1)<< 1)) >> 1)<<1);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle739_msg.Data[3]) & (uint16_T)( (uint16_T)
                        (1)<< 2)) >> 2)<<2);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle739_msg.Data[3]) & (uint16_T)( (uint16_T)
                        (1)<< 3)) >> 3)<<3);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle739_msg.Data[3]) & (uint16_T)( (uint16_T)
                        (1)<< 4)) >> 4)<<4);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle739_msg.Data[3]) & (uint16_T)( (uint16_T)
                        (1)<< 5)) >> 5)<<5);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle739_msg.Data[3]) & (uint16_T)( (uint16_T)
                        (1)<< 6)) >> 6)<<6);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle739_msg.Data[3]) & (uint16_T)( (uint16_T)
                        (1)<< 7)) >> 7)<<7);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle739_msg.Data[4]) & (uint16_T)( (uint16_T)
                        (1)<< 0)) >> 0)<<8);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle739_msg.Data[4]) & (uint16_T)( (uint16_T)
                        (1)<< 1)) >> 1)<<9);
                    }

                    unpackedValue = (int16_T) tempValue;
                  }

                  {
                    uint16_T tempValue = (uint16_T) unpackedValue;
                    uint16_T mask = (uint16_T)(1);
                    uint16_T bitValue = tempValue & (uint16_T)(mask << (10-1));
                    if (bitValue != 0U) {
                      {
                        tempValue = tempValue | (uint16_T)(mask << (16-0-1));
                      }

                      {
                        tempValue = tempValue | (uint16_T)(mask << (16-1-1));
                      }

                      {
                        tempValue = tempValue | (uint16_T)(mask << (16-2-1));
                      }

                      {
                        tempValue = tempValue | (uint16_T)(mask << (16-3-1));
                      }

                      {
                        tempValue = tempValue | (uint16_T)(mask << (16-4-1));
                      }

                      {
                        tempValue = tempValue | (uint16_T)(mask << (16-5-1));
                      }

                      unpackedValue = (int16_T) tempValue;
                    }
                  }

                  outValue = (real64_T) (unpackedValue);
                }
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.0625;
                rtDW.ObstacleDataA1_739_unpk_o6 = result;
              }
            }
          }

          // --------------- START Unpacking signal 6 ------------------
          //   startBit                = 56
          //   length                  = 3
          //   desiredSignalByteLayout = LITTLEENDIAN
          //   dataType                = UNSIGNED
          //   factor                  = 1.0
          //   offset                  = 0.0
          //  -----------------------------------------------------------------------
          {
            {
              real64_T outValue = 0;

              {
                {
                  uint8_T unpackedValue = 0;

                  {
                    uint8_T tempValue = (uint8_T) (0);

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle739_msg.Data[7]) & (uint8_T)( (uint8_T) (1)<<
                        0)) >> 0)<<0);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle739_msg.Data[7]) & (uint8_T)( (uint8_T) (1)<<
                        1)) >> 1)<<1);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle739_msg.Data[7]) & (uint8_T)( (uint8_T) (1)<<
                        2)) >> 2)<<2);
                    }

                    unpackedValue = tempValue;
                  }

                  outValue = (real64_T) (unpackedValue);
                }
              }

              {
                real64_T result = (real64_T) outValue;
                rtDW.ObstacleDataA1_739_unpk_o7 = result;
              }
            }
          }

          // --------------- START Unpacking signal 7 ------------------
          //   startBit                = 52
          //   length                  = 3
          //   desiredSignalByteLayout = LITTLEENDIAN
          //   dataType                = UNSIGNED
          //   factor                  = 1.0
          //   offset                  = 0.0
          //  -----------------------------------------------------------------------
          {
            {
              real64_T outValue = 0;

              {
                {
                  uint8_T unpackedValue = 0;

                  {
                    uint8_T tempValue = (uint8_T) (0);

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle739_msg.Data[6]) & (uint8_T)( (uint8_T) (1)<<
                        4)) >> 4)<<0);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle739_msg.Data[6]) & (uint8_T)( (uint8_T) (1)<<
                        5)) >> 5)<<1);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle739_msg.Data[6]) & (uint8_T)( (uint8_T) (1)<<
                        6)) >> 6)<<2);
                    }

                    unpackedValue = tempValue;
                  }

                  outValue = (real64_T) (unpackedValue);
                }
              }

              {
                real64_T result = (real64_T) outValue;
                rtDW.ObstacleDataA1_739_unpk_o8 = result;
              }
            }
          }

          // --------------- START Unpacking signal 8 ------------------
          //   startBit                = 62
          //   length                  = 2
          //   desiredSignalByteLayout = LITTLEENDIAN
          //   dataType                = UNSIGNED
          //   factor                  = 1.0
          //   offset                  = 0.0
          //  -----------------------------------------------------------------------
          {
            {
              real64_T outValue = 0;

              {
                {
                  uint8_T unpackedValue = 0;

                  {
                    uint8_T tempValue = (uint8_T) (0);

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle739_msg.Data[7]) & (uint8_T)( (uint8_T) (1)<<
                        6)) >> 6)<<0);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle739_msg.Data[7]) & (uint8_T)( (uint8_T) (1)<<
                        7)) >> 7)<<1);
                    }

                    unpackedValue = tempValue;
                  }

                  outValue = (real64_T) (unpackedValue);
                }
              }

              {
                real64_T result = (real64_T) outValue;
                rtDW.ObstacleDataA1_739_unpk_o9 = result;
              }
            }
          }

          // --------------- START Unpacking signal 9 ------------------
          //   startBit                = 40
          //   length                  = 12
          //   desiredSignalByteLayout = LITTLEENDIAN
          //   dataType                = SIGNED
          //   factor                  = 0.0625
          //   offset                  = 0.0
          //  -----------------------------------------------------------------------
          {
            {
              real64_T outValue = 0;

              {
                {
                  int16_T unpackedValue = 0;

                  {
                    uint16_T tempValue = (uint16_T) (0);

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle739_msg.Data[5]) & (uint16_T)( (uint16_T)
                        (1)<< 0)) >> 0)<<0);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle739_msg.Data[5]) & (uint16_T)( (uint16_T)
                        (1)<< 1)) >> 1)<<1);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle739_msg.Data[5]) & (uint16_T)( (uint16_T)
                        (1)<< 2)) >> 2)<<2);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle739_msg.Data[5]) & (uint16_T)( (uint16_T)
                        (1)<< 3)) >> 3)<<3);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle739_msg.Data[5]) & (uint16_T)( (uint16_T)
                        (1)<< 4)) >> 4)<<4);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle739_msg.Data[5]) & (uint16_T)( (uint16_T)
                        (1)<< 5)) >> 5)<<5);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle739_msg.Data[5]) & (uint16_T)( (uint16_T)
                        (1)<< 6)) >> 6)<<6);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle739_msg.Data[5]) & (uint16_T)( (uint16_T)
                        (1)<< 7)) >> 7)<<7);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle739_msg.Data[6]) & (uint16_T)( (uint16_T)
                        (1)<< 0)) >> 0)<<8);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle739_msg.Data[6]) & (uint16_T)( (uint16_T)
                        (1)<< 1)) >> 1)<<9);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle739_msg.Data[6]) & (uint16_T)( (uint16_T)
                        (1)<< 2)) >> 2)<<10);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle739_msg.Data[6]) & (uint16_T)( (uint16_T)
                        (1)<< 3)) >> 3)<<11);
                    }

                    unpackedValue = (int16_T) tempValue;
                  }

                  {
                    uint16_T tempValue = (uint16_T) unpackedValue;
                    uint16_T mask = (uint16_T)(1);
                    uint16_T bitValue = tempValue & (uint16_T)(mask << (12-1));
                    if (bitValue != 0U) {
                      {
                        tempValue = tempValue | (uint16_T)(mask << (16-0-1));
                      }

                      {
                        tempValue = tempValue | (uint16_T)(mask << (16-1-1));
                      }

                      {
                        tempValue = tempValue | (uint16_T)(mask << (16-2-1));
                      }

                      {
                        tempValue = tempValue | (uint16_T)(mask << (16-3-1));
                      }

                      unpackedValue = (int16_T) tempValue;
                    }
                  }

                  outValue = (real64_T) (unpackedValue);
                }
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.0625;
                if (result < -127.93) {
                  result = -127.93;
                }

                if (result > 127.93) {
                  result = 127.93;
                }

                rtDW.ObstacleDataA1_739_unpk_o10 = result;
              }
            }
          }
        }
      }
    }
  }

  // BusCreator: '<Root>/Bus Creator'
  rtY.ObstacleDataA1_739_k.BlinkerInfo = rtDW.ObstacleDataA1_739_unpk_o1;
  rtY.ObstacleDataA1_739_k.Cut_in_and_Out = rtDW.ObstacleDataA1_739_unpk_o2;
  rtY.ObstacleDataA1_739_k.ObstacleBrakeLights = rtDW.ObstacleDataA1_739_unpk_o3;
  rtY.ObstacleDataA1_739_k.ObstacleID = rtDW.ObstacleDataA1_739_unpk_o4;
  rtY.ObstacleDataA1_739_k.OBstaclePosX = rtDW.ObstacleDataA1_739_unpk_o5;
  rtY.ObstacleDataA1_739_k.ObstaclePosY = rtDW.ObstacleDataA1_739_unpk_o6;
  rtY.ObstacleDataA1_739_k.ObstacleStatus = rtDW.ObstacleDataA1_739_unpk_o7;
  rtY.ObstacleDataA1_739_k.ObstacleType = rtDW.ObstacleDataA1_739_unpk_o8;
  rtY.ObstacleDataA1_739_k.ObstacleValid = rtDW.ObstacleDataA1_739_unpk_o9;
  rtY.ObstacleDataA1_739_k.ObstacleVelX = rtDW.ObstacleDataA1_739_unpk_o10;

  // S-Function (scanunpack): '<Root>/ObstacleStatus_738_unpk'
  {
    // S-Function (scanunpack): '<Root>/ObstacleStatus_738_unpk'
    if ((7 == rtU.Obstacle738_msg.Length) && (rtU.Obstacle738_msg.ID !=
         INVALID_CAN_ID) ) {
      if ((1848U == rtU.Obstacle738_msg.ID) && (0U ==
           rtU.Obstacle738_msg.Extended) ) {
        {
          // --------------- START Unpacking signal 0 ------------------
          //   startBit                = 24
          //   length                  = 2
          //   desiredSignalByteLayout = LITTLEENDIAN
          //   dataType                = UNSIGNED
          //   factor                  = 1.0
          //   offset                  = 0.0
          //  -----------------------------------------------------------------------
          {
            {
              real64_T outValue = 0;

              {
                {
                  uint8_T unpackedValue = 0;

                  {
                    uint8_T tempValue = (uint8_T) (0);

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle738_msg.Data[3]) & (uint8_T)( (uint8_T) (1)<<
                        0)) >> 0)<<0);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle738_msg.Data[3]) & (uint8_T)( (uint8_T) (1)<<
                        1)) >> 1)<<1);
                    }

                    unpackedValue = tempValue;
                  }

                  outValue = (real64_T) (unpackedValue);
                }
              }

              {
                real64_T result = (real64_T) outValue;
                rtDW.ObstacleStatus_738_unpk_o1 = result;
              }
            }
          }

          // --------------- START Unpacking signal 1 ------------------
          //   startBit                = 16
          //   length                  = 8
          //   desiredSignalByteLayout = LITTLEENDIAN
          //   dataType                = UNSIGNED
          //   factor                  = 1.0
          //   offset                  = 0.0
          //  -----------------------------------------------------------------------
          {
            {
              real64_T outValue = 0;

              {
                {
                  uint8_T unpackedValue = 0;

                  {
                    uint8_T tempValue = (uint8_T) (0);

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle738_msg.Data[2]) & (uint8_T)( (uint8_T) (1)<<
                        0)) >> 0)<<0);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle738_msg.Data[2]) & (uint8_T)( (uint8_T) (1)<<
                        1)) >> 1)<<1);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle738_msg.Data[2]) & (uint8_T)( (uint8_T) (1)<<
                        2)) >> 2)<<2);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle738_msg.Data[2]) & (uint8_T)( (uint8_T) (1)<<
                        3)) >> 3)<<3);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle738_msg.Data[2]) & (uint8_T)( (uint8_T) (1)<<
                        4)) >> 4)<<4);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle738_msg.Data[2]) & (uint8_T)( (uint8_T) (1)<<
                        5)) >> 5)<<5);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle738_msg.Data[2]) & (uint8_T)( (uint8_T) (1)<<
                        6)) >> 6)<<6);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle738_msg.Data[2]) & (uint8_T)( (uint8_T) (1)<<
                        7)) >> 7)<<7);
                    }

                    unpackedValue = tempValue;
                  }

                  outValue = (real64_T) (unpackedValue);
                }
              }

              {
                real64_T result = (real64_T) outValue;
                rtDW.ObstacleStatus_738_unpk_o2 = result;
              }
            }
          }

          // --------------- START Unpacking signal 2 ------------------
          //   startBit                = 53
          //   length                  = 1
          //   desiredSignalByteLayout = LITTLEENDIAN
          //   dataType                = UNSIGNED
          //   factor                  = 1.0
          //   offset                  = 0.0
          //  -----------------------------------------------------------------------
          {
            {
              real64_T outValue = 0;

              {
                {
                  uint8_T unpackedValue = 0;

                  {
                    uint8_T tempValue = (uint8_T) (0);

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle738_msg.Data[6]) & (uint8_T)( (uint8_T) (1)<<
                        5)) >> 5)<<0);
                    }

                    unpackedValue = tempValue;
                  }

                  outValue = (real64_T) (unpackedValue);
                }
              }

              {
                real64_T result = (real64_T) outValue;
                rtDW.ObstacleStatus_738_unpk_o3 = result;
              }
            }
          }

          // --------------- START Unpacking signal 3 ------------------
          //   startBit                = 40
          //   length                  = 13
          //   desiredSignalByteLayout = LITTLEENDIAN
          //   dataType                = UNSIGNED
          //   factor                  = 1.0
          //   offset                  = 0.0
          //  -----------------------------------------------------------------------
          {
            {
              real64_T outValue = 0;

              {
                {
                  uint16_T unpackedValue = 0;

                  {
                    uint16_T tempValue = (uint16_T) (0);

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle738_msg.Data[5]) & (uint16_T)( (uint16_T)
                        (1)<< 0)) >> 0)<<0);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle738_msg.Data[5]) & (uint16_T)( (uint16_T)
                        (1)<< 1)) >> 1)<<1);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle738_msg.Data[5]) & (uint16_T)( (uint16_T)
                        (1)<< 2)) >> 2)<<2);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle738_msg.Data[5]) & (uint16_T)( (uint16_T)
                        (1)<< 3)) >> 3)<<3);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle738_msg.Data[5]) & (uint16_T)( (uint16_T)
                        (1)<< 4)) >> 4)<<4);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle738_msg.Data[5]) & (uint16_T)( (uint16_T)
                        (1)<< 5)) >> 5)<<5);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle738_msg.Data[5]) & (uint16_T)( (uint16_T)
                        (1)<< 6)) >> 6)<<6);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle738_msg.Data[5]) & (uint16_T)( (uint16_T)
                        (1)<< 7)) >> 7)<<7);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle738_msg.Data[6]) & (uint16_T)( (uint16_T)
                        (1)<< 0)) >> 0)<<8);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle738_msg.Data[6]) & (uint16_T)( (uint16_T)
                        (1)<< 1)) >> 1)<<9);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle738_msg.Data[6]) & (uint16_T)( (uint16_T)
                        (1)<< 2)) >> 2)<<10);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle738_msg.Data[6]) & (uint16_T)( (uint16_T)
                        (1)<< 3)) >> 3)<<11);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.Obstacle738_msg.Data[6]) & (uint16_T)( (uint16_T)
                        (1)<< 4)) >> 4)<<12);
                    }

                    unpackedValue = tempValue;
                  }

                  outValue = (real64_T) (unpackedValue);
                }
              }

              {
                real64_T result = (real64_T) outValue;
                rtDW.ObstacleStatus_738_unpk_o4 = result;
              }
            }
          }

          // --------------- START Unpacking signal 4 ------------------
          //   startBit                = 28
          //   length                  = 4
          //   desiredSignalByteLayout = LITTLEENDIAN
          //   dataType                = UNSIGNED
          //   factor                  = 1.0
          //   offset                  = 0.0
          //  -----------------------------------------------------------------------
          {
            {
              real64_T outValue = 0;

              {
                {
                  uint8_T unpackedValue = 0;

                  {
                    uint8_T tempValue = (uint8_T) (0);

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle738_msg.Data[3]) & (uint8_T)( (uint8_T) (1)<<
                        4)) >> 4)<<0);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle738_msg.Data[3]) & (uint8_T)( (uint8_T) (1)<<
                        5)) >> 5)<<1);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle738_msg.Data[3]) & (uint8_T)( (uint8_T) (1)<<
                        6)) >> 6)<<2);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle738_msg.Data[3]) & (uint8_T)( (uint8_T) (1)<<
                        7)) >> 7)<<3);
                    }

                    unpackedValue = tempValue;
                  }

                  outValue = (real64_T) (unpackedValue);
                }
              }

              {
                real64_T result = (real64_T) outValue;
                rtDW.ObstacleStatus_738_unpk_o5 = result;
              }
            }
          }

          // --------------- START Unpacking signal 5 ------------------
          //   startBit                = 26
          //   length                  = 1
          //   desiredSignalByteLayout = LITTLEENDIAN
          //   dataType                = UNSIGNED
          //   factor                  = 1.0
          //   offset                  = 0.0
          //  -----------------------------------------------------------------------
          {
            {
              real64_T outValue = 0;

              {
                {
                  uint8_T unpackedValue = 0;

                  {
                    uint8_T tempValue = (uint8_T) (0);

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle738_msg.Data[3]) & (uint8_T)( (uint8_T) (1)<<
                        2)) >> 2)<<0);
                    }

                    unpackedValue = tempValue;
                  }

                  outValue = (real64_T) (unpackedValue);
                }
              }

              {
                real64_T result = (real64_T) outValue;
                rtDW.ObstacleStatus_738_unpk_o6 = result;
              }
            }
          }

          // --------------- START Unpacking signal 6 ------------------
          //   startBit                = 0
          //   length                  = 8
          //   desiredSignalByteLayout = LITTLEENDIAN
          //   dataType                = UNSIGNED
          //   factor                  = 1.0
          //   offset                  = 0.0
          //  -----------------------------------------------------------------------
          {
            {
              real64_T outValue = 0;

              {
                {
                  uint8_T unpackedValue = 0;

                  {
                    uint8_T tempValue = (uint8_T) (0);

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle738_msg.Data[0]) & (uint8_T)( (uint8_T) (1)<<
                        0)) >> 0)<<0);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle738_msg.Data[0]) & (uint8_T)( (uint8_T) (1)<<
                        1)) >> 1)<<1);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle738_msg.Data[0]) & (uint8_T)( (uint8_T) (1)<<
                        2)) >> 2)<<2);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle738_msg.Data[0]) & (uint8_T)( (uint8_T) (1)<<
                        3)) >> 3)<<3);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle738_msg.Data[0]) & (uint8_T)( (uint8_T) (1)<<
                        4)) >> 4)<<4);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle738_msg.Data[0]) & (uint8_T)( (uint8_T) (1)<<
                        5)) >> 5)<<5);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle738_msg.Data[0]) & (uint8_T)( (uint8_T) (1)<<
                        6)) >> 6)<<6);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle738_msg.Data[0]) & (uint8_T)( (uint8_T) (1)<<
                        7)) >> 7)<<7);
                    }

                    unpackedValue = tempValue;
                  }

                  outValue = (real64_T) (unpackedValue);
                }
              }

              {
                real64_T result = (real64_T) outValue;
                rtDW.ObstacleStatus_738_unpk_o7 = result;
              }
            }
          }

          // --------------- START Unpacking signal 7 ------------------
          //   startBit                = 32
          //   length                  = 8
          //   desiredSignalByteLayout = LITTLEENDIAN
          //   dataType                = UNSIGNED
          //   factor                  = 1.0
          //   offset                  = 0.0
          //  -----------------------------------------------------------------------
          {
            {
              real64_T outValue = 0;

              {
                {
                  uint8_T unpackedValue = 0;

                  {
                    uint8_T tempValue = (uint8_T) (0);

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle738_msg.Data[4]) & (uint8_T)( (uint8_T) (1)<<
                        0)) >> 0)<<0);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle738_msg.Data[4]) & (uint8_T)( (uint8_T) (1)<<
                        1)) >> 1)<<1);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle738_msg.Data[4]) & (uint8_T)( (uint8_T) (1)<<
                        2)) >> 2)<<2);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle738_msg.Data[4]) & (uint8_T)( (uint8_T) (1)<<
                        3)) >> 3)<<3);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle738_msg.Data[4]) & (uint8_T)( (uint8_T) (1)<<
                        4)) >> 4)<<4);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle738_msg.Data[4]) & (uint8_T)( (uint8_T) (1)<<
                        5)) >> 5)<<5);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle738_msg.Data[4]) & (uint8_T)( (uint8_T) (1)<<
                        6)) >> 6)<<6);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle738_msg.Data[4]) & (uint8_T)( (uint8_T) (1)<<
                        7)) >> 7)<<7);
                    }

                    unpackedValue = tempValue;
                  }

                  outValue = (real64_T) (unpackedValue);
                }
              }

              {
                real64_T result = (real64_T) outValue;
                rtDW.ObstacleStatus_738_unpk_o8 = result;
              }
            }
          }

          // --------------- START Unpacking signal 8 ------------------
          //   startBit                = 27
          //   length                  = 1
          //   desiredSignalByteLayout = LITTLEENDIAN
          //   dataType                = UNSIGNED
          //   factor                  = 1.0
          //   offset                  = 0.0
          //  -----------------------------------------------------------------------
          {
            {
              real64_T outValue = 0;

              {
                {
                  uint8_T unpackedValue = 0;

                  {
                    uint8_T tempValue = (uint8_T) (0);

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle738_msg.Data[3]) & (uint8_T)( (uint8_T) (1)<<
                        3)) >> 3)<<0);
                    }

                    unpackedValue = tempValue;
                  }

                  outValue = (real64_T) (unpackedValue);
                }
              }

              {
                real64_T result = (real64_T) outValue;
                rtDW.ObstacleStatus_738_unpk_o9 = result;
              }
            }
          }

          // --------------- START Unpacking signal 9 ------------------
          //   startBit                = 8
          //   length                  = 8
          //   desiredSignalByteLayout = LITTLEENDIAN
          //   dataType                = UNSIGNED
          //   factor                  = 1.0
          //   offset                  = 0.0
          //  -----------------------------------------------------------------------
          {
            {
              real64_T outValue = 0;

              {
                {
                  uint8_T unpackedValue = 0;

                  {
                    uint8_T tempValue = (uint8_T) (0);

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle738_msg.Data[1]) & (uint8_T)( (uint8_T) (1)<<
                        0)) >> 0)<<0);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle738_msg.Data[1]) & (uint8_T)( (uint8_T) (1)<<
                        1)) >> 1)<<1);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle738_msg.Data[1]) & (uint8_T)( (uint8_T) (1)<<
                        2)) >> 2)<<2);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle738_msg.Data[1]) & (uint8_T)( (uint8_T) (1)<<
                        3)) >> 3)<<3);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle738_msg.Data[1]) & (uint8_T)( (uint8_T) (1)<<
                        4)) >> 4)<<4);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle738_msg.Data[1]) & (uint8_T)( (uint8_T) (1)<<
                        5)) >> 5)<<5);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle738_msg.Data[1]) & (uint8_T)( (uint8_T) (1)<<
                        6)) >> 6)<<6);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.Obstacle738_msg.Data[1]) & (uint8_T)( (uint8_T) (1)<<
                        7)) >> 7)<<7);
                    }

                    unpackedValue = tempValue;
                  }

                  outValue = (real64_T) (unpackedValue);
                }
              }

              {
                real64_T result = (real64_T) outValue;
                rtDW.ObstacleStatus_738_unpk_o10 = result;
              }
            }
          }
        }
      }
    }
  }

  // BusCreator: '<Root>/Bus Creator1'
  rtY.ObstacleStatus_738_c.ActiveVersionNumberSection =
    rtDW.ObstacleStatus_738_unpk_o1;
  rtY.ObstacleStatus_738_c.ApplictionVersion = rtDW.ObstacleStatus_738_unpk_o2;
  rtY.ObstacleStatus_738_c.Close_car = rtDW.ObstacleStatus_738_unpk_o3;
  rtY.ObstacleStatus_738_c.Failsafe = rtDW.ObstacleStatus_738_unpk_o4;
  rtY.ObstacleStatus_738_c.Go = rtDW.ObstacleStatus_738_unpk_o5;
  rtY.ObstacleStatus_738_c.LeftCloseRangeCutIn = rtDW.ObstacleStatus_738_unpk_o6;
  rtY.ObstacleStatus_738_c.NumObstacle = rtDW.ObstacleStatus_738_unpk_o7;
  rtY.ObstacleStatus_738_c.ProtocolVersion = rtDW.ObstacleStatus_738_unpk_o8;
  rtY.ObstacleStatus_738_c.RightCloseRangeCutIn =
    rtDW.ObstacleStatus_738_unpk_o9;
  rtY.ObstacleStatus_738_c.Timestamp = rtDW.ObstacleStatus_738_unpk_o10;

  // S-Function (scanunpack): '<Root>/BMS_FeedBack_unpk'
  {
    // S-Function (scanunpack): '<Root>/BMS_FeedBack_unpk'
    if ((8 == rtU.test_Bms_msg.Length) && (rtU.test_Bms_msg.ID != INVALID_CAN_ID)
        ) {
      if ((194U == rtU.test_Bms_msg.ID) && (0U == rtU.test_Bms_msg.Extended) ) {
        {
          // --------------- START Unpacking signal 0 ------------------
          //   startBit                = 56
          //   length                  = 8
          //   desiredSignalByteLayout = LITTLEENDIAN
          //   dataType                = UNSIGNED
          //   factor                  = 1.0
          //   offset                  = 0.0
          //  -----------------------------------------------------------------------
          {
            {
              real64_T outValue = 0;

              {
                {
                  uint8_T unpackedValue = 0;

                  {
                    uint8_T tempValue = (uint8_T) (0);

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.test_Bms_msg.Data[7]) & (uint8_T)( (uint8_T) (1)<<
                        0)) >> 0)<<0);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.test_Bms_msg.Data[7]) & (uint8_T)( (uint8_T) (1)<<
                        1)) >> 1)<<1);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.test_Bms_msg.Data[7]) & (uint8_T)( (uint8_T) (1)<<
                        2)) >> 2)<<2);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.test_Bms_msg.Data[7]) & (uint8_T)( (uint8_T) (1)<<
                        3)) >> 3)<<3);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.test_Bms_msg.Data[7]) & (uint8_T)( (uint8_T) (1)<<
                        4)) >> 4)<<4);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.test_Bms_msg.Data[7]) & (uint8_T)( (uint8_T) (1)<<
                        5)) >> 5)<<5);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.test_Bms_msg.Data[7]) & (uint8_T)( (uint8_T) (1)<<
                        6)) >> 6)<<6);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.test_Bms_msg.Data[7]) & (uint8_T)( (uint8_T) (1)<<
                        7)) >> 7)<<7);
                    }

                    unpackedValue = tempValue;
                  }

                  outValue = (real64_T) (unpackedValue);
                }
              }

              {
                real64_T result = (real64_T) outValue;
                rtDW.BMS_FeedBack_unpk_o1 = result;
              }
            }
          }

          // --------------- START Unpacking signal 1 ------------------
          //   startBit                = 24
          //   length                  = 8
          //   desiredSignalByteLayout = LITTLEENDIAN
          //   dataType                = UNSIGNED
          //   factor                  = 1.0
          //   offset                  = 0.0
          //  -----------------------------------------------------------------------
          {
            {
              real64_T outValue = 0;

              {
                {
                  uint8_T unpackedValue = 0;

                  {
                    uint8_T tempValue = (uint8_T) (0);

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.test_Bms_msg.Data[3]) & (uint8_T)( (uint8_T) (1)<<
                        0)) >> 0)<<0);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.test_Bms_msg.Data[3]) & (uint8_T)( (uint8_T) (1)<<
                        1)) >> 1)<<1);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.test_Bms_msg.Data[3]) & (uint8_T)( (uint8_T) (1)<<
                        2)) >> 2)<<2);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.test_Bms_msg.Data[3]) & (uint8_T)( (uint8_T) (1)<<
                        3)) >> 3)<<3);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.test_Bms_msg.Data[3]) & (uint8_T)( (uint8_T) (1)<<
                        4)) >> 4)<<4);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.test_Bms_msg.Data[3]) & (uint8_T)( (uint8_T) (1)<<
                        5)) >> 5)<<5);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.test_Bms_msg.Data[3]) & (uint8_T)( (uint8_T) (1)<<
                        6)) >> 6)<<6);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.test_Bms_msg.Data[3]) & (uint8_T)( (uint8_T) (1)<<
                        7)) >> 7)<<7);
                    }

                    unpackedValue = tempValue;
                  }

                  outValue = (real64_T) (unpackedValue);
                }
              }

              {
                real64_T result = (real64_T) outValue;
                if (result > 120.0) {
                  result = 120.0;
                }

                rtDW.BMS_FeedBack_unpk_o2 = result;
              }
            }
          }

          // --------------- START Unpacking signal 2 ------------------
          //   startBit                = 0
          //   length                  = 8
          //   desiredSignalByteLayout = LITTLEENDIAN
          //   dataType                = UNSIGNED
          //   factor                  = 1.0
          //   offset                  = 0.0
          //  -----------------------------------------------------------------------
          {
            {
              real64_T outValue = 0;

              {
                {
                  uint8_T unpackedValue = 0;

                  {
                    uint8_T tempValue = (uint8_T) (0);

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.test_Bms_msg.Data[0]) & (uint8_T)( (uint8_T) (1)<<
                        0)) >> 0)<<0);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.test_Bms_msg.Data[0]) & (uint8_T)( (uint8_T) (1)<<
                        1)) >> 1)<<1);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.test_Bms_msg.Data[0]) & (uint8_T)( (uint8_T) (1)<<
                        2)) >> 2)<<2);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.test_Bms_msg.Data[0]) & (uint8_T)( (uint8_T) (1)<<
                        3)) >> 3)<<3);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.test_Bms_msg.Data[0]) & (uint8_T)( (uint8_T) (1)<<
                        4)) >> 4)<<4);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.test_Bms_msg.Data[0]) & (uint8_T)( (uint8_T) (1)<<
                        5)) >> 5)<<5);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.test_Bms_msg.Data[0]) & (uint8_T)( (uint8_T) (1)<<
                        6)) >> 6)<<6);
                    }

                    {
                      tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                        ((rtU.test_Bms_msg.Data[0]) & (uint8_T)( (uint8_T) (1)<<
                        7)) >> 7)<<7);
                    }

                    unpackedValue = tempValue;
                  }

                  outValue = (real64_T) (unpackedValue);
                }
              }

              {
                real64_T result = (real64_T) outValue;
                if (result > 100.0) {
                  result = 100.0;
                }

                rtDW.BMS_FeedBack_unpk_o3 = result;
              }
            }
          }

          // --------------- START Unpacking signal 3 ------------------
          //   startBit                = 8
          //   length                  = 16
          //   desiredSignalByteLayout = LITTLEENDIAN
          //   dataType                = UNSIGNED
          //   factor                  = 0.1
          //   offset                  = 0.0
          //  -----------------------------------------------------------------------
          {
            {
              real64_T outValue = 0;

              {
                {
                  uint16_T unpackedValue = 0;

                  {
                    uint16_T tempValue = (uint16_T) (0);

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.test_Bms_msg.Data[1]) & (uint16_T)( (uint16_T) (1)<<
                        0)) >> 0)<<0);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.test_Bms_msg.Data[1]) & (uint16_T)( (uint16_T) (1)<<
                        1)) >> 1)<<1);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.test_Bms_msg.Data[1]) & (uint16_T)( (uint16_T) (1)<<
                        2)) >> 2)<<2);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.test_Bms_msg.Data[1]) & (uint16_T)( (uint16_T) (1)<<
                        3)) >> 3)<<3);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.test_Bms_msg.Data[1]) & (uint16_T)( (uint16_T) (1)<<
                        4)) >> 4)<<4);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.test_Bms_msg.Data[1]) & (uint16_T)( (uint16_T) (1)<<
                        5)) >> 5)<<5);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.test_Bms_msg.Data[1]) & (uint16_T)( (uint16_T) (1)<<
                        6)) >> 6)<<6);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.test_Bms_msg.Data[1]) & (uint16_T)( (uint16_T) (1)<<
                        7)) >> 7)<<7);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.test_Bms_msg.Data[2]) & (uint16_T)( (uint16_T) (1)<<
                        0)) >> 0)<<8);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.test_Bms_msg.Data[2]) & (uint16_T)( (uint16_T) (1)<<
                        1)) >> 1)<<9);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.test_Bms_msg.Data[2]) & (uint16_T)( (uint16_T) (1)<<
                        2)) >> 2)<<10);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.test_Bms_msg.Data[2]) & (uint16_T)( (uint16_T) (1)<<
                        3)) >> 3)<<11);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.test_Bms_msg.Data[2]) & (uint16_T)( (uint16_T) (1)<<
                        4)) >> 4)<<12);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.test_Bms_msg.Data[2]) & (uint16_T)( (uint16_T) (1)<<
                        5)) >> 5)<<13);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.test_Bms_msg.Data[2]) & (uint16_T)( (uint16_T) (1)<<
                        6)) >> 6)<<14);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtU.test_Bms_msg.Data[2]) & (uint16_T)( (uint16_T) (1)<<
                        7)) >> 7)<<15);
                    }

                    unpackedValue = tempValue;
                  }

                  outValue = (real64_T) (unpackedValue);
                }
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.1;
                rtDW.BMS_FeedBack_unpk_o4 = result;
              }
            }
          }
        }
      }
    }
  }

  // Outport: '<Root>/BMS_feedback'
  rtY.BMS_feedback[0] = rtDW.BMS_FeedBack_unpk_o1;
  rtY.BMS_feedback[1] = rtDW.BMS_FeedBack_unpk_o2;
  rtY.BMS_feedback[2] = rtDW.BMS_FeedBack_unpk_o3;
  rtY.BMS_feedback[3] = rtDW.BMS_FeedBack_unpk_o4;

  // S-Function (scanpack): '<Root>/Gear_Command'
  rtY.Gear_command_msg.ID = 161U;
  rtY.Gear_command_msg.Length = 8U;
  rtY.Gear_command_msg.Extended = 0U;
  rtY.Gear_command_msg.Remote = 0;
  rtY.Gear_command_msg.Data[0] = 0;
  rtY.Gear_command_msg.Data[1] = 0;
  rtY.Gear_command_msg.Data[2] = 0;
  rtY.Gear_command_msg.Data[3] = 0;
  rtY.Gear_command_msg.Data[4] = 0;
  rtY.Gear_command_msg.Data[5] = 0;
  rtY.Gear_command_msg.Data[6] = 0;
  rtY.Gear_command_msg.Data[7] = 0;

  {
    // --------------- START Packing signal 0 ------------------
    //   startBit                = 0
    //   length                  = 8
    //   desiredSignalByteLayout = LITTLEENDIAN
    //   dataType                = UNSIGNED
    //   factor                  = 1.0
    //   offset                  = 0.0
    //   minimum                 = 0.0
    //   maximum                 = 1.0
    //  -----------------------------------------------------------------------
    {
      {
        real64_T outValue = 0;

        {
          real64_T result = rtU.gear_command_param.Gear_Enable_control;
          if (result > 1.0) {
            // upper saturation
            result = 1.0;
          }

          // no scaling required
          outValue = result;
        }

        {
          {
            uint8_T packedValue;
            if (outValue > (real64_T)(255)) {
              packedValue = (uint8_T) 255;
            } else if (outValue < (real64_T)(0)) {
              packedValue = (uint8_T) 0;
            } else {
              packedValue = (uint8_T) (outValue);
            }

            {
              {
                rtY.Gear_command_msg.Data[0] = rtY.Gear_command_msg.Data[0] |
                  (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 0)) >> 0)<<0);
              }

              {
                rtY.Gear_command_msg.Data[0] = rtY.Gear_command_msg.Data[0] |
                  (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 1)) >> 1)<<1);
              }

              {
                rtY.Gear_command_msg.Data[0] = rtY.Gear_command_msg.Data[0] |
                  (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 2)) >> 2)<<2);
              }

              {
                rtY.Gear_command_msg.Data[0] = rtY.Gear_command_msg.Data[0] |
                  (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 3)) >> 3)<<3);
              }

              {
                rtY.Gear_command_msg.Data[0] = rtY.Gear_command_msg.Data[0] |
                  (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 4)) >> 4)<<4);
              }

              {
                rtY.Gear_command_msg.Data[0] = rtY.Gear_command_msg.Data[0] |
                  (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 5)) >> 5)<<5);
              }

              {
                rtY.Gear_command_msg.Data[0] = rtY.Gear_command_msg.Data[0] |
                  (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 6)) >> 6)<<6);
              }

              {
                rtY.Gear_command_msg.Data[0] = rtY.Gear_command_msg.Data[0] |
                  (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 7)) >> 7)<<7);
              }
            }
          }
        }
      }
    }

    // --------------- START Packing signal 1 ------------------
    //   startBit                = 8
    //   length                  = 8
    //   desiredSignalByteLayout = LITTLEENDIAN
    //   dataType                = UNSIGNED
    //   factor                  = 1.0
    //   offset                  = 0.0
    //   minimum                 = 0.0
    //   maximum                 = 5.0
    //  -----------------------------------------------------------------------
    {
      {
        real64_T outValue = 0;

        {
          real64_T result = rtU.gear_command_param.Gear_Shift_Req;
          if (result > 5.0) {
            // upper saturation
            result = 5.0;
          }

          // no scaling required
          outValue = result;
        }

        {
          {
            uint8_T packedValue;
            if (outValue > (real64_T)(255)) {
              packedValue = (uint8_T) 255;
            } else if (outValue < (real64_T)(0)) {
              packedValue = (uint8_T) 0;
            } else {
              packedValue = (uint8_T) (outValue);
            }

            {
              {
                rtY.Gear_command_msg.Data[1] = rtY.Gear_command_msg.Data[1] |
                  (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 0)) >> 0)<<0);
              }

              {
                rtY.Gear_command_msg.Data[1] = rtY.Gear_command_msg.Data[1] |
                  (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 1)) >> 1)<<1);
              }

              {
                rtY.Gear_command_msg.Data[1] = rtY.Gear_command_msg.Data[1] |
                  (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 2)) >> 2)<<2);
              }

              {
                rtY.Gear_command_msg.Data[1] = rtY.Gear_command_msg.Data[1] |
                  (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 3)) >> 3)<<3);
              }

              {
                rtY.Gear_command_msg.Data[1] = rtY.Gear_command_msg.Data[1] |
                  (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 4)) >> 4)<<4);
              }

              {
                rtY.Gear_command_msg.Data[1] = rtY.Gear_command_msg.Data[1] |
                  (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 5)) >> 5)<<5);
              }

              {
                rtY.Gear_command_msg.Data[1] = rtY.Gear_command_msg.Data[1] |
                  (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 6)) >> 6)<<6);
              }

              {
                rtY.Gear_command_msg.Data[1] = rtY.Gear_command_msg.Data[1] |
                  (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 7)) >> 7)<<7);
              }
            }
          }
        }
      }
    }

    // --------------- START Packing signal 2 ------------------
    //   startBit                = 16
    //   length                  = 8
    //   desiredSignalByteLayout = LITTLEENDIAN
    //   dataType                = UNSIGNED
    //   factor                  = 1.0
    //   offset                  = 0.0
    //   minimum                 = 0.0
    //   maximum                 = 0.0
    //  -----------------------------------------------------------------------
    {
      {
        real64_T outValue = 0;

        {
          real64_T result = rtU.gear_command_param.IPC_Mode_Shift;

          // no scaling required
          outValue = result;
        }

        {
          {
            uint8_T packedValue;
            if (outValue > (real64_T)(255)) {
              packedValue = (uint8_T) 255;
            } else if (outValue < (real64_T)(0)) {
              packedValue = (uint8_T) 0;
            } else {
              packedValue = (uint8_T) (outValue);
            }

            {
              {
                rtY.Gear_command_msg.Data[2] = rtY.Gear_command_msg.Data[2] |
                  (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 0)) >> 0)<<0);
              }

              {
                rtY.Gear_command_msg.Data[2] = rtY.Gear_command_msg.Data[2] |
                  (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 1)) >> 1)<<1);
              }

              {
                rtY.Gear_command_msg.Data[2] = rtY.Gear_command_msg.Data[2] |
                  (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 2)) >> 2)<<2);
              }

              {
                rtY.Gear_command_msg.Data[2] = rtY.Gear_command_msg.Data[2] |
                  (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 3)) >> 3)<<3);
              }

              {
                rtY.Gear_command_msg.Data[2] = rtY.Gear_command_msg.Data[2] |
                  (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 4)) >> 4)<<4);
              }

              {
                rtY.Gear_command_msg.Data[2] = rtY.Gear_command_msg.Data[2] |
                  (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 5)) >> 5)<<5);
              }

              {
                rtY.Gear_command_msg.Data[2] = rtY.Gear_command_msg.Data[2] |
                  (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 6)) >> 6)<<6);
              }

              {
                rtY.Gear_command_msg.Data[2] = rtY.Gear_command_msg.Data[2] |
                  (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 7)) >> 7)<<7);
              }
            }
          }
        }
      }
    }

    // --------------- START Packing signal 3 ------------------
    //   startBit                = 24
    //   length                  = 8
    //   desiredSignalByteLayout = LITTLEENDIAN
    //   dataType                = UNSIGNED
    //   factor                  = 1.0
    //   offset                  = 0.0
    //   minimum                 = 0.0
    //   maximum                 = 0.0
    //  -----------------------------------------------------------------------
    {
      {
        real64_T outValue = 0;

        {
          real64_T result = rtU.gear_command_param.IPC_Stop_Eme;

          // no scaling required
          outValue = result;
        }

        {
          {
            uint8_T packedValue;
            if (outValue > (real64_T)(255)) {
              packedValue = (uint8_T) 255;
            } else if (outValue < (real64_T)(0)) {
              packedValue = (uint8_T) 0;
            } else {
              packedValue = (uint8_T) (outValue);
            }

            {
              {
                rtY.Gear_command_msg.Data[3] = rtY.Gear_command_msg.Data[3] |
                  (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 0)) >> 0)<<0);
              }

              {
                rtY.Gear_command_msg.Data[3] = rtY.Gear_command_msg.Data[3] |
                  (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 1)) >> 1)<<1);
              }

              {
                rtY.Gear_command_msg.Data[3] = rtY.Gear_command_msg.Data[3] |
                  (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 2)) >> 2)<<2);
              }

              {
                rtY.Gear_command_msg.Data[3] = rtY.Gear_command_msg.Data[3] |
                  (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 3)) >> 3)<<3);
              }

              {
                rtY.Gear_command_msg.Data[3] = rtY.Gear_command_msg.Data[3] |
                  (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 4)) >> 4)<<4);
              }

              {
                rtY.Gear_command_msg.Data[3] = rtY.Gear_command_msg.Data[3] |
                  (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 5)) >> 5)<<5);
              }

              {
                rtY.Gear_command_msg.Data[3] = rtY.Gear_command_msg.Data[3] |
                  (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 6)) >> 6)<<6);
              }

              {
                rtY.Gear_command_msg.Data[3] = rtY.Gear_command_msg.Data[3] |
                  (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)
                  (((uint8_T)(1)) << 7)) >> 7)<<7);
              }
            }
          }
        }
      }
    }
  }
}

// Model initialize function
void camera_dbcModelClass::initialize()
{
  //-----------S-Function Block: <Root>/ObstacleDataA1_739_unpk -----------------

  //-----------S-Function Block: <Root>/ObstacleStatus_738_unpk -----------------

  //-----------S-Function Block: <Root>/BMS_FeedBack_unpk -----------------
}

// Constructor
camera_dbcModelClass::camera_dbcModelClass()
{
}

// Destructor
camera_dbcModelClass::~camera_dbcModelClass()
{
  // Currently there is no destructor body generated.
}

// Real-Time Model get method
RT_MODEL * camera_dbcModelClass::getRTM()
{
  return (&rtM);
}

//
// File trailer for generated code.
//
// [EOF]
//

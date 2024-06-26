/*******************************************************************************
* Copyright © 2019 TRINAMIC Motion Control GmbH & Co. KG
* (now owned by Analog Devices Inc.),
*
* Copyright © 2023 Analog Devices Inc. All Rights Reserved.
* This software is proprietary to Analog Devices, Inc. and its licensors.
*******************************************************************************/


#ifndef TMC5072_FIELDS_H
#define TMC5072_FIELDS_H

#define TMC5072_SINGLE_DRIVER_MASK       0x01 // GCONF // Attention: Set correctly before driver enable!
#define TMC5072_SINGLE_DRIVER_SHIFT      0 // min.: 0, max.: 1, default: 0
#define TMC5072_STEPDIR1_ENABLE_MASK     0x02 // GCONF //
#define TMC5072_STEPDIR1_ENABLE_SHIFT    1 // min.: 0, max.: 1, default: 0
#define TMC5072_STEPDIR2_ENABLE_MASK     0x04 // GCONF //
#define TMC5072_STEPDIR2_ENABLE_SHIFT    2 // min.: 0, max.: 1, default: 0
#define TMC5072_POSCMP_ENABLE_MASK       0x08 // GCONF //
#define TMC5072_POSCMP_ENABLE_SHIFT      3 // min.: 0, max.: 1, default: 0
#define TMC5072_ENC1_REFSEL_MASK         0x10 // GCONF //
#define TMC5072_ENC1_REFSEL_SHIFT        4 // min.: 0, max.: 1, default: 0
#define TMC5072_ENC2_ENABLE_MASK         0x20 // GCONF //
#define TMC5072_ENC2_ENABLE_SHIFT        5 // min.: 0, max.: 1, default: 0
#define TMC5072_ENC2_REFSEL_MASK         0x40 // GCONF //
#define TMC5072_ENC2_REFSEL_SHIFT        6 // min.: 0, max.: 1, default: 0
#define TMC5072_TEST_MODE_MASK           0x80 // GCONF //
#define TMC5072_TEST_MODE_SHIFT          7 // min.: 0, max.: 1, default: 0
#define TMC5072_SHAFT1_MASK              0x0100 // GCONF //
#define TMC5072_SHAFT1_SHIFT             8 // min.: 0, max.: 1, default: 0
#define TMC5072_SHAFT2_MASK              0x0200 // GCONF //
#define TMC5072_SHAFT2_SHIFT             9 // min.: 0, max.: 1, default: 0
#define TMC5072_LOCK_GCONF_MASK          0x0400 // GCONF //
#define TMC5072_LOCK_GCONF_SHIFT         10 // min.: 0, max.: 1, default: 0
#define TMC5072_DC_SYNC_MASK             0x0800 // GCONF //
#define TMC5072_DC_SYNC_SHIFT            11 // min.: 0, max.: 1, default: 0
#define TMC5072_RESET_MASK               0x01 // GSTAT //
#define TMC5072_RESET_SHIFT              0 // min.: 0, max.: 1, default: 0
#define TMC5072_DRV_ERR1_MASK            0x02 // GSTAT //
#define TMC5072_DRV_ERR1_SHIFT           1 // min.: 0, max.: 1, default: 0
//#define TMC5072_DRV_ERR1_MASK          0x04 // GSTAT //
//#define TMC5072_DRV_ERR1_SHIFT         2 // min.: 0, max.: 1, default: 0
#define TMC5072_UV_CP_MASK               0x08 // GSTAT //
#define TMC5072_UV_CP_SHIFT              3 // min.: 0, max.: 1, default: 0
#define TMC5072_IFCNT_MASK               0xFF // IFCNT // Interface transmission counter. This register becomes incremented with each successful UART interface write access. Read out to check the serial transmission for lost data. Read accesses do not change the content. The counter wraps around from 255 to 0.
#define TMC5072_IFCNT_SHIFT              0 // min.: 0, max.: 255, default: 0
#define TMC5072_SLAVEADDR_MASK           0x0F // SLAVECONF // Sets the address of unit for the UART interface. The address becomes incremented by one when the external address pin NEXTADDR is active. Range: 0-253 (254), default=0 In ring mode, 0 disables forwarding.
#define TMC5072_SLAVEADDR_SHIFT          0 // min.: 0, max.: 255, default: 0
#define TMC5072_SENDDELAY_MASK           0xF0 // SLAVECONF // SENDDELAY for read access (time until reply is sent): 0, 1: 8 bit times 2, 3: 3*8 bit times 4, 5: 5*8 bit times 6, 7: 7*8 bit times 8, 9: 9*8 bit times 10, 11: 11*8 bit times 12, 13: 13*8 bit times 14, 15: 15*8 bit times
#define TMC5072_SENDDELAY_SHIFT          4 // min.: 0, max.: 15, default: 0
#define TMC5072_TEST_SEL_MASK            0x0F // SLAVECONF // Selects the function of REFR2 in test mode: 0...4: T120, DAC1, VDDH1, DAC2, VDDH2; Attention: Not for user, set to 0 for normal operation!
#define TMC5072_TEST_SEL_SHIFT           0 // min.: 0, max.: 4, default: 0
#define TMC5072_SENDDELAY_MASK           0xF0 // SLAVECONF // SENDDELAY for read access (time until reply is sent): 0, 1: 8 bit times 2, 3: 3*8 bit times 4, 5: 5*8 bit times 6, 7: 7*8 bit times 8, 9: 9*8 bit times 10, 11: 11*8 bit times 12, 13: 13*8 bit times 14, 15: 15*8 bit times
#define TMC5072_SENDDELAY_SHIFT          4 // min.: 0, max.: 15, default: 0
#define TMC5072_IO0_IN_MASK              0x01 // INPUT / OUTPUT // IO0 polarity
#define TMC5072_IO0_IN_SHIFT             0 // min.: 0, max.: 1, default: 0
#define TMC5072_IO1_IN_MASK              0x02 // INPUT / OUTPUT // IO1 polarity
#define TMC5072_IO1_IN_SHIFT             1 // min.: 0, max.: 1, default: 0
#define TMC5072_IO2_IN_MASK              0x04 // INPUT / OUTPUT // IO2 polarity
#define TMC5072_IO2_IN_SHIFT             2 // min.: 0, max.: 1, default: 0
#define TMC5072_IO3_IN_MASK              0x08 // INPUT / OUTPUT // IO3 polarity
#define TMC5072_IO3_IN_SHIFT             3 // min.: 0, max.: 1, default: 0
#define TMC5072_IOP_IN_MASK              0x10 // INPUT / OUTPUT // IOP pin polarity (always input in SPI mode)
#define TMC5072_IOP_IN_SHIFT             4 // min.: 0, max.: 1, default: 0
#define TMC5072_ION_IN_MASK              0x20 // INPUT / OUTPUT // ION pin polarity (always input in SPI mode)
#define TMC5072_ION_IN_SHIFT             5 // min.: 0, max.: 1, default: 0
#define TMC5072_NEXTADDR_IN_MASK         0x40 // INPUT / OUTPUT // NEXTADDR pin polarity
#define TMC5072_NEXTADDR_IN_SHIFT        6 // min.: 0, max.: 1, default: 0
#define TMC5072_DRV_ENN_MASK             0x80 // INPUT / OUTPUT // DRV_ENN pin polarity
#define TMC5072_DRV_ENN_SHIFT            7 // min.: 0, max.: 1, default: 0
#define TMC5072_SW_COMP_IN_MASK          0x80 // INPUT / OUTPUT // UART input comparator. The accuracy is about 20mV.
#define TMC5072_SW_COMP_IN_SHIFT         8 // min.: 0, max.: 1, default: 0
#define TMC5072_VERSION_MASK             0xFF000000 // INPUT / OUTPUT // VERSION: 0x01=first version of the IC; Identical numbers mean full digital compatibility.
#define TMC5072_VERSION_SHIFT            24 // min.: 0, max.: 255, default: 0
#define TMC5072_IO0_OUT_MASK             0x01 // INPUT / OUTPUT // IO0 output polarity
#define TMC5072_IO0_OUT_SHIFT            0 // min.: 0, max.: 1, default: 0
#define TMC5072_IO1_OUT_MASK             0x02 // INPUT / OUTPUT // IO1 output polarity
#define TMC5072_IO1_OUT_SHIFT            1 // min.: 0, max.: 1, default: 0
#define TMC5072_IO2_OUT_MASK             0x04 // INPUT / OUTPUT // IO2 output polarity
#define TMC5072_IO2_OUT_SHIFT            2 // min.: 0, max.: 1, default: 0
#define TMC5072_IODDR0_MASK              0x0100 // INPUT / OUTPUT // IO0 data direction
#define TMC5072_IODDR0_SHIFT             8 // min.: 0, max.: 1, default: 0
#define TMC5072_IODDR1_MASK              0x0200 // INPUT / OUTPUT // IO1 data direction
#define TMC5072_IODDR1_SHIFT             9 // min.: 0, max.: 1, default: 0
#define TMC5072_IODDR2_MASK              0x0400 // INPUT / OUTPUT // IO2 data direction
#define TMC5072_IODDR2_SHIFT             10 // min.: 0, max.: 1, default: 0
#define TMC5072_X_COMPARE_MASK           0xFFFFFFFF // X_COMPARE // Position comparison register for motion controller position strobe. The Position pulse is available on output SWP_DIAG1.
#define TMC5072_X_COMPARE_SHIFT          0 // min.: 0, max.: 4294967295, default: 0
#define TMC5072_PWM_AMPL_MASK            0xFF // PWMCONF_M1 // Velocity dependent gradient for PWM amplitude: PWM_GRAD * 256 / TSTEP is added to PWM_AMPL
#define TMC5072_PWM_AMPL_SHIFT           0 // min.: 0, max.: 255, default: 0
#define TMC5072_PWM_GRAD_MASK            0xFF00 // PWMCONF_M1 // User defined PWM amplitude offset (0-255) The resulting amplitude (limited to 0-255) is: PWM_AMPL + PWM_GRAD * 256 / TSTEP
#define TMC5072_PWM_GRAD_SHIFT           8 // min.: 0, max.: 255, default: 0
#define TMC5072_PWM_FREQ_MASK            0x030000 // PWMCONF_M1 // PWM frequency selection
#define TMC5072_PWM_FREQ_SHIFT           16 // min.: 0, max.: 3, default: 0
#define TMC5072_PWM_AUTOSCALE_MASK       0x040000 // PWMCONF_M1 // PWM automatic amplitude scaling
#define TMC5072_PWM_AUTOSCALE_SHIFT      18 // min.: 0, max.: 1, default: 0
#define TMC5072_PWM_SYMMETRIC_MASK       0x080000 // PWMCONF_M1 // Force symmetric PWM
#define TMC5072_PWM_SYMMETRIC_SHIFT      19 // min.: 0, max.: 1, default: 0
#define TMC5072_FREEWHEEL_MASK           0x300000 // PWMCONF_M1 // Allows different standstill modes
#define TMC5072_FREEWHEEL_SHIFT          20 // min.: 0, max.: 3, default: 0
//#define TMC5072_PWM_AMPL_MASK          0x0F // PWMCONF_M1 // User defined maximum PWM amplitude change per half wave (1 to 15)
//#define TMC5072_PWM_AMPL_SHIFT         0 // min.: 0, max.: 255, default: 0
#define TMC5072_PWM_GRAD_MASK            0xFF00 // PWMCONF_M1 // User defined maximum PWM amplitude when switching back from current chopper mode to voltage PWM mode (switch over velocity defined by TPWMTHRS). Do not set too low values, as the regulation cannot measure the current when the actual PWM value goes below a setting specific value. Settings above 0x40 recommended.
#define TMC5072_PWM_GRAD_SHIFT           8 // min.: 0, max.: 255, default: 0
#define TMC5072_PWM_FREQ_MASK            0x030000 // PWMCONF_M1 // PWM frequency selection
#define TMC5072_PWM_FREQ_SHIFT           16 // min.: 0, max.: 3, default: 0
#define TMC5072_PWM_AUTOSCALE_MASK       0x040000 // PWMCONF_M1 // PWM automatic amplitude scaling
#define TMC5072_PWM_AUTOSCALE_SHIFT      18 // min.: 0, max.: 1, default: 0
#define TMC5072_PWM_SYMMETRIC_MASK       0x080000 // PWMCONF_M1 // Force symmetric PWM
#define TMC5072_PWM_SYMMETRIC_SHIFT      19 // min.: 0, max.: 1, default: 0
#define TMC5072_FREEWHEEL_MASK           0x300000 // PWMCONF_M1 // Allows different standstill modes
#define TMC5072_FREEWHEEL_SHIFT          20 // min.: 0, max.: 3, default: 0
#define TMC5072_PWM_STATUS_MASK          0xFF // PWM_STATUS_M1 // Actual PWM scaler (255=max. Voltage)
#define TMC5072_PWM_STATUS_SHIFT         0 // min.: 0, max.: 255, default: 0
#define TMC5072_PWM_AMPL_MASK            0xFF // PWMCONF_M2 // Velocity dependent gradient for PWM amplitude: PWM_GRAD * 256 / TSTEP is added to PWM_AMPL
#define TMC5072_PWM_AMPL_SHIFT           0 // min.: 0, max.: 255, default: 0
#define TMC5072_PWM_GRAD_MASK            0xFF00 // PWMCONF_M2 // User defined PWM amplitude offset (0-255) The resulting amplitude (limited to 0-255) is: PWM_AMPL + PWM_GRAD * 256 / TSTEP
#define TMC5072_PWM_GRAD_SHIFT           8 // min.: 0, max.: 255, default: 0
#define TMC5072_PWM_FREQ_MASK            0x030000 // PWMCONF_M2 // PWM frequency selection
#define TMC5072_PWM_FREQ_SHIFT           16 // min.: 0, max.: 3, default: 0
#define TMC5072_PWM_AUTOSCALE_MASK       0x040000 // PWMCONF_M2 // PWM automatic amplitude scaling
#define TMC5072_PWM_AUTOSCALE_SHIFT      18 // min.: 0, max.: 1, default: 0
#define TMC5072_PWM_SYMMETRIC_MASK       0x080000 // PWMCONF_M2 // Force symmetric PWM
#define TMC5072_PWM_SYMMETRIC_SHIFT      19 // min.: 0, max.: 1, default: 0
#define TMC5072_FREEWHEEL_MASK           0x300000 // PWMCONF_M2 // Allows different standstill modes
#define TMC5072_FREEWHEEL_SHIFT          20 // min.: 0, max.: 3, default: 0
//#define TMC5072_PWM_AMPL_MASK          0x0F // PWMCONF_M2 // User defined maximum PWM amplitude change per half wave (1 to 15)
//#define TMC5072_PWM_AMPL_SHIFT         0 // min.: 0, max.: 255, default: 0
#define TMC5072_PWM_GRAD_MASK            0xFF00 // PWMCONF_M2 // User defined maximum PWM amplitude when switching back from current chopper mode to voltage PWM mode (switch over velocity defined by TPWMTHRS). Do not set too low values, as the regulation cannot measure the current when the actual PWM value goes below a setting specific value. Settings above 0x40 recommended.
#define TMC5072_PWM_GRAD_SHIFT           8 // min.: 0, max.: 255, default: 0
#define TMC5072_PWM_FREQ_MASK            0x030000 // PWMCONF_M2 // PWM frequency selection
#define TMC5072_PWM_FREQ_SHIFT           16 // min.: 0, max.: 3, default: 0
#define TMC5072_PWM_AUTOSCALE_MASK       0x040000 // PWMCONF_M2 // PWM automatic amplitude scaling
#define TMC5072_PWM_AUTOSCALE_SHIFT      18 // min.: 0, max.: 1, default: 0
#define TMC5072_PWM_SYMMETRIC_MASK       0x080000 // PWMCONF_M2 // Force symmetric PWM
#define TMC5072_PWM_SYMMETRIC_SHIFT      19 // min.: 0, max.: 1, default: 0
#define TMC5072_FREEWHEEL_MASK           0x300000 // PWMCONF_M2 // Allows different standstill modes
#define TMC5072_FREEWHEEL_SHIFT          20 // min.: 0, max.: 3, default: 0
#define TMC5072_PWM_STATUS_MASK          0xFF // PWM_STATUS_M2 // Actual PWM scaler (255=max. Voltage)
#define TMC5072_PWM_STATUS_SHIFT         0 // min.: 0, max.: 255, default: 0
#define TMC5072_RAMPMODE_MASK            0x03 // RAMPMODE_M1 // 0: Positioning mode (using all A, D and V parameters) 1: Velocity mode to positive VMAX (using AMAX acceleration) 2: Velocity mode to negative VMAX (using AMAX acceleration) 3: Hold mode (velocity remains unchanged, unless stop event occurs)
#define TMC5072_RAMPMODE_SHIFT           0 // min.: 0, max.: 3, default: 0
#define TMC5072_XACTUAL_MASK             0xFFFFFFFF // XACTUAL_M1 // Actual motor position (signed) Hint: This value normally should only be modified, when homing the drive. In positioning mode, modifying the register content will start a motion.
#define TMC5072_XACTUAL_SHIFT            0 // min.: -2147483648, max.: 2147483647, default: 0
#define TMC5072_VACTUAL_MASK             0xFFFFFF // VACTUAL_M1 // Actual motor velocity from ramp generator (signed) The sign matches the motion direction. A negative sign means motion to lower XACTUAL.
#define TMC5072_VACTUAL_SHIFT            0 // min.: -8388607, max.: 8388607, default: 0
#define TMC5072_VSTART_MASK              0x03FFFF // VSTART_M1 // Motor start velocity (unsigned) Set VSTOP = VSTART!
#define TMC5072_VSTART_SHIFT             0 // min.: 0, max.: 262143, default: 0
#define TMC5072_A1_MASK                  0xFFFF // A1_M1 // First acceleration between VSTART and V1 (unsigned)
#define TMC5072_A1_SHIFT                 0 // min.: 0, max.: 65535, default: 0
#define TMC5072_V1__MASK                 0x0FFFFF // V1_M1 // First acceleration / deceleration phase threshold velocity (unsigned) 0: Disables A1 and D1 phase, use AMAX, DMAX only
#define TMC5072_V1__SHIFT                0 // min.: 0, max.: 1048575, default: 0
#define TMC5072_AMAX_MASK                0xFFFF // AMAX_M1 // Second acceleration between V1 and VMAX (unsigned) This is the acceleration and deceleration value for velocity mode.
#define TMC5072_AMAX_SHIFT               0 // min.: 0, max.: 65535, default: 0
#define TMC5072_VMAX_MASK                0x7FFFFF // VMAX_M1 // Motion ramp target velocity (for positioning ensure VMAX = VSTART) (unsigned) This is the target velocity in velocity mode. It can be changed any time during a motion.
#define TMC5072_VMAX_SHIFT               0 // min.: 0, max.: 8388096, default: 0
#define TMC5072_DMAX_MASK                0xFFFF // DMAX_M1 // Deceleration between VMAX and V1 (unsigned)
#define TMC5072_DMAX_SHIFT               0 // min.: 0, max.: 65535, default: 0
#define TMC5072_D1_MASK                  0xFFFF // D1_M1 // Deceleration between V1 and VSTOP (unsigned) Attention: Do not set 0 in positioning mode, even if V1=0!
#define TMC5072_D1_SHIFT                 0 // min.: 1, max.: 65535, default: 0
#define TMC5072_VSTOP_MASK               0x03FFFF // VSTOP_M1 // Motor stop velocity (unsigned) Attention: Set VSTOP = VSTART! Attention: Do not set 0 in positioning mode, minimum 10 recommend!
#define TMC5072_VSTOP_SHIFT              0 // min.: 1, max.: 262143, default: 0
#define TMC5072_TZEROWAIT_MASK           0xFFFF // TZEROWAIT_M1 // Defines the waiting time after ramping down to zero velocity before next movement or direction inversion can start. Time range is about 0 to 2 seconds. This setting avoids excess acceleration e.g. from VSTOP to -VSTART.
#define TMC5072_TZEROWAIT_SHIFT          0 // min.: 0, max.: 65535, default: 0
#define TMC5072_XTARGET_MASK             0xFFFFFFFF // XTARGET_M1 // Target position for ramp mode (signed). Write a new target position to this register in order to activate the ramp generator positioning in RAMPMODE=0. Initialize all velocity, acceleration and deceleration parameters before. Hint: The position is allowed to wrap around, thus, XTARGET value optionally can be treated as an unsigned number. Hint: The maximum possible displacement is +/-((2^31)-1). Hint: When increasing V1, D1 or DMAX during a motion, rewrite XTARGET afterwards in order to trigger a second acceleration phase, if desired.
#define TMC5072_XTARGET_SHIFT            0 // min.: -2147483648, max.: 2147483647, default: 0
#define TMC5072_RAMPMODE_MASK            0x03 // RAMPMODE_M2 // 0: Positioning mode (using all A, D and V parameters) 1: Velocity mode to positive VMAX (using AMAX acceleration) 2: Velocity mode to negative VMAX (using AMAX acceleration) 3: Hold mode (velocity remains unchanged, unless stop event occurs)
#define TMC5072_RAMPMODE_SHIFT           0 // min.: 0, max.: 3, default: 0
#define TMC5072_XACTUAL_MASK             0xFFFFFFFF // XACTUAL_M2 // Actual motor position (signed) Hint: This value normally should only be modified, when homing the drive. In positioning mode, modifying the register content will start a motion.
#define TMC5072_XACTUAL_SHIFT            0 // min.: -2147483648, max.: 2147483647, default: 0
#define TMC5072_VACTUAL_MASK             0xFFFFFF // VACTUAL_M2 // Actual motor velocity from ramp generator (signed) The sign matches the motion direction. A negative sign means motion to lower XACTUAL.
#define TMC5072_VACTUAL_SHIFT            0 // min.: -8388607, max.: 8388607, default: 0
#define TMC5072_VSTART_MASK              0x03FFFF // VSTART_M2 // Motor start velocity (unsigned) Set VSTOP = VSTART!
#define TMC5072_VSTART_SHIFT             0 // min.: 0, max.: 262143, default: 0
#define TMC5072_A1_MASK                  0xFFFF // A1_M2 // First acceleration between VSTART and V1 (unsigned)
#define TMC5072_A1_SHIFT                 0 // min.: 0, max.: 65535, default: 0
#define TMC5072_V1__MASK                 0x0FFFFF // V1_M2 // First acceleration / deceleration phase threshold velocity (unsigned) 0: Disables A1 and D1 phase, use AMAX, DMAX only
#define TMC5072_V1__SHIFT                0 // min.: 0, max.: 1048575, default: 0
#define TMC5072_AMAX_MASK                0xFFFF // AMAX_M2 // Second acceleration between V1 and VMAX (unsigned) This is the acceleration and deceleration value for velocity mode.
#define TMC5072_AMAX_SHIFT               0 // min.: 0, max.: 65535, default: 0
#define TMC5072_VMAX_MASK                0x7FFFFF // VMAX_M2 // Motion ramp target velocity (for positioning ensure VMAX = VSTART) (unsigned) This is the target velocity in velocity mode. It can be changed any time during a motion.
#define TMC5072_VMAX_SHIFT               0 // min.: 0, max.: 8388096, default: 0
#define TMC5072_DMAX_MASK                0xFFFF // DMAX_M2 // Deceleration between VMAX and V1 (unsigned)
#define TMC5072_DMAX_SHIFT               0 // min.: 0, max.: 65535, default: 0
#define TMC5072_D1_MASK                  0xFFFF // D1_M2 // Deceleration between V1 and VSTOP (unsigned) Attention: Do not set 0 in positioning mode, even if V1=0!
#define TMC5072_D1_SHIFT                 0 // min.: 1, max.: 65535, default: 0
#define TMC5072_VSTOP_MASK               0x03FFFF // VSTOP_M2 // Motor stop velocity (unsigned) Attention: Set VSTOP = VSTART! Attention: Do not set 0 in positioning mode, minimum 10 recommend!
#define TMC5072_VSTOP_SHIFT              0 // min.: 1, max.: 262143, default: 0
#define TMC5072_TZEROWAIT_MASK           0xFFFF // TZEROWAIT_M2 // Defines the waiting time after ramping down to zero velocity before next movement or direction inversion can start. Time range is about 0 to 2 seconds. This setting avoids excess acceleration e.g. from VSTOP to -VSTART.
#define TMC5072_TZEROWAIT_SHIFT          0 // min.: 0, max.: 65535, default: 0
#define TMC5072_XTARGET_MASK             0xFFFFFFFF // XTARGET_M2 // Target position for ramp mode (signed). Write a new target position to this register in order to activate the ramp generator positioning in RAMPMODE=0. Initialize all velocity, acceleration and deceleration parameters before. Hint: The position is allowed to wrap around, thus, XTARGET value optionally can be treated as an unsigned number. Hint: The maximum possible displacement is +/-((2^31)-1). Hint: When increasing V1, D1 or DMAX during a motion, rewrite XTARGET afterwards in order to trigger a second acceleration phase, if desired.
#define TMC5072_XTARGET_SHIFT            0 // min.: -2147483648, max.: 2147483647, default: 0
#define TMC5072_IHOLD_MASK               0x1F // IHOLD_IRUN_M1 // Standstill current (0=1/32...31=32/32)
#define TMC5072_IHOLD_SHIFT              0 // min.: 0, max.: 31, default: 0
#define TMC5072_IRUN_MASK                0x1F00 // IHOLD_IRUN_M1 // Motor run current (0=1/32...31=32/32) Hint: Choose sense resistors in a way, that normal IRUN is 16 to 31 for best microstep performance.
#define TMC5072_IRUN_SHIFT               8 // min.: 0, max.: 31, default: 0
#define TMC5072_IHOLDDELAY_MASK          0x0F0000 // IHOLD_IRUN_M1 // Controls the number of clock cycles for motor power down after standstill is detected (stst=1) and TPOWERDOWN has expired. The smooth transition avoids a motor jerk upon power down. 0: instant power down 1..15: Delay per current reduction step in multiple of 2^18 clocks
#define TMC5072_IHOLDDELAY_SHIFT         16 // min.: 0, max.: 15, default: 0
#define TMC5072_VCOOLTHRS_MASK           0x7FFFFF // VCOOLTHRS_M1 // This is the lower threshold velocity for switching on smart energy coolStep. Set this parameter to disable coolStep at low speeds, where it cannot work reliably. VHIGH = |VACT| = VCOOLTHRS: coolStep is enabled, if configured; (Only bits 22..8 are used for value and for comparison)
#define TMC5072_VCOOLTHRS_SHIFT          0 // min.: 0, max.: 8388607, default: 0
#define TMC5072_VHIGH_MASK               0x7FFFFF // VHIGH_M1 // This velocity setting allows velocity dependent switching into a different chopper mode and fullstepping to maximize torque. |VACT| = VHIGH: coolStep is disabled (motor runs with normal current scale), If vhighchm is set, the chopper switches to chm=1 with TFD=0 (constant off time with slow decay, only), chopSync2 is switched off (SYNC=0), If vhighfs is set, the motor operates in fullstep mode; (Only bits 22..8 are used for value and for comparison)
#define TMC5072_VHIGH_SHIFT              0 // min.: 0, max.: 8388607, default: 0
#define TMC5072_VDCMIN_MASK              0x7FFFFF // VDCMIN_M1 // Automatic commutation dcStep becomes enabled above velocity VDCMIN. In this mode, the actual position is determined by the sensorless motor commutation and becomes fed back to XACTUAL. In case the motor becomes heavily loaded, VDCMIN also is used as the minimum step velocity. 0: Disable, dcStep off |VACT| = VDCMIN = 256: - Triggers the same actions as exceeding VHIGH. Switches on automatic commutation dcStep; Hint: Also set DCCTRL parameters in order to operate dcStep. (Only bits 22...8 are used for value and for comparison)
#define TMC5072_VDCMIN_SHIFT             0 // min.: 0, max.: 8388607, default: 0
#define TMC5072_STOP_L_ENABLE_MASK       0x01 // SW_MODE_M1 //
#define TMC5072_STOP_L_ENABLE_SHIFT      0 // min.: 0, max.: 1, default: 0
#define TMC5072_STOP_R_ENABLE_MASK       0x02 // SW_MODE_M1 //
#define TMC5072_STOP_R_ENABLE_SHIFT      1 // min.: 0, max.: 1, default: 0
#define TMC5072_POL_STOP_L_MASK          0x04 // SW_MODE_M1 // Sets the active polarity of the left reference switch input
#define TMC5072_POL_STOP_L_SHIFT         2 // min.: 0, max.: 1, default: 0
#define TMC5072_POL_STOP_R_MASK          0x08 // SW_MODE_M1 // Sets the active polarity of the right reference switch input
#define TMC5072_POL_STOP_R_SHIFT         3 // min.: 0, max.: 1, default: 0
#define TMC5072_SWAP_LR_MASK             0x10 // SW_MODE_M1 //
#define TMC5072_SWAP_LR_SHIFT            4 // min.: 0, max.: 1, default: 0
#define TMC5072_LATCH_L_ACTIVE_MASK      0x20 // SW_MODE_M1 //
#define TMC5072_LATCH_L_ACTIVE_SHIFT     5 // min.: 0, max.: 1, default: 0
#define TMC5072_LATCH_L_INACTIVE_MASK    0x40 // SW_MODE_M1 //
#define TMC5072_LATCH_L_INACTIVE_SHIFT   6 // min.: 0, max.: 1, default: 0
#define TMC5072_LATCH_R_ACTIVE_MASK      0x80 // SW_MODE_M1 //
#define TMC5072_LATCH_R_ACTIVE_SHIFT     7 // min.: 0, max.: 1, default: 0
#define TMC5072_LATCH_R_INACTIVE_MASK    0x0100 // SW_MODE_M1 //
#define TMC5072_LATCH_R_INACTIVE_SHIFT   8 // min.: 0, max.: 1, default: 0
#define TMC5072_EN_LATCH_ENCODER_MASK    0x0200 // SW_MODE_M1 //
#define TMC5072_EN_LATCH_ENCODER_SHIFT   9 // min.: 0, max.: 1, default: 0
#define TMC5072_SG_STOP_MASK             0x0400 // SW_MODE_M1 //
#define TMC5072_SG_STOP_SHIFT            10 // min.: 0, max.: 1, default: 0
#define TMC5072_EN_SOFTSTOP_MASK         0x0800 // SW_MODE_M1 // The soft stop mode always uses the deceleration ramp settings DMAX, V1, D1, VSTOP and TZEROWAIT for stopping the motor. A stop occurs when the velocity sign matches the reference switch position (REFL for negative velocities, REFR for positive velocities) and the respective switch stop function is enabled. A hard stop also uses TZEROWAIT before the motor becomes released. Attention: Do not use soft stop in combination with stallGuard2.
#define TMC5072_EN_SOFTSTOP_SHIFT        11 // min.: 0, max.: 1, default: 0
#define TMC5072_STATUS_STOP_L_MASK       0x01 // RAMP_STAT_M1 //
#define TMC5072_STATUS_STOP_L_SHIFT      0 // min.: 0, max.: 1, default: 0
#define TMC5072_STATUS_STOP_R_MASK       0x02 // RAMP_STAT_M1 //
#define TMC5072_STATUS_STOP_R_SHIFT      1 // min.: 0, max.: 1, default: 0
#define TMC5072_STATUS_LATCH_L_MASK      0x04 // RAMP_STAT_M1 //
#define TMC5072_STATUS_LATCH_L_SHIFT     2 // min.: 0, max.: 1, default: 0
#define TMC5072_STATUS_LATCH_R_MASK      0x08 // RAMP_STAT_M1 //
#define TMC5072_STATUS_LATCH_R_SHIFT     3 // min.: 0, max.: 1, default: 0
#define TMC5072_EVENT_STOP_L_MASK        0x10 // RAMP_STAT_M1 //
#define TMC5072_EVENT_STOP_L_SHIFT       4 // min.: 0, max.: 1, default: 0
#define TMC5072_EVENT_STOP_R_MASK        0x20 // RAMP_STAT_M1 //
#define TMC5072_EVENT_STOP_R_SHIFT       5 // min.: 0, max.: 1, default: 0
#define TMC5072_EVENT_STOP_SG_MASK       0x40 // RAMP_STAT_M1 //
#define TMC5072_EVENT_STOP_SG_SHIFT      6 // min.: 0, max.: 1, default: 0
#define TMC5072_EVENT_POS_REACHED_MASK   0x80 // RAMP_STAT_M1 //
#define TMC5072_EVENT_POS_REACHED_SHIFT  7 // min.: 0, max.: 1, default: 0
#define TMC5072_VELOCITY_REACHED_MASK    0x0100 // RAMP_STAT_M1 //
#define TMC5072_VELOCITY_REACHED_SHIFT   8 // min.: 0, max.: 1, default: 0
#define TMC5072_POSITION_REACHED_MASK    0x0200 // RAMP_STAT_M1 //
#define TMC5072_POSITION_REACHED_SHIFT   9 // min.: 0, max.: 1, default: 0
#define TMC5072_VZERO_MASK               0x0400 // RAMP_STAT_M1 //
#define TMC5072_VZERO_SHIFT              10 // min.: 0, max.: 1, default: 0
#define TMC5072_T_ZEROWAIT_ACTIVE_MASK   0x0800 // RAMP_STAT_M1 //
#define TMC5072_T_ZEROWAIT_ACTIVE_SHIFT  11 // min.: 0, max.: 1, default: 0
#define TMC5072_SECOND_MOVE_MASK         0x1000 // RAMP_STAT_M1 //
#define TMC5072_SECOND_MOVE_SHIFT        12 // min.: 0, max.: 1, default: 0
#define TMC5072_STATUS_SG_MASK           0x2000 // RAMP_STAT_M1 //
#define TMC5072_STATUS_SG_SHIFT          13 // min.: 0, max.: 1, default: 0
#define TMC5072_XLATCH_MASK              0xFFFFFFFF // XLATCH_M1 // Ramp generator latch position, latches XACTUAL upon a programmable switch event (see SW_MODE). Hint: The encoder position can be latched to ENC_LATCH together with XLATCH to allow consistency checks.
#define TMC5072_XLATCH_SHIFT             0 // min.: 0, max.: 4294967295, default: 0
#define TMC5072_IHOLD_MASK               0x1F // IHOLD_IRUN_M2 // Standstill current (0=1/32...31=32/32)
#define TMC5072_IHOLD_SHIFT              0 // min.: 0, max.: 31, default: 0
#define TMC5072_IRUN_MASK                0x1F00 // IHOLD_IRUN_M2 // Motor run current (0=1/32...31=32/32) Hint: Choose sense resistors in a way, that normal IRUN is 16 to 31 for best microstep performance.
#define TMC5072_IRUN_SHIFT               8 // min.: 0, max.: 31, default: 0
#define TMC5072_IHOLDDELAY_MASK          0x0F0000 // IHOLD_IRUN_M2 // Controls the number of clock cycles for motor power down after standstill is detected (stst=1) and TPOWERDOWN has expired. The smooth transition avoids a motor jerk upon power down. 0: instant power down 1..15: Delay per current reduction step in multiple of 2^18 clocks
#define TMC5072_IHOLDDELAY_SHIFT         16 // min.: 0, max.: 15, default: 0
#define TMC5072_VCOOLTHRS_MASK           0x7FFFFF // VCOOLTHRS_M2 // This is the lower threshold velocity for switching on smart energy coolStep. Set this parameter to disable coolStep at low speeds, where it cannot work reliably. VHIGH = |VACT| = VCOOLTHRS: coolStep is enabled, if configured; (Only bits 22..8 are used for value and for comparison)
#define TMC5072_VCOOLTHRS_SHIFT          0 // min.: 0, max.: 8388607, default: 0
#define TMC5072_VHIGH_MASK               0x7FFFFF // VHIGH_M2 // This velocity setting allows velocity dependent switching into a different chopper mode and fullstepping to maximize torque. |VACT| = VHIGH: coolStep is disabled (motor runs with normal current scale), If vhighchm is set, the chopper switches to chm=1 with TFD=0 (constant off time with slow decay, only), chopSync2 is switched off (SYNC=0), If vhighfs is set, the motor operates in fullstep mode; (Only bits 22..8 are used for value and for comparison)
#define TMC5072_VHIGH_SHIFT              0 // min.: 0, max.: 8388607, default: 0
#define TMC5072_VDCMIN_MASK              0x7FFFFF // VDCMIN_M2 // Automatic commutation dcStep becomes enabled above velocity VDCMIN. In this mode, the actual position is determined by the sensorless motor commutation and becomes fed back to XACTUAL. In case the motor becomes heavily loaded, VDCMIN also is used as the minimum step velocity. 0: Disable, dcStep off |VACT| = VDCMIN = 256: - Triggers the same actions as exceeding VHIGH. Switches on automatic commutation dcStep; Hint: Also set DCCTRL parameters in order to operate dcStep. (Only bits 22...8 are used for value and for comparison)
#define TMC5072_VDCMIN_SHIFT             0 // min.: 0, max.: 8388607, default: 0
#define TMC5072_STOP_L_ENABLE_MASK       0x01 // SW_MODE_M2 //
#define TMC5072_STOP_L_ENABLE_SHIFT      0 // min.: 0, max.: 1, default: 0
#define TMC5072_STOP_R_ENABLE_MASK       0x02 // SW_MODE_M2 //
#define TMC5072_STOP_R_ENABLE_SHIFT      1 // min.: 0, max.: 1, default: 0
#define TMC5072_POL_STOP_L_MASK          0x04 // SW_MODE_M2 // Sets the active polarity of the left reference switch input
#define TMC5072_POL_STOP_L_SHIFT         2 // min.: 0, max.: 1, default: 0
#define TMC5072_POL_STOP_R_MASK          0x08 // SW_MODE_M2 // Sets the active polarity of the right reference switch input
#define TMC5072_POL_STOP_R_SHIFT         3 // min.: 0, max.: 1, default: 0
#define TMC5072_SWAP_LR_MASK             0x10 // SW_MODE_M2 //
#define TMC5072_SWAP_LR_SHIFT            4 // min.: 0, max.: 1, default: 0
#define TMC5072_LATCH_L_ACTIVE_MASK      0x20 // SW_MODE_M2 //
#define TMC5072_LATCH_L_ACTIVE_SHIFT     5 // min.: 0, max.: 1, default: 0
#define TMC5072_LATCH_L_INACTIVE_MASK    0x40 // SW_MODE_M2 //
#define TMC5072_LATCH_L_INACTIVE_SHIFT   6 // min.: 0, max.: 1, default: 0
#define TMC5072_LATCH_R_ACTIVE_MASK      0x80 // SW_MODE_M2 //
#define TMC5072_LATCH_R_ACTIVE_SHIFT     7 // min.: 0, max.: 1, default: 0
#define TMC5072_LATCH_R_INACTIVE_MASK    0x0100 // SW_MODE_M2 //
#define TMC5072_LATCH_R_INACTIVE_SHIFT   8 // min.: 0, max.: 1, default: 0
#define TMC5072_EN_LATCH_ENCODER_MASK    0x0200 // SW_MODE_M2 //
#define TMC5072_EN_LATCH_ENCODER_SHIFT   9 // min.: 0, max.: 1, default: 0
#define TMC5072_SG_STOP_MASK             0x0400 // SW_MODE_M2 //
#define TMC5072_SG_STOP_SHIFT            10 // min.: 0, max.: 1, default: 0
#define TMC5072_EN_SOFTSTOP_MASK         0x0800 // SW_MODE_M2 // The soft stop mode always uses the deceleration ramp settings DMAX, V1, D1, VSTOP and TZEROWAIT for stopping the motor. A stop occurs when the velocity sign matches the reference switch position (REFL for negative velocities, REFR for positive velocities) and the respective switch stop function is enabled. A hard stop also uses TZEROWAIT before the motor becomes released. Attention: Do not use soft stop in combination with stallGuard2.
#define TMC5072_EN_SOFTSTOP_SHIFT        11 // min.: 0, max.: 1, default: 0
#define TMC5072_STATUS_STOP_L_MASK       0x01 // RAMP_STAT_M2 //
#define TMC5072_STATUS_STOP_L_SHIFT      0 // min.: 0, max.: 1, default: 0
#define TMC5072_STATUS_STOP_R_MASK       0x02 // RAMP_STAT_M2 //
#define TMC5072_STATUS_STOP_R_SHIFT      1 // min.: 0, max.: 1, default: 0
#define TMC5072_STATUS_LATCH_L_MASK      0x04 // RAMP_STAT_M2 //
#define TMC5072_STATUS_LATCH_L_SHIFT     2 // min.: 0, max.: 1, default: 0
#define TMC5072_STATUS_LATCH_R_MASK      0x08 // RAMP_STAT_M2 //
#define TMC5072_STATUS_LATCH_R_SHIFT     3 // min.: 0, max.: 1, default: 0
#define TMC5072_EVENT_STOP_L_MASK        0x10 // RAMP_STAT_M2 //
#define TMC5072_EVENT_STOP_L_SHIFT       4 // min.: 0, max.: 1, default: 0
#define TMC5072_EVENT_STOP_R_MASK        0x20 // RAMP_STAT_M2 //
#define TMC5072_EVENT_STOP_R_SHIFT       5 // min.: 0, max.: 1, default: 0
#define TMC5072_EVENT_STOP_SG_MASK       0x40 // RAMP_STAT_M2 //
#define TMC5072_EVENT_STOP_SG_SHIFT      6 // min.: 0, max.: 1, default: 0
#define TMC5072_EVENT_POS_REACHED_MASK   0x80 // RAMP_STAT_M2 //
#define TMC5072_EVENT_POS_REACHED_SHIFT  7 // min.: 0, max.: 1, default: 0
#define TMC5072_VELOCITY_REACHED_MASK    0x0100 // RAMP_STAT_M2 //
#define TMC5072_VELOCITY_REACHED_SHIFT   8 // min.: 0, max.: 1, default: 0
#define TMC5072_POSITION_REACHED_MASK    0x0200 // RAMP_STAT_M2 //
#define TMC5072_POSITION_REACHED_SHIFT   9 // min.: 0, max.: 1, default: 0
#define TMC5072_VZERO_MASK               0x0400 // RAMP_STAT_M2 //
#define TMC5072_VZERO_SHIFT              10 // min.: 0, max.: 1, default: 0
#define TMC5072_T_ZEROWAIT_ACTIVE_MASK   0x0800 // RAMP_STAT_M2 //
#define TMC5072_T_ZEROWAIT_ACTIVE_SHIFT  11 // min.: 0, max.: 1, default: 0
#define TMC5072_SECOND_MOVE_MASK         0x1000 // RAMP_STAT_M2 //
#define TMC5072_SECOND_MOVE_SHIFT        12 // min.: 0, max.: 1, default: 0
#define TMC5072_STATUS_SG_MASK           0x2000 // RAMP_STAT_M2 //
#define TMC5072_STATUS_SG_SHIFT          13 // min.: 0, max.: 1, default: 0
#define TMC5072_XLATCH_MASK              0xFFFFFFFF // XLATCH_M2 // Ramp generator latch position, latches XACTUAL upon a programmable switch event (see SW_MODE). Hint: The encoder position can be latched to ENC_LATCH together with XLATCH to allow consistency checks.
#define TMC5072_XLATCH_SHIFT             0 // min.: 0, max.: 4294967295, default: 0
#define TMC5072_POL_A_MASK               0x01 // ENCMODE_M1 // Required A polarity for an N channel event
#define TMC5072_POL_A_SHIFT              0 // min.: 0, max.: 1, default: 0
#define TMC5072_POL_B_MASK               0x02 // ENCMODE_M1 // Required B polarity for an N channel event
#define TMC5072_POL_B_SHIFT              1 // min.: 0, max.: 1, default: 0
#define TMC5072_POL_N_MASK               0x04 // ENCMODE_M1 // Defines active polarity of N
#define TMC5072_POL_N_SHIFT              2 // min.: 0, max.: 1, default: 0
#define TMC5072_IGNORE_AB_MASK           0x08 // ENCMODE_M1 //
#define TMC5072_IGNORE_AB_SHIFT          3 // min.: 0, max.: 1, default: 0
#define TMC5072_CLR_CONT_MASK            0x10 // ENCMODE_M1 //
#define TMC5072_CLR_CONT_SHIFT           4 // min.: 0, max.: 1, default: 0
#define TMC5072_CLR_ONCE_MASK            0x20 // ENCMODE_M1 //
#define TMC5072_CLR_ONCE_SHIFT           5 // min.: 0, max.: 1, default: 0
#define TMC5072_POS_EDGENEG_EDGE_MASK    0xC0 // ENCMODE_M1 //
#define TMC5072_POS_EDGENEG_EDGE_SHIFT   6 // min.: 0, max.: 3, default: 0
#define TMC5072_CLR_ENC_X_MASK           0x0100 // ENCMODE_M1 //
#define TMC5072_CLR_ENC_X_SHIFT          8 // min.: 0, max.: 1, default: 0
#define TMC5072_LATCH_X_ACT_MASK         0x0200 // ENCMODE_M1 //
#define TMC5072_LATCH_X_ACT_SHIFT        9 // min.: 0, max.: 1, default: 0
#define TMC5072_ENC_SEL_DECIMAL_MASK     0x0400 // ENCMODE_M1 //
#define TMC5072_ENC_SEL_DECIMAL_SHIFT    10 // min.: 0, max.: 1, default: 0
#define TMC5072_LATCH_NOW__MASK          0x0800 // ENCMODE_M1 //
#define TMC5072_LATCH_NOW__SHIFT         11 // min.: 0, max.: 1, default: 0
#define TMC5072_X_ENC_MASK               0xFFFFFFFF // X_ENC_M1 // Actual encoder position
#define TMC5072_X_ENC_SHIFT              0 // min.: -2147483648, max.: 2147483647, default: 0
#define TMC5072_INTEGER_MASK             0xFFFF0000 // ENC_CONST_M1 // Integer part of encoder constant
#define TMC5072_INTEGER_SHIFT            16 // min.: 0, max.: 65535, default: 0
#define TMC5072_FRACTIONAL_MASK          0xFFFF // ENC_CONST_M1 // Fractional part of encoder constant
#define TMC5072_FRACTIONAL_SHIFT         0 // min.: 0, max.: 65535, default: 0
#define TMC5072_ENC_STATUS_MASK          0x01 // ENC_STATUS_M1 //
#define TMC5072_ENC_STATUS_SHIFT         0 // min.: 0, max.: 1, default: 0
#define TMC5072_ENC_LATCH_MASK           0xFFFFFFFF // ENC_LATCH_M1 // Encoder position X_ENC latched on N event
#define TMC5072_ENC_LATCH_SHIFT          0 // min.: -2147483648, max.: 2147483647, default: 0
#define TMC5072_POL_A_MASK               0x01 // ENCMODE_M2 // Required A polarity for an N channel event
#define TMC5072_POL_A_SHIFT              0 // min.: 0, max.: 1, default: 0
#define TMC5072_POL_B_MASK               0x02 // ENCMODE_M2 // Required B polarity for an N channel event
#define TMC5072_POL_B_SHIFT              1 // min.: 0, max.: 1, default: 0
#define TMC5072_POL_N_MASK               0x04 // ENCMODE_M2 // Defines active polarity of N
#define TMC5072_POL_N_SHIFT              2 // min.: 0, max.: 1, default: 0
#define TMC5072_IGNORE_AB_MASK           0x08 // ENCMODE_M2 //
#define TMC5072_IGNORE_AB_SHIFT          3 // min.: 0, max.: 1, default: 0
#define TMC5072_CLR_CONT_MASK            0x10 // ENCMODE_M2 //
#define TMC5072_CLR_CONT_SHIFT           4 // min.: 0, max.: 1, default: 0
#define TMC5072_CLR_ONCE_MASK            0x20 // ENCMODE_M2 //
#define TMC5072_CLR_ONCE_SHIFT           5 // min.: 0, max.: 1, default: 0
#define TMC5072_POS_EDGENEG_EDGE_MASK    0xC0 // ENCMODE_M2 //
#define TMC5072_POS_EDGENEG_EDGE_SHIFT   6 // min.: 0, max.: 3, default: 0
#define TMC5072_CLR_ENC_X_MASK           0x0100 // ENCMODE_M2 //
#define TMC5072_CLR_ENC_X_SHIFT          8 // min.: 0, max.: 1, default: 0
#define TMC5072_LATCH_X_ACT_MASK         0x0200 // ENCMODE_M2 //
#define TMC5072_LATCH_X_ACT_SHIFT        9 // min.: 0, max.: 1, default: 0
#define TMC5072_ENC_SEL_DECIMAL_MASK     0x0400 // ENCMODE_M2 //
#define TMC5072_ENC_SEL_DECIMAL_SHIFT    10 // min.: 0, max.: 1, default: 0
#define TMC5072_LATCH_NOW__MASK          0x0800 // ENCMODE_M2 //
#define TMC5072_LATCH_NOW__SHIFT         11 // min.: 0, max.: 1, default: 0
#define TMC5072_X_ENC_MASK               0xFFFFFFFF // X_ENC_M2 // Actual encoder position
#define TMC5072_X_ENC_SHIFT              0 // min.: -2147483648, max.: 2147483647, default: 0
#define TMC5072_INTEGER_MASK             0xFFFF0000 // ENC_CONST_M2 // Integer part of encoder constant
#define TMC5072_INTEGER_SHIFT            16 // min.: 0, max.: 65535, default: 0
#define TMC5072_FRACTIONAL_MASK          0xFFFF // ENC_CONST_M2 // Fractional part of encoder constant
#define TMC5072_FRACTIONAL_SHIFT         0 // min.: 0, max.: 65535, default: 0
#define TMC5072_ENC_STATUS_MASK          0x01 // ENC_STATUS_M2 //
#define TMC5072_ENC_STATUS_SHIFT         0 // min.: 0, max.: 1, default: 0
#define TMC5072_ENC_LATCH_MASK           0xFFFFFFFF // ENC_LATCH_M2 // Encoder position X_ENC latched on N event
#define TMC5072_ENC_LATCH_SHIFT          0 // min.: -2147483648, max.: 2147483647, default: 0
#define TMC5072_OFS0_MASK                0x01 // MSLUT[0] // microstep table entry 0
#define TMC5072_OFS0_SHIFT               0 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS1_MASK                0x02 // MSLUT[0] // microstep table entry 1
#define TMC5072_OFS1_SHIFT               1 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS2_MASK                0x04 // MSLUT[0] // microstep table entry 2
#define TMC5072_OFS2_SHIFT               2 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS3_MASK                0x08 // MSLUT[0] // microstep table entry 3
#define TMC5072_OFS3_SHIFT               3 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS4_MASK                0x10 // MSLUT[0] // microstep table entry 4
#define TMC5072_OFS4_SHIFT               4 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS5_MASK                0x20 // MSLUT[0] // microstep table entry 5
#define TMC5072_OFS5_SHIFT               5 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS6_MASK                0x40 // MSLUT[0] // microstep table entry 6
#define TMC5072_OFS6_SHIFT               6 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS7_MASK                0x80 // MSLUT[0] // microstep table entry 7
#define TMC5072_OFS7_SHIFT               7 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS8_MASK                0x0100 // MSLUT[0] // microstep table entry 8
#define TMC5072_OFS8_SHIFT               8 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS9_MASK                0x0200 // MSLUT[0] // microstep table entry 9
#define TMC5072_OFS9_SHIFT               9 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS10_MASK               0x0400 // MSLUT[0] // microstep table entry 10
#define TMC5072_OFS10_SHIFT              10 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS11_MASK               0x0800 // MSLUT[0] // microstep table entry 11
#define TMC5072_OFS11_SHIFT              11 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS12_MASK               0x1000 // MSLUT[0] // microstep table entry 12
#define TMC5072_OFS12_SHIFT              12 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS13_MASK               0x2000 // MSLUT[0] // microstep table entry 13
#define TMC5072_OFS13_SHIFT              13 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS14_MASK               0x4000 // MSLUT[0] // microstep table entry 14
#define TMC5072_OFS14_SHIFT              14 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS15_MASK               0x8000 // MSLUT[0] // microstep table entry 15
#define TMC5072_OFS15_SHIFT              15 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS16_MASK               0x010000 // MSLUT[0] // microstep table entry 16
#define TMC5072_OFS16_SHIFT              16 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS17_MASK               0x020000 // MSLUT[0] // microstep table entry 17
#define TMC5072_OFS17_SHIFT              17 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS18_MASK               0x040000 // MSLUT[0] // microstep table entry 18
#define TMC5072_OFS18_SHIFT              18 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS19_MASK               0x080000 // MSLUT[0] // microstep table entry 19
#define TMC5072_OFS19_SHIFT              19 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS20_MASK               0x100000 // MSLUT[0] // microstep table entry 20
#define TMC5072_OFS20_SHIFT              20 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS21_MASK               0x200000 // MSLUT[0] // microstep table entry 21
#define TMC5072_OFS21_SHIFT              21 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS22_MASK               0x400000 // MSLUT[0] // microstep table entry 22
#define TMC5072_OFS22_SHIFT              22 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS23_MASK               0x800000 // MSLUT[0] // microstep table entry 23
#define TMC5072_OFS23_SHIFT              23 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS24_MASK               0x01000000 // MSLUT[0] // microstep table entry 24
#define TMC5072_OFS24_SHIFT              24 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS25_MASK               0x02000000 // MSLUT[0] // microstep table entry 25
#define TMC5072_OFS25_SHIFT              25 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS26_MASK               0x04000000 // MSLUT[0] // microstep table entry 26
#define TMC5072_OFS26_SHIFT              26 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS27_MASK               0x08000000 // MSLUT[0] // microstep table entry 27
#define TMC5072_OFS27_SHIFT              27 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS28_MASK               0x10000000 // MSLUT[0] // microstep table entry 28
#define TMC5072_OFS28_SHIFT              28 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS29_MASK               0x20000000 // MSLUT[0] // microstep table entry 29
#define TMC5072_OFS29_SHIFT              29 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS30_MASK               0x40000000 // MSLUT[0] // microstep table entry 30
#define TMC5072_OFS30_SHIFT              30 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS31_MASK               0x80000000 // MSLUT[0] // microstep table entry 31
#define TMC5072_OFS31_SHIFT              31 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS32_MASK               0x01 // MSLUT[1] // microstep table entry 32
#define TMC5072_OFS32_SHIFT              0 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS33_MASK               0x02 // MSLUT[1] // microstep table entry 33
#define TMC5072_OFS33_SHIFT              1 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS34_MASK               0x04 // MSLUT[1] // microstep table entry 34
#define TMC5072_OFS34_SHIFT              2 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS35_MASK               0x08 // MSLUT[1] // microstep table entry 35
#define TMC5072_OFS35_SHIFT              3 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS36_MASK               0x10 // MSLUT[1] // microstep table entry 36
#define TMC5072_OFS36_SHIFT              4 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS37_MASK               0x20 // MSLUT[1] // microstep table entry 37
#define TMC5072_OFS37_SHIFT              5 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS38_MASK               0x40 // MSLUT[1] // microstep table entry 38
#define TMC5072_OFS38_SHIFT              6 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS39_MASK               0x80 // MSLUT[1] // microstep table entry 39
#define TMC5072_OFS39_SHIFT              7 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS40_MASK               0x0100 // MSLUT[1] // microstep table entry 40
#define TMC5072_OFS40_SHIFT              8 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS41_MASK               0x0200 // MSLUT[1] // microstep table entry 41
#define TMC5072_OFS41_SHIFT              9 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS42_MASK               0x0400 // MSLUT[1] // microstep table entry 42
#define TMC5072_OFS42_SHIFT              10 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS43_MASK               0x0800 // MSLUT[1] // microstep table entry 43
#define TMC5072_OFS43_SHIFT              11 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS44_MASK               0x1000 // MSLUT[1] // microstep table entry 44
#define TMC5072_OFS44_SHIFT              12 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS45_MASK               0x2000 // MSLUT[1] // microstep table entry 45
#define TMC5072_OFS45_SHIFT              13 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS46_MASK               0x4000 // MSLUT[1] // microstep table entry 46
#define TMC5072_OFS46_SHIFT              14 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS47_MASK               0x8000 // MSLUT[1] // microstep table entry 47
#define TMC5072_OFS47_SHIFT              15 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS48_MASK               0x010000 // MSLUT[1] // microstep table entry 48
#define TMC5072_OFS48_SHIFT              16 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS49_MASK               0x020000 // MSLUT[1] // microstep table entry 49
#define TMC5072_OFS49_SHIFT              17 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS50_MASK               0x040000 // MSLUT[1] // microstep table entry 50
#define TMC5072_OFS50_SHIFT              18 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS51_MASK               0x080000 // MSLUT[1] // microstep table entry 51
#define TMC5072_OFS51_SHIFT              19 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS52_MASK               0x100000 // MSLUT[1] // microstep table entry 52
#define TMC5072_OFS52_SHIFT              20 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS53_MASK               0x200000 // MSLUT[1] // microstep table entry 53
#define TMC5072_OFS53_SHIFT              21 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS54_MASK               0x400000 // MSLUT[1] // microstep table entry 54
#define TMC5072_OFS54_SHIFT              22 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS55_MASK               0x800000 // MSLUT[1] // microstep table entry 55
#define TMC5072_OFS55_SHIFT              23 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS56_MASK               0x01000000 // MSLUT[1] // microstep table entry 56
#define TMC5072_OFS56_SHIFT              24 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS57_MASK               0x02000000 // MSLUT[1] // microstep table entry 57
#define TMC5072_OFS57_SHIFT              25 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS58_MASK               0x04000000 // MSLUT[1] // microstep table entry 58
#define TMC5072_OFS58_SHIFT              26 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS59_MASK               0x08000000 // MSLUT[1] // microstep table entry 59
#define TMC5072_OFS59_SHIFT              27 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS60_MASK               0x10000000 // MSLUT[1] // microstep table entry 60
#define TMC5072_OFS60_SHIFT              28 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS61_MASK               0x20000000 // MSLUT[1] // microstep table entry 61
#define TMC5072_OFS61_SHIFT              29 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS62_MASK               0x40000000 // MSLUT[1] // microstep table entry 62
#define TMC5072_OFS62_SHIFT              30 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS63_MASK               0x80000000 // MSLUT[1] // microstep table entry 63
#define TMC5072_OFS63_SHIFT              31 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS64_MASK               0x01 // MSLUT[2] // microstep table entry 64
#define TMC5072_OFS64_SHIFT              0 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS65_MASK               0x02 // MSLUT[2] // microstep table entry 65
#define TMC5072_OFS65_SHIFT              1 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS66_MASK               0x04 // MSLUT[2] // microstep table entry 66
#define TMC5072_OFS66_SHIFT              2 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS67_MASK               0x08 // MSLUT[2] // microstep table entry 67
#define TMC5072_OFS67_SHIFT              3 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS68_MASK               0x10 // MSLUT[2] // microstep table entry 68
#define TMC5072_OFS68_SHIFT              4 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS69_MASK               0x20 // MSLUT[2] // microstep table entry 69
#define TMC5072_OFS69_SHIFT              5 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS70_MASK               0x40 // MSLUT[2] // microstep table entry 70
#define TMC5072_OFS70_SHIFT              6 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS71_MASK               0x80 // MSLUT[2] // microstep table entry 71
#define TMC5072_OFS71_SHIFT              7 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS72_MASK               0x0100 // MSLUT[2] // microstep table entry 72
#define TMC5072_OFS72_SHIFT              8 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS73_MASK               0x0200 // MSLUT[2] // microstep table entry 73
#define TMC5072_OFS73_SHIFT              9 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS74_MASK               0x0400 // MSLUT[2] // microstep table entry 74
#define TMC5072_OFS74_SHIFT              10 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS75_MASK               0x0800 // MSLUT[2] // microstep table entry 75
#define TMC5072_OFS75_SHIFT              11 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS76_MASK               0x1000 // MSLUT[2] // microstep table entry 76
#define TMC5072_OFS76_SHIFT              12 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS77_MASK               0x2000 // MSLUT[2] // microstep table entry 77
#define TMC5072_OFS77_SHIFT              13 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS78_MASK               0x4000 // MSLUT[2] // microstep table entry 78
#define TMC5072_OFS78_SHIFT              14 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS79_MASK               0x8000 // MSLUT[2] // microstep table entry 79
#define TMC5072_OFS79_SHIFT              15 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS80_MASK               0x010000 // MSLUT[2] // microstep table entry 80
#define TMC5072_OFS80_SHIFT              16 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS81_MASK               0x020000 // MSLUT[2] // microstep table entry 81
#define TMC5072_OFS81_SHIFT              17 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS82_MASK               0x040000 // MSLUT[2] // microstep table entry 82
#define TMC5072_OFS82_SHIFT              18 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS83_MASK               0x080000 // MSLUT[2] // microstep table entry 83
#define TMC5072_OFS83_SHIFT              19 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS84_MASK               0x100000 // MSLUT[2] // microstep table entry 84
#define TMC5072_OFS84_SHIFT              20 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS85_MASK               0x200000 // MSLUT[2] // microstep table entry 85
#define TMC5072_OFS85_SHIFT              21 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS86_MASK               0x400000 // MSLUT[2] // microstep table entry 86
#define TMC5072_OFS86_SHIFT              22 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS87_MASK               0x800000 // MSLUT[2] // microstep table entry 87
#define TMC5072_OFS87_SHIFT              23 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS88_MASK               0x01000000 // MSLUT[2] // microstep table entry 88
#define TMC5072_OFS88_SHIFT              24 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS89_MASK               0x02000000 // MSLUT[2] // microstep table entry 89
#define TMC5072_OFS89_SHIFT              25 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS90_MASK               0x04000000 // MSLUT[2] // microstep table entry 90
#define TMC5072_OFS90_SHIFT              26 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS91_MASK               0x08000000 // MSLUT[2] // microstep table entry 91
#define TMC5072_OFS91_SHIFT              27 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS92_MASK               0x10000000 // MSLUT[2] // microstep table entry 92
#define TMC5072_OFS92_SHIFT              28 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS93_MASK               0x20000000 // MSLUT[2] // microstep table entry 93
#define TMC5072_OFS93_SHIFT              29 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS94_MASK               0x40000000 // MSLUT[2] // microstep table entry 94
#define TMC5072_OFS94_SHIFT              30 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS95_MASK               0x80000000 // MSLUT[2] // microstep table entry 95
#define TMC5072_OFS95_SHIFT              31 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS96_MASK               0x01 // MSLUT[3] // microstep table entry 96
#define TMC5072_OFS96_SHIFT              0 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS97_MASK               0x02 // MSLUT[3] // microstep table entry 97
#define TMC5072_OFS97_SHIFT              1 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS98_MASK               0x04 // MSLUT[3] // microstep table entry 98
#define TMC5072_OFS98_SHIFT              2 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS99_MASK               0x08 // MSLUT[3] // microstep table entry 99
#define TMC5072_OFS99_SHIFT              3 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS100_MASK              0x10 // MSLUT[3] // microstep table entry 100
#define TMC5072_OFS100_SHIFT             4 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS101_MASK              0x20 // MSLUT[3] // microstep table entry 101
#define TMC5072_OFS101_SHIFT             5 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS102_MASK              0x40 // MSLUT[3] // microstep table entry 102
#define TMC5072_OFS102_SHIFT             6 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS103_MASK              0x80 // MSLUT[3] // microstep table entry 103
#define TMC5072_OFS103_SHIFT             7 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS104_MASK              0x0100 // MSLUT[3] // microstep table entry 104
#define TMC5072_OFS104_SHIFT             8 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS105_MASK              0x0200 // MSLUT[3] // microstep table entry 105
#define TMC5072_OFS105_SHIFT             9 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS106_MASK              0x0400 // MSLUT[3] // microstep table entry 106
#define TMC5072_OFS106_SHIFT             10 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS107_MASK              0x0800 // MSLUT[3] // microstep table entry 107
#define TMC5072_OFS107_SHIFT             11 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS108_MASK              0x1000 // MSLUT[3] // microstep table entry 108
#define TMC5072_OFS108_SHIFT             12 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS109_MASK              0x2000 // MSLUT[3] // microstep table entry 109
#define TMC5072_OFS109_SHIFT             13 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS110_MASK              0x4000 // MSLUT[3] // microstep table entry 110
#define TMC5072_OFS110_SHIFT             14 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS111_MASK              0x8000 // MSLUT[3] // microstep table entry 111
#define TMC5072_OFS111_SHIFT             15 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS112_MASK              0x010000 // MSLUT[3] // microstep table entry 112
#define TMC5072_OFS112_SHIFT             16 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS113_MASK              0x020000 // MSLUT[3] // microstep table entry 113
#define TMC5072_OFS113_SHIFT             17 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS114_MASK              0x040000 // MSLUT[3] // microstep table entry 114
#define TMC5072_OFS114_SHIFT             18 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS115_MASK              0x080000 // MSLUT[3] // microstep table entry 115
#define TMC5072_OFS115_SHIFT             19 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS116_MASK              0x100000 // MSLUT[3] // microstep table entry 116
#define TMC5072_OFS116_SHIFT             20 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS117_MASK              0x200000 // MSLUT[3] // microstep table entry 117
#define TMC5072_OFS117_SHIFT             21 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS118_MASK              0x400000 // MSLUT[3] // microstep table entry 118
#define TMC5072_OFS118_SHIFT             22 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS119_MASK              0x800000 // MSLUT[3] // microstep table entry 119
#define TMC5072_OFS119_SHIFT             23 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS120_MASK              0x01000000 // MSLUT[3] // microstep table entry 120
#define TMC5072_OFS120_SHIFT             24 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS121_MASK              0x02000000 // MSLUT[3] // microstep table entry 121
#define TMC5072_OFS121_SHIFT             25 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS122_MASK              0x04000000 // MSLUT[3] // microstep table entry 122
#define TMC5072_OFS122_SHIFT             26 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS123_MASK              0x08000000 // MSLUT[3] // microstep table entry 123
#define TMC5072_OFS123_SHIFT             27 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS124_MASK              0x10000000 // MSLUT[3] // microstep table entry 124
#define TMC5072_OFS124_SHIFT             28 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS125_MASK              0x20000000 // MSLUT[3] // microstep table entry 125
#define TMC5072_OFS125_SHIFT             29 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS126_MASK              0x40000000 // MSLUT[3] // microstep table entry 126
#define TMC5072_OFS126_SHIFT             30 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS127_MASK              0x80000000 // MSLUT[3] // microstep table entry 127
#define TMC5072_OFS127_SHIFT             31 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS128_MASK              0x01 // MSLUT[4] // microstep table entry 128
#define TMC5072_OFS128_SHIFT             0 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS129_MASK              0x02 // MSLUT[4] // microstep table entry 129
#define TMC5072_OFS129_SHIFT             1 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS130_MASK              0x04 // MSLUT[4] // microstep table entry 130
#define TMC5072_OFS130_SHIFT             2 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS131_MASK              0x08 // MSLUT[4] // microstep table entry 131
#define TMC5072_OFS131_SHIFT             3 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS132_MASK              0x10 // MSLUT[4] // microstep table entry 132
#define TMC5072_OFS132_SHIFT             4 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS133_MASK              0x20 // MSLUT[4] // microstep table entry 133
#define TMC5072_OFS133_SHIFT             5 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS134_MASK              0x40 // MSLUT[4] // microstep table entry 134
#define TMC5072_OFS134_SHIFT             6 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS135_MASK              0x80 // MSLUT[4] // microstep table entry 135
#define TMC5072_OFS135_SHIFT             7 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS136_MASK              0x0100 // MSLUT[4] // microstep table entry 136
#define TMC5072_OFS136_SHIFT             8 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS137_MASK              0x0200 // MSLUT[4] // microstep table entry 137
#define TMC5072_OFS137_SHIFT             9 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS138_MASK              0x0400 // MSLUT[4] // microstep table entry 138
#define TMC5072_OFS138_SHIFT             10 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS139_MASK              0x0800 // MSLUT[4] // microstep table entry 139
#define TMC5072_OFS139_SHIFT             11 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS140_MASK              0x1000 // MSLUT[4] // microstep table entry 140
#define TMC5072_OFS140_SHIFT             12 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS141_MASK              0x2000 // MSLUT[4] // microstep table entry 141
#define TMC5072_OFS141_SHIFT             13 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS142_MASK              0x4000 // MSLUT[4] // microstep table entry 142
#define TMC5072_OFS142_SHIFT             14 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS143_MASK              0x8000 // MSLUT[4] // microstep table entry 143
#define TMC5072_OFS143_SHIFT             15 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS144_MASK              0x010000 // MSLUT[4] // microstep table entry 144
#define TMC5072_OFS144_SHIFT             16 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS145_MASK              0x020000 // MSLUT[4] // microstep table entry 145
#define TMC5072_OFS145_SHIFT             17 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS146_MASK              0x040000 // MSLUT[4] // microstep table entry 146
#define TMC5072_OFS146_SHIFT             18 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS147_MASK              0x080000 // MSLUT[4] // microstep table entry 147
#define TMC5072_OFS147_SHIFT             19 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS148_MASK              0x100000 // MSLUT[4] // microstep table entry 148
#define TMC5072_OFS148_SHIFT             20 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS149_MASK              0x200000 // MSLUT[4] // microstep table entry 149
#define TMC5072_OFS149_SHIFT             21 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS150_MASK              0x400000 // MSLUT[4] // microstep table entry 150
#define TMC5072_OFS150_SHIFT             22 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS151_MASK              0x800000 // MSLUT[4] // microstep table entry 151
#define TMC5072_OFS151_SHIFT             23 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS152_MASK              0x01000000 // MSLUT[4] // microstep table entry 152
#define TMC5072_OFS152_SHIFT             24 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS153_MASK              0x02000000 // MSLUT[4] // microstep table entry 153
#define TMC5072_OFS153_SHIFT             25 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS154_MASK              0x04000000 // MSLUT[4] // microstep table entry 154
#define TMC5072_OFS154_SHIFT             26 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS155_MASK              0x08000000 // MSLUT[4] // microstep table entry 155
#define TMC5072_OFS155_SHIFT             27 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS156_MASK              0x10000000 // MSLUT[4] // microstep table entry 156
#define TMC5072_OFS156_SHIFT             28 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS157_MASK              0x20000000 // MSLUT[4] // microstep table entry 157
#define TMC5072_OFS157_SHIFT             29 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS158_MASK              0x40000000 // MSLUT[4] // microstep table entry 158
#define TMC5072_OFS158_SHIFT             30 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS159_MASK              0x80000000 // MSLUT[4] // microstep table entry 159
#define TMC5072_OFS159_SHIFT             31 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS160_MASK              0x01 // MSLUT[5] // microstep table entry 160
#define TMC5072_OFS160_SHIFT             0 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS161_MASK              0x02 // MSLUT[5] // microstep table entry 161
#define TMC5072_OFS161_SHIFT             1 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS162_MASK              0x04 // MSLUT[5] // microstep table entry 162
#define TMC5072_OFS162_SHIFT             2 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS163_MASK              0x08 // MSLUT[5] // microstep table entry 163
#define TMC5072_OFS163_SHIFT             3 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS164_MASK              0x10 // MSLUT[5] // microstep table entry 164
#define TMC5072_OFS164_SHIFT             4 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS165_MASK              0x20 // MSLUT[5] // microstep table entry 165
#define TMC5072_OFS165_SHIFT             5 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS166_MASK              0x40 // MSLUT[5] // microstep table entry 166
#define TMC5072_OFS166_SHIFT             6 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS167_MASK              0x80 // MSLUT[5] // microstep table entry 167
#define TMC5072_OFS167_SHIFT             7 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS168_MASK              0x0100 // MSLUT[5] // microstep table entry 168
#define TMC5072_OFS168_SHIFT             8 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS169_MASK              0x0200 // MSLUT[5] // microstep table entry 169
#define TMC5072_OFS169_SHIFT             9 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS170_MASK              0x0400 // MSLUT[5] // microstep table entry 170
#define TMC5072_OFS170_SHIFT             10 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS171_MASK              0x0800 // MSLUT[5] // microstep table entry 171
#define TMC5072_OFS171_SHIFT             11 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS172_MASK              0x1000 // MSLUT[5] // microstep table entry 172
#define TMC5072_OFS172_SHIFT             12 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS173_MASK              0x2000 // MSLUT[5] // microstep table entry 173
#define TMC5072_OFS173_SHIFT             13 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS174_MASK              0x4000 // MSLUT[5] // microstep table entry 174
#define TMC5072_OFS174_SHIFT             14 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS175_MASK              0x8000 // MSLUT[5] // microstep table entry 175
#define TMC5072_OFS175_SHIFT             15 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS176_MASK              0x010000 // MSLUT[5] // microstep table entry 176
#define TMC5072_OFS176_SHIFT             16 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS177_MASK              0x020000 // MSLUT[5] // microstep table entry 177
#define TMC5072_OFS177_SHIFT             17 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS178_MASK              0x040000 // MSLUT[5] // microstep table entry 178
#define TMC5072_OFS178_SHIFT             18 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS179_MASK              0x080000 // MSLUT[5] // microstep table entry 179
#define TMC5072_OFS179_SHIFT             19 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS180_MASK              0x100000 // MSLUT[5] // microstep table entry 180
#define TMC5072_OFS180_SHIFT             20 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS181_MASK              0x200000 // MSLUT[5] // microstep table entry 181
#define TMC5072_OFS181_SHIFT             21 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS182_MASK              0x400000 // MSLUT[5] // microstep table entry 182
#define TMC5072_OFS182_SHIFT             22 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS183_MASK              0x800000 // MSLUT[5] // microstep table entry 183
#define TMC5072_OFS183_SHIFT             23 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS184_MASK              0x01000000 // MSLUT[5] // microstep table entry 184
#define TMC5072_OFS184_SHIFT             24 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS185_MASK              0x02000000 // MSLUT[5] // microstep table entry 185
#define TMC5072_OFS185_SHIFT             25 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS186_MASK              0x04000000 // MSLUT[5] // microstep table entry 186
#define TMC5072_OFS186_SHIFT             26 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS187_MASK              0x08000000 // MSLUT[5] // microstep table entry 187
#define TMC5072_OFS187_SHIFT             27 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS188_MASK              0x10000000 // MSLUT[5] // microstep table entry 188
#define TMC5072_OFS188_SHIFT             28 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS189_MASK              0x20000000 // MSLUT[5] // microstep table entry 189
#define TMC5072_OFS189_SHIFT             29 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS190_MASK              0x40000000 // MSLUT[5] // microstep table entry 190
#define TMC5072_OFS190_SHIFT             30 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS191_MASK              0x80000000 // MSLUT[5] // microstep table entry 191
#define TMC5072_OFS191_SHIFT             31 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS192_MASK              0x01 // MSLUT[6] // microstep table entry 192
#define TMC5072_OFS192_SHIFT             0 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS193_MASK              0x02 // MSLUT[6] // microstep table entry 193
#define TMC5072_OFS193_SHIFT             1 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS194_MASK              0x04 // MSLUT[6] // microstep table entry 194
#define TMC5072_OFS194_SHIFT             2 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS195_MASK              0x08 // MSLUT[6] // microstep table entry 195
#define TMC5072_OFS195_SHIFT             3 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS196_MASK              0x10 // MSLUT[6] // microstep table entry 196
#define TMC5072_OFS196_SHIFT             4 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS197_MASK              0x20 // MSLUT[6] // microstep table entry 197
#define TMC5072_OFS197_SHIFT             5 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS198_MASK              0x40 // MSLUT[6] // microstep table entry 198
#define TMC5072_OFS198_SHIFT             6 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS199_MASK              0x80 // MSLUT[6] // microstep table entry 199
#define TMC5072_OFS199_SHIFT             7 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS200_MASK              0x0100 // MSLUT[6] // microstep table entry 200
#define TMC5072_OFS200_SHIFT             8 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS201_MASK              0x0200 // MSLUT[6] // microstep table entry 201
#define TMC5072_OFS201_SHIFT             9 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS202_MASK              0x0400 // MSLUT[6] // microstep table entry 202
#define TMC5072_OFS202_SHIFT             10 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS203_MASK              0x0800 // MSLUT[6] // microstep table entry 203
#define TMC5072_OFS203_SHIFT             11 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS204_MASK              0x1000 // MSLUT[6] // microstep table entry 204
#define TMC5072_OFS204_SHIFT             12 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS205_MASK              0x2000 // MSLUT[6] // microstep table entry 205
#define TMC5072_OFS205_SHIFT             13 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS206_MASK              0x4000 // MSLUT[6] // microstep table entry 206
#define TMC5072_OFS206_SHIFT             14 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS207_MASK              0x8000 // MSLUT[6] // microstep table entry 207
#define TMC5072_OFS207_SHIFT             15 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS208_MASK              0x010000 // MSLUT[6] // microstep table entry 208
#define TMC5072_OFS208_SHIFT             16 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS209_MASK              0x020000 // MSLUT[6] // microstep table entry 209
#define TMC5072_OFS209_SHIFT             17 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS210_MASK              0x040000 // MSLUT[6] // microstep table entry 210
#define TMC5072_OFS210_SHIFT             18 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS211_MASK              0x080000 // MSLUT[6] // microstep table entry 211
#define TMC5072_OFS211_SHIFT             19 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS212_MASK              0x100000 // MSLUT[6] // microstep table entry 212
#define TMC5072_OFS212_SHIFT             20 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS213_MASK              0x200000 // MSLUT[6] // microstep table entry 213
#define TMC5072_OFS213_SHIFT             21 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS214_MASK              0x400000 // MSLUT[6] // microstep table entry 214
#define TMC5072_OFS214_SHIFT             22 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS215_MASK              0x800000 // MSLUT[6] // microstep table entry 215
#define TMC5072_OFS215_SHIFT             23 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS216_MASK              0x01000000 // MSLUT[6] // microstep table entry 216
#define TMC5072_OFS216_SHIFT             24 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS217_MASK              0x02000000 // MSLUT[6] // microstep table entry 217
#define TMC5072_OFS217_SHIFT             25 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS218_MASK              0x04000000 // MSLUT[6] // microstep table entry 218
#define TMC5072_OFS218_SHIFT             26 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS219_MASK              0x08000000 // MSLUT[6] // microstep table entry 219
#define TMC5072_OFS219_SHIFT             27 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS220_MASK              0x10000000 // MSLUT[6] // microstep table entry 220
#define TMC5072_OFS220_SHIFT             28 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS221_MASK              0x20000000 // MSLUT[6] // microstep table entry 221
#define TMC5072_OFS221_SHIFT             29 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS222_MASK              0x40000000 // MSLUT[6] // microstep table entry 222
#define TMC5072_OFS222_SHIFT             30 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS223_MASK              0x80000000 // MSLUT[6] // microstep table entry 223
#define TMC5072_OFS223_SHIFT             31 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS224_MASK              0x01 // MSLUT[7] // microstep table entry 224
#define TMC5072_OFS224_SHIFT             0 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS225_MASK              0x02 // MSLUT[7] // microstep table entry 225
#define TMC5072_OFS225_SHIFT             1 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS226_MASK              0x04 // MSLUT[7] // microstep table entry 226
#define TMC5072_OFS226_SHIFT             2 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS227_MASK              0x08 // MSLUT[7] // microstep table entry 227
#define TMC5072_OFS227_SHIFT             3 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS228_MASK              0x10 // MSLUT[7] // microstep table entry 228
#define TMC5072_OFS228_SHIFT             4 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS229_MASK              0x20 // MSLUT[7] // microstep table entry 229
#define TMC5072_OFS229_SHIFT             5 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS230_MASK              0x40 // MSLUT[7] // microstep table entry 230
#define TMC5072_OFS230_SHIFT             6 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS231_MASK              0x80 // MSLUT[7] // microstep table entry 231
#define TMC5072_OFS231_SHIFT             7 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS232_MASK              0x0100 // MSLUT[7] // microstep table entry 232
#define TMC5072_OFS232_SHIFT             8 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS233_MASK              0x0200 // MSLUT[7] // microstep table entry 233
#define TMC5072_OFS233_SHIFT             9 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS234_MASK              0x0400 // MSLUT[7] // microstep table entry 234
#define TMC5072_OFS234_SHIFT             10 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS235_MASK              0x0800 // MSLUT[7] // microstep table entry 235
#define TMC5072_OFS235_SHIFT             11 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS236_MASK              0x1000 // MSLUT[7] // microstep table entry 236
#define TMC5072_OFS236_SHIFT             12 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS237_MASK              0x2000 // MSLUT[7] // microstep table entry 237
#define TMC5072_OFS237_SHIFT             13 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS238_MASK              0x4000 // MSLUT[7] // microstep table entry 238
#define TMC5072_OFS238_SHIFT             14 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS239_MASK              0x8000 // MSLUT[7] // microstep table entry 239
#define TMC5072_OFS239_SHIFT             15 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS240_MASK              0x010000 // MSLUT[7] // microstep table entry 240
#define TMC5072_OFS240_SHIFT             16 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS241_MASK              0x020000 // MSLUT[7] // microstep table entry 241
#define TMC5072_OFS241_SHIFT             17 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS242_MASK              0x040000 // MSLUT[7] // microstep table entry 242
#define TMC5072_OFS242_SHIFT             18 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS243_MASK              0x080000 // MSLUT[7] // microstep table entry 243
#define TMC5072_OFS243_SHIFT             19 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS244_MASK              0x100000 // MSLUT[7] // microstep table entry 244
#define TMC5072_OFS244_SHIFT             20 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS245_MASK              0x200000 // MSLUT[7] // microstep table entry 245
#define TMC5072_OFS245_SHIFT             21 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS246_MASK              0x400000 // MSLUT[7] // microstep table entry 246
#define TMC5072_OFS246_SHIFT             22 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS247_MASK              0x800000 // MSLUT[7] // microstep table entry 247
#define TMC5072_OFS247_SHIFT             23 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS248_MASK              0x01000000 // MSLUT[7] // microstep table entry 248
#define TMC5072_OFS248_SHIFT             24 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS249_MASK              0x02000000 // MSLUT[7] // microstep table entry 249
#define TMC5072_OFS249_SHIFT             25 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS250_MASK              0x04000000 // MSLUT[7] // microstep table entry 250
#define TMC5072_OFS250_SHIFT             26 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS251_MASK              0x08000000 // MSLUT[7] // microstep table entry 251
#define TMC5072_OFS251_SHIFT             27 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS252_MASK              0x10000000 // MSLUT[7] // microstep table entry 252
#define TMC5072_OFS252_SHIFT             28 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS253_MASK              0x20000000 // MSLUT[7] // microstep table entry 253
#define TMC5072_OFS253_SHIFT             29 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS254_MASK              0x40000000 // MSLUT[7] // microstep table entry 254
#define TMC5072_OFS254_SHIFT             30 // min.: 0, max.: 1, default: 0
#define TMC5072_OFS255_MASK              0x80000000 // MSLUT[7] // microstep table entry 255
#define TMC5072_OFS255_SHIFT             31 // min.: 0, max.: 1, default: 0
#define TMC5072_W0_MASK                  0x03 // MSLUTSEL // LUT width select from ofs0 to ofs(X1-1)
#define TMC5072_W0_SHIFT                 0 // min.: 0, max.: 3, default: 0
#define TMC5072_W1_MASK                  0x0C // MSLUTSEL // LUT width select from ofs(X1) to ofs(X2-1)
#define TMC5072_W1_SHIFT                 2 // min.: 0, max.: 3, default: 0
#define TMC5072_W2_MASK                  0x30 // MSLUTSEL // LUT width select from ofs(X2) to ofs(X3-1)
#define TMC5072_W2_SHIFT                 4 // min.: 0, max.: 3, default: 0
#define TMC5072_W3_MASK                  0xC0 // MSLUTSEL // LUT width select from ofs(X3) to ofs255
#define TMC5072_W3_SHIFT                 6 // min.: 0, max.: 3, default: 0
#define TMC5072_X1_MASK                  0xFF00 // MSLUTSEL // LUT segment 1 start
#define TMC5072_X1_SHIFT                 8 // min.: 0, max.: 255, default: 0
#define TMC5072_X2_MASK                  0xFF0000 // MSLUTSEL // LUT segment 2 start
#define TMC5072_X2_SHIFT                 16 // min.: 0, max.: 255, default: 0
#define TMC5072_X3_MASK                  0xFF000000 // MSLUTSEL // LUT segment 3 start
#define TMC5072_X3_SHIFT                 24 // min.: 0, max.: 255, default: 0
#define TMC5072_START_SIN_MASK           0xFF // MSLUTSTART // Absolute current at microstep table entry 0.
#define TMC5072_START_SIN_SHIFT          0 // min.: 0, max.: 255, default: 0
#define TMC5072_START_SIN90_MASK         0xFF0000 // MSLUTSTART // Absolute current for microstep table entry at positions 256.
#define TMC5072_START_SIN90_SHIFT        16 // min.: 0, max.: 255, default: 0
#define TMC5072_MSCNT_MASK               0x03FF // MSCNT_M1 // Microstep counter. Indicates actual position in the microstep table for CUR_A. CUR_B uses an offset of 256 (2 phase motor). Hint: Move to a position where MSCNT is zero before re-initializing MSLUTSTART or MSLUT and MSLUTSEL.
#define TMC5072_MSCNT_SHIFT              0 // min.: 0, max.: 1023, default: 0
#define TMC5072_CUR_A_MASK               0x01FF // MSCURACT_M1 // Actual microstep current for motor phase A as read from MSLUT (not scaled by current)
#define TMC5072_CUR_A_SHIFT              0 // min.: -256, max.: 255, default: 0
#define TMC5072_CUR_B_MASK               0x01FF0000 // MSCURACT_M1 // Actual microstep current for motor phase B as read from MSLUT (not scaled by current)
#define TMC5072_CUR_B_SHIFT              16 // min.: -256, max.: 255, default: 0
#define TMC5072_TOFF_MASK                0x0F // CHOPCONF_M1 // off time and driver enable
#define TMC5072_TOFF_SHIFT               0 // min.: 0, max.: 15, default: 0
#define TMC5072_TFD_ALL_MASK             0x70 // CHOPCONF_M1 // fast decay time setting
#define TMC5072_TFD_ALL_SHIFT            4 // min.: 0, max.: 7, default: 0
#define TMC5072_OFFSET_MASK              0x0780 // CHOPCONF_M1 // sine wave offset
#define TMC5072_OFFSET_SHIFT             7 // min.: 0, max.: 15, default: 0
#define TMC5072_TFD_3_MASK               0x0800 // CHOPCONF_M1 // MSB of fast decay time setting
#define TMC5072_TFD_3_SHIFT              11 // min.: 0, max.: 1, default: 0
#define TMC5072_DISFDCC_MASK             0x1000 // CHOPCONF_M1 // fast decay mode
#define TMC5072_DISFDCC_SHIFT            12 // min.: 0, max.: 1, default: 0
#define TMC5072_RNDTF_MASK               0x2000 // CHOPCONF_M1 // random TOFF time
#define TMC5072_RNDTF_SHIFT              13 // min.: 0, max.: 1, default: 0
#define TMC5072_CHM_MASK                 0x4000 // CHOPCONF_M1 // chopper mode
#define TMC5072_CHM_SHIFT                14 // min.: 0, max.: 1, default: 0
#define TMC5072_TBL_MASK                 0x018000 // CHOPCONF_M1 // blank time select
#define TMC5072_TBL_SHIFT                15 // min.: 0, max.: 3, default: 0
#define TMC5072_VSENSE_MASK              0x020000 // CHOPCONF_M1 // sense resistor voltage based current scaling
#define TMC5072_VSENSE_SHIFT             17 // min.: 0, max.: 1, default: 0
#define TMC5072_VHIGHFS_MASK             0x040000 // CHOPCONF_M1 // high velocity fullstep selection
#define TMC5072_VHIGHFS_SHIFT            18 // min.: 0, max.: 1, default: 0
#define TMC5072_VHIGHCHM_MASK            0x080000 // CHOPCONF_M1 // high velocity chopper mode
#define TMC5072_VHIGHCHM_SHIFT           19 // min.: 0, max.: 1, default: 0
#define TMC5072_MRES_MASK                0x0F000000 // CHOPCONF_M1 // Micro step resolution; The resolution gives the number of microstep entries per sine quarter wave. The driver automatically uses microstep positions which result in a symmetrical wave, when choosing a lower microstep resolution.
#define TMC5072_MRES_SHIFT               24 // min.: 0, max.: 8, default: 0
#define TMC5072_INTPOL_MASK              0x10000000 // CHOPCONF_M1 // interpolation to 256 microsteps
#define TMC5072_INTPOL_SHIFT             28 // min.: 0, max.: 1, default: 0
#define TMC5072_DEDGE_MASK               0x20000000 // CHOPCONF_M1 // enable double edge step pulses
#define TMC5072_DEDGE_SHIFT              29 // min.: 0, max.: 1, default: 0
#define TMC5072_DISS2G_MASK              0x40000000 // CHOPCONF_M1 // short to GND protection disable
#define TMC5072_DISS2G_SHIFT             30 // min.: 0, max.: 1, default: 0
#define TMC5072_TOFF_MASK                0x0F // CHOPCONF_M1 // off time and driver enable
#define TMC5072_TOFF_SHIFT               0 // min.: 0, max.: 15, default: 0
#define TMC5072_TFD_ALL_MASK             0x70 // CHOPCONF_M1 // fast decay time setting
#define TMC5072_TFD_ALL_SHIFT            4 // min.: 0, max.: 7, default: 0
#define TMC5072_OFFSET_MASK              0x0780 // CHOPCONF_M1 // sine wave offset
#define TMC5072_OFFSET_SHIFT             7 // min.: 0, max.: 15, default: 0
#define TMC5072_TFD_3_MASK               0x0800 // CHOPCONF_M1 // MSB of fast decay time setting
#define TMC5072_TFD_3_SHIFT              11 // min.: 0, max.: 1, default: 0
#define TMC5072_DISFDCC_MASK             0x1000 // CHOPCONF_M1 // fast decay mode
#define TMC5072_DISFDCC_SHIFT            12 // min.: 0, max.: 1, default: 0
#define TMC5072_RNDTF_MASK               0x2000 // CHOPCONF_M1 // random TOFF time
#define TMC5072_RNDTF_SHIFT              13 // min.: 0, max.: 1, default: 0
#define TMC5072_CHM_MASK                 0x4000 // CHOPCONF_M1 // chopper mode
#define TMC5072_CHM_SHIFT                14 // min.: 0, max.: 1, default: 0
#define TMC5072_TBL_MASK                 0x018000 // CHOPCONF_M1 // blank time select
#define TMC5072_TBL_SHIFT                15 // min.: 0, max.: 3, default: 0
#define TMC5072_VSENSE_MASK              0x020000 // CHOPCONF_M1 // sense resistor voltage based current scaling
#define TMC5072_VSENSE_SHIFT             17 // min.: 0, max.: 1, default: 0
#define TMC5072_VHIGHFS_MASK             0x040000 // CHOPCONF_M1 // high velocity fullstep selection
#define TMC5072_VHIGHFS_SHIFT            18 // min.: 0, max.: 1, default: 0
#define TMC5072_VHIGHCHM_MASK            0x080000 // CHOPCONF_M1 // high velocity chopper mode
#define TMC5072_VHIGHCHM_SHIFT           19 // min.: 0, max.: 1, default: 0
#define TMC5072_MRES_MASK                0x0F000000 // CHOPCONF_M1 // Micro step resolution; The resolution gives the number of microstep entries per sine quarter wave. The driver automatically uses microstep positions which result in a symmetrical wave, when choosing a lower microstep resolution.
#define TMC5072_MRES_SHIFT               24 // min.: 0, max.: 8, default: 0
#define TMC5072_INTPOL_MASK              0x10000000 // CHOPCONF_M1 // interpolation to 256 microsteps
#define TMC5072_INTPOL_SHIFT             28 // min.: 0, max.: 1, default: 0
#define TMC5072_DEDGE_MASK               0x20000000 // CHOPCONF_M1 // enable double edge step pulses
#define TMC5072_DEDGE_SHIFT              29 // min.: 0, max.: 1, default: 0
#define TMC5072_DISS2G_MASK              0x40000000 // CHOPCONF_M1 // short to GND protection disable
#define TMC5072_DISS2G_SHIFT             30 // min.: 0, max.: 1, default: 0
#define TMC5072_TOFF_MASK                0x0F // CHOPCONF_M1 // off time and driver enable
#define TMC5072_TOFF_SHIFT               0 // min.: 0, max.: 15, default: 0
#define TMC5072_HSTRT_MASK               0x70 // CHOPCONF_M1 // hysteresis start value added to HEND; Attention: Effective HEND+HSTRT less than or equal to 16. Hint: Hysteresis decrement is done each 16 clocks
#define TMC5072_HSTRT_SHIFT              4 // min.: 0, max.: 7, default: 0
#define TMC5072_HEND_MASK                0x0780 // CHOPCONF_M1 // hysteresis low value
#define TMC5072_HEND_SHIFT               7 // min.: 0, max.: 15, default: 0
#define TMC5072_RNDTF_MASK               0x2000 // CHOPCONF_M1 // random TOFF time
#define TMC5072_RNDTF_SHIFT              13 // min.: 0, max.: 1, default: 0
#define TMC5072_CHM_MASK                 0x4000 // CHOPCONF_M1 // chopper mode
#define TMC5072_CHM_SHIFT                14 // min.: 0, max.: 1, default: 0
#define TMC5072_TBL_MASK                 0x018000 // CHOPCONF_M1 // blank time select
#define TMC5072_TBL_SHIFT                15 // min.: 0, max.: 3, default: 0
#define TMC5072_VSENSE_MASK              0x020000 // CHOPCONF_M1 // sense resistor voltage based current scaling
#define TMC5072_VSENSE_SHIFT             17 // min.: 0, max.: 1, default: 0
#define TMC5072_VHIGHFS_MASK             0x040000 // CHOPCONF_M1 // high velocity fullstep selection
#define TMC5072_VHIGHFS_SHIFT            18 // min.: 0, max.: 1, default: 0
#define TMC5072_VHIGHCHM_MASK            0x080000 // CHOPCONF_M1 // high velocity chopper mode
#define TMC5072_VHIGHCHM_SHIFT           19 // min.: 0, max.: 1, default: 0
#define TMC5072_MRES_MASK                0x0F000000 // CHOPCONF_M1 // Micro step resolution; The resolution gives the number of microstep entries per sine quarter wave. The driver automatically uses microstep positions which result in a symmetrical wave, when choosing a lower microstep resolution.
#define TMC5072_MRES_SHIFT               24 // min.: 0, max.: 8, default: 0
#define TMC5072_INTPOL_MASK              0x10000000 // CHOPCONF_M1 // interpolation to 256 microsteps
#define TMC5072_INTPOL_SHIFT             28 // min.: 0, max.: 1, default: 0
#define TMC5072_DEDGE_MASK               0x20000000 // CHOPCONF_M1 // enable double edge step pulses
#define TMC5072_DEDGE_SHIFT              29 // min.: 0, max.: 1, default: 0
#define TMC5072_DISS2G_MASK              0x40000000 // CHOPCONF_M1 // short to GND protection disable
#define TMC5072_DISS2G_SHIFT             30 // min.: 0, max.: 1, default: 0
#define TMC5072_SEMIN_MASK               0x0F // COOLCONF_M1 // minimum stallGuard2 value - If the stallGuard2 result falls below SEMIN*32, the motor current becomes increased to reduce motor load angle. 0: smart current control coolStep off
#define TMC5072_SEMIN_SHIFT              0 // min.: 0, max.: 15, default: 0
#define TMC5072_SEUP_MASK                0x60 // COOLCONF_M1 // Current increment steps per measured stallGuard2 value
#define TMC5072_SEUP_SHIFT               5 // min.: 0, max.: 3, default: 0
#define TMC5072_SEMAX_MASK               0x0F00 // COOLCONF_M1 // stallGuard2 hysteresis value - If the stallGuard2 result is equal to or above (SEMIN+SEMAX+1)*32, the motor current becomes decreased to save energy.
#define TMC5072_SEMAX_SHIFT              8 // min.: 0, max.: 15, default: 0
#define TMC5072_SEDN_MASK                0x6000 // COOLCONF_M1 // Current down step speed; For each n stallGuard2 values decrease by one
#define TMC5072_SEDN_SHIFT               13 // min.: 0, max.: 3, default: 0
#define TMC5072_SEIMIN_MASK              0x8000 // COOLCONF_M1 // minimum current for smart current control
#define TMC5072_SEIMIN_SHIFT             15 // min.: 0, max.: 1, default: 0
#define TMC5072_SGT_MASK                 0x7F0000 // COOLCONF_M1 // stallGuard2 threshold value This signed value controls stallGuard2 level for stall output and sets the optimum measurement range for readout. A lower value gives a higher sensitivity. Zero is the starting value working with most motors. A higher value makes stallGuard2 less sensitive and requires more torque to indicate a stall.
#define TMC5072_SGT_SHIFT                16 // min.: -64, max.: 63, default: 0
#define TMC5072_SFILT_MASK               0x01000000 // COOLCONF_M1 // stallGuard2 filter enable
#define TMC5072_SFILT_SHIFT              24 // min.: 0, max.: 1, default: 0
#define TMC5072_DC_TIME_MASK             0xFF // DCCTRL_M1 // Upper PWM on time limit for commutation (DC_TIME * 1/f CLK ). Set slightly above effective blank time TBL.
#define TMC5072_DC_TIME_SHIFT            0 // min.: 0, max.: 255, default: 0
#define TMC5072_DC_SG_MASK               0xFF00 // DCCTRL_M1 // Max. PWM on time for step loss detection using dcStep stallGuard2 in dcStep mode. (DC_SG * 16/f CLK); Set slightly higher than DC_TIME/16; 0=disable
#define TMC5072_DC_SG_SHIFT              8 // min.: 0, max.: 255, default: 0
#define TMC5072_SG_RESULT_MASK           0x03FF // DRV_STATUS_M1 // Mechanical load measurement: The stallGuard2 result gives a means to measure mechanical motor load. A higher value means lower mechanical load. A value of 0 signals highest load. With optimum SGT setting, this is an indicator for a motor stall. The stall detection compares SG_RESULT to 0 in order to detect a stall. SG_RESULT is used as a base for coolStep operation, by comparing it to a programmable upper and a lower limit. It is not applicable in stealthChop mode. SG_RESULT is ALSO applicable when dcStep is active. stallGuard2 works best with microstep operation. Temperature measurement: In standstill, no stallGuard2 result can be obtained. SG_RESULT shows the chopper on-time for motor coil A instead. If the motor is moved to a determined microstep position at a certain current setting, a comparison of the chopper on-time can help to get a rough estimation of motor temperature. As the motor heats up, its coil resistance rises and the chopper on-time increases.
#define TMC5072_SG_RESULT_SHIFT          0 // min.: 0, max.: 511, default: 0
#define TMC5072_FSACTIVE_MASK            0x8000 // DRV_STATUS_M1 //
#define TMC5072_FSACTIVE_SHIFT           15 // min.: 0, max.: 1, default: 0
#define TMC5072_CS_ACTUAL_MASK           0x1F0000 // DRV_STATUS_M1 //
#define TMC5072_CS_ACTUAL_SHIFT          16 // min.: 0, max.: 31, default: 0
#define TMC5072_STALLGUARD_MASK          0x01000000 // DRV_STATUS_M1 //
#define TMC5072_STALLGUARD_SHIFT         24 // min.: 0, max.: 1, default: 0
#define TMC5072_OT_MASK                  0x02000000 // DRV_STATUS_M1 //
#define TMC5072_OT_SHIFT                 25 // min.: 0, max.: 1, default: 0
#define TMC5072_OTPW_MASK                0x04000000 // DRV_STATUS_M1 //
#define TMC5072_OTPW_SHIFT               26 // min.: 0, max.: 1, default: 0
#define TMC5072_S2GA_MASK                0x08000000 // DRV_STATUS_M1 //
#define TMC5072_S2GA_SHIFT               27 // min.: 0, max.: 1, default: 0
#define TMC5072_S2GB_MASK                0x10000000 // DRV_STATUS_M1 //
#define TMC5072_S2GB_SHIFT               28 // min.: 0, max.: 1, default: 0
#define TMC5072_OLA_MASK                 0x20000000 // DRV_STATUS_M1 //
#define TMC5072_OLA_SHIFT                29 // min.: 0, max.: 1, default: 0
#define TMC5072_OLB_MASK                 0x40000000 // DRV_STATUS_M1 //
#define TMC5072_OLB_SHIFT                30 // min.: 0, max.: 1, default: 0
#define TMC5072_STST_MASK                0x80000000 // DRV_STATUS_M1 //
#define TMC5072_STST_SHIFT               31 // min.: 0, max.: 1, default: 0
#define TMC5072_MSCNT_MASK               0x03FF // MSCNT_M2 // Microstep counter. Indicates actual position in the microstep table for CUR_A. CUR_B uses an offset of 256 (2 phase motor). Hint: Move to a position where MSCNT is zero before re-initializing MSLUTSTART or MSLUT and MSLUTSEL.
#define TMC5072_MSCNT_SHIFT              0 // min.: 0, max.: 1023, default: 0
#define TMC5072_CUR_A_MASK               0x01FF // MSCURACT_M2 // Actual microstep current for motor phase A as read from MSLUT (not scaled by current)
#define TMC5072_CUR_A_SHIFT              0 // min.: -256, max.: 255, default: 0
#define TMC5072_CUR_B_MASK               0x01FF0000 // MSCURACT_M2 // Actual microstep current for motor phase B as read from MSLUT (not scaled by current)
#define TMC5072_CUR_B_SHIFT              16 // min.: -256, max.: 255, default: 0
#define TMC5072_TOFF_MASK                0x0F // CHOPCONF_M2 // off time and driver enable
#define TMC5072_TOFF_SHIFT               0 // min.: 0, max.: 15, default: 0
#define TMC5072_TFD_ALL_MASK             0x70 // CHOPCONF_M2 // fast decay time setting
#define TMC5072_TFD_ALL_SHIFT            4 // min.: 0, max.: 7, default: 0
#define TMC5072_OFFSET_MASK              0x0780 // CHOPCONF_M2 // sine wave offset
#define TMC5072_OFFSET_SHIFT             7 // min.: 0, max.: 15, default: 0
#define TMC5072_TFD_3_MASK               0x0800 // CHOPCONF_M2 // MSB of fast decay time setting
#define TMC5072_TFD_3_SHIFT              11 // min.: 0, max.: 1, default: 0
#define TMC5072_DISFDCC_MASK             0x1000 // CHOPCONF_M2 // fast decay mode
#define TMC5072_DISFDCC_SHIFT            12 // min.: 0, max.: 1, default: 0
#define TMC5072_RNDTF_MASK               0x2000 // CHOPCONF_M2 // random TOFF time
#define TMC5072_RNDTF_SHIFT              13 // min.: 0, max.: 1, default: 0
#define TMC5072_CHM_MASK                 0x4000 // CHOPCONF_M2 // chopper mode
#define TMC5072_CHM_SHIFT                14 // min.: 0, max.: 1, default: 0
#define TMC5072_TBL_MASK                 0x018000 // CHOPCONF_M2 // blank time select
#define TMC5072_TBL_SHIFT                15 // min.: 0, max.: 3, default: 0
#define TMC5072_VSENSE_MASK              0x020000 // CHOPCONF_M2 // sense resistor voltage based current scaling
#define TMC5072_VSENSE_SHIFT             17 // min.: 0, max.: 1, default: 0
#define TMC5072_VHIGHFS_MASK             0x040000 // CHOPCONF_M2 // high velocity fullstep selection
#define TMC5072_VHIGHFS_SHIFT            18 // min.: 0, max.: 1, default: 0
#define TMC5072_VHIGHCHM_MASK            0x080000 // CHOPCONF_M2 // high velocity chopper mode
#define TMC5072_VHIGHCHM_SHIFT           19 // min.: 0, max.: 1, default: 0
#define TMC5072_MRES_MASK                0x0F000000 // CHOPCONF_M2 // Micro step resolution; The resolution gives the number of microstep entries per sine quarter wave. The driver automatically uses microstep positions which result in a symmetrical wave, when choosing a lower microstep resolution.
#define TMC5072_MRES_SHIFT               24 // min.: 0, max.: 8, default: 0
#define TMC5072_INTPOL_MASK              0x10000000 // CHOPCONF_M2 // interpolation to 256 microsteps
#define TMC5072_INTPOL_SHIFT             28 // min.: 0, max.: 1, default: 0
#define TMC5072_DEDGE_MASK               0x20000000 // CHOPCONF_M2 // enable double edge step pulses
#define TMC5072_DEDGE_SHIFT              29 // min.: 0, max.: 1, default: 0
#define TMC5072_DISS2G_MASK              0x40000000 // CHOPCONF_M2 // short to GND protection disable
#define TMC5072_DISS2G_SHIFT             30 // min.: 0, max.: 1, default: 0
#define TMC5072_TOFF_MASK                0x0F // CHOPCONF_M2 // off time and driver enable
#define TMC5072_TOFF_SHIFT               0 // min.: 0, max.: 15, default: 0
#define TMC5072_TFD_ALL_MASK             0x70 // CHOPCONF_M2 // fast decay time setting
#define TMC5072_TFD_ALL_SHIFT            4 // min.: 0, max.: 7, default: 0
#define TMC5072_OFFSET_MASK              0x0780 // CHOPCONF_M2 // sine wave offset
#define TMC5072_OFFSET_SHIFT             7 // min.: 0, max.: 15, default: 0
#define TMC5072_TFD_3_MASK               0x0800 // CHOPCONF_M2 // MSB of fast decay time setting
#define TMC5072_TFD_3_SHIFT              11 // min.: 0, max.: 1, default: 0
#define TMC5072_DISFDCC_MASK             0x1000 // CHOPCONF_M2 // fast decay mode
#define TMC5072_DISFDCC_SHIFT            12 // min.: 0, max.: 1, default: 0
#define TMC5072_RNDTF_MASK               0x2000 // CHOPCONF_M2 // random TOFF time
#define TMC5072_RNDTF_SHIFT              13 // min.: 0, max.: 1, default: 0
#define TMC5072_CHM_MASK                 0x4000 // CHOPCONF_M2 // chopper mode
#define TMC5072_CHM_SHIFT                14 // min.: 0, max.: 1, default: 0
#define TMC5072_TBL_MASK                 0x018000 // CHOPCONF_M2 // blank time select
#define TMC5072_TBL_SHIFT                15 // min.: 0, max.: 3, default: 0
#define TMC5072_VSENSE_MASK              0x020000 // CHOPCONF_M2 // sense resistor voltage based current scaling
#define TMC5072_VSENSE_SHIFT             17 // min.: 0, max.: 1, default: 0
#define TMC5072_VHIGHFS_MASK             0x040000 // CHOPCONF_M2 // high velocity fullstep selection
#define TMC5072_VHIGHFS_SHIFT            18 // min.: 0, max.: 1, default: 0
#define TMC5072_VHIGHCHM_MASK            0x080000 // CHOPCONF_M2 // high velocity chopper mode
#define TMC5072_VHIGHCHM_SHIFT           19 // min.: 0, max.: 1, default: 0
#define TMC5072_MRES_MASK                0x0F000000 // CHOPCONF_M2 // Micro step resolution; The resolution gives the number of microstep entries per sine quarter wave. The driver automatically uses microstep positions which result in a symmetrical wave, when choosing a lower microstep resolution.
#define TMC5072_MRES_SHIFT               24 // min.: 0, max.: 8, default: 0
#define TMC5072_INTPOL_MASK              0x10000000 // CHOPCONF_M2 // interpolation to 256 microsteps
#define TMC5072_INTPOL_SHIFT             28 // min.: 0, max.: 1, default: 0
#define TMC5072_DEDGE_MASK               0x20000000 // CHOPCONF_M2 // enable double edge step pulses
#define TMC5072_DEDGE_SHIFT              29 // min.: 0, max.: 1, default: 0
#define TMC5072_DISS2G_MASK              0x40000000 // CHOPCONF_M2 // short to GND protection disable
#define TMC5072_DISS2G_SHIFT             30 // min.: 0, max.: 1, default: 0
#define TMC5072_TOFF_MASK                0x0F // CHOPCONF_M2 // off time and driver enable
#define TMC5072_TOFF_SHIFT               0 // min.: 0, max.: 15, default: 0
#define TMC5072_HSTRT_MASK               0x70 // CHOPCONF_M2 // hysteresis start value added to HEND; Attention: Effective HEND+HSTRT less than or equal to 16. Hint: Hysteresis decrement is done each 16 clocks
#define TMC5072_HSTRT_SHIFT              4 // min.: 0, max.: 7, default: 0
#define TMC5072_HEND_MASK                0x0780 // CHOPCONF_M2 // hysteresis low value
#define TMC5072_HEND_SHIFT               7 // min.: 0, max.: 15, default: 0
#define TMC5072_RNDTF_MASK               0x2000 // CHOPCONF_M2 // random TOFF time
#define TMC5072_RNDTF_SHIFT              13 // min.: 0, max.: 1, default: 0
#define TMC5072_CHM_MASK                 0x4000 // CHOPCONF_M2 // chopper mode
#define TMC5072_CHM_SHIFT                14 // min.: 0, max.: 1, default: 0
#define TMC5072_TBL_MASK                 0x018000 // CHOPCONF_M2 // blank time select
#define TMC5072_TBL_SHIFT                15 // min.: 0, max.: 3, default: 0
#define TMC5072_VSENSE_MASK              0x020000 // CHOPCONF_M2 // sense resistor voltage based current scaling
#define TMC5072_VSENSE_SHIFT             17 // min.: 0, max.: 1, default: 0
#define TMC5072_VHIGHFS_MASK             0x040000 // CHOPCONF_M2 // high velocity fullstep selection
#define TMC5072_VHIGHFS_SHIFT            18 // min.: 0, max.: 1, default: 0
#define TMC5072_VHIGHCHM_MASK            0x080000 // CHOPCONF_M2 // high velocity chopper mode
#define TMC5072_VHIGHCHM_SHIFT           19 // min.: 0, max.: 1, default: 0
#define TMC5072_MRES_MASK                0x0F000000 // CHOPCONF_M2 // Micro step resolution; The resolution gives the number of microstep entries per sine quarter wave. The driver automatically uses microstep positions which result in a symmetrical wave, when choosing a lower microstep resolution.
#define TMC5072_MRES_SHIFT               24 // min.: 0, max.: 8, default: 0
#define TMC5072_INTPOL_MASK              0x10000000 // CHOPCONF_M2 // interpolation to 256 microsteps
#define TMC5072_INTPOL_SHIFT             28 // min.: 0, max.: 1, default: 0
#define TMC5072_DEDGE_MASK               0x20000000 // CHOPCONF_M2 // enable double edge step pulses
#define TMC5072_DEDGE_SHIFT              29 // min.: 0, max.: 1, default: 0
#define TMC5072_DISS2G_MASK              0x40000000 // CHOPCONF_M2 // short to GND protection disable
#define TMC5072_DISS2G_SHIFT             30 // min.: 0, max.: 1, default: 0
#define TMC5072_SEMIN_MASK               0x0F // COOLCONF_M2 // minimum stallGuard2 value - If the stallGuard2 result falls below SEMIN*32, the motor current becomes increased to reduce motor load angle. 0: smart current control coolStep off
#define TMC5072_SEMIN_SHIFT              0 // min.: 0, max.: 15, default: 0
#define TMC5072_SEUP_MASK                0x60 // COOLCONF_M2 // Current increment steps per measured stallGuard2 value
#define TMC5072_SEUP_SHIFT               5 // min.: 0, max.: 3, default: 0
#define TMC5072_SEMAX_MASK               0x0F00 // COOLCONF_M2 // stallGuard2 hysteresis value - If the stallGuard2 result is equal to or above (SEMIN+SEMAX+1)*32, the motor current becomes decreased to save energy.
#define TMC5072_SEMAX_SHIFT              8 // min.: 0, max.: 15, default: 0
#define TMC5072_SEDN_MASK                0x6000 // COOLCONF_M2 // Current down step speed; For each n stallGuard2 values decrease by one
#define TMC5072_SEDN_SHIFT               13 // min.: 0, max.: 3, default: 0
#define TMC5072_SEIMIN_MASK              0x8000 // COOLCONF_M2 // minimum current for smart current control
#define TMC5072_SEIMIN_SHIFT             15 // min.: 0, max.: 1, default: 0
#define TMC5072_SGT_MASK                 0x7F0000 // COOLCONF_M2 // stallGuard2 threshold value This signed value controls stallGuard2 level for stall output and sets the optimum measurement range for readout. A lower value gives a higher sensitivity. Zero is the starting value working with most motors. A higher value makes stallGuard2 less sensitive and requires more torque to indicate a stall.
#define TMC5072_SGT_SHIFT                16 // min.: -64, max.: 63, default: 0
#define TMC5072_SFILT_MASK               0x01000000 // COOLCONF_M2 // stallGuard2 filter enable
#define TMC5072_SFILT_SHIFT              24 // min.: 0, max.: 1, default: 0
#define TMC5072_DC_TIME_MASK             0xFF // DCCTRL_M2 // Upper PWM on time limit for commutation (DC_TIME * 1/f CLK ). Set slightly above effective blank time TBL.
#define TMC5072_DC_TIME_SHIFT            0 // min.: 0, max.: 255, default: 0
#define TMC5072_DC_SG_MASK               0xFF00 // DCCTRL_M2 // Max. PWM on time for step loss detection using dcStep stallGuard2 in dcStep mode. (DC_SG * 16/f CLK); Set slightly higher than DC_TIME/16; 0=disable
#define TMC5072_DC_SG_SHIFT              8 // min.: 0, max.: 255, default: 0
#define TMC5072_SG_RESULT_MASK           0x03FF // DRV_STATUS_M2 // Mechanical load measurement: The stallGuard2 result gives a means to measure mechanical motor load. A higher value means lower mechanical load. A value of 0 signals highest load. With optimum SGT setting, this is an indicator for a motor stall. The stall detection compares SG_RESULT to 0 in order to detect a stall. SG_RESULT is used as a base for coolStep operation, by comparing it to a programmable upper and a lower limit. It is not applicable in stealthChop mode. SG_RESULT is ALSO applicable when dcStep is active. stallGuard2 works best with microstep operation. Temperature measurement: In standstill, no stallGuard2 result can be obtained. SG_RESULT shows the chopper on-time for motor coil A instead. If the motor is moved to a determined microstep position at a certain current setting, a comparison of the chopper on-time can help to get a rough estimation of motor temperature. As the motor heats up, its coil resistance rises and the chopper on-time increases.
#define TMC5072_SG_RESULT_SHIFT          0 // min.: 0, max.: 511, default: 0
#define TMC5072_FSACTIVE_MASK            0x8000 // DRV_STATUS_M2 //
#define TMC5072_FSACTIVE_SHIFT           15 // min.: 0, max.: 1, default: 0
#define TMC5072_CS_ACTUAL_MASK           0x1F0000 // DRV_STATUS_M2 //
#define TMC5072_CS_ACTUAL_SHIFT          16 // min.: 0, max.: 31, default: 0
#define TMC5072_STALLGUARD_MASK          0x01000000 // DRV_STATUS_M2 //
#define TMC5072_STALLGUARD_SHIFT         24 // min.: 0, max.: 1, default: 0
#define TMC5072_OT_MASK                  0x02000000 // DRV_STATUS_M2 //
#define TMC5072_OT_SHIFT                 25 // min.: 0, max.: 1, default: 0
#define TMC5072_OTPW_MASK                0x04000000 // DRV_STATUS_M2 //
#define TMC5072_OTPW_SHIFT               26 // min.: 0, max.: 1, default: 0
#define TMC5072_S2GA_MASK                0x08000000 // DRV_STATUS_M2 //
#define TMC5072_S2GA_SHIFT               27 // min.: 0, max.: 1, default: 0
#define TMC5072_S2GB_MASK                0x10000000 // DRV_STATUS_M2 //
#define TMC5072_S2GB_SHIFT               28 // min.: 0, max.: 1, default: 0
#define TMC5072_OLA_MASK                 0x20000000 // DRV_STATUS_M2 //
#define TMC5072_OLA_SHIFT                29 // min.: 0, max.: 1, default: 0
#define TMC5072_OLB_MASK                 0x40000000 // DRV_STATUS_M2 //
#define TMC5072_OLB_SHIFT                30 // min.: 0, max.: 1, default: 0
#define TMC5072_STST_MASK                0x80000000 // DRV_STATUS_M2 //
#define TMC5072_STST_SHIFT               31 // min.: 0, max.: 1, default: 0

#endif /* TMC5072_FIELDS_H */

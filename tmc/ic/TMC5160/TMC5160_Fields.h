/*******************************************************************************
* Copyright © 2019 TRINAMIC Motion Control GmbH & Co. KG
* (now owned by Analog Devices Inc.),
*
* Copyright © 2023 Analog Devices Inc. All Rights Reserved.
* This software is proprietary to Analog Devices, Inc. and its licensors.
*******************************************************************************/


#ifndef TMC5160_FIELDS_H
#define TMC5160_FIELDS_H

// Status fields returned with every SPI transaction
#define TMC5160_SPI_STATUS_RESET_FLAG_MASK          0x01 /* GSTAT[0] - 1: Signals, that a reset has occurred (clear by reading GSTAT) */
#define TMC5160_SPI_STATUS_RESET_FLAG_SHIFT         0
#define TMC5160_SPI_STATUS_DRIVER_ERROR_MASK        0x02 /* GSTAT[1] – 1: Signals driver 1 driver error (clear by reading GSTAT) */
#define TMC5160_SPI_STATUS_DRIVER_ERROR_SHIFT       1
#define TMC5160_SPI_STATUS_SG2_MASK                 0x04 /* DRV_STATUS[24] – 1: Signals StallGuard flag active */
#define TMC5160_SPI_STATUS_SG2_SHIFT                2
#define TMC5160_SPI_STATUS_STANDSTILL_MASK          0x08 /* DRV_STATUS[31] – 1: Signals motor stand still */
#define TMC5160_SPI_STATUS_STANDSTILL_SHIFT         3
#define TMC5160_SPI_STATUS_VELOCITY_REACHED_MASK    0x10 /* RAMP_STAT[8] – 1: Signals target velocity reached (motion controller only) */
#define TMC5160_SPI_STATUS_VELOCITY_REACHED_SHIFT   4
#define TMC5160_SPI_STATUS_POSITION_REACHED_MASK    0x20 /* RAMP_STAT[9] – 1: Signals target position reached (motion controller only) */
#define TMC5160_SPI_STATUS_POSITION_REACHED_SHIFT   5
#define TMC5160_SPI_STATUS_STATUS_STOP_L_MASK       0x40 /* RAMP_STAT[0] – 1: Signals stop left switch status (motion controller only) */
#define TMC5160_SPI_STATUS_STATUS_STOP_L_SHIFT      6
#define TMC5160_SPI_STATUS_STATUS_STOP_R_MASK       0x80 /* RAMP_STAT[1] – 1: Signals stop right switch status (motion controller only) */
#define TMC5160_SPI_STATUS_STATUS_STOP_R_SHIFT      7

// Configuration & status registers
#define TMC5160_RECALIBRATE_MASK                      0x01 // GCONF //
#define TMC5160_RECALIBRATE_SHIFT                     0 // min.: 0, max.: 1, default: 0
#define TMC5160_FASTSTANDSTILL_MASK                   0x02 // GCONF // Timeout for step execution until standstill detection
#define TMC5160_FASTSTANDSTILL_SHIFT                  1 // min.: 0, max.: 1, default: 0
#define TMC5160_EN_PWM_MODE_MASK                      0x04 // GCONF //
#define TMC5160_EN_PWM_MODE_SHIFT                     2 // min.: 0, max.: 1, default: 0
#define TMC5160_MULTISTEP_FILT_MASK                   0x08 // GCONF //
#define TMC5160_MULTISTEP_FILT_SHIFT                  3 // min.: 0, max.: 1, default: 0
#define TMC5160_SHAFT_MASK                            0x10 // GCONF //
#define TMC5160_SHAFT_SHIFT                           4 // min.: 0, max.: 1, default: 0
#define TMC5160_DIAG0_ERROR_ONLY_WITH_SD_MODE1_MASK   0x20 // GCONF //
#define TMC5160_DIAG0_ERROR_ONLY_WITH_SD_MODE1_SHIFT  5 // min.: 0, max.: 1, default: 0
#define TMC5160_DIAG0_OTPW_ONLY_WITH_SD_MODE1_MASK    0x40 // GCONF //
#define TMC5160_DIAG0_OTPW_ONLY_WITH_SD_MODE1_SHIFT   6 // min.: 0, max.: 1, default: 0
#define TMC5160_DIAG0_STALL_MASK                      0x80 // GCONF //
#define TMC5160_DIAG0_STALL_SHIFT                     7 // min.: 0, max.: 1, default: 0
#define TMC5160_DIAG1_STALL_MASK                      0x0100 // GCONF //
#define TMC5160_DIAG1_STALL_SHIFT                     8 // min.: 0, max.: 1, default: 0
#define TMC5160_DIAG1_INDEX_MASK                      0x0200 // GCONF //
#define TMC5160_DIAG1_INDEX_SHIFT                     9 // min.: 0, max.: 1, default: 0
#define TMC5160_DIAG1_ONSTATE_MASK                    0x0400 // GCONF //
#define TMC5160_DIAG1_ONSTATE_SHIFT                   10 // min.: 0, max.: 1, default: 0
#define TMC5160_DIAG1_STEPS_SKIPPED_MASK              0x0800 // GCONF //
#define TMC5160_DIAG1_STEPS_SKIPPED_SHIFT             11 // min.: 0, max.: 1, default: 0
#define TMC5160_DIAG0_INT_PUSHPULL_MASK               0x1000 // GCONF //
#define TMC5160_DIAG0_INT_PUSHPULL_SHIFT              12 // min.: 0, max.: 1, default: 0
#define TMC5160_DIAG1_POSCOMP_PUSHPULL_MASK           0x2000 // GCONF //
#define TMC5160_DIAG1_POSCOMP_PUSHPULL_SHIFT          13 // min.: 0, max.: 1, default: 0
#define TMC5160_SMALL_HYSTERESIS_MASK                 0x4000 // GCONF //
#define TMC5160_SMALL_HYSTERESIS_SHIFT                14 // min.: 0, max.: 1, default: 0
#define TMC5160_STOP_ENABLE_MASK                      0x8000 // GCONF //
#define TMC5160_STOP_ENABLE_SHIFT                     15 // min.: 0, max.: 1, default: 0
#define TMC5160_DIRECT_MODE_MASK                      0x010000 // GCONF //
#define TMC5160_DIRECT_MODE_SHIFT                     16 // min.: 0, max.: 1, default: 0
#define TMC5160_TEST_MODE_MASK                        0x020000 // GCONF //
#define TMC5160_TEST_MODE_SHIFT                       17 // min.: 0, max.: 1, default: 0
#define TMC5160_RECALIBRATE_MASK                      0x01 // GCONF //
#define TMC5160_RECALIBRATE_SHIFT                     0 // min.: 0, max.: 1, default: 0
#define TMC5160_FASTSTANDSTILL_MASK                   0x02 // GCONF // Timeout for step execution until standstill detection
#define TMC5160_FASTSTANDSTILL_SHIFT                  1 // min.: 0, max.: 1, default: 0
#define TMC5160_EN_PWM_MODE_MASK                      0x04 // GCONF //
#define TMC5160_EN_PWM_MODE_SHIFT                     2 // min.: 0, max.: 1, default: 0
#define TMC5160_MULTISTEP_FILT_MASK                   0x08 // GCONF //
#define TMC5160_MULTISTEP_FILT_SHIFT                  3 // min.: 0, max.: 1, default: 0
#define TMC5160_SHAFT_MASK                            0x10 // GCONF //
#define TMC5160_SHAFT_SHIFT                           4 // min.: 0, max.: 1, default: 0
#define TMC5160_DIAG0_STEP_MASK                       0x80 // GCONF //
#define TMC5160_DIAG0_STEP_SHIFT                      7 // min.: 0, max.: 1, default: 0
#define TMC5160_DIAG1_DIR_MASK                        0x0100 // GCONF //
#define TMC5160_DIAG1_DIR_SHIFT                       8 // min.: 0, max.: 1, default: 0
#define TMC5160_DIAG0_INT_PUSHPULL_MASK               0x1000 // GCONF //
#define TMC5160_DIAG0_INT_PUSHPULL_SHIFT              12 // min.: 0, max.: 1, default: 0
#define TMC5160_DIAG1_POSCOMP_PUSHPULL_MASK           0x2000 // GCONF //
#define TMC5160_DIAG1_POSCOMP_PUSHPULL_SHIFT          13 // min.: 0, max.: 1, default: 0
#define TMC5160_SMALL_HYSTERESIS_MASK                 0x4000 // GCONF //
#define TMC5160_SMALL_HYSTERESIS_SHIFT                14 // min.: 0, max.: 1, default: 0
#define TMC5160_STOP_ENABLE_MASK                      0x8000 // GCONF //
#define TMC5160_STOP_ENABLE_SHIFT                     15 // min.: 0, max.: 1, default: 0
#define TMC5160_DIRECT_MODE_MASK                      0x010000 // GCONF //
#define TMC5160_DIRECT_MODE_SHIFT                     16 // min.: 0, max.: 1, default: 0
#define TMC5160_TEST_MODE_MASK                        0x020000 // GCONF //
#define TMC5160_TEST_MODE_SHIFT                       17 // min.: 0, max.: 1, default: 0
#define TMC5160_RESET_MASK                            0x01 // GSTAT // reset
#define TMC5160_RESET_SHIFT                           0 // min.: 0, max.: 1, default: 0
#define TMC5160_DRV_ERR_MASK                          0x02 // GSTAT // drv_err
#define TMC5160_DRV_ERR_SHIFT                         1 // min.: 0, max.: 1, default: 0
#define TMC5160_UV_CP_MASK                            0x04 // GSTAT // uv_cp
#define TMC5160_UV_CP_SHIFT                           2 // min.: 0, max.: 1, default: 0
#define TMC5160_IFCNT_MASK                            0xFF // IFCNT // Interface transmission counter. This register becomes incremented with each successful UART interface write access. Read out to check the serial transmission for lost data. Read accesses do not change the content. The counter wraps around from 255 to 0.
#define TMC5160_IFCNT_SHIFT                           0 // min.: 0, max.: 255, default: 0
#define TMC5160_SLAVEADDR_MASK                        0xFF // SLAVECONF // These eight bits set the address of unit for the UART interface. The address becomes incremented by one when the external address pin NEXTADDR is active. Range: 0-253 (254 cannot be incremented)
#define TMC5160_SLAVEADDR_SHIFT                       0 // min.: 0, max.: 255, default: 0
#define TMC5160_SENDDELAY_MASK                        0x0F00 // SLAVECONF // SENDDELAY for read access (time until reply is sent): 0, 1:  8 bit times 2, 3:  3*8 bit times 4, 5:  5*8 bit times 6, 7:  7*8 bit times 8, 9:  9*8 bit times 10, 11: 11*8 bit times 12, 13: 13*8 bit times 14, 15: 15*8 bit times
#define TMC5160_SENDDELAY_SHIFT                       8 // min.: 0, max.: 15, default: 0
#define TMC5160_REFL_STEP_MASK                        0x01 // IOIN / OUTPUT // REFL_STEP
#define TMC5160_REFL_STEP_SHIFT                       0 // min.: 0, max.: 1, default: 0
#define TMC5160_REFR_DIR_MASK                         0x02 // IOIN / OUTPUT // REFR_DIR
#define TMC5160_REFR_DIR_SHIFT                        1 // min.: 0, max.: 1, default: 0
#define TMC5160_ENCB_DCEN_CFG4_MASK                   0x04 // IOIN / OUTPUT // ENCB_DCEN_CFG4
#define TMC5160_ENCB_DCEN_CFG4_SHIFT                  2 // min.: 0, max.: 1, default: 0
#define TMC5160_ENCA_DCIN_CFG5_MASK                   0x08 // IOIN / OUTPUT // ENCA_DCIN_CFG5
#define TMC5160_ENCA_DCIN_CFG5_SHIFT                  3 // min.: 0, max.: 1, default: 0
#define TMC5160_DRV_ENN_CFG6_MASK                     0x10 // IOIN / OUTPUT // DRV_ENN_CFG6
#define TMC5160_DRV_ENN_CFG6_SHIFT                    4 // min.: 0, max.: 1, default: 0
#define TMC5160_ENC_N_DCO_MASK                        0x20 // IOIN / OUTPUT // ENC_N_DCO
#define TMC5160_ENC_N_DCO_SHIFT                       5 // min.: 0, max.: 1, default: 0
#define TMC5160_SD_MODE_MASK                          0x40 // IOIN / OUTPUT // SD_MODE
#define TMC5160_SD_MODE_SHIFT                         6 // min.: 0, max.: 1, default: 0
#define TMC5160_SWCOMP_IN_MASK                        0x80 // IOIN / OUTPUT // Shows voltage difference of SWN and SWP. Bring DIAG outputs to high level with pushpull disabled to test the comparator.
#define TMC5160_SWCOMP_IN_SHIFT                       7 // min.: 0, max.: 1, default: 0
#define TMC5160_VERSION_MASK                          0xFF000000 // IOIN / OUTPUT // VERSION: 0x11=first version of the IC; Identical numbers mean full digital compatibility.
#define TMC5160_VERSION_SHIFT                         24 // min.: 0, max.: 255, default: 0
#define TMC5160_OUTPUT_PIN_POLARITY_MASK              0x01 // IOIN / OUTPUT // Output polarity of SDO_CFG0 pin in UART mode. Its main purpose it to use SDO_CFG0 as NAO next address output signal for chain addressing of multiple ICs. Attention: Reset Value is 1 for use as NAO to next IC in single wire chain
#define TMC5160_OUTPUT_PIN_POLARITY_SHIFT             0 // min.: 0, max.: 1, default: 0
#define TMC5160_X_COMPARE_MASK                        0xFFFFFFFF // X_COMPARE // Position comparison register for motion controller position strobe. The Position pulse is available on output SWP_DIAG1.
#define TMC5160_X_COMPARE_SHIFT                       0 // min.: 0, max.: 4294967295, default: 0
#define TMC5160_OTPBIT_MASK                           0x07 // OTP_PROG // Selection of OTP bit to be programmed to the selected byte location (n=0..7: programs bit n to a logic 1)
#define TMC5160_OTPBIT_SHIFT                          0 // min.: 0, max.: 7, default: 0
#define TMC5160_OTPBYTE_MASK                          0x30 // OTP_PROG // Set to 00
#define TMC5160_OTPBYTE_SHIFT                         4 // min.: 0, max.: 0, default: 0
#define TMC5160_OTPMAGIC_MASK                         0xFF00 // OTP_PROG // Set  to  0xBD  to  enable  programming.  A  programming time of  minimum 10ms per bit is  recommended (check by reading OTP_READ).
#define TMC5160_OTPMAGIC_SHIFT                        8 // min.: 0, max.: 255, default: 0
#define TMC5160_OTP_TBL_MASK                          0x80 // OTP_READ // Reset default for TBL
#define TMC5160_OTP_TBL_SHIFT                         7 // min.: 0, max.: 1, default: 0
#define TMC5160_OTP_BBM_MASK                          0x40 // OTP_READ // Reset default for BBM
#define TMC5160_OTP_BBM_SHIFT                         6 // min.: 0, max.: 1, default: 0
#define TMC5160_OTP_S2_LEVEL_MASK                     0x20 // OTP_READ // Reset default for Short detection Levels
#define TMC5160_OTP_S2_LEVEL_SHIFT                    5 // min.: 0, max.: 1, default: 0
#define TMC5160_OTP_FCLKTRIM_MASK                     0x1F // OTP_READ // Reset default for FCLKTRIM 0: lowest frequency setting 31: highest frequency setting Attention: This value is pre-programmed by factory clock trimming to the default clock frequency of 12MHz and differs between individual ICs! It should not be altered.
#define TMC5160_OTP_FCLKTRIM_SHIFT                    0 // min.: 0, max.: 31, default: 0
#define TMC5160_FCLKTRIM_MASK                         0x1F // FACTORY_CONF // FCLKTRIM (Reset default: OTP)           0-31:  Lowest  to  highest  clock  frequency.  Check  at charge  pump  output.  The  frequency  span  is  not guaranteed,  but  it  is  tested,  that  tuning  to  12MHz internal  clock  is  possible.  The  devices  come  preset  to 12MHz clock frequency by OTP programming.
#define TMC5160_FCLKTRIM_SHIFT                        0 // min.: 0, max.: 31, default: 0
#define TMC5160_S2VS_LEVEL_MASK                       0x0F // SHORT_CONF // Short to VS detector level (15= lowest sensitivity) (Reset Default: OTP 6 or 12)
#define TMC5160_S2VS_LEVEL_SHIFT                      0 // min.: 0, max.: 15, default: 0
#define TMC5160_S2GND_LEVEL_MASK                      0x0F00 // SHORT_CONF // Short to GND detector level (15= lowest sensitivity) (Reset Default: OTP 6 or 12)
#define TMC5160_S2GND_LEVEL_SHIFT                     8 // min.: 0, max.: 15, default: 0
#define TMC5160_SHORTFILTER_MASK                      0x030000 // SHORT_CONF // Spike filtering bandwidth for short detection (0=lowest) (Reset Default = %01)
#define TMC5160_SHORTFILTER_SHIFT                     16 // min.: 0, max.: 3, default: 0
#define TMC5160_SHORTDELAY_MASK                       0x040000 // SHORT_CONF // Detector delay (0=750ns, 1=1500ns) (Reset Default = 0)
#define TMC5160_SHORTDELAY_SHIFT                      18 // min.: 0, max.: 1, default: 0
#define TMC5160_BBMTIME_MASK                          0x1F // DRV_CONF // Analog Break-Before make timer (0=shortest, 31=longest) (Reset Default = 0)
#define TMC5160_BBMTIME_SHIFT                         0 // min.: 0, max.: 31, default: 0
#define TMC5160_BBMCLKS_MASK                          0x0F00 // DRV_CONF // Digital BBM time in multiple of 1 clock. The longer setting rules (BBMTIME vs. BBMCLKS). (Reset Default: OTP 4 or 2)
#define TMC5160_BBMCLKS_SHIFT                         8 // min.: 0, max.: 15, default: 0
#define TMC5160_OTSELECT_MASK                         0x030000 // DRV_CONF // Selection of over temperature level 00: 150°C 01: 143°C 10: 136°C 11: 120°C (Reset Default = %00)
#define TMC5160_OTSELECT_SHIFT                        16 // min.: 0, max.: 3, default: 0
#define TMC5160_DRVSTRENGTH_MASK                      0x0C0000 // DRV_CONF // Selection of gate driver current 00: weak 01: weak+TC (medium at > 120°C) 10: medium 11: strong (Reset Default = %10)
#define TMC5160_DRVSTRENGTH_SHIFT                     18 // min.: 0, max.: 3, default: 0
#define TMC5160_FILT_ISENSE_MASK                      0x300000 // DRV_CONF // Filter time constant of sense amplifier to suppress ringing 00: low 1µs 01: medium 1.5µs 10: high 3µs 11: very high 3.5µs (Reset Default = %00)
#define TMC5160_FILT_ISENSE_SHIFT                     20 // min.: 0, max.: 3, default: 0
#define TMC5160_GLOBAL_SCALER_MASK                    0xFF // GLOBAL_SCALER // Global scaling of Motor current. This value is multiplied to the current scaling in order to adapt a drive to a certain motor type. This value should be chosen before tuning other settings, because it also influences chopper hysteresis. 0=Full Scale (or write 256) 32..255: 32/256 to 255/256 of max. current. Values >128 recommended for best results 1-31: Not allowed for operation
#define TMC5160_GLOBAL_SCALER_SHIFT                   0 // min.: 0, max.: 255, default: 0
#define TMC5160__MASK                                 0xFF00 // OFFSET_READ // Offset calibration result phase A (signed)
#define TMC5160__SHIFT                                0 // min.: -128, max.: 127, default: 0
//#define TMC5160__MASK                               0xFF // OFFSET_READ // Offset calibration result phase B (signed)
//#define TMC5160__SHIFT                              0 // min.: -128, max.: 127, default: 0
#define TMC5160_IHOLD_MASK                            0x1F // IHOLD_IRUN // Standstill current (0=1/32...31=32/32) In combination with stealthChop mode, setting IHOLD=0 allows to choose freewheeling or coil short circuit (passive braking) for motor stand still.
#define TMC5160_IHOLD_SHIFT                           0 // min.: 0, max.: 31, default: 0
#define TMC5160_IRUN_MASK                             0x1F00 // IHOLD_IRUN // Motor run current (0=1/32...31=32/32) Hint: Choose sense resistors in a way, that normal IRUN is 16 to 31 for best microstep performance.
#define TMC5160_IRUN_SHIFT                            8 // min.: 0, max.: 31, default: 0
#define TMC5160_IHOLDDELAY_MASK                       0x0F0000 // IHOLD_IRUN // Controls the number of clock cycles for motor power down after standstill is detected (stst=1) and TPOWERDOWN has expired. The smooth transition avoids a motor jerk upon power down. 0:  instant power down 1..15:  Delay per current reduction step in multiple of 2^18 clocks
#define TMC5160_IHOLDDELAY_SHIFT                      16 // min.: 0, max.: 15, default: 0
#define TMC5160_TPOWERDOWN_MASK                       0xFF // TPOWERDOWN // (Reset default=20) Sets the delay time from stand still (stst) detection to motor current power down. Time range is about 0 to 5.6 seconds. 0...((2^8)-1) * 2^18 tclk Attention: A minimum setting of 2 is required to allow automatic tuning of stealthChop PWM_OFFS_AUTO.
#define TMC5160_TPOWERDOWN_SHIFT                      0 // min.: 0, max.: 255, default: 0
#define TMC5160_TSTEP_MASK                            0x0FFFFF // TSTEP // Actual measured time between two 1/256 microsteps derived from the step input frequency in units of 1/fCLK. Measured value is (2^20)-1 in case of overflow or stand still. The TSTEP related threshold uses a hysteresis of 1/16 of the compare value to compensate for jitter in the clock or the step frequency: (Txxx*15/16)-1 is the lower compare value for each TSTEP based comparison. This means, that the lower switching velocity equals the calculated setting, but the upper switching velocity is higher as defined by the hysteresis setting.
#define TMC5160_TSTEP_SHIFT                           0 // min.: 0, max.: 1048575, default: 0
#define TMC5160_TPWMTHRS_MASK                         0x0FFFFF // TPWMTHRS // Sets the upper velocity for stealthChop voltage PWM mode.     For TSTEP = TPWMTHRS, stealthChop PWM mode is enabled, if configured. When the velocity exceeds the limit set by TPWMTHRS, the driver switches to spreadCycle. 0 = Disabled
#define TMC5160_TPWMTHRS_SHIFT                        0 // min.: 0, max.: 1048575, default: 0
#define TMC5160_TCOOLTHRS_MASK                        0x0FFFFF // TCOOLTHRS // This is the lower threshold velocity for switching on smart energy coolStep and stallGuard feature. (unsigned) Set this parameter to disable coolStep at low speeds, where it cannot work reliably. The stop on stall function (enable with sg_stop when using internal motion controller) and the stall output signal become enabled when exceeding this velocity. In non-dcStep mode, it becomes disabled again once the velocity falls below this threshold. TCOOLTHRS = TSTEP = THIGH: - coolStep is enabled, if configured - stealthChop voltage PWM mode is disabled TCOOLTHRS = TSTEP - Stop on stall and stall output signal is enabled, if configured
#define TMC5160_TCOOLTHRS_SHIFT                       0 // min.: 0, max.: 1048575, default: 0
#define TMC5160_THIGH_MASK                            0x0FFFFF // THIGH // This velocity setting allows velocity dependent switching into a different chopper mode and fullstepping to maximize torque. (unsigned) The stall detection feature becomes switched off for 2-3 electrical periods whenever passing THIGH threshold to compensate for the effect of switching modes. TSTEP = THIGH: - coolStep is disabled (motor runs with normal current scale) - stealthChop voltage PWM mode is disabled - If vhighchm is set, the chopper switches to chm=1 with TFD=0 (constant off time with slow decay, only). - chopSync2 is switched off (SYNC=0) - If vhighfs is set, the motor operates in fullstep mode and the stall detection becomes switched over to dcStep stall detection.
#define TMC5160_THIGH_SHIFT                           0 // min.: 0, max.: 1048575, default: 0
#define TMC5160_RAMPMODE_MASK                         0x03 // RAMPMODE // 0: Positioning mode (using all A, D and V parameters) 1: Velocity mode to positive VMAX (using AMAX acceleration) 2: Velocity mode to negative VMAX (using AMAX acceleration) 3: Hold mode (velocity remains unchanged, unless stop event occurs)
#define TMC5160_RAMPMODE_SHIFT                        0 // min.: 0, max.: 3, default: 0
#define TMC5160_XACTUAL_MASK                          0xFFFFFFFF // XACTUAL // Actual motor position (signed) Hint: This value normally should only be modified, when homing the drive. In positioning mode, modifying the register content will start a motion.
#define TMC5160_XACTUAL_SHIFT                         0 // min.: -2147483648, max.: 2147483647, default: 0
#define TMC5160_VACTUAL_MASK                          0xFFFFFF // VACTUAL // Actual motor velocity from ramp generator (signed) The sign matches the motion direction. A negative sign means motion to lower XACTUAL.
#define TMC5160_VACTUAL_SHIFT                         0 // min.: -8388607, max.: 8388607, default: 0
#define TMC5160_VSTART_MASK                           0x03FFFF // VSTART // Motor start velocity (unsigned) Set VSTOP = VSTART!
#define TMC5160_VSTART_SHIFT                          0 // min.: 0, max.: 262143, default: 0
#define TMC5160_A1_MASK                               0xFFFF // A1 // First acceleration between VSTART and V1 (unsigned)
#define TMC5160_A1_SHIFT                              0 // min.: 0, max.: 65535, default: 0
#define TMC5160_V1__MASK                              0x0FFFFF // V1 // First acceleration / deceleration phase threshold velocity (unsigned) 0: Disables A1 and D1 phase, use AMAX, DMAX only
#define TMC5160_V1__SHIFT                             0 // min.: 0, max.: 1048575, default: 0
#define TMC5160_AMAX_MASK                             0xFFFF // AMAX // Second acceleration between V1 and VMAX (unsigned) This is the acceleration and deceleration value for velocity mode.
#define TMC5160_AMAX_SHIFT                            0 // min.: 0, max.: 65535, default: 0
#define TMC5160_VMAX_MASK                             0x7FFFFF // VMAX // Motion ramp target velocity (for positioning ensure VMAX = VSTART) (unsigned) This is the target velocity in velocity mode. It can be changed any time during a motion.
#define TMC5160_VMAX_SHIFT                            0 // min.: 0, max.: 8388096, default: 0
#define TMC5160_DMAX_MASK                             0xFFFF // DMAX // Deceleration between VMAX and V1 (unsigned)
#define TMC5160_DMAX_SHIFT                            0 // min.: 0, max.: 65535, default: 0
#define TMC5160_D1_MASK                               0xFFFF // D1 // Deceleration between V1 and VSTOP (unsigned) Attention: Do not set 0 in positioning mode, even if V1=0!
#define TMC5160_D1_SHIFT                              0 // min.: 1, max.: 65535, default: 0
#define TMC5160_VSTOP_MASK                            0x03FFFF // VSTOP // Motor stop velocity (unsigned) Attention: Set VSTOP = VSTART! Attention: Do not set 0 in positioning mode, minimum 10 recommend!
#define TMC5160_VSTOP_SHIFT                           0 // min.: 1, max.: 262143, default: 0
#define TMC5160_TZEROWAIT_MASK                        0xFFFF // TZEROWAIT // Defines the waiting time after ramping down to zero velocity before next movement or direction inversion can start. Time range is about 0 to 2 seconds. This setting avoids excess acceleration e.g. from VSTOP to -VSTART.
#define TMC5160_TZEROWAIT_SHIFT                       0 // min.: 0, max.: 65535, default: 0
#define TMC5160_XTARGET_MASK                          0xFFFFFFFF // XTARGET // Target position for ramp mode (signed). Write a new target position to this register in order to activate the ramp generator positioning in RAMPMODE=0. Initialize all velocity, acceleration and deceleration parameters before. Hint: The position is allowed to wrap around, thus, XTARGET value optionally can be treated as an unsigned number. Hint: The maximum possible displacement is +/-((2^31)-1). Hint: When increasing V1, D1 or DMAX during a motion, rewrite XTARGET afterwards in order to trigger a second acceleration phase, if desired.
#define TMC5160_XTARGET_SHIFT                         0 // min.: -2147483648, max.: 2147483647, default: 0
#define TMC5160_VDCMIN_MASK                           0x7FFFFF // VDCMIN // Automatic commutation dcStep becomes enabled above velocity VDCMIN (unsigned) (only when using internal ramp generator, not for STEP/DIR interface - in STEP/DIR mode, dcStep becomes enabled by the external signal DCEN) In this mode, the actual position is determined by the sensorless motor commutation and becomes fed back to XACTUAL. In case the motor becomes heavily loaded, VDCMIN also is used as the minimum step velocity. Activate stop on stall (sg_stop) to detect step loss. 0: Disable, dcStep off |VACT| = VDCMIN = 256: - Triggers the same actions as exceeding THIGH setting. - Switches on automatic commutation dcStep Hint: Also set DCCTRL parameters in order to operate dcStep. (Only bits 22 - 8 are used for value and for comparison)
#define TMC5160_VDCMIN_SHIFT                          0 // min.: 0, max.: 8388607, default: 0
#define TMC5160_STOP_L_ENABLE_MASK                    0x01 // SW_MODE //
#define TMC5160_STOP_L_ENABLE_SHIFT                   0 // min.: 0, max.: 1, default: 0
#define TMC5160_STOP_R_ENABLE_MASK                    0x02 // SW_MODE //
#define TMC5160_STOP_R_ENABLE_SHIFT                   1 // min.: 0, max.: 1, default: 0
#define TMC5160_POL_STOP_L_MASK                       0x04 // SW_MODE // Sets the active polarity of the left reference switch input
#define TMC5160_POL_STOP_L_SHIFT                      2 // min.: 0, max.: 1, default: 0
#define TMC5160_POL_STOP_R_MASK                       0x08 // SW_MODE // Sets the active polarity of the right reference switch input
#define TMC5160_POL_STOP_R_SHIFT                      3 // min.: 0, max.: 1, default: 0
#define TMC5160_SWAP_LR_MASK                          0x10 // SW_MODE //
#define TMC5160_SWAP_LR_SHIFT                         4 // min.: 0, max.: 1, default: 0
#define TMC5160_LATCH_L_ACTIVE_MASK                   0x20 // SW_MODE //
#define TMC5160_LATCH_L_ACTIVE_SHIFT                  5 // min.: 0, max.: 1, default: 0
#define TMC5160_LATCH_L_INACTIVE_MASK                 0x40 // SW_MODE //
#define TMC5160_LATCH_L_INACTIVE_SHIFT                6 // min.: 0, max.: 1, default: 0
#define TMC5160_LATCH_R_ACTIVE_MASK                   0x80 // SW_MODE //
#define TMC5160_LATCH_R_ACTIVE_SHIFT                  7 // min.: 0, max.: 1, default: 0
#define TMC5160_LATCH_R_INACTIVE_MASK                 0x0100 // SW_MODE //
#define TMC5160_LATCH_R_INACTIVE_SHIFT                8 // min.: 0, max.: 1, default: 0
#define TMC5160_EN_LATCH_ENCODER_MASK                 0x0200 // SW_MODE //
#define TMC5160_EN_LATCH_ENCODER_SHIFT                9 // min.: 0, max.: 1, default: 0
#define TMC5160_SG_STOP_MASK                          0x0400 // SW_MODE //
#define TMC5160_SG_STOP_SHIFT                         10 // min.: 0, max.: 1, default: 0
#define TMC5160_EN_SOFTSTOP_MASK                      0x0800 // SW_MODE // The soft stop mode always uses the deceleration ramp settings DMAX, V1, D1, VSTOP and TZEROWAIT for stopping the motor. A stop occurs when the velocity sign matches the reference switch position (REFL for negative velocities, REFR for positive velocities) and the respective switch stop function is enabled. A hard stop also uses TZEROWAIT before the motor becomes released. Attention: Do not use soft stop in combination with stallGuard2.
#define TMC5160_EN_SOFTSTOP_SHIFT                     11 // min.: 0, max.: 1, default: 0
#define TMC5160_STATUS_STOP_L_MASK                    0x01 // RAMP_STAT //
#define TMC5160_STATUS_STOP_L_SHIFT                   0 // min.: 0, max.: 1, default: 0
#define TMC5160_STATUS_STOP_R_MASK                    0x02 // RAMP_STAT //
#define TMC5160_STATUS_STOP_R_SHIFT                   1 // min.: 0, max.: 1, default: 0
#define TMC5160_STATUS_LATCH_L_MASK                   0x04 // RAMP_STAT //
#define TMC5160_STATUS_LATCH_L_SHIFT                  2 // min.: 0, max.: 1, default: 0
#define TMC5160_STATUS_LATCH_R_MASK                   0x08 // RAMP_STAT //
#define TMC5160_STATUS_LATCH_R_SHIFT                  3 // min.: 0, max.: 1, default: 0
#define TMC5160_EVENT_STOP_L_MASK                     0x10 // RAMP_STAT //
#define TMC5160_EVENT_STOP_L_SHIFT                    4 // min.: 0, max.: 1, default: 0
#define TMC5160_EVENT_STOP_R_MASK                     0x20 // RAMP_STAT //
#define TMC5160_EVENT_STOP_R_SHIFT                    5 // min.: 0, max.: 1, default: 0
#define TMC5160_EVENT_STOP_SG_MASK                    0x40 // RAMP_STAT //
#define TMC5160_EVENT_STOP_SG_SHIFT                   6 // min.: 0, max.: 1, default: 0
#define TMC5160_EVENT_POS_REACHED_MASK                0x80 // RAMP_STAT //
#define TMC5160_EVENT_POS_REACHED_SHIFT               7 // min.: 0, max.: 1, default: 0
#define TMC5160_VELOCITY_REACHED_MASK                 0x0100 // RAMP_STAT //
#define TMC5160_VELOCITY_REACHED_SHIFT                8 // min.: 0, max.: 1, default: 0
#define TMC5160_POSITION_REACHED_MASK                 0x0200 // RAMP_STAT //
#define TMC5160_POSITION_REACHED_SHIFT                9 // min.: 0, max.: 1, default: 0
#define TMC5160_VZERO_MASK                            0x0400 // RAMP_STAT //
#define TMC5160_VZERO_SHIFT                           10 // min.: 0, max.: 1, default: 0
#define TMC5160_T_ZEROWAIT_ACTIVE_MASK                0x0800 // RAMP_STAT //
#define TMC5160_T_ZEROWAIT_ACTIVE_SHIFT               11 // min.: 0, max.: 1, default: 0
#define TMC5160_SECOND_MOVE_MASK                      0x1000 // RAMP_STAT //
#define TMC5160_SECOND_MOVE_SHIFT                     12 // min.: 0, max.: 1, default: 0
#define TMC5160_STATUS_SG_MASK                        0x2000 // RAMP_STAT //
#define TMC5160_STATUS_SG_SHIFT                       13 // min.: 0, max.: 1, default: 0
#define TMC5160_XLATCH_MASK                           0xFFFFFFFF // XLATCH // Ramp generator latch position, latches XACTUAL upon a programmable switch event (see SW_MODE). Hint: The encoder position can be latched to ENC_LATCH together with XLATCH to allow consistency checks.
#define TMC5160_XLATCH_SHIFT                          0 // min.: 0, max.: 4294967295, default: 0
#define TMC5160_POL_A_MASK                            0x01 // ENCMODE // Required A polarity for an N channel event
#define TMC5160_POL_A_SHIFT                           0 // min.: 0, max.: 1, default: 0
#define TMC5160_POL_B_MASK                            0x02 // ENCMODE // Required B polarity for an N channel event
#define TMC5160_POL_B_SHIFT                           1 // min.: 0, max.: 1, default: 0
#define TMC5160_POL_N_MASK                            0x04 // ENCMODE // Defines active polarity of N
#define TMC5160_POL_N_SHIFT                           2 // min.: 0, max.: 1, default: 0
#define TMC5160_IGNORE_AB_MASK                        0x08 // ENCMODE //
#define TMC5160_IGNORE_AB_SHIFT                       3 // min.: 0, max.: 1, default: 0
#define TMC5160_CLR_CONT_MASK                         0x10 // ENCMODE //
#define TMC5160_CLR_CONT_SHIFT                        4 // min.: 0, max.: 1, default: 0
#define TMC5160_CLR_ONCE_MASK                         0x20 // ENCMODE //
#define TMC5160_CLR_ONCE_SHIFT                        5 // min.: 0, max.: 1, default: 0
#define TMC5160_POS_EDGENEG_EDGE_MASK                 0xC0 // ENCMODE //
#define TMC5160_POS_EDGENEG_EDGE_SHIFT                6 // min.: 0, max.: 3, default: 0
#define TMC5160_CLR_ENC_X_MASK                        0x0100 // ENCMODE //
#define TMC5160_CLR_ENC_X_SHIFT                       8 // min.: 0, max.: 1, default: 0
#define TMC5160_LATCH_X_ACT_MASK                      0x0200 // ENCMODE //
#define TMC5160_LATCH_X_ACT_SHIFT                     9 // min.: 0, max.: 1, default: 0
#define TMC5160_ENC_SEL_DECIMAL_MASK                  0x0400 // ENCMODE //
#define TMC5160_ENC_SEL_DECIMAL_SHIFT                 10 // min.: 0, max.: 1, default: 0
#define TMC5160_X_ENC_MASK                            0xFFFFFFFF // X_ENC // Actual encoder position
#define TMC5160_X_ENC_SHIFT                           0 // min.: -2147483648, max.: 2147483647, default: 0
#define TMC5160_INTEGER_MASK                          0xFFFF0000 // ENC_CONST // Integer part of encoder constant
#define TMC5160_INTEGER_SHIFT                         16 // min.: 0, max.: 65535, default: 0
#define TMC5160_FRACTIONAL_MASK                       0xFFFF // ENC_CONST // Fractional part of encoder constant
#define TMC5160_FRACTIONAL_SHIFT                      0 // min.: 0, max.: 65535, default: 0
#define TMC5160_N_EVENT_MASK                          0x01 // ENC_STATUS //
#define TMC5160_N_EVENT_SHIFT                         0 // min.: 0, max.: 1, default: 0
#define TMC5160_DEVIATION_WARN_MASK                   0x02 // ENC_STATUS //
#define TMC5160_DEVIATION_WARN_SHIFT                  1 // min.: 0, max.: 1, default: 0
#define TMC5160_ENC_LATCH_MASK                        0xFFFFFFFF // ENC_LATCH // Encoder position X_ENC latched on N event
#define TMC5160_ENC_LATCH_SHIFT                       0 // min.: -2147483648, max.: 2147483647, default: 0
#define TMC5160_ENC_DEVIATION_MASK                    0x0FFFFF // ENC_DEVIATION // Maximum number of steps deviation between encoder counter and XACTUAL for deviation warning (flag deviation_warn). 0=Function is off.
#define TMC5160_ENC_DEVIATION_SHIFT                   0 // min.: 0, max.: 1048575, default: 0
#define TMC5160_OFS0_MASK                             0x01 // MSLUT[0] // microstep table entry 0
#define TMC5160_OFS0_SHIFT                            0 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS1_MASK                             0x02 // MSLUT[0] // microstep table entry 1
#define TMC5160_OFS1_SHIFT                            1 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS2_MASK                             0x04 // MSLUT[0] // microstep table entry 2
#define TMC5160_OFS2_SHIFT                            2 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS3_MASK                             0x08 // MSLUT[0] // microstep table entry 3
#define TMC5160_OFS3_SHIFT                            3 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS4_MASK                             0x10 // MSLUT[0] // microstep table entry 4
#define TMC5160_OFS4_SHIFT                            4 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS5_MASK                             0x20 // MSLUT[0] // microstep table entry 5
#define TMC5160_OFS5_SHIFT                            5 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS6_MASK                             0x40 // MSLUT[0] // microstep table entry 6
#define TMC5160_OFS6_SHIFT                            6 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS7_MASK                             0x80 // MSLUT[0] // microstep table entry 7
#define TMC5160_OFS7_SHIFT                            7 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS8_MASK                             0x0100 // MSLUT[0] // microstep table entry 8
#define TMC5160_OFS8_SHIFT                            8 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS9_MASK                             0x0200 // MSLUT[0] // microstep table entry 9
#define TMC5160_OFS9_SHIFT                            9 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS10_MASK                            0x0400 // MSLUT[0] // microstep table entry 10
#define TMC5160_OFS10_SHIFT                           10 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS11_MASK                            0x0800 // MSLUT[0] // microstep table entry 11
#define TMC5160_OFS11_SHIFT                           11 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS12_MASK                            0x1000 // MSLUT[0] // microstep table entry 12
#define TMC5160_OFS12_SHIFT                           12 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS13_MASK                            0x2000 // MSLUT[0] // microstep table entry 13
#define TMC5160_OFS13_SHIFT                           13 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS14_MASK                            0x4000 // MSLUT[0] // microstep table entry 14
#define TMC5160_OFS14_SHIFT                           14 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS15_MASK                            0x8000 // MSLUT[0] // microstep table entry 15
#define TMC5160_OFS15_SHIFT                           15 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS16_MASK                            0x010000 // MSLUT[0] // microstep table entry 16
#define TMC5160_OFS16_SHIFT                           16 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS17_MASK                            0x020000 // MSLUT[0] // microstep table entry 17
#define TMC5160_OFS17_SHIFT                           17 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS18_MASK                            0x040000 // MSLUT[0] // microstep table entry 18
#define TMC5160_OFS18_SHIFT                           18 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS19_MASK                            0x080000 // MSLUT[0] // microstep table entry 19
#define TMC5160_OFS19_SHIFT                           19 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS20_MASK                            0x100000 // MSLUT[0] // microstep table entry 20
#define TMC5160_OFS20_SHIFT                           20 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS21_MASK                            0x200000 // MSLUT[0] // microstep table entry 21
#define TMC5160_OFS21_SHIFT                           21 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS22_MASK                            0x400000 // MSLUT[0] // microstep table entry 22
#define TMC5160_OFS22_SHIFT                           22 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS23_MASK                            0x800000 // MSLUT[0] // microstep table entry 23
#define TMC5160_OFS23_SHIFT                           23 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS24_MASK                            0x01000000 // MSLUT[0] // microstep table entry 24
#define TMC5160_OFS24_SHIFT                           24 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS25_MASK                            0x02000000 // MSLUT[0] // microstep table entry 25
#define TMC5160_OFS25_SHIFT                           25 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS26_MASK                            0x04000000 // MSLUT[0] // microstep table entry 26
#define TMC5160_OFS26_SHIFT                           26 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS27_MASK                            0x08000000 // MSLUT[0] // microstep table entry 27
#define TMC5160_OFS27_SHIFT                           27 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS28_MASK                            0x10000000 // MSLUT[0] // microstep table entry 28
#define TMC5160_OFS28_SHIFT                           28 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS29_MASK                            0x20000000 // MSLUT[0] // microstep table entry 29
#define TMC5160_OFS29_SHIFT                           29 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS30_MASK                            0x40000000 // MSLUT[0] // microstep table entry 30
#define TMC5160_OFS30_SHIFT                           30 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS31_MASK                            0x80000000 // MSLUT[0] // microstep table entry 31
#define TMC5160_OFS31_SHIFT                           31 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS32_MASK                            0x01 // MSLUT[1] // microstep table entry 32
#define TMC5160_OFS32_SHIFT                           0 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS33_MASK                            0x02 // MSLUT[1] // microstep table entry 33
#define TMC5160_OFS33_SHIFT                           1 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS34_MASK                            0x04 // MSLUT[1] // microstep table entry 34
#define TMC5160_OFS34_SHIFT                           2 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS35_MASK                            0x08 // MSLUT[1] // microstep table entry 35
#define TMC5160_OFS35_SHIFT                           3 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS36_MASK                            0x10 // MSLUT[1] // microstep table entry 36
#define TMC5160_OFS36_SHIFT                           4 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS37_MASK                            0x20 // MSLUT[1] // microstep table entry 37
#define TMC5160_OFS37_SHIFT                           5 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS38_MASK                            0x40 // MSLUT[1] // microstep table entry 38
#define TMC5160_OFS38_SHIFT                           6 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS39_MASK                            0x80 // MSLUT[1] // microstep table entry 39
#define TMC5160_OFS39_SHIFT                           7 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS40_MASK                            0x0100 // MSLUT[1] // microstep table entry 40
#define TMC5160_OFS40_SHIFT                           8 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS41_MASK                            0x0200 // MSLUT[1] // microstep table entry 41
#define TMC5160_OFS41_SHIFT                           9 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS42_MASK                            0x0400 // MSLUT[1] // microstep table entry 42
#define TMC5160_OFS42_SHIFT                           10 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS43_MASK                            0x0800 // MSLUT[1] // microstep table entry 43
#define TMC5160_OFS43_SHIFT                           11 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS44_MASK                            0x1000 // MSLUT[1] // microstep table entry 44
#define TMC5160_OFS44_SHIFT                           12 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS45_MASK                            0x2000 // MSLUT[1] // microstep table entry 45
#define TMC5160_OFS45_SHIFT                           13 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS46_MASK                            0x4000 // MSLUT[1] // microstep table entry 46
#define TMC5160_OFS46_SHIFT                           14 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS47_MASK                            0x8000 // MSLUT[1] // microstep table entry 47
#define TMC5160_OFS47_SHIFT                           15 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS48_MASK                            0x010000 // MSLUT[1] // microstep table entry 48
#define TMC5160_OFS48_SHIFT                           16 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS49_MASK                            0x020000 // MSLUT[1] // microstep table entry 49
#define TMC5160_OFS49_SHIFT                           17 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS50_MASK                            0x040000 // MSLUT[1] // microstep table entry 50
#define TMC5160_OFS50_SHIFT                           18 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS51_MASK                            0x080000 // MSLUT[1] // microstep table entry 51
#define TMC5160_OFS51_SHIFT                           19 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS52_MASK                            0x100000 // MSLUT[1] // microstep table entry 52
#define TMC5160_OFS52_SHIFT                           20 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS53_MASK                            0x200000 // MSLUT[1] // microstep table entry 53
#define TMC5160_OFS53_SHIFT                           21 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS54_MASK                            0x400000 // MSLUT[1] // microstep table entry 54
#define TMC5160_OFS54_SHIFT                           22 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS55_MASK                            0x800000 // MSLUT[1] // microstep table entry 55
#define TMC5160_OFS55_SHIFT                           23 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS56_MASK                            0x01000000 // MSLUT[1] // microstep table entry 56
#define TMC5160_OFS56_SHIFT                           24 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS57_MASK                            0x02000000 // MSLUT[1] // microstep table entry 57
#define TMC5160_OFS57_SHIFT                           25 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS58_MASK                            0x04000000 // MSLUT[1] // microstep table entry 58
#define TMC5160_OFS58_SHIFT                           26 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS59_MASK                            0x08000000 // MSLUT[1] // microstep table entry 59
#define TMC5160_OFS59_SHIFT                           27 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS60_MASK                            0x10000000 // MSLUT[1] // microstep table entry 60
#define TMC5160_OFS60_SHIFT                           28 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS61_MASK                            0x20000000 // MSLUT[1] // microstep table entry 61
#define TMC5160_OFS61_SHIFT                           29 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS62_MASK                            0x40000000 // MSLUT[1] // microstep table entry 62
#define TMC5160_OFS62_SHIFT                           30 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS63_MASK                            0x80000000 // MSLUT[1] // microstep table entry 63
#define TMC5160_OFS63_SHIFT                           31 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS64_MASK                            0x01 // MSLUT[2] // microstep table entry 64
#define TMC5160_OFS64_SHIFT                           0 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS65_MASK                            0x02 // MSLUT[2] // microstep table entry 65
#define TMC5160_OFS65_SHIFT                           1 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS66_MASK                            0x04 // MSLUT[2] // microstep table entry 66
#define TMC5160_OFS66_SHIFT                           2 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS67_MASK                            0x08 // MSLUT[2] // microstep table entry 67
#define TMC5160_OFS67_SHIFT                           3 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS68_MASK                            0x10 // MSLUT[2] // microstep table entry 68
#define TMC5160_OFS68_SHIFT                           4 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS69_MASK                            0x20 // MSLUT[2] // microstep table entry 69
#define TMC5160_OFS69_SHIFT                           5 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS70_MASK                            0x40 // MSLUT[2] // microstep table entry 70
#define TMC5160_OFS70_SHIFT                           6 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS71_MASK                            0x80 // MSLUT[2] // microstep table entry 71
#define TMC5160_OFS71_SHIFT                           7 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS72_MASK                            0x0100 // MSLUT[2] // microstep table entry 72
#define TMC5160_OFS72_SHIFT                           8 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS73_MASK                            0x0200 // MSLUT[2] // microstep table entry 73
#define TMC5160_OFS73_SHIFT                           9 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS74_MASK                            0x0400 // MSLUT[2] // microstep table entry 74
#define TMC5160_OFS74_SHIFT                           10 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS75_MASK                            0x0800 // MSLUT[2] // microstep table entry 75
#define TMC5160_OFS75_SHIFT                           11 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS76_MASK                            0x1000 // MSLUT[2] // microstep table entry 76
#define TMC5160_OFS76_SHIFT                           12 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS77_MASK                            0x2000 // MSLUT[2] // microstep table entry 77
#define TMC5160_OFS77_SHIFT                           13 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS78_MASK                            0x4000 // MSLUT[2] // microstep table entry 78
#define TMC5160_OFS78_SHIFT                           14 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS79_MASK                            0x8000 // MSLUT[2] // microstep table entry 79
#define TMC5160_OFS79_SHIFT                           15 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS80_MASK                            0x010000 // MSLUT[2] // microstep table entry 80
#define TMC5160_OFS80_SHIFT                           16 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS81_MASK                            0x020000 // MSLUT[2] // microstep table entry 81
#define TMC5160_OFS81_SHIFT                           17 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS82_MASK                            0x040000 // MSLUT[2] // microstep table entry 82
#define TMC5160_OFS82_SHIFT                           18 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS83_MASK                            0x080000 // MSLUT[2] // microstep table entry 83
#define TMC5160_OFS83_SHIFT                           19 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS84_MASK                            0x100000 // MSLUT[2] // microstep table entry 84
#define TMC5160_OFS84_SHIFT                           20 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS85_MASK                            0x200000 // MSLUT[2] // microstep table entry 85
#define TMC5160_OFS85_SHIFT                           21 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS86_MASK                            0x400000 // MSLUT[2] // microstep table entry 86
#define TMC5160_OFS86_SHIFT                           22 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS87_MASK                            0x800000 // MSLUT[2] // microstep table entry 87
#define TMC5160_OFS87_SHIFT                           23 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS88_MASK                            0x01000000 // MSLUT[2] // microstep table entry 88
#define TMC5160_OFS88_SHIFT                           24 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS89_MASK                            0x02000000 // MSLUT[2] // microstep table entry 89
#define TMC5160_OFS89_SHIFT                           25 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS90_MASK                            0x04000000 // MSLUT[2] // microstep table entry 90
#define TMC5160_OFS90_SHIFT                           26 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS91_MASK                            0x08000000 // MSLUT[2] // microstep table entry 91
#define TMC5160_OFS91_SHIFT                           27 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS92_MASK                            0x10000000 // MSLUT[2] // microstep table entry 92
#define TMC5160_OFS92_SHIFT                           28 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS93_MASK                            0x20000000 // MSLUT[2] // microstep table entry 93
#define TMC5160_OFS93_SHIFT                           29 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS94_MASK                            0x40000000 // MSLUT[2] // microstep table entry 94
#define TMC5160_OFS94_SHIFT                           30 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS95_MASK                            0x80000000 // MSLUT[2] // microstep table entry 95
#define TMC5160_OFS95_SHIFT                           31 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS96_MASK                            0x01 // MSLUT[3] // microstep table entry 96
#define TMC5160_OFS96_SHIFT                           0 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS97_MASK                            0x02 // MSLUT[3] // microstep table entry 97
#define TMC5160_OFS97_SHIFT                           1 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS98_MASK                            0x04 // MSLUT[3] // microstep table entry 98
#define TMC5160_OFS98_SHIFT                           2 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS99_MASK                            0x08 // MSLUT[3] // microstep table entry 99
#define TMC5160_OFS99_SHIFT                           3 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS100_MASK                           0x10 // MSLUT[3] // microstep table entry 100
#define TMC5160_OFS100_SHIFT                          4 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS101_MASK                           0x20 // MSLUT[3] // microstep table entry 101
#define TMC5160_OFS101_SHIFT                          5 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS102_MASK                           0x40 // MSLUT[3] // microstep table entry 102
#define TMC5160_OFS102_SHIFT                          6 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS103_MASK                           0x80 // MSLUT[3] // microstep table entry 103
#define TMC5160_OFS103_SHIFT                          7 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS104_MASK                           0x0100 // MSLUT[3] // microstep table entry 104
#define TMC5160_OFS104_SHIFT                          8 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS105_MASK                           0x0200 // MSLUT[3] // microstep table entry 105
#define TMC5160_OFS105_SHIFT                          9 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS106_MASK                           0x0400 // MSLUT[3] // microstep table entry 106
#define TMC5160_OFS106_SHIFT                          10 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS107_MASK                           0x0800 // MSLUT[3] // microstep table entry 107
#define TMC5160_OFS107_SHIFT                          11 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS108_MASK                           0x1000 // MSLUT[3] // microstep table entry 108
#define TMC5160_OFS108_SHIFT                          12 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS109_MASK                           0x2000 // MSLUT[3] // microstep table entry 109
#define TMC5160_OFS109_SHIFT                          13 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS110_MASK                           0x4000 // MSLUT[3] // microstep table entry 110
#define TMC5160_OFS110_SHIFT                          14 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS111_MASK                           0x8000 // MSLUT[3] // microstep table entry 111
#define TMC5160_OFS111_SHIFT                          15 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS112_MASK                           0x010000 // MSLUT[3] // microstep table entry 112
#define TMC5160_OFS112_SHIFT                          16 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS113_MASK                           0x020000 // MSLUT[3] // microstep table entry 113
#define TMC5160_OFS113_SHIFT                          17 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS114_MASK                           0x040000 // MSLUT[3] // microstep table entry 114
#define TMC5160_OFS114_SHIFT                          18 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS115_MASK                           0x080000 // MSLUT[3] // microstep table entry 115
#define TMC5160_OFS115_SHIFT                          19 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS116_MASK                           0x100000 // MSLUT[3] // microstep table entry 116
#define TMC5160_OFS116_SHIFT                          20 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS117_MASK                           0x200000 // MSLUT[3] // microstep table entry 117
#define TMC5160_OFS117_SHIFT                          21 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS118_MASK                           0x400000 // MSLUT[3] // microstep table entry 118
#define TMC5160_OFS118_SHIFT                          22 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS119_MASK                           0x800000 // MSLUT[3] // microstep table entry 119
#define TMC5160_OFS119_SHIFT                          23 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS120_MASK                           0x01000000 // MSLUT[3] // microstep table entry 120
#define TMC5160_OFS120_SHIFT                          24 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS121_MASK                           0x02000000 // MSLUT[3] // microstep table entry 121
#define TMC5160_OFS121_SHIFT                          25 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS122_MASK                           0x04000000 // MSLUT[3] // microstep table entry 122
#define TMC5160_OFS122_SHIFT                          26 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS123_MASK                           0x08000000 // MSLUT[3] // microstep table entry 123
#define TMC5160_OFS123_SHIFT                          27 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS124_MASK                           0x10000000 // MSLUT[3] // microstep table entry 124
#define TMC5160_OFS124_SHIFT                          28 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS125_MASK                           0x20000000 // MSLUT[3] // microstep table entry 125
#define TMC5160_OFS125_SHIFT                          29 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS126_MASK                           0x40000000 // MSLUT[3] // microstep table entry 126
#define TMC5160_OFS126_SHIFT                          30 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS127_MASK                           0x80000000 // MSLUT[3] // microstep table entry 127
#define TMC5160_OFS127_SHIFT                          31 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS128_MASK                           0x01 // MSLUT[4] // microstep table entry 128
#define TMC5160_OFS128_SHIFT                          0 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS129_MASK                           0x02 // MSLUT[4] // microstep table entry 129
#define TMC5160_OFS129_SHIFT                          1 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS130_MASK                           0x04 // MSLUT[4] // microstep table entry 130
#define TMC5160_OFS130_SHIFT                          2 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS131_MASK                           0x08 // MSLUT[4] // microstep table entry 131
#define TMC5160_OFS131_SHIFT                          3 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS132_MASK                           0x10 // MSLUT[4] // microstep table entry 132
#define TMC5160_OFS132_SHIFT                          4 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS133_MASK                           0x20 // MSLUT[4] // microstep table entry 133
#define TMC5160_OFS133_SHIFT                          5 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS134_MASK                           0x40 // MSLUT[4] // microstep table entry 134
#define TMC5160_OFS134_SHIFT                          6 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS135_MASK                           0x80 // MSLUT[4] // microstep table entry 135
#define TMC5160_OFS135_SHIFT                          7 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS136_MASK                           0x0100 // MSLUT[4] // microstep table entry 136
#define TMC5160_OFS136_SHIFT                          8 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS137_MASK                           0x0200 // MSLUT[4] // microstep table entry 137
#define TMC5160_OFS137_SHIFT                          9 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS138_MASK                           0x0400 // MSLUT[4] // microstep table entry 138
#define TMC5160_OFS138_SHIFT                          10 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS139_MASK                           0x0800 // MSLUT[4] // microstep table entry 139
#define TMC5160_OFS139_SHIFT                          11 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS140_MASK                           0x1000 // MSLUT[4] // microstep table entry 140
#define TMC5160_OFS140_SHIFT                          12 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS141_MASK                           0x2000 // MSLUT[4] // microstep table entry 141
#define TMC5160_OFS141_SHIFT                          13 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS142_MASK                           0x4000 // MSLUT[4] // microstep table entry 142
#define TMC5160_OFS142_SHIFT                          14 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS143_MASK                           0x8000 // MSLUT[4] // microstep table entry 143
#define TMC5160_OFS143_SHIFT                          15 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS144_MASK                           0x010000 // MSLUT[4] // microstep table entry 144
#define TMC5160_OFS144_SHIFT                          16 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS145_MASK                           0x020000 // MSLUT[4] // microstep table entry 145
#define TMC5160_OFS145_SHIFT                          17 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS146_MASK                           0x040000 // MSLUT[4] // microstep table entry 146
#define TMC5160_OFS146_SHIFT                          18 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS147_MASK                           0x080000 // MSLUT[4] // microstep table entry 147
#define TMC5160_OFS147_SHIFT                          19 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS148_MASK                           0x100000 // MSLUT[4] // microstep table entry 148
#define TMC5160_OFS148_SHIFT                          20 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS149_MASK                           0x200000 // MSLUT[4] // microstep table entry 149
#define TMC5160_OFS149_SHIFT                          21 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS150_MASK                           0x400000 // MSLUT[4] // microstep table entry 150
#define TMC5160_OFS150_SHIFT                          22 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS151_MASK                           0x800000 // MSLUT[4] // microstep table entry 151
#define TMC5160_OFS151_SHIFT                          23 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS152_MASK                           0x01000000 // MSLUT[4] // microstep table entry 152
#define TMC5160_OFS152_SHIFT                          24 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS153_MASK                           0x02000000 // MSLUT[4] // microstep table entry 153
#define TMC5160_OFS153_SHIFT                          25 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS154_MASK                           0x04000000 // MSLUT[4] // microstep table entry 154
#define TMC5160_OFS154_SHIFT                          26 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS155_MASK                           0x08000000 // MSLUT[4] // microstep table entry 155
#define TMC5160_OFS155_SHIFT                          27 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS156_MASK                           0x10000000 // MSLUT[4] // microstep table entry 156
#define TMC5160_OFS156_SHIFT                          28 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS157_MASK                           0x20000000 // MSLUT[4] // microstep table entry 157
#define TMC5160_OFS157_SHIFT                          29 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS158_MASK                           0x40000000 // MSLUT[4] // microstep table entry 158
#define TMC5160_OFS158_SHIFT                          30 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS159_MASK                           0x80000000 // MSLUT[4] // microstep table entry 159
#define TMC5160_OFS159_SHIFT                          31 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS160_MASK                           0x01 // MSLUT[5] // microstep table entry 160
#define TMC5160_OFS160_SHIFT                          0 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS161_MASK                           0x02 // MSLUT[5] // microstep table entry 161
#define TMC5160_OFS161_SHIFT                          1 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS162_MASK                           0x04 // MSLUT[5] // microstep table entry 162
#define TMC5160_OFS162_SHIFT                          2 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS163_MASK                           0x08 // MSLUT[5] // microstep table entry 163
#define TMC5160_OFS163_SHIFT                          3 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS164_MASK                           0x10 // MSLUT[5] // microstep table entry 164
#define TMC5160_OFS164_SHIFT                          4 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS165_MASK                           0x20 // MSLUT[5] // microstep table entry 165
#define TMC5160_OFS165_SHIFT                          5 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS166_MASK                           0x40 // MSLUT[5] // microstep table entry 166
#define TMC5160_OFS166_SHIFT                          6 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS167_MASK                           0x80 // MSLUT[5] // microstep table entry 167
#define TMC5160_OFS167_SHIFT                          7 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS168_MASK                           0x0100 // MSLUT[5] // microstep table entry 168
#define TMC5160_OFS168_SHIFT                          8 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS169_MASK                           0x0200 // MSLUT[5] // microstep table entry 169
#define TMC5160_OFS169_SHIFT                          9 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS170_MASK                           0x0400 // MSLUT[5] // microstep table entry 170
#define TMC5160_OFS170_SHIFT                          10 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS171_MASK                           0x0800 // MSLUT[5] // microstep table entry 171
#define TMC5160_OFS171_SHIFT                          11 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS172_MASK                           0x1000 // MSLUT[5] // microstep table entry 172
#define TMC5160_OFS172_SHIFT                          12 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS173_MASK                           0x2000 // MSLUT[5] // microstep table entry 173
#define TMC5160_OFS173_SHIFT                          13 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS174_MASK                           0x4000 // MSLUT[5] // microstep table entry 174
#define TMC5160_OFS174_SHIFT                          14 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS175_MASK                           0x8000 // MSLUT[5] // microstep table entry 175
#define TMC5160_OFS175_SHIFT                          15 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS176_MASK                           0x010000 // MSLUT[5] // microstep table entry 176
#define TMC5160_OFS176_SHIFT                          16 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS177_MASK                           0x020000 // MSLUT[5] // microstep table entry 177
#define TMC5160_OFS177_SHIFT                          17 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS178_MASK                           0x040000 // MSLUT[5] // microstep table entry 178
#define TMC5160_OFS178_SHIFT                          18 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS179_MASK                           0x080000 // MSLUT[5] // microstep table entry 179
#define TMC5160_OFS179_SHIFT                          19 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS180_MASK                           0x100000 // MSLUT[5] // microstep table entry 180
#define TMC5160_OFS180_SHIFT                          20 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS181_MASK                           0x200000 // MSLUT[5] // microstep table entry 181
#define TMC5160_OFS181_SHIFT                          21 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS182_MASK                           0x400000 // MSLUT[5] // microstep table entry 182
#define TMC5160_OFS182_SHIFT                          22 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS183_MASK                           0x800000 // MSLUT[5] // microstep table entry 183
#define TMC5160_OFS183_SHIFT                          23 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS184_MASK                           0x01000000 // MSLUT[5] // microstep table entry 184
#define TMC5160_OFS184_SHIFT                          24 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS185_MASK                           0x02000000 // MSLUT[5] // microstep table entry 185
#define TMC5160_OFS185_SHIFT                          25 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS186_MASK                           0x04000000 // MSLUT[5] // microstep table entry 186
#define TMC5160_OFS186_SHIFT                          26 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS187_MASK                           0x08000000 // MSLUT[5] // microstep table entry 187
#define TMC5160_OFS187_SHIFT                          27 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS188_MASK                           0x10000000 // MSLUT[5] // microstep table entry 188
#define TMC5160_OFS188_SHIFT                          28 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS189_MASK                           0x20000000 // MSLUT[5] // microstep table entry 189
#define TMC5160_OFS189_SHIFT                          29 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS190_MASK                           0x40000000 // MSLUT[5] // microstep table entry 190
#define TMC5160_OFS190_SHIFT                          30 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS191_MASK                           0x80000000 // MSLUT[5] // microstep table entry 191
#define TMC5160_OFS191_SHIFT                          31 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS192_MASK                           0x01 // MSLUT[6] // microstep table entry 192
#define TMC5160_OFS192_SHIFT                          0 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS193_MASK                           0x02 // MSLUT[6] // microstep table entry 193
#define TMC5160_OFS193_SHIFT                          1 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS194_MASK                           0x04 // MSLUT[6] // microstep table entry 194
#define TMC5160_OFS194_SHIFT                          2 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS195_MASK                           0x08 // MSLUT[6] // microstep table entry 195
#define TMC5160_OFS195_SHIFT                          3 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS196_MASK                           0x10 // MSLUT[6] // microstep table entry 196
#define TMC5160_OFS196_SHIFT                          4 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS197_MASK                           0x20 // MSLUT[6] // microstep table entry 197
#define TMC5160_OFS197_SHIFT                          5 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS198_MASK                           0x40 // MSLUT[6] // microstep table entry 198
#define TMC5160_OFS198_SHIFT                          6 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS199_MASK                           0x80 // MSLUT[6] // microstep table entry 199
#define TMC5160_OFS199_SHIFT                          7 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS200_MASK                           0x0100 // MSLUT[6] // microstep table entry 200
#define TMC5160_OFS200_SHIFT                          8 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS201_MASK                           0x0200 // MSLUT[6] // microstep table entry 201
#define TMC5160_OFS201_SHIFT                          9 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS202_MASK                           0x0400 // MSLUT[6] // microstep table entry 202
#define TMC5160_OFS202_SHIFT                          10 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS203_MASK                           0x0800 // MSLUT[6] // microstep table entry 203
#define TMC5160_OFS203_SHIFT                          11 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS204_MASK                           0x1000 // MSLUT[6] // microstep table entry 204
#define TMC5160_OFS204_SHIFT                          12 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS205_MASK                           0x2000 // MSLUT[6] // microstep table entry 205
#define TMC5160_OFS205_SHIFT                          13 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS206_MASK                           0x4000 // MSLUT[6] // microstep table entry 206
#define TMC5160_OFS206_SHIFT                          14 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS207_MASK                           0x8000 // MSLUT[6] // microstep table entry 207
#define TMC5160_OFS207_SHIFT                          15 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS208_MASK                           0x010000 // MSLUT[6] // microstep table entry 208
#define TMC5160_OFS208_SHIFT                          16 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS209_MASK                           0x020000 // MSLUT[6] // microstep table entry 209
#define TMC5160_OFS209_SHIFT                          17 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS210_MASK                           0x040000 // MSLUT[6] // microstep table entry 210
#define TMC5160_OFS210_SHIFT                          18 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS211_MASK                           0x080000 // MSLUT[6] // microstep table entry 211
#define TMC5160_OFS211_SHIFT                          19 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS212_MASK                           0x100000 // MSLUT[6] // microstep table entry 212
#define TMC5160_OFS212_SHIFT                          20 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS213_MASK                           0x200000 // MSLUT[6] // microstep table entry 213
#define TMC5160_OFS213_SHIFT                          21 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS214_MASK                           0x400000 // MSLUT[6] // microstep table entry 214
#define TMC5160_OFS214_SHIFT                          22 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS215_MASK                           0x800000 // MSLUT[6] // microstep table entry 215
#define TMC5160_OFS215_SHIFT                          23 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS216_MASK                           0x01000000 // MSLUT[6] // microstep table entry 216
#define TMC5160_OFS216_SHIFT                          24 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS217_MASK                           0x02000000 // MSLUT[6] // microstep table entry 217
#define TMC5160_OFS217_SHIFT                          25 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS218_MASK                           0x04000000 // MSLUT[6] // microstep table entry 218
#define TMC5160_OFS218_SHIFT                          26 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS219_MASK                           0x08000000 // MSLUT[6] // microstep table entry 219
#define TMC5160_OFS219_SHIFT                          27 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS220_MASK                           0x10000000 // MSLUT[6] // microstep table entry 220
#define TMC5160_OFS220_SHIFT                          28 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS221_MASK                           0x20000000 // MSLUT[6] // microstep table entry 221
#define TMC5160_OFS221_SHIFT                          29 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS222_MASK                           0x40000000 // MSLUT[6] // microstep table entry 222
#define TMC5160_OFS222_SHIFT                          30 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS223_MASK                           0x80000000 // MSLUT[6] // microstep table entry 223
#define TMC5160_OFS223_SHIFT                          31 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS224_MASK                           0x01 // MSLUT[7] // microstep table entry 224
#define TMC5160_OFS224_SHIFT                          0 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS225_MASK                           0x02 // MSLUT[7] // microstep table entry 225
#define TMC5160_OFS225_SHIFT                          1 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS226_MASK                           0x04 // MSLUT[7] // microstep table entry 226
#define TMC5160_OFS226_SHIFT                          2 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS227_MASK                           0x08 // MSLUT[7] // microstep table entry 227
#define TMC5160_OFS227_SHIFT                          3 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS228_MASK                           0x10 // MSLUT[7] // microstep table entry 228
#define TMC5160_OFS228_SHIFT                          4 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS229_MASK                           0x20 // MSLUT[7] // microstep table entry 229
#define TMC5160_OFS229_SHIFT                          5 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS230_MASK                           0x40 // MSLUT[7] // microstep table entry 230
#define TMC5160_OFS230_SHIFT                          6 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS231_MASK                           0x80 // MSLUT[7] // microstep table entry 231
#define TMC5160_OFS231_SHIFT                          7 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS232_MASK                           0x0100 // MSLUT[7] // microstep table entry 232
#define TMC5160_OFS232_SHIFT                          8 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS233_MASK                           0x0200 // MSLUT[7] // microstep table entry 233
#define TMC5160_OFS233_SHIFT                          9 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS234_MASK                           0x0400 // MSLUT[7] // microstep table entry 234
#define TMC5160_OFS234_SHIFT                          10 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS235_MASK                           0x0800 // MSLUT[7] // microstep table entry 235
#define TMC5160_OFS235_SHIFT                          11 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS236_MASK                           0x1000 // MSLUT[7] // microstep table entry 236
#define TMC5160_OFS236_SHIFT                          12 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS237_MASK                           0x2000 // MSLUT[7] // microstep table entry 237
#define TMC5160_OFS237_SHIFT                          13 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS238_MASK                           0x4000 // MSLUT[7] // microstep table entry 238
#define TMC5160_OFS238_SHIFT                          14 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS239_MASK                           0x8000 // MSLUT[7] // microstep table entry 239
#define TMC5160_OFS239_SHIFT                          15 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS240_MASK                           0x010000 // MSLUT[7] // microstep table entry 240
#define TMC5160_OFS240_SHIFT                          16 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS241_MASK                           0x020000 // MSLUT[7] // microstep table entry 241
#define TMC5160_OFS241_SHIFT                          17 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS242_MASK                           0x040000 // MSLUT[7] // microstep table entry 242
#define TMC5160_OFS242_SHIFT                          18 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS243_MASK                           0x080000 // MSLUT[7] // microstep table entry 243
#define TMC5160_OFS243_SHIFT                          19 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS244_MASK                           0x100000 // MSLUT[7] // microstep table entry 244
#define TMC5160_OFS244_SHIFT                          20 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS245_MASK                           0x200000 // MSLUT[7] // microstep table entry 245
#define TMC5160_OFS245_SHIFT                          21 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS246_MASK                           0x400000 // MSLUT[7] // microstep table entry 246
#define TMC5160_OFS246_SHIFT                          22 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS247_MASK                           0x800000 // MSLUT[7] // microstep table entry 247
#define TMC5160_OFS247_SHIFT                          23 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS248_MASK                           0x01000000 // MSLUT[7] // microstep table entry 248
#define TMC5160_OFS248_SHIFT                          24 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS249_MASK                           0x02000000 // MSLUT[7] // microstep table entry 249
#define TMC5160_OFS249_SHIFT                          25 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS250_MASK                           0x04000000 // MSLUT[7] // microstep table entry 250
#define TMC5160_OFS250_SHIFT                          26 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS251_MASK                           0x08000000 // MSLUT[7] // microstep table entry 251
#define TMC5160_OFS251_SHIFT                          27 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS252_MASK                           0x10000000 // MSLUT[7] // microstep table entry 252
#define TMC5160_OFS252_SHIFT                          28 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS253_MASK                           0x20000000 // MSLUT[7] // microstep table entry 253
#define TMC5160_OFS253_SHIFT                          29 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS254_MASK                           0x40000000 // MSLUT[7] // microstep table entry 254
#define TMC5160_OFS254_SHIFT                          30 // min.: 0, max.: 1, default: 0
#define TMC5160_OFS255_MASK                           0x80000000 // MSLUT[7] // microstep table entry 255
#define TMC5160_OFS255_SHIFT                          31 // min.: 0, max.: 1, default: 0
#define TMC5160_W0_MASK                               0x03 // MSLUTSEL // LUT width select from ofs0 to ofs(X1-1)
#define TMC5160_W0_SHIFT                              0 // min.: 0, max.: 3, default: 0
#define TMC5160_W1_MASK                               0x0C // MSLUTSEL // LUT width select from ofs(X1) to ofs(X2-1)
#define TMC5160_W1_SHIFT                              2 // min.: 0, max.: 3, default: 0
#define TMC5160_W2_MASK                               0x30 // MSLUTSEL // LUT width select from ofs(X2) to ofs(X3-1)
#define TMC5160_W2_SHIFT                              4 // min.: 0, max.: 3, default: 0
#define TMC5160_W3_MASK                               0xC0 // MSLUTSEL // LUT width select from ofs(X3) to ofs255
#define TMC5160_W3_SHIFT                              6 // min.: 0, max.: 3, default: 0
#define TMC5160_X1_MASK                               0xFF00 // MSLUTSEL // LUT segment 1 start
#define TMC5160_X1_SHIFT                              8 // min.: 0, max.: 255, default: 0
#define TMC5160_X2_MASK                               0xFF0000 // MSLUTSEL // LUT segment 2 start
#define TMC5160_X2_SHIFT                              16 // min.: 0, max.: 255, default: 0
#define TMC5160_X3_MASK                               0xFF000000 // MSLUTSEL // LUT segment 3 start
#define TMC5160_X3_SHIFT                              24 // min.: 0, max.: 255, default: 0
#define TMC5160_START_SIN_MASK                        0xFF // MSLUTSTART // Absolute current at microstep table entry 0.
#define TMC5160_START_SIN_SHIFT                       0 // min.: 0, max.: 255, default: 0
#define TMC5160_START_SIN90_MASK                      0xFF0000 // MSLUTSTART // Absolute current for microstep table entry at positions 256.
#define TMC5160_START_SIN90_SHIFT                     16 // min.: 0, max.: 255, default: 0
#define TMC5160_MSCNT_MASK                            0x03FF // MSCNT // Microstep counter. Indicates actual position in the microstep table for CUR_A. CUR_B uses an offset of 256 (2 phase motor). Hint: Move to a position where MSCNT is zero before re-initializing MSLUTSTART or MSLUT and MSLUTSEL.
#define TMC5160_MSCNT_SHIFT                           0 // min.: 0, max.: 1023, default: 0
#define TMC5160_CUR_A_MASK                            0x01FF // MSCURACT // Actual microstep current for motor phase A as read from MSLUT (not scaled by current)
#define TMC5160_CUR_A_SHIFT                           0 // min.: -256, max.: 255, default: 0
#define TMC5160_CUR_B_MASK                            0x01FF0000 // MSCURACT // Actual microstep current for motor phase B as read from MSLUT (not scaled by current)
#define TMC5160_CUR_B_SHIFT                           16 // min.: -256, max.: 255, default: 0
#define TMC5160_TOFF_MASK                             0x0F // CHOPCONF // off time and driver enable
#define TMC5160_TOFF_SHIFT                            0 // min.: 0, max.: 15, default: 0
#define TMC5160_TFD_ALL_MASK                          0x70 // CHOPCONF // fast decay time setting
#define TMC5160_TFD_ALL_SHIFT                         4 // min.: 0, max.: 7, default: 0
#define TMC5160_OFFSET_MASK                           0x0780 // CHOPCONF // sine wave offset
#define TMC5160_OFFSET_SHIFT                          7 // min.: 0, max.: 15, default: 0
#define TMC5160_TFD_3_MASK                            0x0800 // CHOPCONF // MSB of fast decay time setting
#define TMC5160_TFD_3_SHIFT                           11 // min.: 0, max.: 1, default: 0
#define TMC5160_DISFDCC_MASK                          0x1000 // CHOPCONF // fast decay mode
#define TMC5160_DISFDCC_SHIFT                         12 // min.: 0, max.: 1, default: 0
#define TMC5160_CHM_MASK                              0x4000 // CHOPCONF // chopper mode
#define TMC5160_CHM_SHIFT                             14 // min.: 0, max.: 1, default: 0
#define TMC5160_TBL_MASK                              0x018000 // CHOPCONF // blank time select
#define TMC5160_TBL_SHIFT                             15 // min.: 0, max.: 3, default: 0
#define TMC5160_VHIGHFS_MASK                          0x040000 // CHOPCONF // high velocity fullstep selection
#define TMC5160_VHIGHFS_SHIFT                         18 // min.: 0, max.: 1, default: 0
#define TMC5160_VHIGHCHM_MASK                         0x080000 // CHOPCONF // high velocity chopper mode
#define TMC5160_VHIGHCHM_SHIFT                        19 // min.: 0, max.: 1, default: 0
#define TMC5160_TPFD_MASK                             0xF00000 // CHOPCONF // Passive fast decay time TPFD allows dampening of motor mid-range resonances. Passive fast decay time setting controls duration of the fast decay phase inserted after bridge polarity change N CLK = 12 + 256*TPFD %0000: Disable %0001 ... %1111: 1 ... 15
#define TMC5160_TPFD_SHIFT                            20 // min.: 0, max.: 15, default: 0
#define TMC5160_MRES_MASK                             0x0F000000 // CHOPCONF // Micro step resolution; The resolution gives the number of microstep entries per sine quarter wave. The driver automatically uses microstep positions which result in a symmetrical wave, when choosing a lower microstep resolution.
#define TMC5160_MRES_SHIFT                            24 // min.: 0, max.: 8, default: 0
#define TMC5160_INTPOL_MASK                           0x10000000 // CHOPCONF // interpolation to 256 microsteps
#define TMC5160_INTPOL_SHIFT                          28 // min.: 0, max.: 1, default: 0
#define TMC5160_DEDGE_MASK                            0x20000000 // CHOPCONF // enable double edge step pulses
#define TMC5160_DEDGE_SHIFT                           29 // min.: 0, max.: 1, default: 0
#define TMC5160_DISS2G_MASK                           0x40000000 // CHOPCONF // short to GND protection disable
#define TMC5160_DISS2G_SHIFT                          30 // min.: 0, max.: 1, default: 0
#define TMC5160_DISS2VS_MASK                          0x80000000 // CHOPCONF // short to supply protection disable
#define TMC5160_DISS2VS_SHIFT                         31 // min.: 0, max.: 1, default: 0
#define TMC5160_TOFF_MASK                             0x0F // CHOPCONF // off time and driver enable
#define TMC5160_TOFF_SHIFT                            0 // min.: 0, max.: 15, default: 0
#define TMC5160_TFD_ALL_MASK                          0x70 // CHOPCONF // fast decay time setting
#define TMC5160_TFD_ALL_SHIFT                         4 // min.: 0, max.: 7, default: 0
#define TMC5160_OFFSET_MASK                           0x0780 // CHOPCONF // sine wave offset
#define TMC5160_OFFSET_SHIFT                          7 // min.: 0, max.: 15, default: 0
#define TMC5160_TFD_3_MASK                            0x0800 // CHOPCONF // MSB of fast decay time setting
#define TMC5160_TFD_3_SHIFT                           11 // min.: 0, max.: 1, default: 0
#define TMC5160_DISFDCC_MASK                          0x1000 // CHOPCONF // fast decay mode
#define TMC5160_DISFDCC_SHIFT                         12 // min.: 0, max.: 1, default: 0
#define TMC5160_RNDTF_MASK                            0x2000 // CHOPCONF // random TOFF time
#define TMC5160_RNDTF_SHIFT                           13 // min.: 0, max.: 1, default: 0
#define TMC5160_CHM_MASK                              0x4000 // CHOPCONF // chopper mode
#define TMC5160_CHM_SHIFT                             14 // min.: 0, max.: 1, default: 0
#define TMC5160_TBL_MASK                              0x018000 // CHOPCONF // blank time select
#define TMC5160_TBL_SHIFT                             15 // min.: 0, max.: 3, default: 0
#define TMC5160_VSENSE_MASK                           0x020000 // CHOPCONF // sense resistor voltage based current scaling
#define TMC5160_VSENSE_SHIFT                          17 // min.: 0, max.: 1, default: 0
#define TMC5160_VHIGHFS_MASK                          0x040000 // CHOPCONF // high velocity fullstep selection
#define TMC5160_VHIGHFS_SHIFT                         18 // min.: 0, max.: 1, default: 0
#define TMC5160_VHIGHCHM_MASK                         0x080000 // CHOPCONF // high velocity chopper mode
#define TMC5160_VHIGHCHM_SHIFT                        19 // min.: 0, max.: 1, default: 0
#define TMC5160_TPFD_MASK                             0xF00000 // CHOPCONF // Passive fast decay time TPFD allows dampening of motor mid-range resonances. Passive fast decay time setting controls duration of the fast decay phase inserted after bridge polarity change N CLK = 12 + 256*TPFD %0000: Disable %0001 ... %1111: 1 ... 15
#define TMC5160_TPFD_SHIFT                            20 // min.: 0, max.: 15, default: 0
#define TMC5160_MRES_MASK                             0x0F000000 // CHOPCONF // Micro step resolution; The resolution gives the number of microstep entries per sine quarter wave. The driver automatically uses microstep positions which result in a symmetrical wave, when choosing a lower microstep resolution.
#define TMC5160_MRES_SHIFT                            24 // min.: 0, max.: 8, default: 0
#define TMC5160_INTPOL_MASK                           0x10000000 // CHOPCONF // interpolation to 256 microsteps
#define TMC5160_INTPOL_SHIFT                          28 // min.: 0, max.: 1, default: 0
#define TMC5160_DEDGE_MASK                            0x20000000 // CHOPCONF // enable double edge step pulses
#define TMC5160_DEDGE_SHIFT                           29 // min.: 0, max.: 1, default: 0
#define TMC5160_DISS2G_MASK                           0x40000000 // CHOPCONF // short to GND protection disable
#define TMC5160_DISS2G_SHIFT                          30 // min.: 0, max.: 1, default: 0
#define TMC5160_DISS2VS_MASK                          0x80000000 // CHOPCONF // short to supply protection disable
#define TMC5160_DISS2VS_SHIFT                         31 // min.: 0, max.: 1, default: 0
#define TMC5160_TOFF_MASK                             0x0F // CHOPCONF // off time and driver enable
#define TMC5160_TOFF_SHIFT                            0 // min.: 0, max.: 15, default: 0
#define TMC5160_HSTRT_MASK                            0x70 // CHOPCONF // hysteresis start value added to HEND; Attention: Effective HEND+HSTRT less than or equal to 16. Hint: Hysteresis decrement is done each 16 clocks
#define TMC5160_HSTRT_SHIFT                           4 // min.: 0, max.: 7, default: 0
#define TMC5160_HEND_MASK                             0x0780 // CHOPCONF // hysteresis low value
#define TMC5160_HEND_SHIFT                            7 // min.: 0, max.: 15, default: 0
#define TMC5160_CHM_MASK                              0x4000 // CHOPCONF // chopper mode
#define TMC5160_CHM_SHIFT                             14 // min.: 0, max.: 1, default: 0
#define TMC5160_TBL_MASK                              0x018000 // CHOPCONF // blank time select
#define TMC5160_TBL_SHIFT                             15 // min.: 0, max.: 3, default: 0
#define TMC5160_VHIGHFS_MASK                          0x040000 // CHOPCONF // high velocity fullstep selection
#define TMC5160_VHIGHFS_SHIFT                         18 // min.: 0, max.: 1, default: 0
#define TMC5160_VHIGHCHM_MASK                         0x080000 // CHOPCONF // high velocity chopper mode
#define TMC5160_VHIGHCHM_SHIFT                        19 // min.: 0, max.: 1, default: 0
#define TMC5160_TPFD_MASK                             0xF00000 // CHOPCONF // Passive fast decay time TPFD allows dampening of motor mid-range resonances. Passive fast decay time setting controls duration of the fast decay phase inserted after bridge polarity change N CLK = 12 + 256*TPFD %0000: Disable %0001 ... %1111: 1 ... 15
#define TMC5160_TPFD_SHIFT                            20 // min.: 0, max.: 15, default: 0
#define TMC5160_MRES_MASK                             0x0F000000 // CHOPCONF // Micro step resolution; The resolution gives the number of microstep entries per sine quarter wave. The driver automatically uses microstep positions which result in a symmetrical wave, when choosing a lower microstep resolution.
#define TMC5160_MRES_SHIFT                            24 // min.: 0, max.: 8, default: 0
#define TMC5160_INTPOL_MASK                           0x10000000 // CHOPCONF // interpolation to 256 microsteps
#define TMC5160_INTPOL_SHIFT                          28 // min.: 0, max.: 1, default: 0
#define TMC5160_DEDGE_MASK                            0x20000000 // CHOPCONF // enable double edge step pulses
#define TMC5160_DEDGE_SHIFT                           29 // min.: 0, max.: 1, default: 0
#define TMC5160_DISS2G_MASK                           0x40000000 // CHOPCONF // short to GND protection disable
#define TMC5160_DISS2G_SHIFT                          30 // min.: 0, max.: 1, default: 0
#define TMC5160_DISS2VS_MASK                          0x80000000 // CHOPCONF // short to supply protection disable
#define TMC5160_DISS2VS_SHIFT                         31 // min.: 0, max.: 1, default: 0
#define TMC5160_SEMIN_MASK                            0x0F // COOLCONF // minimum stallGuard2 value - If the stallGuard2 result falls below SEMIN*32, the motor current becomes increased to reduce motor load angle. 0: smart current control coolStep off
#define TMC5160_SEMIN_SHIFT                           0 // min.: 0, max.: 15, default: 0
#define TMC5160_SEUP_MASK                             0x60 // COOLCONF // Current increment steps per measured stallGuard2 value
#define TMC5160_SEUP_SHIFT                            5 // min.: 0, max.: 3, default: 0
#define TMC5160_SEMAX_MASK                            0x0F00 // COOLCONF // stallGuard2 hysteresis value - If the stallGuard2 result is equal to or above (SEMIN+SEMAX+1)*32, the motor current becomes decreased to save energy.
#define TMC5160_SEMAX_SHIFT                           8 // min.: 0, max.: 15, default: 0
#define TMC5160_SEDN_MASK                             0x6000 // COOLCONF // Current down step speed; For each n stallGuard2 values decrease by one
#define TMC5160_SEDN_SHIFT                            13 // min.: 0, max.: 3, default: 0
#define TMC5160_SEIMIN_MASK                           0x8000 // COOLCONF // minimum current for smart current control
#define TMC5160_SEIMIN_SHIFT                          15 // min.: 0, max.: 1, default: 0
#define TMC5160_SGT_MASK                              0x7F0000 // COOLCONF // stallGuard2 threshold value This signed value controls stallGuard2 level for stall output and sets the optimum measurement range for readout. A lower value gives a higher sensitivity. Zero is the starting value working with most motors. A higher value makes stallGuard2 less sensitive and requires more torque to indicate a stall.
#define TMC5160_SGT_SHIFT                             16 // min.: -64, max.: 63, default: 0
#define TMC5160_SFILT_MASK                            0x01000000 // COOLCONF // stallGuard2 filter enable
#define TMC5160_SFILT_SHIFT                           24 // min.: 0, max.: 1, default: 0
#define TMC5160_DC_TIME_MASK                          0x03FF // DCCTRL // Upper PWM on time limit for commutation (DC_TIME * 1/f CLK ). Set slightly above effective blank time TBL.
#define TMC5160_DC_TIME_SHIFT                         0 // min.: 0, max.: 1023, default: 0
#define TMC5160_DC_SG_MASK                            0xFF0000 // DCCTRL // Max. PWM on time for step loss detection using dcStep stallGuard2 in dcStep mode. (DC_SG * 16/f CLK); Set slightly higher than DC_TIME/16; 0=disable
#define TMC5160_DC_SG_SHIFT                           16 // min.: 0, max.: 255, default: 0
#define TMC5160_SG_RESULT_MASK                        0x03FF // DRV_STATUS // Mechanical load measurement: The stallGuard2 result gives a means to measure mechanical motor load. A higher value means lower mechanical load. A value of 0 signals highest load. With optimum SGT setting, this is an indicator for a motor stall. The stall detection compares SG_RESULT to 0 in order to detect a stall. SG_RESULT is used as a base for coolStep operation, by comparing it to a programmable upper and a lower limit. It is not applicable in stealthChop mode. SG_RESULT is ALSO applicable when dcStep is active. stallGuard2 works best with microstep operation. Temperature measurement: In standstill, no stallGuard2 result can be obtained. SG_RESULT shows the chopper on-time for motor coil A instead. If the motor is moved to a determined microstep position at a certain current setting, a comparison of the chopper on-time can help to get a rough estimation of motor temperature. As the motor heats up, its coil resistance rises and the chopper on-time increases.
#define TMC5160_SG_RESULT_SHIFT                       0 // min.: 0, max.: 1023, default: 0
#define TMC5160_S2VSA_MASK                            0x1000 // DRV_STATUS // s2vsa
#define TMC5160_S2VSA_SHIFT                           12 // min.: 0, max.: 1, default: 0
#define TMC5160_S2VSB_MASK                            0x2000 // DRV_STATUS // s2vsb
#define TMC5160_S2VSB_SHIFT                           13 // min.: 0, max.: 1, default: 0
#define TMC5160_STEALTH_MASK                          0x4000 // DRV_STATUS // stealth
#define TMC5160_STEALTH_SHIFT                         14 // min.: 0, max.: 1, default: 0
#define TMC5160_FSACTIVE_MASK                         0x8000 // DRV_STATUS //
#define TMC5160_FSACTIVE_SHIFT                        15 // min.: 0, max.: 1, default: 0
#define TMC5160_CS_ACTUAL_MASK                        0x1F0000 // DRV_STATUS //
#define TMC5160_CS_ACTUAL_SHIFT                       16 // min.: 0, max.: 31, default: 0
#define TMC5160_STALLGUARD_MASK                       0x01000000 // DRV_STATUS //
#define TMC5160_STALLGUARD_SHIFT                      24 // min.: 0, max.: 1, default: 0
#define TMC5160_OT_MASK                               0x02000000 // DRV_STATUS //
#define TMC5160_OT_SHIFT                              25 // min.: 0, max.: 1, default: 0
#define TMC5160_OTPW_MASK                             0x04000000 // DRV_STATUS //
#define TMC5160_OTPW_SHIFT                            26 // min.: 0, max.: 1, default: 0
#define TMC5160_S2GA_MASK                             0x08000000 // DRV_STATUS //
#define TMC5160_S2GA_SHIFT                            27 // min.: 0, max.: 1, default: 0
#define TMC5160_S2GB_MASK                             0x10000000 // DRV_STATUS //
#define TMC5160_S2GB_SHIFT                            28 // min.: 0, max.: 1, default: 0
#define TMC5160_OLA_MASK                              0x20000000 // DRV_STATUS //
#define TMC5160_OLA_SHIFT                             29 // min.: 0, max.: 1, default: 0
#define TMC5160_OLB_MASK                              0x40000000 // DRV_STATUS //
#define TMC5160_OLB_SHIFT                             30 // min.: 0, max.: 1, default: 0
#define TMC5160_STST_MASK                             0x80000000 // DRV_STATUS //
#define TMC5160_STST_SHIFT                            31 // min.: 0, max.: 1, default: 0
#define TMC5160_PWM_OFS_MASK                          0xFF // PWMCONF // User defined PWM amplitude offset (0-255) related to full motor current (CS_ACTUAL=31) in stand still. (Reset default=30) When  using  automatic  scaling  (pwm_autoscale=1)  the value  is  used  for  initialization,  only.  The  autoscale function  starts  with  PWM_SCALE_AUTO=PWM_OFS  and finds  the  required  offset  to  yield  the  target  current automatically. PWM_OFS  =  0  will  disable  scaling  down  motor  current below  a  motor  specific  lower  measurement  threshold. This  setting  should  only  be  used  under  certain conditions, i.e.  when the power supply voltage can vary up  and  down  by  a  factor  of  two  or  more.  It  prevents the  motor  going  out  of  regulation,  but  it  also  prevents power down below the regulation limit. PWM_OFS > 0 allows automatic scaling to low PWM duty cycles  even  below  the  lower  regulation  threshold.  This allows  low  (standstill)  current  settings  based  on  the actual (hold) current scale (register IHOLD_IRUN).
#define TMC5160_PWM_OFS_SHIFT                         0 // min.: 0, max.: 255, default: 0
#define TMC5160_PWM_GRAD_MASK                         0xFF00 // PWMCONF // Velocity dependent gradient for PWM amplitude: PWM_GRAD * 256 / TSTEP This  value  is  added  to  PWM_AMPL  to  compensate  for the velocity-dependent motor back-EMF. With  automatic  scaling  (pwm_autoscale=1)  the  value  is used  for  first  initialization,  only.  Set  PWM_GRAD  to  the application  specific  value  (it  can  be  read  out  from PWM_GRAD_AUTO)  to  speed  up  the  automatic  tuning process.  An  approximate  value can be stored to  OTP  by programming OTP_PWM_GRAD.
#define TMC5160_PWM_GRAD_SHIFT                        8 // min.: 0, max.: 255, default: 0
#define TMC5160_PWM_FREQ_MASK                         0x030000 // PWMCONF // %00:   fPWM=2/1024 fCLK          %01:   fPWM=2/683 fCLK          %10:   fPWM=2/512 fCLK          %11:   fPWM=2/410 fCLK
#define TMC5160_PWM_FREQ_SHIFT                        16 // min.: 0, max.: 3, default: 0
#define TMC5160_PWM_AUTOSCALE_MASK                    0x040000 // PWMCONF //
#define TMC5160_PWM_AUTOSCALE_SHIFT                   18 // min.: 0, max.: 1, default: 0
#define TMC5160_PWM_AUTOGRAD_MASK                     0x080000 // PWMCONF //
#define TMC5160_PWM_AUTOGRAD_SHIFT                    19 // min.: 0, max.: 1, default: 0
#define TMC5160_FREEWHEEL_MASK                        0x300000 // PWMCONF // Stand still option when motor current setting is zero (I_HOLD=0). %00:   Normal operation %01:   Freewheeling %10:   Coil shorted using LS drivers %11:   Coil shorted using HS drivers
#define TMC5160_FREEWHEEL_SHIFT                       20 // min.: 0, max.: 3, default: 0
#define TMC5160_PWM_REG_MASK                          0x0F000000 // PWMCONF // User defined  maximum  PWM amplitude  change per  half wave when using pwm_autoscale=1. (1...15): 1: 0.5 increments (slowest regulation) 2: 1 increment (default with OTP2.1=1) 3: 1.5 increments 4: 2 increments ... 8: 4 increments (default with OTP2.1=0) ... 15: 7.5 increments (fastest regulation)
#define TMC5160_PWM_REG_SHIFT                         24 // min.: 0, max.: 15, default: 0
#define TMC5160_PWM_LIM_MASK                          0xF0000000 // PWMCONF // Limit  for  PWM_SCALE_AUTO  when  switching  back  from spreadCycle to stealthChop. This value defines  the upper limit  for  bits  7  to  4  of  the  automatic  current  control when switching back. It can be set to reduce the current jerk during mode change back to stealthChop. It does not limit PWM_GRAD or PWM_GRAD_AUTO offset. (Default = 12)
#define TMC5160_PWM_LIM_SHIFT                         28 // min.: 0, max.: 15, default: 0
#define TMC5160_PWM_SCALE_SUM_MASK                    0xFF // PWM_SCALE // Actual PWM amplitude scaler (255=max. Voltage) In voltage mode PWM, this value allows to detect a motor stall.
#define TMC5160_PWM_SCALE_SUM_SHIFT                   0 // min.: 0, max.: 255, default: 0
#define TMC5160_PWM_SCALE_AUTO_MASK                   0x01FF0000 // PWM_SCALE // 9 Bit signed offset added to the calculated PWM duty cycle. This is the result of the automatic amplitude regulation based on current measurement.
#define TMC5160_PWM_SCALE_AUTO_SHIFT                  16 // min.: -255, max.: 255, default: 0
#define TMC5160_PWM_OFS_AUTO_MASK                     0xFF // PWM_AUTO // Automatically determined offset value
#define TMC5160_PWM_OFS_AUTO_SHIFT                    0 // min.: 0, max.: 255, default: 0
#define TMC5160_PWM_GRAD_AUTO_MASK                    0xFF0000 // PWM_AUTO // Automatically determined offset value
#define TMC5160_PWM_GRAD_AUTO_SHIFT                   16 // min.: 0, max.: 255, default: 0
#define TMC5160_LOST_STEPS_MASK                       0x0FFFFF // LOST_STEPS // Number of input steps skipped due to higher load in dcStep operation, if step input does not stop when DC_OUT is low. This counter wraps around after 2^20 steps. Counts up or down depending on direction.
#define TMC5160_LOST_STEPS_SHIFT                      0 // min.: 0, max.: 1048575, default: 0

#endif /* TMC5160_FIELDS_H */

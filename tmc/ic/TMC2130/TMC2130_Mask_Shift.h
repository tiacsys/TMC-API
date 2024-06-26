/*******************************************************************************
* Copyright © 2019 TRINAMIC Motion Control GmbH & Co. KG
* (now owned by Analog Devices Inc.),
*
* Copyright © 2023 Analog Devices Inc. All Rights Reserved.
* This software is proprietary to Analog Devices, Inc. and its licensors.
*******************************************************************************/


#ifndef TMC2130_MASK_SHIFT_H
#define TMC2130_MASK_SHIFT_H

	// GCONF
	#define TMC2130_I_SCALE_ANALOG_MASK                   0x00000001  //
	#define TMC2130_I_SCALE_ANALOG_SHIFT                  0           // min: 0, max: 1, default: 0
	#define TMC2130_INTERNAL_RSENSE_MASK                  0x00000002  //
	#define TMC2130_INTERNAL_RSENSE_SHIFT                 1           // min: 0, max: 1, default: 0
	#define TMC2130_EN_PWM_MODE_MASK                      0x00000004  //
	#define TMC2130_EN_PWM_MODE_SHIFT                     2           // min: 0, max: 1, default: 0
	#define TMC2130_ENC_COMMUTATION_MASK                  0x00000008  //
	#define TMC2130_ENC_COMMUTATION_SHIFT                 3           // min: 0, max: 1, default: 0
	#define TMC2130_SHAFT_MASK                            0x00000010  //
	#define TMC2130_SHAFT_SHIFT                           4           // min: 0, max: 1, default: 0
	#define TMC2130_DIAG0_ERROR_ONLY_WITH_SD_MODE1_MASK   0x00000020  //
	#define TMC2130_DIAG0_ERROR_ONLY_WITH_SD_MODE1_SHIFT  5           // min: 0, max: 1, default: 0
	#define TMC2130_DIAG0_OTPW_ONLY_WITH_SD_MODE1_MASK    0x00000040  //
	#define TMC2130_DIAG0_OTPW_ONLY_WITH_SD_MODE1_SHIFT   6           // min: 0, max: 1, default: 0
	#define TMC2130_DIAG0_STALL_MASK                      0x00000080  //
	#define TMC2130_DIAG0_STALL_SHIFT                     7           // min: 0, max: 1, default: 0
	#define TMC2130_DIAG1_STALL_MASK                      0x00000100  //
	#define TMC2130_DIAG1_STALL_SHIFT                     8           // min: 0, max: 1, default: 0
	#define TMC2130_DIAG1_INDEX_MASK                      0x00000200  //
	#define TMC2130_DIAG1_INDEX_SHIFT                     9           // min: 0, max: 1, default: 0
	#define TMC2130_DIAG1_ONSTATE_MASK                    0x00000400  //
	#define TMC2130_DIAG1_ONSTATE_SHIFT                   10          // min: 0, max: 1, default: 0
	#define TMC2130_DIAG1_STEPS_SKIPPED_MASK              0x00000800  //
	#define TMC2130_DIAG1_STEPS_SKIPPED_SHIFT             11          // min: 0, max: 1, default: 0
	#define TMC2130_DIAG0_INT_PUSHPULL_MASK               0x00001000  //
	#define TMC2130_DIAG0_INT_PUSHPULL_SHIFT              12          // min: 0, max: 1, default: 0
	#define TMC2130_DIAG1_POSCOMP_PUSHPULL_MASK           0x00002000  //
	#define TMC2130_DIAG1_POSCOMP_PUSHPULL_SHIFT          13          // min: 0, max: 1, default: 0
	#define TMC2130_SMALL_HYSTERESIS_MASK                 0x00004000  //
	#define TMC2130_SMALL_HYSTERESIS_SHIFT                14          // min: 0, max: 1, default: 0
	#define TMC2130_STOP_ENABLE_MASK                      0x00008000  //
	#define TMC2130_STOP_ENABLE_SHIFT                     15          // min: 0, max: 1, default: 0
	#define TMC2130_DIRECT_MODE_MASK                      0x00010000  //
	#define TMC2130_DIRECT_MODE_SHIFT                     16          // min: 0, max: 1, default: 0
	#define TMC2130_TEST_MODE_MASK                        0x00020000  //
	#define TMC2130_TEST_MODE_SHIFT                       17          // min: 0, max: 1, default: 0
	// GSTAT
	#define TMC2130_RESET_MASK                            0x00000001  //
	#define TMC2130_RESET_SHIFT                           0           // min: 0, max: 1, default: 0
	#define TMC2130_DRV_ERR_MASK                          0x00000002  //
	#define TMC2130_DRV_ERR_SHIFT                         1           // min: 0, max: 1, default: 0
	#define TMC2130_UV_CP_MASK                            0x00000004  //
	#define TMC2130_UV_CP_SHIFT                           2           // min: 0, max: 1, default: 0
	// IOIN
	#define TMC2130_REFL_STEP_MASK                        0x00000001  // REFL_STEP
	#define TMC2130_REFL_STEP_SHIFT                       0           // min: 0, max: 1, default: 0
	#define TMC2130_REFR_DIR_MASK                         0x00000002  // REFR_DIR
	#define TMC2130_REFR_DIR_SHIFT                        1           // min: 0, max: 1, default: 0
	#define TMC2130_ENCB_DCEN_CFG4_MASK                   0x00000004  // ENCB_DCEN_CFG4
	#define TMC2130_ENCB_DCEN_CFG4_SHIFT                  2           // min: 0, max: 1, default: 0
	#define TMC2130_ENCA_DCIN_CFG5_MASK                   0x00000008  // ENCA_DCIN_CFG5
	#define TMC2130_ENCA_DCIN_CFG5_SHIFT                  3           // min: 0, max: 1, default: 0
	#define TMC2130_DRV_ENN_CFG6_MASK                     0x00000010  // DRV_ENN_CFG6
	#define TMC2130_DRV_ENN_CFG6_SHIFT                    4           // min: 0, max: 1, default: 0
	#define TMC2130_ENC_N_DCO_MASK                        0x00000020  // ENC_N_DCO
	#define TMC2130_ENC_N_DCO_SHIFT                       5           // min: 0, max: 1, default: 0
	#define TMC2130_VERSION_MASK                          0xFF000000  // VERSION: 0x11=first version of the IC; Identical numbers mean full digital compatibility.
	#define TMC2130_VERSION_SHIFT                         24          // min: 0, max: 255, default: 0
	// IHOLD_IRUN
	#define TMC2130_IHOLD_MASK                            0x0000001F  // Standstill current (0=1/32...31=32/32) In combination with stealthChop mode, setting IHOLD=0 allows to choose freewheeling or coil short circuit (passive braking) for motor stand still.
	#define TMC2130_IHOLD_SHIFT                           0           // min: 0, max: 31, default: 0
	#define TMC2130_IRUN_MASK                             0x00001F00  // Motor run current (0=1/32...31=32/32) Hint: Choose sense resistors in a way, that normal IRUN is 16 to 31 for best microstep performance.
	#define TMC2130_IRUN_SHIFT                            8           // min: 0, max: 31, default: 0
	#define TMC2130_IHOLDDELAY_MASK                       0x000F0000  // Controls the number of clock cycles for motor power down after standstill is detected (stst=1) and TPOWERDOWN has expired. The smooth transition avoids a motor jerk upon power down. 0:  instant power down 1..15:  Delay per current reduction step in multiple of 2^18 clocks
	#define TMC2130_IHOLDDELAY_SHIFT                      16          // min: 0, max: 15, default: 0
	// TPOWERDOWN
	#define TMC2130_TPOWERDOWN_MASK                       0x000000FF  // (Reset default=20) Sets the delay time from stand still (stst) detection to motor current power down. Time range is about 0 to 5.6 seconds. 0...((2^8)-1) * 2^18 tclk Attention: A minimum setting of 2 is required to allow automatic tuning of stealthChop PWM_OFFS_AUTO.
	#define TMC2130_TPOWERDOWN_SHIFT                      0           // min: 0, max: 255, default: 0
	// TSTEP
	#define TMC2130_TSTEP_MASK                            0x000FFFFF  // Actual measured time between two 1/256 microsteps derived from the step input frequency in units of 1/fCLK. Measured value is (2^20)-1 in case of overflow or stand still. The TSTEP related threshold uses a hysteresis of 1/16 of the compare value to compensate for jitter in the clock or the step frequency: (Txxx*15/16)-1 is the lower compare value for each TSTEP based comparison. This means, that the lower switching velocity equals the calculated setting, but the upper switching velocity is higher as defined by the hysteresis setting.
	#define TMC2130_TSTEP_SHIFT                           0           // min: 0, max: 1048575, default: 0
	// TPWMTHRS
	#define TMC2130_TPWMTHRS_MASK                         0x000FFFFF  // Sets the upper velocity for stealthChop voltage PWM mode.     For TSTEP = TPWMTHRS, stealthChop PWM mode is enabled, if configured. When the velocity exceeds the limit set by TPWMTHRS, the driver switches to spreadCycle. 0 = Disabled
	#define TMC2130_TPWMTHRS_SHIFT                        0           // min: 0, max: 1048575, default: 0
	// TCOOLTHRS
	#define TMC2130_TCOOLTHRS_MASK                        0x000FFFFF  // This is the lower threshold velocity for switching on smart energy coolStep and stallGuard feature. (unsigned) Set this parameter to disable coolStep at low speeds, where it cannot work reliably. The stop on stall function (enable with sg_stop when using internal motion controller) and the stall output signal become enabled when exceeding this velocity. In non-dcStep mode, it becomes disabled again once the velocity falls below this threshold. TCOOLTHRS = TSTEP = THIGH: - coolStep is enabled, if configured - stealthChop voltage PWM mode is disabled TCOOLTHRS = TSTEP - Stop on stall and stall output signal is enabled, if configured
	#define TMC2130_TCOOLTHRS_SHIFT                       0           // min: 0, max: 1048575, default: 0
	// THIGH
	#define TMC2130_THIGH_MASK                            0x000FFFFF  // This velocity setting allows velocity dependent switching into a different chopper mode and fullstepping to maximize torque. (unsigned) The stall detection feature becomes switched off for 2-3 electrical periods whenever passing THIGH threshold to compensate for the effect of switching modes. TSTEP = THIGH: - coolStep is disabled (motor runs with normal current scale) - stealthChop voltage PWM mode is disabled - If vhighchm is set, the chopper switches to chm=1 with TFD=0 (constant off time with slow decay, only). - chopSync2 is switched off (SYNC=0) - If vhighfs is set, the motor operates in fullstep mode and the stall detection becomes switched over to dcStep stall detection.
	#define TMC2130_THIGH_SHIFT                           0           // min: 0, max: 1048575, default: 0
	// XDIRECT
	//#define TMC2130_DIRECT_MODE_MASK                      0x00FFFFFF  // 0: Normal operation; 1: Directly SPI driven motor current; Direct mode operation: XDIRECT specifies Motor coil currents and polarity directly programmed via the serial interface. Use signed, twos complement numbers. Coil A current (bits 8..0) (signed); Coil B current (bits 24..16) (signed); Range: +-248 for normal operation, up to +-255 with stealthChop; In this mode, the current is scaled by IHOLD setting. Velocity based current regulation of voltage PWM is not available in this mode. The automatic voltage PWM current regulation will work only for low stepper motor velocities. dcStep is not available in this mode. coolStep and stallGuard only can be used, when additionally supplying a STEP signal. This will also enable automatic current scaling.
	//#define TMC2130_DIRECT_MODE_SHIFT                     0           // min: -255, max: 255, default: 0
	// VDCMIN
	#define TMC2130_VDCMIN_MASK                           0x07FFFFFF  // Automatic commutation dcStep becomes enabled above velocity VDCMIN (unsigned) (only when using internal ramp generator, not for STEP/DIR interface - in STEP/DIR mode, dcStep becomes enabled by the external signal DCEN) In this mode, the actual position is determined by the sensorless motor commutation and becomes fed back to XACTUAL. In case the motor becomes heavily loaded, VDCMIN also is used as the minimum step velocity. Activate stop on stall (sg_stop) to detect step loss. 0: Disable, dcStep off |VACT| = VDCMIN = 256: - Triggers the same actions as exceeding THIGH setting. - Switches on automatic commutation dcStep Hint: Also set DCCTRL parameters in order to operate dcStep. (Only bits 22 - 8 are used for value and for comparison)
	#define TMC2130_VDCMIN_SHIFT                          0           // min: 0, max: 8388607, default: 0
	// MSLUTSEL
	#define TMC2130_W0_MASK                               0x00000003  // LUT width select from ofs0 to ofs(X1-1)
	#define TMC2130_W0_SHIFT                              0           // min: 0, max: 3, default: 0
	#define TMC2130_W1_MASK                               0x0000000C  // LUT width select from ofs(X1) to ofs(X2-1)
	#define TMC2130_W1_SHIFT                              2           // min: 0, max: 3, default: 0
	#define TMC2130_W2_MASK                               0x00000030  // LUT width select from ofs(X2) to ofs(X3-1)
	#define TMC2130_W2_SHIFT                              4           // min: 0, max: 3, default: 0
	#define TMC2130_W3_MASK                               0x000000C0  // LUT width select from ofs(X3) to ofs255
	#define TMC2130_W3_SHIFT                              6           // min: 0, max: 3, default: 0
	// MSLUTSEL
	#define TMC2130_X1_MASK                               0x0000FF00  // LUT segment 1 start
	#define TMC2130_X1_SHIFT                              8           // min: 0, max: 255, default: 0
	#define TMC2130_X2_MASK                               0x00FF0000  // LUT segment 2 start
	#define TMC2130_X2_SHIFT                              16          // min: 0, max: 255, default: 0
	#define TMC2130_X3_MASK                               0xFF000000  // LUT segment 3 start
	#define TMC2130_X3_SHIFT                              24          // min: 0, max: 255, default: 0
	// MSLUTSTART
	#define TMC2130_START_SIN_MASK                        0x000000FF  // Absolute current at microstep table entry 0.
	#define TMC2130_START_SIN_SHIFT                       0           // min: 0, max: 255, default: 0
	#define TMC2130_START_SIN90_MASK                      0x00FF0000  // Absolute current for microstep table entry at positions 256.
	#define TMC2130_START_SIN90_SHIFT                     16          // min: 0, max: 255, default: 0
	// MSCNT
	#define TMC2130_MSCNT_MASK                            0x000003FF  // Microstep counter. Indicates actual position in the microstep table for CUR_A. CUR_B uses an offset of 256 (2 phase motor). Hint: Move to a position where MSCNT is zero before re-initializing MSLUTSTART or MSLUT and MSLUTSEL.
	#define TMC2130_MSCNT_SHIFT                           0           // min: 0, max: 1023, default: 0
	// MSCURACT
	#define TMC2130_CUR_A_MASK                            0x000001FF  // Actual microstep current for motor phase A as read from MSLUT (not scaled by current)
	#define TMC2130_CUR_A_SHIFT                           0           // min: -256, max: 255, default: 0
	#define TMC2130_CUR_B_MASK                            0x01FF0000  // Actual microstep current for motor phase B as read from MSLUT (not scaled by current)
	#define TMC2130_CUR_B_SHIFT                           16          // min: -256, max: 255, default: 0
	// CHOPCONF
	#define TMC2130_TOFF_MASK                             0x0000000F  // off time and driver enable
	#define TMC2130_TOFF_SHIFT                            0           // min: 0, max: 15, default: 0
	#define TMC2130_HSTRT_MASK                            0x00000070  // [chm = 0] hysteresis start value added to HEND; Attention: Effective HEND+HSTRT less than or equal to 16. Hint: Hysteresis decrement is done each 16 clocks
	#define TMC2130_HSTRT_SHIFT                           4           // min: 0, max: 7, default: 0
	#define TMC2130_TFD_ALL_MASK                          0x00000070  // [chm = 1] fast decay time setting
	#define TMC2130_TFD_ALL_SHIFT                         4           // min: 0, max: 7, default: 0
	#define TMC2130_HEND_MASK                             0x00000780  // [chm = 0] hysteresis low value
	#define TMC2130_HEND_SHIFT                            7           // min: 0, max: 15, default: 0
	#define TMC2130_OFFSET_MASK                           0x00000780  // [chm = 1] sine wave offset
	#define TMC2130_OFFSET_SHIFT                          7           // min: 0, max: 15, default: 0
	#define TMC2130_TFD_3_MASK                            0x00000800  // MSB of fast decay time setting
	#define TMC2130_TFD_3_SHIFT                           11          // min: 0, max: 1, default: 0
	#define TMC2130_DISFDCC_MASK                          0x00001000  // fast decay mode
	#define TMC2130_DISFDCC_SHIFT                         12          // min: 0, max: 1, default: 0
	#define TMC2130_RNDTF_MASK                            0x00002000  // random TOFF time
	#define TMC2130_RNDTF_SHIFT                           13          // min: 0, max: 1, default: 0
	#define TMC2130_CHM_MASK                              0x00004000  // chopper mode
	#define TMC2130_CHM_SHIFT                             14          // min: 0, max: 1, default: 0
	#define TMC2130_TBL_MASK                              0x00018000  // blank time select
	#define TMC2130_TBL_SHIFT                             15          // min: 0, max: 3, default: 0
	#define TMC2130_VSENSE_MASK                           0x00020000  // sense resistor voltage based current scaling
	#define TMC2130_VSENSE_SHIFT                          17          // min: 0, max: 1, default: 0
	#define TMC2130_VHIGHFS_MASK                          0x00040000  // high velocity fullstep selection
	#define TMC2130_VHIGHFS_SHIFT                         18          // min: 0, max: 1, default: 0
	#define TMC2130_VHIGHCHM_MASK                         0x00080000  // high velocity chopper mode
	#define TMC2130_VHIGHCHM_SHIFT                        19          // min: 0, max: 1, default: 0
	#define TMC2130_SYNC_MASK                             0x00F00000  // PWM synchronization clock
	#define TMC2130_SYNC_SHIFT                            20          // min: 0, max: 15, default: 0
	#define TMC2130_MRES_MASK                             0x0F000000  // Micro step resolution; The resolution gives the number of microstep entries per sine quarter wave. The driver automatically uses microstep positions which result in a symmetrical wave, when choosing a lower microstep resolution.
	#define TMC2130_MRES_SHIFT                            24          // min: 0, max: 8, default: 0
	#define TMC2130_INTPOL_MASK                           0x10000000  // interpolation to 256 microsteps
	#define TMC2130_INTPOL_SHIFT                          28          // min: 0, max: 1, default: 0
	#define TMC2130_DEDGE_MASK                            0x20000000  // enable double edge step pulses
	#define TMC2130_DEDGE_SHIFT                           29          // min: 0, max: 1, default: 0
	#define TMC2130_DISS2G_MASK                           0x40000000  // short to GND protection disable
	#define TMC2130_DISS2G_SHIFT                          30          // min: 0, max: 1, default: 0
	// COOLCONF
	#define TMC2130_SEMIN_MASK                            0x0000000F  // minimum stallGuard2 value - If the stallGuard2 result falls below SEMIN*32, the motor current becomes increased to reduce motor load angle. 0: smart current control coolStep off
	#define TMC2130_SEMIN_SHIFT                           0           // min: 0, max: 15, default: 0
	#define TMC2130_SEUP_MASK                             0x00000060  // Current increment steps per measured stallGuard2 value
	#define TMC2130_SEUP_SHIFT                            5           // min: 0, max: 3, default: 0
	#define TMC2130_SEMAX_MASK                            0x00000F00  // stallGuard2 hysteresis value - If the stallGuard2 result is equal to or above (SEMIN+SEMAX+1)*32, the motor current becomes decreased to save energy.
	#define TMC2130_SEMAX_SHIFT                           8           // min: 0, max: 15, default: 0
	#define TMC2130_SEDN_MASK                             0x00006000  // Current down step speed; For each n stallGuard2 values decrease by one
	#define TMC2130_SEDN_SHIFT                            13          // min: 0, max: 3, default: 0
	#define TMC2130_SEIMIN_MASK                           0x00008000  // minimum current for smart current control
	#define TMC2130_SEIMIN_SHIFT                          15          // min: 0, max: 1, default: 0
	#define TMC2130_SGT_MASK                              0x007F0000  // stallGuard2 threshold value This signed value controls stallGuard2 level for stall output and sets the optimum measurement range for readout. A lower value gives a higher sensitivity. Zero is the starting value working with most motors. A higher value makes stallGuard2 less sensitive and requires more torque to indicate a stall.
	#define TMC2130_SGT_SHIFT                             16          // min: -64, max: 63, default: 0
	#define TMC2130_SFILT_MASK                            0x01000000  // stallGuard2 filter enable
	#define TMC2130_SFILT_SHIFT                           24          // min: 0, max: 1, default: 0
	// DCCTRL
	#define TMC2130_DC_TIME_MASK                          0x000003FF  // Upper PWM on time limit for commutation (DC_TIME * 1/f CLK ). Set slightly above effective blank time TBL.
	#define TMC2130_DC_TIME_SHIFT                         0           // min: 0, max: 1023, default: 0
	#define TMC2130_DC_SG_MASK                            0x00FF0000  // Max. PWM on time for step loss detection using dcStep stallGuard2 in dcStep mode. (DC_SG * 16/f CLK); Set slightly higher than DC_TIME/16; 0=disable
	#define TMC2130_DC_SG_SHIFT                           16          // min: 0, max: 255, default: 0
	// DRV_STATUS
	#define TMC2130_SG_RESULT_MASK                        0x000003FF  // Mechanical load measurement: The stallGuard2 result gives a means to measure mechanical motor load. A higher value means lower mechanical load. A value of 0 signals highest load. With optimum SGT setting, this is an indicator for a motor stall. The stall detection compares SG_RESULT to 0 in order to detect a stall. SG_RESULT is used as a base for coolStep operation, by comparing it to a programmable upper and a lower limit. It is not applicable in stealthChop mode. SG_RESULT is ALSO applicable when dcStep is active. stallGuard2 works best with microstep operation. Temperature measurement: In standstill, no stallGuard2 result can be obtained. SG_RESULT shows the chopper on-time for motor coil A instead. If the motor is moved to a determined microstep position at a certain current setting, a comparison of the chopper on-time can help to get a rough estimation of motor temperature. As the motor heats up, its coil resistance rises and the chopper on-time increases.
	#define TMC2130_SG_RESULT_SHIFT                       0           // min: 0, max: 1023, default: 0
	#define TMC2130_FSACTIVE_MASK                         0x00008000  // Full step active indicator
	#define TMC2130_FSACTIVE_SHIFT                        15          // min: 0, max: 1, default: 0
	#define TMC2130_CS_ACTUAL_MASK                        0x001F0000  // Actual current control scaling, for monitoring smart energy current scaling controlled via settings in register COOLCONF, or for monitoring the function of the automatic current scaling.
	#define TMC2130_CS_ACTUAL_SHIFT                       16          // min: 0, max: 31, default: 0
	#define TMC2130_STALLGUARD_MASK                       0x01000000  //
	#define TMC2130_STALLGUARD_SHIFT                      24          // min: 0, max: 1, default: 0
	#define TMC2130_OT_MASK                               0x02000000  //
	#define TMC2130_OT_SHIFT                              25          // min: 0, max: 1, default: 0
	#define TMC2130_OTPW_MASK                             0x04000000  //
	#define TMC2130_OTPW_SHIFT                            26          // min: 0, max: 1, default: 0
	#define TMC2130_S2GA_MASK                             0x08000000  //
	#define TMC2130_S2GA_SHIFT                            27          // min: 0, max: 1, default: 0
	#define TMC2130_S2GB_MASK                             0x10000000  //
	#define TMC2130_S2GB_SHIFT                            28          // min: 0, max: 1, default: 0
	#define TMC2130_OLA_MASK                              0x20000000  //
	#define TMC2130_OLA_SHIFT                             29          // min: 0, max: 1, default: 0
	#define TMC2130_OLB_MASK                              0x40000000  //
	#define TMC2130_OLB_SHIFT                             30          // min: 0, max: 1, default: 0
	#define TMC2130_STST_MASK                             0x80000000  //
	#define TMC2130_STST_SHIFT                            31          // min: 0, max: 1, default: 0
	// PWMCONF
	#define TMC2130_PWM_AMPL_MASK                         0x000000FF  // User defined PWM amplitude offset (0-255) The resulting amplitude (limited to 0-255) is: PWM_AMPL + PWM_GRAD * 256 / TSTEP
	#define TMC2130_PWM_AMPL_SHIFT                        0           // min: 0, max: 255, default: 0
	#define TMC2130_PWM_GRAD_MASK                         0x0000FF00  // Velocity dependent gradient for PWM amplitude: PWM_GRAD * 256 / TSTEP is added to PWM_AMPL
	#define TMC2130_PWM_GRAD_SHIFT                        8           // min: 0, max: 255, default: 0
	#define TMC2130_PWM_FREQ_MASK                         0x00030000  // PWM frequency selection
	#define TMC2130_PWM_FREQ_SHIFT                        16          // min: 0, max: 3, default: 0
	#define TMC2130_PWM_AUTOSCALE_MASK                    0x00040000  // PWM automatic amplitude scaling
	#define TMC2130_PWM_AUTOSCALE_SHIFT                   18          // min: 0, max: 1, default: 0
	#define TMC2130_PWM_SYMMETRIC_MASK                    0x00080000  // Force symmetric PWM
	#define TMC2130_PWM_SYMMETRIC_SHIFT                   19          // min: 0, max: 1, default: 0
	#define TMC2130_FREEWHEEL_MASK                        0x00300000  // Allows different standstill modes
	#define TMC2130_FREEWHEEL_SHIFT                       20          // min: 0, max: 3, default: 0
	// PWM_SCALE
	#define TMC2130_PWM_SCALE_MASK                        0x000000FF  // Actual PWM amplitude scaler (255=max. Voltage) In voltage mode PWM, this value allows to detect a motor stall.
	#define TMC2130_PWM_SCALE_SHIFT                       0           // min: 0, max: 255, default: 0
	// ENCM_CTRL
	#define TMC2130_INV_MASK                              0x00000001  //
	#define TMC2130_INV_SHIFT                             0           // min: 0, max: 1, default: 0
	#define TMC2130_MAXSPEED_MASK                         0x00000002  //
	#define TMC2130_MAXSPEED_SHIFT                        1           // min: 0, max: 1, default: 0
	// LOST_STEPS
	#define TMC2130_LOST_STEPS_MASK                       0x000FFFFF  // Number of input steps skipped due to higher load in dcStep operation, if step input does not stop when DC_OUT is low. This counter wraps around after 2^20 steps. Counts up or down depending on direction.
	#define TMC2130_LOST_STEPS_SHIFT                      0           // min: 0, max: 1048575, default: 0

#endif /* TMC2130_MASK_SHIFT_H */

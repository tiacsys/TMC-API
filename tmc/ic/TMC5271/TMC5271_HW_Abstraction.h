/*******************************************************************************
* Copyright © 2019 TRINAMIC Motion Control GmbH & Co. KG
* (now owned by Analog Devices Inc.),
*
* Copyright © 2023 Analog Devices Inc. All Rights Reserved.
* This software is proprietary to Analog Devices, Inc. and its licensors.
*******************************************************************************/

#ifndef TMC5271_HW_ABSTRACTION
#define TMC5271_HW_ABSTRACTION


// Constants

#define TMC5271_REGISTER_COUNT   128
#define TMC5271_MOTORS           1
#define TMC5271_WRITE_BIT        0x80
#define TMC5271_ADDRESS_MASK     0x7F
#define TMC5271_MAX_VELOCITY     8388096
#define TMC5271_MAX_ACCELERATION 65535

// Ramp modes (Register TMC5271_RAMPMODE)

#define TMC5271_MODE_POSITION  0
#define TMC5271_MODE_VELPOS    1
#define TMC5271_MODE_VELNEG    2
#define TMC5271_MODE_HOLD      3

// Registers in TMC5271

#define TMC5271_GCONF             0x00
#define TMC5271_GSTAT             0x01
#define TMC5271_IFCNT             0x02
#define TMC5271_SLAVECONF         0x03
#define TMC5271_IOIN              0x04
#define TMC5271_DRV_CONF          0x05
#define TMC5271_GLOBAL_SCALER     0x06
#define TMC5271_RAMPMODE          0x07
#define TMC5271_MSLUT_ADDR        0x08
#define TMC5271_MSLUT_DATA        0x09
#define TMC5271_X_COMPARE         0x10
#define TMC5271_X_COMPARE_REPEAT  0x11
#define TMC5271_IHOLD_IRUN        0x12
#define TMC5271_TPOWERDOWN        0x13
#define TMC5271_TSTEP             0x14
#define TMC5271_TPWMTHRS          0x15
#define TMC5271_TCOOLTHRS         0x16
#define TMC5271_THIGH             0x17
#define TMC5271_XACTUAL           0x18
#define TMC5271_VACTUAL           0x19
#define TMC5271_AACTUAL           0x1A
#define TMC5271_VSTART            0x1B
#define TMC5271_A1                0x1C
#define TMC5271_V1                0x1D
#define TMC5271_A2                0x1E
#define TMC5271_V2                0x1F
#define TMC5271_AMAX              0x20
#define TMC5271_VMAX              0x21
#define TMC5271_DMAX              0x22
#define TMC5271_D2                0x23
#define TMC5271_D1                0x24
#define TMC5271_VSTOP             0x25
#define TMC5271_TVMAX             0x26
#define TMC5271_TZEROWAIT         0x27
#define TMC5271_XTARGET           0x28
#define TMC5271_VDCMIN            0x29
#define TMC5271_SW_MODE           0x2A
#define TMC5271_RAMP_STAT         0x2B
#define TMC5271_XLATCH            0x2C
#define TMC5271_POSITION_PI_CTRL  0x2D
#define TMC5271_X_ENC             0x2E
#define TMC5271_ENCMODE           0x2F
#define TMC5271_ENC_CONST         0x30
#define TMC5271_ENC_STATUS        0x31
#define TMC5271_ENC_LATCH         0x32
#define TMC5271_ENC_DEVIATION     0x33
#define TMC5271_VIRTUAL_STOP_L    0x34
#define TMC5271_VIRTUAL_STOP_R    0x35
#define TMC5271_MSCNT             0x36
#define TMC5271_MSCURACT          0x37
#define TMC5271_CHOPCONF          0x38
#define TMC5271_COOLCONF          0x39
#define TMC5271_DCCTRL            0x3A
#define TMC5271_DRV_STATUS        0x3B
#define TMC5271_PWMCONF           0x3C
#define TMC5271_PWM_SCALE         0x3D
#define TMC5271_PWM_AUTO          0x3E
#define TMC5271_SG4_THRS          0x3F
#define TMC5271_SG4_RESULT        0x40
#define TMC5271_SG4_IND           0x41

// Register fields in TMC5271

#define TMC5271_EN_PWM_MODE_MASK                       0x00000001
#define TMC5271_EN_PWM_MODE_SHIFT                      0
#define TMC5271_EN_PWM_MODE_FIELD                      ((RegisterField) { TMC5271_EN_PWM_MODE_MASK, TMC5271_EN_PWM_MODE_SHIFT, TMC5271_GCONF, false })
#define TMC5271_MULTISTEP_FILT_MASK                    0x00000002
#define TMC5271_MULTISTEP_FILT_SHIFT                   1
#define TMC5271_MULTISTEP_FILT_FIELD                   ((RegisterField) { TMC5271_MULTISTEP_FILT_MASK, TMC5271_MULTISTEP_FILT_SHIFT, TMC5271_GCONF, false })
#define TMC5271_SHAFT_MASK                             0x00000004
#define TMC5271_SHAFT_SHIFT                            2
#define TMC5271_SHAFT_FIELD                            ((RegisterField) { TMC5271_SHAFT_MASK, TMC5271_SHAFT_SHIFT, TMC5271_GCONF, false })
#define TMC5271_DIAG0_ERROR_MASK                       0x00000008
#define TMC5271_DIAG0_ERROR_SHIFT                      3
#define TMC5271_DIAG0_ERROR_FIELD                      ((RegisterField) { TMC5271_DIAG0_ERROR_MASK, TMC5271_DIAG0_ERROR_SHIFT, TMC5271_GCONF, false })
#define TMC5271_DIAG0_OTPW_MASK                        0x00000010
#define TMC5271_DIAG0_OTPW_SHIFT                       4
#define TMC5271_DIAG0_OTPW_FIELD                       ((RegisterField) { TMC5271_DIAG0_OTPW_MASK, TMC5271_DIAG0_OTPW_SHIFT, TMC5271_GCONF, false })
#define TMC5271_DIAG0_STALL_STEP_MASK                  0x00000020
#define TMC5271_DIAG0_STALL_STEP_SHIFT                 5
#define TMC5271_DIAG0_STALL_STEP_FIELD                 ((RegisterField) { TMC5271_DIAG0_STALL_STEP_MASK, TMC5271_DIAG0_STALL_STEP_SHIFT, TMC5271_GCONF, false })
#define TMC5271_DIAG1_STALL_DIR_MASK                   0x00000040
#define TMC5271_DIAG1_STALL_DIR_SHIFT                  6
#define TMC5271_DIAG1_STALL_DIR_FIELD                  ((RegisterField) { TMC5271_DIAG1_STALL_DIR_MASK, TMC5271_DIAG1_STALL_DIR_SHIFT, TMC5271_GCONF, false })
#define TMC5271_DIAG1_INDEX_MASK                       0x00000080
#define TMC5271_DIAG1_INDEX_SHIFT                      7
#define TMC5271_DIAG1_INDEX_FIELD                      ((RegisterField) { TMC5271_DIAG1_INDEX_MASK, TMC5271_DIAG1_INDEX_SHIFT, TMC5271_GCONF, false })
#define TMC5271_DIAG0_INT_PUSHPULL_MASK                0x00000100
#define TMC5271_DIAG0_INT_PUSHPULL_SHIFT               8
#define TMC5271_DIAG0_INT_PUSHPULL_FIELD               ((RegisterField) { TMC5271_DIAG0_INT_PUSHPULL_MASK, TMC5271_DIAG0_INT_PUSHPULL_SHIFT, TMC5271_GCONF, false })
#define TMC5271_DIAG1_POSCOMP_PUSHPULL_MASK            0x00000200
#define TMC5271_DIAG1_POSCOMP_PUSHPULL_SHIFT           9
#define TMC5271_DIAG1_POSCOMP_PUSHPULL_FIELD           ((RegisterField) { TMC5271_DIAG1_POSCOMP_PUSHPULL_MASK, TMC5271_DIAG1_POSCOMP_PUSHPULL_SHIFT, TMC5271_GCONF, false })
#define TMC5271_SMALL_HYSTERESIS_MASK                  0x00000400
#define TMC5271_SMALL_HYSTERESIS_SHIFT                 10
#define TMC5271_SMALL_HYSTERESIS_FIELD                 ((RegisterField) { TMC5271_SMALL_HYSTERESIS_MASK, TMC5271_SMALL_HYSTERESIS_SHIFT, TMC5271_GCONF, false })
#define TMC5271_STOP_ENABLE_MASK                       0x00000800
#define TMC5271_STOP_ENABLE_SHIFT                      11
#define TMC5271_STOP_ENABLE_FIELD                      ((RegisterField) { TMC5271_STOP_ENABLE_MASK, TMC5271_STOP_ENABLE_SHIFT, TMC5271_GCONF, false })
#define TMC5271_DIRECT_MODE_MASK                       0x00001000
#define TMC5271_DIRECT_MODE_SHIFT                      12
#define TMC5271_DIRECT_MODE_FIELD                      ((RegisterField) { TMC5271_DIRECT_MODE_MASK, TMC5271_DIRECT_MODE_SHIFT, TMC5271_GCONF, false })
#define TMC5271_SD_MASK                                0x00002000
#define TMC5271_SD_SHIFT                               13
#define TMC5271_SD_FIELD                               ((RegisterField) { TMC5271_SD_MASK, TMC5271_SD_SHIFT, TMC5271_GCONF, false })
#define TMC5271_DRV_ENN_MASK                           0x00004000
#define TMC5271_DRV_ENN_SHIFT                          14
#define TMC5271_DRV_ENN_FIELD                          ((RegisterField) { TMC5271_DRV_ENN_MASK, TMC5271_DRV_ENN_SHIFT, TMC5271_GCONF, false })
#define TMC5271_QSC_STS_ENA_MASK                       0x00008000
#define TMC5271_QSC_STS_ENA_SHIFT                      15
#define TMC5271_QSC_STS_ENA_FIELD                      ((RegisterField) { TMC5271_QSC_STS_ENA_MASK, TMC5271_QSC_STS_ENA_SHIFT, TMC5271_GCONF, false })
#define TMC5271_DIAG0_SEL_NERROR_RAMP_MASK             0x20000000
#define TMC5271_DIAG0_SEL_NERROR_RAMP_SHIFT            29
#define TMC5271_DIAG0_SEL_NERROR_RAMP_FIELD            ((RegisterField) { TMC5271_DIAG0_SEL_NERROR_RAMP_MASK, TMC5271_DIAG0_SEL_NERROR_RAMP_SHIFT, TMC5271_GCONF, false })
#define TMC5271_DIAG1_SEL_NSTALLINDEX_XCOMP_MASK       0x40000000
#define TMC5271_DIAG1_SEL_NSTALLINDEX_XCOMP_SHIFT      30
#define TMC5271_DIAG1_SEL_NSTALLINDEX_XCOMP_FIELD      ((RegisterField) { TMC5271_DIAG1_SEL_NSTALLINDEX_XCOMP_MASK, TMC5271_DIAG1_SEL_NSTALLINDEX_XCOMP_SHIFT, TMC5271_GCONF, false })
#define TMC5271_RESET_MASK                             0x00000001
#define TMC5271_RESET_SHIFT                            0
#define TMC5271_RESET_FIELD                            ((RegisterField) { TMC5271_RESET_MASK, TMC5271_RESET_SHIFT, TMC5271_GSTAT, false })
#define TMC5271_DRV_ERR_MASK                           0x00000002
#define TMC5271_DRV_ERR_SHIFT                          1
#define TMC5271_DRV_ERR_FIELD                          ((RegisterField) { TMC5271_DRV_ERR_MASK, TMC5271_DRV_ERR_SHIFT, TMC5271_GSTAT, false })
#define TMC5271_UV_LDO_MASK                            0x00000004
#define TMC5271_UV_LDO_SHIFT                           2
#define TMC5271_UV_LDO_FIELD                           ((RegisterField) { TMC5271_UV_LDO_MASK, TMC5271_UV_LDO_SHIFT, TMC5271_GSTAT, false })
#define TMC5271_REGISTER_RESET_MASK                    0x00000008
#define TMC5271_REGISTER_RESET_SHIFT                   3
#define TMC5271_REGISTER_RESET_FIELD                   ((RegisterField) { TMC5271_REGISTER_RESET_MASK, TMC5271_REGISTER_RESET_SHIFT, TMC5271_GSTAT, false })
#define TMC5271_VM_UVLO_MASK                           0x00000010
#define TMC5271_VM_UVLO_SHIFT                          4
#define TMC5271_VM_UVLO_FIELD                          ((RegisterField) { TMC5271_VM_UVLO_MASK, TMC5271_VM_UVLO_SHIFT, TMC5271_GSTAT, false })
#define TMC5271_IFCNT_MASK                             0x000000FF
#define TMC5271_IFCNT_SHIFT                            0
#define TMC5271_IFCNT_FIELD                            ((RegisterField) { TMC5271_IFCNT_MASK, TMC5271_IFCNT_SHIFT, TMC5271_IFCNT, false })
#define TMC5271_SLAVEADDR_MASK                         0x000000FF
#define TMC5271_SLAVEADDR_SHIFT                        0
#define TMC5271_SLAVEADDR_FIELD                        ((RegisterField) { TMC5271_SLAVEADDR_MASK, TMC5271_SLAVEADDR_SHIFT, TMC5271_SLAVECONF, false })
#define TMC5271_SENDDELAY_MASK                         0x00000F00
#define TMC5271_SENDDELAY_SHIFT                        8
#define TMC5271_SENDDELAY_FIELD                        ((RegisterField) { TMC5271_SENDDELAY_MASK, TMC5271_SENDDELAY_SHIFT, TMC5271_SLAVECONF, false })
#define TMC5271_ADC_TEMPERATURE_MASK                   0x000001FE
#define TMC5271_ADC_TEMPERATURE_SHIFT                  1
#define TMC5271_ADC_TEMPERATURE_FIELD                  ((RegisterField) { TMC5271_ADC_TEMPERATURE_MASK, TMC5271_ADC_TEMPERATURE_SHIFT, TMC5271_IOIN, false })
#define TMC5271_ADC_EN_MASK                            0x00000200
#define TMC5271_ADC_EN_SHIFT                           9
#define TMC5271_ADC_EN_FIELD                           ((RegisterField) { TMC5271_ADC_EN_MASK, TMC5271_ADC_EN_SHIFT, TMC5271_IOIN, false })
#define TMC5271_SEL_OSCILLATOR_MASK                    0x00000800
#define TMC5271_SEL_OSCILLATOR_SHIFT                   11
#define TMC5271_SEL_OSCILLATOR_FIELD                   ((RegisterField) { TMC5271_SEL_OSCILLATOR_MASK, TMC5271_SEL_OSCILLATOR_SHIFT, TMC5271_IOIN, false })
#define TMC5271_EXT_RES_DET_MASK                       0x00001000
#define TMC5271_EXT_RES_DET_SHIFT                      12
#define TMC5271_EXT_RES_DET_FIELD                      ((RegisterField) { TMC5271_EXT_RES_DET_MASK, TMC5271_EXT_RES_DET_SHIFT, TMC5271_IOIN, false })
#define TMC5271_OUTPUT_MASK                            0x00002000
#define TMC5271_OUTPUT_SHIFT                           13
#define TMC5271_OUTPUT_FIELD                           ((RegisterField) { TMC5271_OUTPUT_MASK, TMC5271_OUTPUT_SHIFT, TMC5271_IOIN, false })
#define TMC5271_QSC_STATUS_MASK                        0x00008000
#define TMC5271_QSC_STATUS_SHIFT                       15
#define TMC5271_QSC_STATUS_FIELD                       ((RegisterField) { TMC5271_QSC_STATUS_MASK, TMC5271_QSC_STATUS_SHIFT, TMC5271_IOIN, false })
#define TMC5271_SILICON_RV_MASK                        0x00070000
#define TMC5271_SILICON_RV_SHIFT                       16
#define TMC5271_SILICON_RV_FIELD                       ((RegisterField) { TMC5271_SILICON_RV_MASK, TMC5271_SILICON_RV_SHIFT, TMC5271_IOIN, false })
#define TMC5271_VERSION_MASK                           0xFF000000
#define TMC5271_VERSION_SHIFT                          24
#define TMC5271_VERSION_FIELD                          ((RegisterField) { TMC5271_VERSION_MASK, TMC5271_VERSION_SHIFT, TMC5271_IOIN, false })
#define TMC5271_FSR_MASK                               0x00000003
#define TMC5271_FSR_SHIFT                              0
#define TMC5271_FSR_FIELD                              ((RegisterField) { TMC5271_FSR_MASK, TMC5271_FSR_SHIFT, TMC5271_DRV_CONF, false })
#define TMC5271_FSR_IREF_MASK                          0x0000000C
#define TMC5271_FSR_IREF_SHIFT                         2
#define TMC5271_FSR_IREF_FIELD                         ((RegisterField) { TMC5271_FSR_IREF_MASK, TMC5271_FSR_IREF_SHIFT, TMC5271_DRV_CONF, false })
#define TMC5271_EN_EMERGENCY_DISABLE_MASK              0x00000010
#define TMC5271_EN_EMERGENCY_DISABLE_SHIFT             4
#define TMC5271_EN_EMERGENCY_DISABLE_FIELD             ((RegisterField) { TMC5271_EN_EMERGENCY_DISABLE_MASK, TMC5271_EN_EMERGENCY_DISABLE_SHIFT, TMC5271_DRV_CONF, false })
#define TMC5271_STANDSTILL_TIME_MASK                   0x00070000
#define TMC5271_STANDSTILL_TIME_SHIFT                  16
#define TMC5271_STANDSTILL_TIME_FIELD                  ((RegisterField) { TMC5271_STANDSTILL_TIME_MASK, TMC5271_STANDSTILL_TIME_SHIFT, TMC5271_DRV_CONF, false })
#define TMC5271_GLOBALSCALER_A_MASK                    0x000000FF
#define TMC5271_GLOBALSCALER_A_SHIFT                   0
#define TMC5271_GLOBALSCALER_A_FIELD                   ((RegisterField) { TMC5271_GLOBALSCALER_A_MASK, TMC5271_GLOBALSCALER_A_SHIFT, TMC5271_GLOBAL_SCALER, false })
#define TMC5271_GLOBALSCALER_B_MASK                    0x0000FF00
#define TMC5271_GLOBALSCALER_B_SHIFT                   8
#define TMC5271_GLOBALSCALER_B_FIELD                   ((RegisterField) { TMC5271_GLOBALSCALER_B_MASK, TMC5271_GLOBALSCALER_B_SHIFT, TMC5271_GLOBAL_SCALER, false })
#define TMC5271_RAMPMODE_MASK                          0x00000003
#define TMC5271_RAMPMODE_SHIFT                         0
#define TMC5271_RAMPMODE_FIELD                         ((RegisterField) { TMC5271_RAMPMODE_MASK, TMC5271_RAMPMODE_SHIFT, TMC5271_RAMPMODE, false })
#define TMC5271_MSLUT_ADDR_MASK                        0x0000001F
#define TMC5271_MSLUT_ADDR_SHIFT                       0
#define TMC5271_MSLUT_ADDR_FIELD                       ((RegisterField) { TMC5271_MSLUT_ADDR_MASK, TMC5271_MSLUT_ADDR_SHIFT, TMC5271_MSLUT_ADDR, false })
#define TMC5271_MSLUT_DATA_MASK                        0xFFFFFFFF
#define TMC5271_MSLUT_DATA_SHIFT                       0
#define TMC5271_MSLUT_DATA_FIELD                       ((RegisterField) { TMC5271_MSLUT_DATA_MASK, TMC5271_MSLUT_DATA_SHIFT, TMC5271_MSLUT_DATA, false })
#define TMC5271_MSLUT_DATA_START_SIN90_MASK            0xFF0000
#define TMC5271_MSLUT_DATA_START_SIN90_SHIFT           16
#define TMC5271_MSLUT_DATA_START_SIN90_FIELD           ((RegisterField) { TMC5271_MSLUT_DATA_START_SIN90_MASK, TMC5271_MSLUT_DATA_START_SIN90_SHIFT, TMC5271_MSLUT_DATA, false })
#define TMC5271_MSLUT_DATA_OFFSET_SIN90_MASK           0xFF0000
#define TMC5271_MSLUT_DATA_OFFSET_SIN90_SHIFT          24
#define TMC5271_MSLUT_DATA_OFFSET_SIN90_FIELD          ((RegisterField) { TMC5271_MSLUT_DATA_OFFSET_SIN90_MASK, TMC5271_MSLUT_DATA_OFFSET_SIN90_SHIFT, TMC5271_MSLUT_DATA, false })
#define TMC5271_X_COMPARE_MASK                         0xFFFFFFFF
#define TMC5271_X_COMPARE_SHIFT                        0
#define TMC5271_X_COMPARE_FIELD                        ((RegisterField) { TMC5271_X_COMPARE_MASK, TMC5271_X_COMPARE_SHIFT, TMC5271_X_COMPARE, true })
#define TMC5271_X_COMPARE_REPEAT_MASK                  0x00FFFFFF
#define TMC5271_X_COMPARE_REPEAT_SHIFT                 0
#define TMC5271_X_COMPARE_REPEAT_FIELD                 ((RegisterField) { TMC5271_X_COMPARE_REPEAT_MASK, TMC5271_X_COMPARE_REPEAT_SHIFT, TMC5271_X_COMPARE_REPEAT, false })
#define TMC5271_IHOLD_MASK                             0x0000001F
#define TMC5271_IHOLD_SHIFT                            0
#define TMC5271_IHOLD_FIELD                            ((RegisterField) { TMC5271_IHOLD_MASK, TMC5271_IHOLD_SHIFT, TMC5271_IHOLD_IRUN, false })
#define TMC5271_IRUN_MASK                              0x00001F00
#define TMC5271_IRUN_SHIFT                             8
#define TMC5271_IRUN_FIELD                             ((RegisterField) { TMC5271_IRUN_MASK, TMC5271_IRUN_SHIFT, TMC5271_IHOLD_IRUN, false })
#define TMC5271_IHOLDDELAY_MASK                        0x000F0000
#define TMC5271_IHOLDDELAY_SHIFT                       16
#define TMC5271_IHOLDDELAY_FIELD                       ((RegisterField) { TMC5271_IHOLDDELAY_MASK, TMC5271_IHOLDDELAY_SHIFT, TMC5271_IHOLD_IRUN, false })
#define TMC5271_IRUNDELAY_MASK                         0x0F000000
#define TMC5271_IRUNDELAY_SHIFT                        24
#define TMC5271_IRUNDELAY_FIELD                        ((RegisterField) { TMC5271_IRUNDELAY_MASK, TMC5271_IRUNDELAY_SHIFT, TMC5271_IHOLD_IRUN, false })
#define TMC5271_TPOWERDOWN_MASK                        0x000000FF
#define TMC5271_TPOWERDOWN_SHIFT                       0
#define TMC5271_TPOWERDOWN_FIELD                       ((RegisterField) { TMC5271_TPOWERDOWN_MASK, TMC5271_TPOWERDOWN_SHIFT, TMC5271_TPOWERDOWN, false })
#define TMC5271_TSTEP_MASK                             0x000FFFFF
#define TMC5271_TSTEP_SHIFT                            0
#define TMC5271_TSTEP_FIELD                            ((RegisterField) { TMC5271_TSTEP_MASK, TMC5271_TSTEP_SHIFT, TMC5271_TSTEP, false })
#define TMC5271_TPWMTHRS_MASK                          0x000FFFFF
#define TMC5271_TPWMTHRS_SHIFT                         0
#define TMC5271_TPWMTHRS_FIELD                         ((RegisterField) { TMC5271_TPWMTHRS_MASK, TMC5271_TPWMTHRS_SHIFT, TMC5271_TPWMTHRS, false })
#define TMC5271_TCOOLTHRS_MASK                         0x000FFFFF
#define TMC5271_TCOOLTHRS_SHIFT                        0
#define TMC5271_TCOOLTHRS_FIELD                        ((RegisterField) { TMC5271_TCOOLTHRS_MASK, TMC5271_TCOOLTHRS_SHIFT, TMC5271_TCOOLTHRS, false })
#define TMC5271_THIGH_MASK                             0x000FFFFF
#define TMC5271_THIGH_SHIFT                            0
#define TMC5271_THIGH_FIELD                            ((RegisterField) { TMC5271_THIGH_MASK, TMC5271_THIGH_SHIFT, TMC5271_THIGH, false })
#define TMC5271_XACTUAL_MASK                           0xFFFFFFFF
#define TMC5271_XACTUAL_SHIFT                          0
#define TMC5271_XACTUAL_FIELD                          ((RegisterField) { TMC5271_XACTUAL_MASK, TMC5271_XACTUAL_SHIFT, TMC5271_XACTUAL, true })
#define TMC5271_VACTUAL_MASK                           0x00FFFFFF
#define TMC5271_VACTUAL_SHIFT                          0
#define TMC5271_VACTUAL_FIELD                          ((RegisterField) { TMC5271_VACTUAL_MASK, TMC5271_VACTUAL_SHIFT, TMC5271_VACTUAL, true })
#define TMC5271_AACTUAL_MASK                           0x00FFFFFF
#define TMC5271_AACTUAL_SHIFT                          0
#define TMC5271_AACTUAL_FIELD                          ((RegisterField) { TMC5271_AACTUAL_MASK, TMC5271_AACTUAL_SHIFT, TMC5271_AACTUAL, true })
#define TMC5271_VSTART_MASK                            0x0003FFFF
#define TMC5271_VSTART_SHIFT                           0
#define TMC5271_VSTART_FIELD                           ((RegisterField) { TMC5271_VSTART_MASK, TMC5271_VSTART_SHIFT, TMC5271_VSTART, false })
#define TMC5271_A1_MASK                                0x0003FFFF
#define TMC5271_A1_SHIFT                               0
#define TMC5271_A1_FIELD                               ((RegisterField) { TMC5271_A1_MASK, TMC5271_A1_SHIFT, TMC5271_A1, false })
#define TMC5271_V1_MASK                                0x000FFFFF
#define TMC5271_V1_SHIFT                               0
#define TMC5271_V1_FIELD                               ((RegisterField) { TMC5271_V1_MASK, TMC5271_V1_SHIFT, TMC5271_V1, false })
#define TMC5271_A2_MASK                                0x0003FFFF
#define TMC5271_A2_SHIFT                               0
#define TMC5271_A2_FIELD                               ((RegisterField) { TMC5271_A2_MASK, TMC5271_A2_SHIFT, TMC5271_A2, false })
#define TMC5271_V2_MASK                                0x000FFFFF
#define TMC5271_V2_SHIFT                               0
#define TMC5271_V2_FIELD                               ((RegisterField) { TMC5271_V2_MASK, TMC5271_V2_SHIFT, TMC5271_V2, false })
#define TMC5271_AMAX_MASK                              0x0003FFFF
#define TMC5271_AMAX_SHIFT                             0
#define TMC5271_AMAX_FIELD                             ((RegisterField) { TMC5271_AMAX_MASK, TMC5271_AMAX_SHIFT, TMC5271_AMAX, false })
#define TMC5271_VMAX_MASK                              0x007FFFFF
#define TMC5271_VMAX_SHIFT                             0
#define TMC5271_VMAX_FIELD                             ((RegisterField) { TMC5271_VMAX_MASK, TMC5271_VMAX_SHIFT, TMC5271_VMAX, false })
#define TMC5271_DMAX_MASK                              0x0003FFFF
#define TMC5271_DMAX_SHIFT                             0
#define TMC5271_DMAX_FIELD                             ((RegisterField) { TMC5271_DMAX_MASK, TMC5271_DMAX_SHIFT, TMC5271_DMAX, false })
#define TMC5271_D2_MASK                                0x0003FFFF
#define TMC5271_D2_SHIFT                               0
#define TMC5271_D2_FIELD                               ((RegisterField) { TMC5271_D2_MASK, TMC5271_D2_SHIFT, TMC5271_D2, false })
#define TMC5271_D1_MASK                                0x0003FFFF
#define TMC5271_D1_SHIFT                               0
#define TMC5271_D1_FIELD                               ((RegisterField) { TMC5271_D1_MASK, TMC5271_D1_SHIFT, TMC5271_D1, false })
#define TMC5271_VSTOP_MASK                             0x0003FFFF
#define TMC5271_VSTOP_SHIFT                            0
#define TMC5271_VSTOP_FIELD                            ((RegisterField) { TMC5271_VSTOP_MASK, TMC5271_VSTOP_SHIFT, TMC5271_VSTOP, false })
#define TMC5271_TVMAX_MASK                             0x0000FFFF
#define TMC5271_TVMAX_SHIFT                            0
#define TMC5271_TVMAX_FIELD                            ((RegisterField) { TMC5271_TVMAX_MASK, TMC5271_TVMAX_SHIFT, TMC5271_TVMAX, false })
#define TMC5271_TZEROWAIT_MASK                         0x0000FFFF
#define TMC5271_TZEROWAIT_SHIFT                        0
#define TMC5271_TZEROWAIT_FIELD                        ((RegisterField) { TMC5271_TZEROWAIT_MASK, TMC5271_TZEROWAIT_SHIFT, TMC5271_TZEROWAIT, false })
#define TMC5271_XTARGET_MASK                           0xFFFFFFFF
#define TMC5271_XTARGET_SHIFT                          0
#define TMC5271_XTARGET_FIELD                          ((RegisterField) { TMC5271_XTARGET_MASK, TMC5271_XTARGET_SHIFT, TMC5271_XTARGET, true })
#define TMC5271_VDCMIN_RESERVED_MASK                   0x000000FF
#define TMC5271_VDCMIN_RESERVED_SHIFT                  0
#define TMC5271_VDCMIN_RESERVED_FIELD                  ((RegisterField) { TMC5271_VDCMIN_RESERVED_MASK, TMC5271_VDCMIN_RESERVED_SHIFT, TMC5271_VDCMIN, false })
#define TMC5271_VDCMIN_VDCMIN_MASK                     0x007FFF00
#define TMC5271_VDCMIN_VDCMIN_SHIFT                    8
#define TMC5271_VDCMIN_VDCMIN_FIELD                    ((RegisterField) { TMC5271_VDCMIN_VDCMIN_MASK, TMC5271_VDCMIN_VDCMIN_SHIFT, TMC5271_VDCMIN, false })
#define TMC5271_SW_MODE_STOP_L_ENABLE_MASK             0x00000001
#define TMC5271_SW_MODE_STOP_L_ENABLE_SHIFT            0
#define TMC5271_SW_MODE_STOP_L_ENABLE_FIELD            ((RegisterField) { TMC5271_SW_MODE_STOP_L_ENABLE_MASK, TMC5271_SW_MODE_STOP_L_ENABLE_SHIFT, TMC5271_SW_MODE, false })
#define TMC5271_SW_MODE_STOP_R_ENABLE_MASK             0x00000002
#define TMC5271_SW_MODE_STOP_R_ENABLE_SHIFT            1
#define TMC5271_SW_MODE_STOP_R_ENABLE_FIELD            ((RegisterField) { TMC5271_SW_MODE_STOP_R_ENABLE_MASK, TMC5271_SW_MODE_STOP_R_ENABLE_SHIFT, TMC5271_SW_MODE, false })
#define TMC5271_SW_MODE_POL_STOP_L_MASK                0x00000004
#define TMC5271_SW_MODE_POL_STOP_L_SHIFT               2
#define TMC5271_SW_MODE_POL_STOP_L_FIELD               ((RegisterField) { TMC5271_SW_MODE_POL_STOP_L_MASK, TMC5271_SW_MODE_POL_STOP_L_SHIFT, TMC5271_SW_MODE, false })
#define TMC5271_SW_MODE_POL_STOP_R_MASK                0x00000008
#define TMC5271_SW_MODE_POL_STOP_R_SHIFT               3
#define TMC5271_SW_MODE_POL_STOP_R_FIELD               ((RegisterField) { TMC5271_SW_MODE_POL_STOP_R_MASK, TMC5271_SW_MODE_POL_STOP_R_SHIFT, TMC5271_SW_MODE, false })
#define TMC5271_SW_MODE_SWAP_LR_MASK                   0x00000010
#define TMC5271_SW_MODE_SWAP_LR_SHIFT                  4
#define TMC5271_SW_MODE_SWAP_LR_FIELD                  ((RegisterField) { TMC5271_SW_MODE_SWAP_LR_MASK, TMC5271_SW_MODE_SWAP_LR_SHIFT, TMC5271_SW_MODE, false })
#define TMC5271_SW_MODE_LATCH_L_ACTIVE_MASK            0x00000020
#define TMC5271_SW_MODE_LATCH_L_ACTIVE_SHIFT           5
#define TMC5271_SW_MODE_LATCH_L_ACTIVE_FIELD           ((RegisterField) { TMC5271_SW_MODE_LATCH_L_ACTIVE_MASK, TMC5271_SW_MODE_LATCH_L_ACTIVE_SHIFT, TMC5271_SW_MODE, false })
#define TMC5271_SW_MODE_LATCH_L_INACTIVE_MASK          0x00000040
#define TMC5271_SW_MODE_LATCH_L_INACTIVE_SHIFT         6
#define TMC5271_SW_MODE_LATCH_L_INACTIVE_FIELD         ((RegisterField) { TMC5271_SW_MODE_LATCH_L_INACTIVE_MASK, TMC5271_SW_MODE_LATCH_L_INACTIVE_SHIFT, TMC5271_SW_MODE, false })
#define TMC5271_SW_MODE_LATCH_R_ACTIVE_MASK            0x00000080
#define TMC5271_SW_MODE_LATCH_R_ACTIVE_SHIFT           7
#define TMC5271_SW_MODE_LATCH_R_ACTIVE_FIELD           ((RegisterField) { TMC5271_SW_MODE_LATCH_R_ACTIVE_MASK, TMC5271_SW_MODE_LATCH_R_ACTIVE_SHIFT, TMC5271_SW_MODE, false })
#define TMC5271_SW_MODE_LATCH_R_INACTIVE_MASK          0x00000100
#define TMC5271_SW_MODE_LATCH_R_INACTIVE_SHIFT         8
#define TMC5271_SW_MODE_LATCH_R_INACTIVE_FIELD         ((RegisterField) { TMC5271_SW_MODE_LATCH_R_INACTIVE_MASK, TMC5271_SW_MODE_LATCH_R_INACTIVE_SHIFT, TMC5271_SW_MODE, false })
#define TMC5271_SW_MODE_EN_LATCH_ENCODER_MASK          0x00000200
#define TMC5271_SW_MODE_EN_LATCH_ENCODER_SHIFT         9
#define TMC5271_SW_MODE_EN_LATCH_ENCODER_FIELD         ((RegisterField) { TMC5271_SW_MODE_EN_LATCH_ENCODER_MASK, TMC5271_SW_MODE_EN_LATCH_ENCODER_SHIFT, TMC5271_SW_MODE, false })
#define TMC5271_SW_MODE_SG_STOP_MASK                   0x00000400
#define TMC5271_SW_MODE_SG_STOP_SHIFT                  10
#define TMC5271_SW_MODE_SG_STOP_FIELD                  ((RegisterField) { TMC5271_SW_MODE_SG_STOP_MASK, TMC5271_SW_MODE_SG_STOP_SHIFT, TMC5271_SW_MODE, false })
#define TMC5271_SW_MODE_EN_SOFTSTOP_MASK               0x00000800
#define TMC5271_SW_MODE_EN_SOFTSTOP_SHIFT              11
#define TMC5271_SW_MODE_EN_SOFTSTOP_FIELD              ((RegisterField) { TMC5271_SW_MODE_EN_SOFTSTOP_MASK, TMC5271_SW_MODE_EN_SOFTSTOP_SHIFT, TMC5271_SW_MODE, false })
#define TMC5271_SW_MODE_EN_VIRTUAL_STOP_L_MASK         0x00001000
#define TMC5271_SW_MODE_EN_VIRTUAL_STOP_L_SHIFT        12
#define TMC5271_SW_MODE_EN_VIRTUAL_STOP_L_FIELD        ((RegisterField) { TMC5271_SW_MODE_EN_VIRTUAL_STOP_L_MASK, TMC5271_SW_MODE_EN_VIRTUAL_STOP_L_SHIFT, TMC5271_SW_MODE, false })
#define TMC5271_SW_MODE_EN_VIRTUAL_STOP_R_MASK         0x00002000
#define TMC5271_SW_MODE_EN_VIRTUAL_STOP_R_SHIFT        13
#define TMC5271_SW_MODE_EN_VIRTUAL_STOP_R_FIELD        ((RegisterField) { TMC5271_SW_MODE_EN_VIRTUAL_STOP_R_MASK, TMC5271_SW_MODE_EN_VIRTUAL_STOP_R_SHIFT, TMC5271_SW_MODE, false })
#define TMC5271_SW_MODE_VIRTUAL_STEP_ENC_MASK          0x00004000
#define TMC5271_SW_MODE_VIRTUAL_STEP_ENC_SHIFT         14
#define TMC5271_SW_MODE_VIRTUAL_STEP_ENC_FIELD         ((RegisterField) { TMC5271_SW_MODE_VIRTUAL_STEP_ENC_MASK, TMC5271_SW_MODE_VIRTUAL_STEP_ENC_SHIFT, TMC5271_SW_MODE, false })
#define TMC5271_STATUS_STOP_L_MASK                     0x00000001
#define TMC5271_STATUS_STOP_L_SHIFT                    0
#define TMC5271_STATUS_STOP_L_FIELD                    ((RegisterField) { TMC5271_STATUS_STOP_L_MASK, TMC5271_STATUS_STOP_L_SHIFT, TMC5271_RAMP_STAT, false })
#define TMC5271_STATUS_STOP_R_MASK                     0x00000002
#define TMC5271_STATUS_STOP_R_SHIFT                    1
#define TMC5271_STATUS_STOP_R_FIELD                    ((RegisterField) { TMC5271_STATUS_STOP_R_MASK, TMC5271_STATUS_STOP_R_SHIFT, TMC5271_RAMP_STAT, false })
#define TMC5271_STATUS_LATCH_L_MASK                    0x00000004
#define TMC5271_STATUS_LATCH_L_SHIFT                   2
#define TMC5271_STATUS_LATCH_L_FIELD                   ((RegisterField) { TMC5271_STATUS_LATCH_L_MASK, TMC5271_STATUS_LATCH_L_SHIFT, TMC5271_RAMP_STAT, false })
#define TMC5271_STATUS_LATCH_R_MASK                    0x00000008
#define TMC5271_STATUS_LATCH_R_SHIFT                   3
#define TMC5271_STATUS_LATCH_R_FIELD                   ((RegisterField) { TMC5271_STATUS_LATCH_R_MASK, TMC5271_STATUS_LATCH_R_SHIFT, TMC5271_RAMP_STAT, false })
#define TMC5271_EVENT_STOP_L_MASK                      0x00000010
#define TMC5271_EVENT_STOP_L_SHIFT                     4
#define TMC5271_EVENT_STOP_L_FIELD                     ((RegisterField) { TMC5271_EVENT_STOP_L_MASK, TMC5271_EVENT_STOP_L_SHIFT, TMC5271_RAMP_STAT, false })
#define TMC5271_EVENT_STOP_R_MASK                      0x00000020
#define TMC5271_EVENT_STOP_R_SHIFT                     5
#define TMC5271_EVENT_STOP_R_FIELD                     ((RegisterField) { TMC5271_EVENT_STOP_R_MASK, TMC5271_EVENT_STOP_R_SHIFT, TMC5271_RAMP_STAT, false })
#define TMC5271_EVENT_STOP_SG_MASK                     0x00000040
#define TMC5271_EVENT_STOP_SG_SHIFT                    6
#define TMC5271_EVENT_STOP_SG_FIELD                    ((RegisterField) { TMC5271_EVENT_STOP_SG_MASK, TMC5271_EVENT_STOP_SG_SHIFT, TMC5271_RAMP_STAT, false })
#define TMC5271_EVENT_POS_REACHED_MASK                 0x00000080
#define TMC5271_EVENT_POS_REACHED_SHIFT                7
#define TMC5271_EVENT_POS_REACHED_FIELD                ((RegisterField) { TMC5271_EVENT_POS_REACHED_MASK, TMC5271_EVENT_POS_REACHED_SHIFT, TMC5271_RAMP_STAT, false })
#define TMC5271_VELOCITY_REACHED_MASK                  0x00000100
#define TMC5271_VELOCITY_REACHED_SHIFT                 8
#define TMC5271_VELOCITY_REACHED_FIELD                 ((RegisterField) { TMC5271_VELOCITY_REACHED_MASK, TMC5271_VELOCITY_REACHED_SHIFT, TMC5271_RAMP_STAT, false })
#define TMC5271_POSITION_REACHED_MASK                  0x00000200
#define TMC5271_POSITION_REACHED_SHIFT                 9
#define TMC5271_POSITION_REACHED_FIELD                 ((RegisterField) { TMC5271_POSITION_REACHED_MASK, TMC5271_POSITION_REACHED_SHIFT, TMC5271_RAMP_STAT, false })
#define TMC5271_VZERO_MASK                             0x00000400
#define TMC5271_VZERO_SHIFT                            10
#define TMC5271_VZERO_FIELD                            ((RegisterField) { TMC5271_VZERO_MASK, TMC5271_VZERO_SHIFT, TMC5271_RAMP_STAT, false })
#define TMC5271_T_ZEROWAIT_ACTIVE_MASK                 0x00000800
#define TMC5271_T_ZEROWAIT_ACTIVE_SHIFT                11
#define TMC5271_T_ZEROWAIT_ACTIVE_FIELD                ((RegisterField) { TMC5271_T_ZEROWAIT_ACTIVE_MASK, TMC5271_T_ZEROWAIT_ACTIVE_SHIFT, TMC5271_RAMP_STAT, false })
#define TMC5271_SECOND_MOVE_MASK                       0x00001000
#define TMC5271_SECOND_MOVE_SHIFT                      12
#define TMC5271_SECOND_MOVE_FIELD                      ((RegisterField) { TMC5271_SECOND_MOVE_MASK, TMC5271_SECOND_MOVE_SHIFT, TMC5271_RAMP_STAT, false })
#define TMC5271_STATUS_SG_MASK                         0x00002000
#define TMC5271_STATUS_SG_SHIFT                        13
#define TMC5271_STATUS_SG_FIELD                        ((RegisterField) { TMC5271_STATUS_SG_MASK, TMC5271_STATUS_SG_SHIFT, TMC5271_RAMP_STAT, false })
#define TMC5271_STATUS_VIRTUAL_STOP_L_MASK             0x00004000
#define TMC5271_STATUS_VIRTUAL_STOP_L_SHIFT            14
#define TMC5271_STATUS_VIRTUAL_STOP_L_FIELD            ((RegisterField) { TMC5271_STATUS_VIRTUAL_STOP_L_MASK, TMC5271_STATUS_VIRTUAL_STOP_L_SHIFT, TMC5271_RAMP_STAT, false })
#define TMC5271_STATUS_VIRTUAL_STOP_R_MASK             0x00008000
#define TMC5271_STATUS_VIRTUAL_STOP_R_SHIFT            15
#define TMC5271_STATUS_VIRTUAL_STOP_R_FIELD            ((RegisterField) { TMC5271_STATUS_VIRTUAL_STOP_R_MASK, TMC5271_STATUS_VIRTUAL_STOP_R_SHIFT, TMC5271_RAMP_STAT, false })
#define TMC5271_XLATCH_MASK                            0xFFFFFFFF
#define TMC5271_XLATCH_SHIFT                           0
#define TMC5271_XLATCH_FIELD                           ((RegisterField) { TMC5271_XLATCH_MASK, TMC5271_XLATCH_SHIFT, TMC5271_XLATCH, true })
#define TMC5271_P_POSITION_MASK                        0x000003FF
#define TMC5271_P_POSITION_SHIFT                       0
#define TMC5271_P_POSITION_FIELD                       ((RegisterField) { TMC5271_P_POSITION_MASK, TMC5271_P_POSITION_SHIFT, TMC5271_POSITION_PI_CTRL, false })
#define TMC5271_TOLERANCE_MASK                         0x00FF0000
#define TMC5271_TOLERANCE_SHIFT                        16
#define TMC5271_TOLERANCE_FIELD                        ((RegisterField) { TMC5271_TOLERANCE_MASK, TMC5271_TOLERANCE_SHIFT, TMC5271_POSITION_PI_CTRL, false })
#define TMC5271_TOL_ON_POS_REACHED_MASK                0x10000000
#define TMC5271_TOL_ON_POS_REACHED_SHIFT               28
#define TMC5271_TOL_ON_POS_REACHED_FIELD               ((RegisterField) { TMC5271_TOL_ON_POS_REACHED_MASK, TMC5271_TOL_ON_POS_REACHED_SHIFT, TMC5271_POSITION_PI_CTRL, false })
#define TMC5271_X_ENC_MASK                             0xFFFFFFFF
#define TMC5271_X_ENC_SHIFT                            0
#define TMC5271_X_ENC_FIELD                            ((RegisterField) { TMC5271_X_ENC_MASK, TMC5271_X_ENC_SHIFT, TMC5271_X_ENC, true })
#define TMC5271_POL_A_MASK                             0x00000001
#define TMC5271_POL_A_SHIFT                            0
#define TMC5271_POL_A_FIELD                            ((RegisterField) { TMC5271_POL_A_MASK, TMC5271_POL_A_SHIFT, TMC5271_ENCMODE, false })
#define TMC5271_POL_B_MASK                             0x00000002
#define TMC5271_POL_B_SHIFT                            1
#define TMC5271_POL_B_FIELD                            ((RegisterField) { TMC5271_POL_B_MASK, TMC5271_POL_B_SHIFT, TMC5271_ENCMODE, false })
#define TMC5271_POL_N_MASK                             0x00000004
#define TMC5271_POL_N_SHIFT                            2
#define TMC5271_POL_N_FIELD                            ((RegisterField) { TMC5271_POL_N_MASK, TMC5271_POL_N_SHIFT, TMC5271_ENCMODE, false })
#define TMC5271_IGNORE_AB_MASK                         0x00000008
#define TMC5271_IGNORE_AB_SHIFT                        3
#define TMC5271_IGNORE_AB_FIELD                        ((RegisterField) { TMC5271_IGNORE_AB_MASK, TMC5271_IGNORE_AB_SHIFT, TMC5271_ENCMODE, false })
#define TMC5271_CLR_CONT_MASK                          0x00000010
#define TMC5271_CLR_CONT_SHIFT                         4
#define TMC5271_CLR_CONT_FIELD                         ((RegisterField) { TMC5271_CLR_CONT_MASK, TMC5271_CLR_CONT_SHIFT, TMC5271_ENCMODE, false })
#define TMC5271_CLR_ONCE_MASK                          0x00000020
#define TMC5271_CLR_ONCE_SHIFT                         5
#define TMC5271_CLR_ONCE_FIELD                         ((RegisterField) { TMC5271_CLR_ONCE_MASK, TMC5271_CLR_ONCE_SHIFT, TMC5271_ENCMODE, false })
#define TMC5271_POS_NEG_EDGE_MASK                      0x000000C0
#define TMC5271_POS_NEG_EDGE_SHIFT                     6
#define TMC5271_POS_NEG_EDGE_FIELD                     ((RegisterField) { TMC5271_POS_NEG_EDGE_MASK, TMC5271_POS_NEG_EDGE_SHIFT, TMC5271_ENCMODE, false })
#define TMC5271_CLR_ENC_X_MASK                         0x00000100
#define TMC5271_CLR_ENC_X_SHIFT                        8
#define TMC5271_CLR_ENC_X_FIELD                        ((RegisterField) { TMC5271_CLR_ENC_X_MASK, TMC5271_CLR_ENC_X_SHIFT, TMC5271_ENCMODE, false })
#define TMC5271_LATCH_X_ACT_MASK                       0x00000200
#define TMC5271_LATCH_X_ACT_SHIFT                      9
#define TMC5271_LATCH_X_ACT_FIELD                      ((RegisterField) { TMC5271_LATCH_X_ACT_MASK, TMC5271_LATCH_X_ACT_SHIFT, TMC5271_ENCMODE, false })
#define TMC5271_ENC_SEL_DECIMAL_MASK                   0x00000400
#define TMC5271_ENC_SEL_DECIMAL_SHIFT                  10
#define TMC5271_ENC_SEL_DECIMAL_FIELD                  ((RegisterField) { TMC5271_ENC_SEL_DECIMAL_MASK, TMC5271_ENC_SEL_DECIMAL_SHIFT, TMC5271_ENCMODE, false })
#define TMC5271_NBEMF_ABN_SEL_MASK                     0x00000800
#define TMC5271_NBEMF_ABN_SEL_SHIFT                    11
#define TMC5271_NBEMF_ABN_SEL_FIELD                    ((RegisterField) { TMC5271_NBEMF_ABN_SEL_MASK, TMC5271_NBEMF_ABN_SEL_SHIFT, TMC5271_ENCMODE, false })
#define TMC5271_BEMF_HYST_MASK                         0x00007000
#define TMC5271_BEMF_HYST_SHIFT                        12
#define TMC5271_BEMF_HYST_FIELD                        ((RegisterField) { TMC5271_BEMF_HYST_MASK, TMC5271_BEMF_HYST_SHIFT, TMC5271_ENCMODE, false })
#define TMC5271_QSC_ENC_EN_MASK                        0x00008000
#define TMC5271_QSC_ENC_EN_SHIFT                       15
#define TMC5271_QSC_ENC_EN_FIELD                       ((RegisterField) { TMC5271_QSC_ENC_EN_MASK, TMC5271_QSC_ENC_EN_SHIFT, TMC5271_ENCMODE, false })
#define TMC5271_BEMF_BLANK_TIME_MASK                   0x00FF0000
#define TMC5271_BEMF_BLANK_TIME_SHIFT                  16
#define TMC5271_BEMF_BLANK_TIME_FIELD                  ((RegisterField) { TMC5271_BEMF_BLANK_TIME_MASK, TMC5271_BEMF_BLANK_TIME_SHIFT, TMC5271_ENCMODE, false })
#define TMC5271_BEMF_FILTER_SEL_MASK                   0x30000000
#define TMC5271_BEMF_FILTER_SEL_SHIFT                  28
#define TMC5271_BEMF_FILTER_SEL_FIELD                  ((RegisterField) { TMC5271_BEMF_FILTER_SEL_MASK, TMC5271_BEMF_FILTER_SEL_SHIFT, TMC5271_ENCMODE, false })
#define TMC5271_ENC_CONST_MASK                         0xFFFFFFFF
#define TMC5271_ENC_CONST_SHIFT                        0
#define TMC5271_ENC_CONST_FIELD                        ((RegisterField) { TMC5271_ENC_CONST_MASK, TMC5271_ENC_CONST_SHIFT, TMC5271_ENC_CONST, true })
#define TMC5271_N_EVENT_MASK                           0x00000001
#define TMC5271_N_EVENT_SHIFT                          0
#define TMC5271_N_EVENT_FIELD                          ((RegisterField) { TMC5271_N_EVENT_MASK, TMC5271_N_EVENT_SHIFT, TMC5271_ENC_STATUS, false })
#define TMC5271_DEVIATION_WARN_MASK                    0x00000002
#define TMC5271_DEVIATION_WARN_SHIFT                   1
#define TMC5271_DEVIATION_WARN_FIELD                   ((RegisterField) { TMC5271_DEVIATION_WARN_MASK, TMC5271_DEVIATION_WARN_SHIFT, TMC5271_ENC_STATUS, false })
#define TMC5271_ENC_LATCH_MASK                         0xFFFFFFFF
#define TMC5271_ENC_LATCH_SHIFT                        0
#define TMC5271_ENC_LATCH_FIELD                        ((RegisterField) { TMC5271_ENC_LATCH_MASK, TMC5271_ENC_LATCH_SHIFT, TMC5271_ENC_LATCH, true })
#define TMC5271_ENC_DEVIATION_MASK                     0x000FFFFF
#define TMC5271_ENC_DEVIATION_SHIFT                    0
#define TMC5271_ENC_DEVIATION_FIELD                    ((RegisterField) { TMC5271_ENC_DEVIATION_MASK, TMC5271_ENC_DEVIATION_SHIFT, TMC5271_ENC_DEVIATION, false })
#define TMC5271_VIRTUAL_STOP_L_MASK                    0xFFFFFFFF
#define TMC5271_VIRTUAL_STOP_L_SHIFT                   0
#define TMC5271_VIRTUAL_STOP_L_FIELD                   ((RegisterField) { TMC5271_VIRTUAL_STOP_L_MASK, TMC5271_VIRTUAL_STOP_L_SHIFT, TMC5271_VIRTUAL_STOP_L, true })
#define TMC5271_VIRTUAL_STOP_R_MASK                    0xFFFFFFFF
#define TMC5271_VIRTUAL_STOP_R_SHIFT                   0
#define TMC5271_VIRTUAL_STOP_R_FIELD                   ((RegisterField) { TMC5271_VIRTUAL_STOP_R_MASK, TMC5271_VIRTUAL_STOP_R_SHIFT, TMC5271_VIRTUAL_STOP_R, true })
#define TMC5271_MSCNT_MASK                             0x000003FF
#define TMC5271_MSCNT_SHIFT                            0
#define TMC5271_MSCNT_FIELD                            ((RegisterField) { TMC5271_MSCNT_MASK, TMC5271_MSCNT_SHIFT, TMC5271_MSCNT, false })
#define TMC5271_CUR_A_MASK                             0x000001FF
#define TMC5271_CUR_A_SHIFT                            0
#define TMC5271_CUR_A_FIELD                            ((RegisterField) { TMC5271_CUR_A_MASK, TMC5271_CUR_A_SHIFT, TMC5271_MSCURACT, false })
#define TMC5271_CUR_B_MASK                             0x01FF0000
#define TMC5271_CUR_B_SHIFT                            16
#define TMC5271_CUR_B_FIELD                            ((RegisterField) { TMC5271_CUR_B_MASK, TMC5271_CUR_B_SHIFT, TMC5271_MSCURACT, false })
#define TMC5271_TOFF_MASK                              0x0000000F
#define TMC5271_TOFF_SHIFT                             0
#define TMC5271_TOFF_FIELD                             ((RegisterField) { TMC5271_TOFF_MASK, TMC5271_TOFF_SHIFT, TMC5271_CHOPCONF, false })
#define TMC5271_HSTRT_TFD210_MASK                      0x00000070
#define TMC5271_HSTRT_TFD210_SHIFT                     4
#define TMC5271_HSTRT_TFD210_FIELD                     ((RegisterField) { TMC5271_HSTRT_TFD210_MASK, TMC5271_HSTRT_TFD210_SHIFT, TMC5271_CHOPCONF, false })
#define TMC5271_HEND_OFFSET_MASK                       0x00000780
#define TMC5271_HEND_OFFSET_SHIFT                      7
#define TMC5271_HEND_OFFSET_FIELD                      ((RegisterField) { TMC5271_HEND_OFFSET_MASK, TMC5271_HEND_OFFSET_SHIFT, TMC5271_CHOPCONF, false })
#define TMC5271_FD3_MASK                               0x00000800
#define TMC5271_FD3_SHIFT                              11
#define TMC5271_FD3_FIELD                              ((RegisterField) { TMC5271_FD3_MASK, TMC5271_FD3_SHIFT, TMC5271_CHOPCONF, false })
#define TMC5271_DISFDCC_MASK                           0x00001000
#define TMC5271_DISFDCC_SHIFT                          12
#define TMC5271_DISFDCC_FIELD                          ((RegisterField) { TMC5271_DISFDCC_MASK, TMC5271_DISFDCC_SHIFT, TMC5271_CHOPCONF, false })
#define TMC5271_CHM_MASK                               0x00004000
#define TMC5271_CHM_SHIFT                              14
#define TMC5271_CHM_FIELD                              ((RegisterField) { TMC5271_CHM_MASK, TMC5271_CHM_SHIFT, TMC5271_CHOPCONF, false })
#define TMC5271_TBL_MASK                               0x00018000
#define TMC5271_TBL_SHIFT                              15
#define TMC5271_TBL_FIELD                              ((RegisterField) { TMC5271_TBL_MASK, TMC5271_TBL_SHIFT, TMC5271_CHOPCONF, false })
#define TMC5271_VHIGHFS_MASK                           0x00040000
#define TMC5271_VHIGHFS_SHIFT                          18
#define TMC5271_VHIGHFS_FIELD                          ((RegisterField) { TMC5271_VHIGHFS_MASK, TMC5271_VHIGHFS_SHIFT, TMC5271_CHOPCONF, false })
#define TMC5271_VHIGHCHM_MASK                          0x00080000
#define TMC5271_VHIGHCHM_SHIFT                         19
#define TMC5271_VHIGHCHM_FIELD                         ((RegisterField) { TMC5271_VHIGHCHM_MASK, TMC5271_VHIGHCHM_SHIFT, TMC5271_CHOPCONF, false })
#define TMC5271_TPFD_MASK                              0x00F00000
#define TMC5271_TPFD_SHIFT                             20
#define TMC5271_TPFD_FIELD                             ((RegisterField) { TMC5271_TPFD_MASK, TMC5271_TPFD_SHIFT, TMC5271_CHOPCONF, false })
#define TMC5271_MRES_MASK                              0x0F000000
#define TMC5271_MRES_SHIFT                             24
#define TMC5271_MRES_FIELD                             ((RegisterField) { TMC5271_MRES_MASK, TMC5271_MRES_SHIFT, TMC5271_CHOPCONF, false })
#define TMC5271_INTPOL_MASK                            0x10000000
#define TMC5271_INTPOL_SHIFT                           28
#define TMC5271_INTPOL_FIELD                           ((RegisterField) { TMC5271_INTPOL_MASK, TMC5271_INTPOL_SHIFT, TMC5271_CHOPCONF, false })
#define TMC5271_DEDGE_MASK                             0x20000000
#define TMC5271_DEDGE_SHIFT                            29
#define TMC5271_DEDGE_FIELD                            ((RegisterField) { TMC5271_DEDGE_MASK, TMC5271_DEDGE_SHIFT, TMC5271_CHOPCONF, false })
#define TMC5271_DISS2G_MASK                            0x40000000
#define TMC5271_DISS2G_SHIFT                           30
#define TMC5271_DISS2G_FIELD                           ((RegisterField) { TMC5271_DISS2G_MASK, TMC5271_DISS2G_SHIFT, TMC5271_CHOPCONF, false })
#define TMC5271_DISS2VS_MASK                           0x80000000
#define TMC5271_DISS2VS_SHIFT                          31
#define TMC5271_DISS2VS_FIELD                          ((RegisterField) { TMC5271_DISS2VS_MASK, TMC5271_DISS2VS_SHIFT, TMC5271_CHOPCONF, false })
#define TMC5271_SEMIN_MASK                             0x0000000F
#define TMC5271_SEMIN_SHIFT                            0
#define TMC5271_SEMIN_FIELD                            ((RegisterField) { TMC5271_SEMIN_MASK, TMC5271_SEMIN_SHIFT, TMC5271_COOLCONF, false })
#define TMC5271_SEUP_MASK                              0x00000060
#define TMC5271_SEUP_SHIFT                             5
#define TMC5271_SEUP_FIELD                             ((RegisterField) { TMC5271_SEUP_MASK, TMC5271_SEUP_SHIFT, TMC5271_COOLCONF, false })
#define TMC5271_SEMAX_MASK                             0x00000F00
#define TMC5271_SEMAX_SHIFT                            8
#define TMC5271_SEMAX_FIELD                            ((RegisterField) { TMC5271_SEMAX_MASK, TMC5271_SEMAX_SHIFT, TMC5271_COOLCONF, false })
#define TMC5271_SEDN_MASK                              0x00006000
#define TMC5271_SEDN_SHIFT                             13
#define TMC5271_SEDN_FIELD                             ((RegisterField) { TMC5271_SEDN_MASK, TMC5271_SEDN_SHIFT, TMC5271_COOLCONF, false })
#define TMC5271_SEIMIN_MASK                            0x00008000
#define TMC5271_SEIMIN_SHIFT                           15
#define TMC5271_SEIMIN_FIELD                           ((RegisterField) { TMC5271_SEIMIN_MASK, TMC5271_SEIMIN_SHIFT, TMC5271_COOLCONF, false })
#define TMC5271_SGT_MASK                               0x007F0000
#define TMC5271_SGT_SHIFT                              16
#define TMC5271_SGT_FIELD                              ((RegisterField) { TMC5271_SGT_MASK, TMC5271_SGT_SHIFT, TMC5271_COOLCONF, false })
#define TMC5271_SFILT_MASK                             0x01000000
#define TMC5271_SFILT_SHIFT                            24
#define TMC5271_SFILT_FIELD                            ((RegisterField) { TMC5271_SFILT_MASK, TMC5271_SFILT_SHIFT, TMC5271_COOLCONF, false })
#define TMC5271_DC_TIME_MASK                           0x000003FF
#define TMC5271_DC_TIME_SHIFT                          0
#define TMC5271_DC_TIME_FIELD                          ((RegisterField) { TMC5271_DC_TIME_MASK, TMC5271_DC_TIME_SHIFT, TMC5271_DCCTRL, false })
#define TMC5271_DC_SG_MASK                             0x00FF0000
#define TMC5271_DC_SG_SHIFT                            16
#define TMC5271_DC_SG_FIELD                            ((RegisterField) { TMC5271_DC_SG_MASK, TMC5271_DC_SG_SHIFT, TMC5271_DCCTRL, false })
#define TMC5271_SG_RESULT_MASK                         0x000003FF
#define TMC5271_SG_RESULT_SHIFT                        0
#define TMC5271_SG_RESULT_FIELD                        ((RegisterField) { TMC5271_SG_RESULT_MASK, TMC5271_SG_RESULT_SHIFT, TMC5271_DRV_STATUS, false })
#define TMC5271_S2VSA_MASK                             0x00001000
#define TMC5271_S2VSA_SHIFT                            12
#define TMC5271_S2VSA_FIELD                            ((RegisterField) { TMC5271_S2VSA_MASK, TMC5271_S2VSA_SHIFT, TMC5271_DRV_STATUS, false })
#define TMC5271_S2VSB_MASK                             0x00002000
#define TMC5271_S2VSB_SHIFT                            13
#define TMC5271_S2VSB_FIELD                            ((RegisterField) { TMC5271_S2VSB_MASK, TMC5271_S2VSB_SHIFT, TMC5271_DRV_STATUS, false })
#define TMC5271_STEALTH_MASK                           0x00004000
#define TMC5271_STEALTH_SHIFT                          14
#define TMC5271_STEALTH_FIELD                          ((RegisterField) { TMC5271_STEALTH_MASK, TMC5271_STEALTH_SHIFT, TMC5271_DRV_STATUS, false })
#define TMC5271_FSACTIVE_MASK                          0x00008000
#define TMC5271_FSACTIVE_SHIFT                         15
#define TMC5271_FSACTIVE_FIELD                         ((RegisterField) { TMC5271_FSACTIVE_MASK, TMC5271_FSACTIVE_SHIFT, TMC5271_DRV_STATUS, false })
#define TMC5271_CS_ACTUAL_MASK                         0x001F0000
#define TMC5271_CS_ACTUAL_SHIFT                        16
#define TMC5271_CS_ACTUAL_FIELD                        ((RegisterField) { TMC5271_CS_ACTUAL_MASK, TMC5271_CS_ACTUAL_SHIFT, TMC5271_DRV_STATUS, false })
#define TMC5271_STALLGUARD_MASK                        0x01000000
#define TMC5271_STALLGUARD_SHIFT                       24
#define TMC5271_STALLGUARD_FIELD                       ((RegisterField) { TMC5271_STALLGUARD_MASK, TMC5271_STALLGUARD_SHIFT, TMC5271_DRV_STATUS, false })
#define TMC5271_OT_MASK                                0x02000000
#define TMC5271_OT_SHIFT                               25
#define TMC5271_OT_FIELD                               ((RegisterField) { TMC5271_OT_MASK, TMC5271_OT_SHIFT, TMC5271_DRV_STATUS, false })
#define TMC5271_OTPW_MASK                              0x04000000
#define TMC5271_OTPW_SHIFT                             26
#define TMC5271_OTPW_FIELD                             ((RegisterField) { TMC5271_OTPW_MASK, TMC5271_OTPW_SHIFT, TMC5271_DRV_STATUS, false })
#define TMC5271_S2GA_MASK                              0x08000000
#define TMC5271_S2GA_SHIFT                             27
#define TMC5271_S2GA_FIELD                             ((RegisterField) { TMC5271_S2GA_MASK, TMC5271_S2GA_SHIFT, TMC5271_DRV_STATUS, false })
#define TMC5271_S2GB_MASK                              0x10000000
#define TMC5271_S2GB_SHIFT                             28
#define TMC5271_S2GB_FIELD                             ((RegisterField) { TMC5271_S2GB_MASK, TMC5271_S2GB_SHIFT, TMC5271_DRV_STATUS, false })
#define TMC5271_OLA_MASK                               0x20000000
#define TMC5271_OLA_SHIFT                              29
#define TMC5271_OLA_FIELD                              ((RegisterField) { TMC5271_OLA_MASK, TMC5271_OLA_SHIFT, TMC5271_DRV_STATUS, false })
#define TMC5271_OLB_MASK                               0x40000000
#define TMC5271_OLB_SHIFT                              30
#define TMC5271_OLB_FIELD                              ((RegisterField) { TMC5271_OLB_MASK, TMC5271_OLB_SHIFT, TMC5271_DRV_STATUS, false })
#define TMC5271_STST_MASK                              0x80000000
#define TMC5271_STST_SHIFT                             31
#define TMC5271_STST_FIELD                             ((RegisterField) { TMC5271_STST_MASK, TMC5271_STST_SHIFT, TMC5271_DRV_STATUS, false })
#define TMC5271_PWM_OFS_MASK                           0x000000FF
#define TMC5271_PWM_OFS_SHIFT                          0
#define TMC5271_PWM_OFS_FIELD                          ((RegisterField) { TMC5271_PWM_OFS_MASK, TMC5271_PWM_OFS_SHIFT, TMC5271_PWMCONF, false })
#define TMC5271_PWM_GRAD_MASK                          0x0000FF00
#define TMC5271_PWM_GRAD_SHIFT                         8
#define TMC5271_PWM_GRAD_FIELD                         ((RegisterField) { TMC5271_PWM_GRAD_MASK, TMC5271_PWM_GRAD_SHIFT, TMC5271_PWMCONF, false })
#define TMC5271_PWM_FREQ_MASK                          0x00030000
#define TMC5271_PWM_FREQ_SHIFT                         16
#define TMC5271_PWM_FREQ_FIELD                         ((RegisterField) { TMC5271_PWM_FREQ_MASK, TMC5271_PWM_FREQ_SHIFT, TMC5271_PWMCONF, false })
#define TMC5271_PWM_AUTOSCALE_MASK                     0x00040000
#define TMC5271_PWM_AUTOSCALE_SHIFT                    18
#define TMC5271_PWM_AUTOSCALE_FIELD                    ((RegisterField) { TMC5271_PWM_AUTOSCALE_MASK, TMC5271_PWM_AUTOSCALE_SHIFT, TMC5271_PWMCONF, false })
#define TMC5271_PWM_AUTOGRAD_MASK                      0x00080000
#define TMC5271_PWM_AUTOGRAD_SHIFT                     19
#define TMC5271_PWM_AUTOGRAD_FIELD                     ((RegisterField) { TMC5271_PWM_AUTOGRAD_MASK, TMC5271_PWM_AUTOGRAD_SHIFT, TMC5271_PWMCONF, false })
#define TMC5271_FREEWHEEL_MASK                         0x00300000
#define TMC5271_FREEWHEEL_SHIFT                        20
#define TMC5271_FREEWHEEL_FIELD                        ((RegisterField) { TMC5271_FREEWHEEL_MASK, TMC5271_FREEWHEEL_SHIFT, TMC5271_PWMCONF, false })
#define TMC5271_PWM_MEAS_SD_ENABLE_MASK                0x00400000
#define TMC5271_PWM_MEAS_SD_ENABLE_SHIFT               22
#define TMC5271_PWM_MEAS_SD_ENABLE_FIELD               ((RegisterField) { TMC5271_PWM_MEAS_SD_ENABLE_MASK, TMC5271_PWM_MEAS_SD_ENABLE_SHIFT, TMC5271_PWMCONF, false })
#define TMC5271_PWM_DIS_REG_STST_MASK                  0x00800000
#define TMC5271_PWM_DIS_REG_STST_SHIFT                 23
#define TMC5271_PWM_DIS_REG_STST_FIELD                 ((RegisterField) { TMC5271_PWM_DIS_REG_STST_MASK, TMC5271_PWM_DIS_REG_STST_SHIFT, TMC5271_PWMCONF, false })
#define TMC5271_PWM_REG_MASK                           0x0F000000
#define TMC5271_PWM_REG_SHIFT                          24
#define TMC5271_PWM_REG_FIELD                          ((RegisterField) { TMC5271_PWM_REG_MASK, TMC5271_PWM_REG_SHIFT, TMC5271_PWMCONF, false })
#define TMC5271_PWM_LIM_MASK                           0xF0000000
#define TMC5271_PWM_LIM_SHIFT                          28
#define TMC5271_PWM_LIM_FIELD                          ((RegisterField) { TMC5271_PWM_LIM_MASK, TMC5271_PWM_LIM_SHIFT, TMC5271_PWMCONF, false })
#define TMC5271_PWM_SCALE_SUM_MASK                     0x000003FF
#define TMC5271_PWM_SCALE_SUM_SHIFT                    0
#define TMC5271_PWM_SCALE_SUM_FIELD                    ((RegisterField) { TMC5271_PWM_SCALE_SUM_MASK, TMC5271_PWM_SCALE_SUM_SHIFT, TMC5271_PWM_SCALE, false })
#define TMC5271_PWM_SCALE_AUTO_MASK                    0x01FF0000
#define TMC5271_PWM_SCALE_AUTO_SHIFT                   16
#define TMC5271_PWM_SCALE_AUTO_FIELD                   ((RegisterField) { TMC5271_PWM_SCALE_AUTO_MASK, TMC5271_PWM_SCALE_AUTO_SHIFT, TMC5271_PWM_SCALE, false })
#define TMC5271_PWM_OFS_AUTO_MASK                      0x000000FF
#define TMC5271_PWM_OFS_AUTO_SHIFT                     0
#define TMC5271_PWM_OFS_AUTO_FIELD                     ((RegisterField) { TMC5271_PWM_OFS_AUTO_MASK, TMC5271_PWM_OFS_AUTO_SHIFT, TMC5271_PWM_AUTO, false })
#define TMC5271_PWM_GRAD_AUTO_MASK                     0x00FF0000
#define TMC5271_PWM_GRAD_AUTO_SHIFT                    16
#define TMC5271_PWM_GRAD_AUTO_FIELD                    ((RegisterField) { TMC5271_PWM_GRAD_AUTO_MASK, TMC5271_PWM_GRAD_AUTO_SHIFT, TMC5271_PWM_AUTO, false })
#define TMC5271_SG4_THRS_MASK                          0x000000FF
#define TMC5271_SG4_THRS_SHIFT                         0
#define TMC5271_SG4_THRS_FIELD                         ((RegisterField) { TMC5271_SG4_THRS_MASK, TMC5271_SG4_THRS_SHIFT, TMC5271_SG4_THRS, false })
#define TMC5271_SG4_FILT_EN_MASK                       0x00000100
#define TMC5271_SG4_FILT_EN_SHIFT                      8
#define TMC5271_SG4_FILT_EN_FIELD                      ((RegisterField) { TMC5271_SG4_FILT_EN_MASK, TMC5271_SG4_FILT_EN_SHIFT, TMC5271_SG4_THRS, false })
#define TMC5271_SG_ANGLE_OFFSET_MASK                   0x00000200
#define TMC5271_SG_ANGLE_OFFSET_SHIFT                  9
#define TMC5271_SG_ANGLE_OFFSET_FIELD                  ((RegisterField) { TMC5271_SG_ANGLE_OFFSET_MASK, TMC5271_SG_ANGLE_OFFSET_SHIFT, TMC5271_SG4_THRS, false })
#define TMC5271_SG4_RESULT_SG_RESULT_MASK              0x000003FF
#define TMC5271_SG4_RESULT_SG_RESULT_SHIFT             0
#define TMC5271_SG4_RESULT_SG_RESULT_FIELD             ((RegisterField) { TMC5271_SG4_RESULT_SG_RESULT_MASK, TMC5271_SG4_RESULT_SG_RESULT_SHIFT, TMC5271_SG4_RESULT, false })
#define TMC5271_IND_0_MASK                             0x000000FF
#define TMC5271_IND_0_SHIFT                            0
#define TMC5271_IND_0_FIELD                            ((RegisterField) { TMC5271_IND_0_MASK, TMC5271_IND_0_SHIFT, TMC5271_SG4_IND, false })
#define TMC5271_IND_1_MASK                             0x0000FF00
#define TMC5271_IND_1_SHIFT                            8
#define TMC5271_IND_1_FIELD                            ((RegisterField) { TMC5271_IND_1_MASK, TMC5271_IND_1_SHIFT, TMC5271_SG4_IND, false })
#define TMC5271_IND_2_MASK                             0x00FF0000
#define TMC5271_IND_2_SHIFT                            16
#define TMC5271_IND_2_FIELD                            ((RegisterField) { TMC5271_IND_2_MASK, TMC5271_IND_2_SHIFT, TMC5271_SG4_IND, false })
#define TMC5271_IND_3_MASK                             0xFF000000
#define TMC5271_IND_3_SHIFT                            24
#define TMC5271_IND_3_FIELD                            ((RegisterField) { TMC5271_IND_3_MASK, TMC5271_IND_3_SHIFT, TMC5271_SG4_IND, false })

#endif

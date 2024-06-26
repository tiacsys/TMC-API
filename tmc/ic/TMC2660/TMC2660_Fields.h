/*******************************************************************************
* Copyright © 2019 TRINAMIC Motion Control GmbH & Co. KG
* (now owned by Analog Devices Inc.),
*
* Copyright © 2023 Analog Devices Inc. All Rights Reserved.
* This software is proprietary to Analog Devices, Inc. and its licensors.
*******************************************************************************/


#ifndef TMC2660_FIELDS_H
#define TMC2660_FIELDS_H

#define TMC2660_MSTEP_MASK                   0x0FFC00 // DRVSTATUS / MSTEP // ustep position
#define TMC2660_MSTEP_SHIFT                  10 // min.: 0, max.: 1023, default: 0
#define TMC2660_STATUS_MASK                  0xFF // DRVSTATUS / STATUS // All Status flags (manually added)
#define TMC2660_STATUS_SHIFT                 0 // min.: 0, max.: 256, default 0
#define TMC2660_STST_MASK                    0x80 // DRVSTATUS / MSTEP //
#define TMC2660_STST_SHIFT                   7 // min.: 0, max.: 1, default: 0
#define TMC2660_OLB_MASK                     0x40 // DRVSTATUS / MSTEP //
#define TMC2660_OLB_SHIFT                    6 // min.: 0, max.: 1, default: 0
#define TMC2660_OLA_MASK                     0x20 // DRVSTATUS / MSTEP //
#define TMC2660_OLA_SHIFT                    5 // min.: 0, max.: 1, default: 0
#define TMC2660_S2GB_MASK                    0x10 // DRVSTATUS / MSTEP //
#define TMC2660_S2GB_SHIFT                   4 // min.: 0, max.: 1, default: 0
#define TMC2660_S2GA_MASK                    0x08 // DRVSTATUS / MSTEP //
#define TMC2660_S2GA_SHIFT                   3 // min.: 0, max.: 1, default: 0
#define TMC2660_OTPW_MASK                    0x04 // DRVSTATUS / MSTEP //
#define TMC2660_OTPW_SHIFT                   2 // min.: 0, max.: 1, default: 0
#define TMC2660_OT_MASK                      0x02 // DRVSTATUS / MSTEP //
#define TMC2660_OT_SHIFT                     1 // min.: 0, max.: 1, default: 0
#define TMC2660_SG_MASK                      0x01 // DRVSTATUS / MSTEP //
#define TMC2660_SG_SHIFT                     0 // min.: 0, max.: 1, default: 0
#define TMC2660_SG2_MASK                    0x0FFC00 // DRVSTATUS / SG // stallGuard2 value
#define TMC2660_SG2_SHIFT                   10 // min.: 0, max.: 1023, default: 0
#define TMC2660_STST_MASK                    0x80 // DRVSTATUS / SG //
#define TMC2660_STST_SHIFT                   7 // min.: 0, max.: 1, default: 0
#define TMC2660_OLB_MASK                     0x40 // DRVSTATUS / SG //
#define TMC2660_OLB_SHIFT                    6 // min.: 0, max.: 1, default: 0
#define TMC2660_OLA_MASK                     0x20 // DRVSTATUS / SG //
#define TMC2660_OLA_SHIFT                    5 // min.: 0, max.: 1, default: 0
#define TMC2660_S2GB_MASK                    0x10 // DRVSTATUS / SG //
#define TMC2660_S2GB_SHIFT                   4 // min.: 0, max.: 1, default: 0
#define TMC2660_S2GA_MASK                    0x08 // DRVSTATUS / SG //
#define TMC2660_S2GA_SHIFT                   3 // min.: 0, max.: 1, default: 0
#define TMC2660_OTPW_MASK                    0x04 // DRVSTATUS / SG //
#define TMC2660_OTPW_SHIFT                   2 // min.: 0, max.: 1, default: 0
#define TMC2660_OT_MASK                      0x02 // DRVSTATUS / SG //
#define TMC2660_OT_SHIFT                     1 // min.: 0, max.: 1, default: 0
#define TMC2660_SG_MASK                      0x01 // DRVSTATUS / SG //
#define TMC2660_SG_SHIFT                     0 // min.: 0, max.: 1, default: 0
#define TMC2660_SGU_MASK                     0x0F8000 // DRVSTATUS / SG_SE // Upper stallGuard2 value bit9:5
#define TMC2660_SGU_SHIFT                    15 // min.: 0, max.: 31, default: 0
#define TMC2660_SE_MASK                      0x7C00 // DRVSTATUS / SG_SE // Actual coolstep scaling value
#define TMC2660_SE_SHIFT                     10 // min.: 0, max.: 31, default: 0
#define TMC2660_STST_MASK                    0x80 // DRVSTATUS / SG_SE //
#define TMC2660_STST_SHIFT                   7 // min.: 0, max.: 1, default: 0
#define TMC2660_OLB_MASK                     0x40 // DRVSTATUS / SG_SE //
#define TMC2660_OLB_SHIFT                    6 // min.: 0, max.: 1, default: 0
#define TMC2660_OLA_MASK                     0x20 // DRVSTATUS / SG_SE //
#define TMC2660_OLA_SHIFT                    5 // min.: 0, max.: 1, default: 0
#define TMC2660_S2GB_MASK                    0x10 // DRVSTATUS / SG_SE //
#define TMC2660_S2GB_SHIFT                   4 // min.: 0, max.: 1, default: 0
#define TMC2660_S2GA_MASK                    0x08 // DRVSTATUS / SG_SE //
#define TMC2660_S2GA_SHIFT                   3 // min.: 0, max.: 1, default: 0
#define TMC2660_OTPW_MASK                    0x04 // DRVSTATUS / SG_SE //
#define TMC2660_OTPW_SHIFT                   2 // min.: 0, max.: 1, default: 0
#define TMC2660_OT_MASK                      0x02 // DRVSTATUS / SG_SE //
#define TMC2660_OT_SHIFT                     1 // min.: 0, max.: 1, default: 0
#define TMC2660_SG_MASK                      0x01 // DRVSTATUS / SG_SE //
#define TMC2660_SG_SHIFT                     0 // min.: 0, max.: 1, default: 0
#define TMC2660_REGISTER_ADDRESS_BITS_MASK   0xC00000 // DRVCTRL // Locked for Register Browser
#define TMC2660_REGISTER_ADDRESS_BITS_SHIFT  18 // min.: 0, max.: 0, default: 0
#define TMC2660_INTPOL_MASK                  0x0200 // DRVCTRL // Enabling step pulse interpolation by 16
#define TMC2660_INTPOL_SHIFT                 9 // min.: 0, max.: 1, default: 0
#define TMC2660_DEDGE_MASK                   0x0100 // DRVCTRL // Enabling double edge STEP pulse detection
#define TMC2660_DEDGE_SHIFT                  8 // min.: 0, max.: 1, default: 0
#define TMC2660_MRES_MASK                    0x0F // DRVCTRL // ustep resolution
#define TMC2660_MRES_SHIFT                   0 // min.: 0, max.: 8, default: 0
//#define TMC2660_REGISTER_ADDRESS_BITS_MASK 0x0E0000 // DRVCTRL // Locked for Register Browser
//#define TMC2660_REGISTER_ADDRESS_BITS_SHIFT 17 // min.: 0, max.: 0, default: 0
#define TMC2660_PHA_MASK                     0x020000 // DRVCTRL // Current flow from OA1 -> OA2 (if PHA=0), else from OA2 -> OA1
#define TMC2660_PHA_SHIFT                    17 // min.: 0, max.: 1, default: 0
#define TMC2660_CA_MASK                      0x01FE00 // DRVCTRL // Magnitude of current flow through coil A
#define TMC2660_CA_SHIFT                     9 // min.: 0, max.: 255, default: 0
#define TMC2660_PHB_MASK                     0x0100 // DRVCTRL // Current flow from OB1 -> OB2 (if PHB=0), else from OB2 -> OB1
#define TMC2660_PHB_SHIFT                    8 // min.: 0, max.: 1, default: 0
#define TMC2660_CB_MASK                      0xFF // DRVCTRL // Magnitude of current flow through coil B
#define TMC2660_CB_SHIFT                     0 // min.: 0, max.: 255, default: 0
//#define TMC2660_REGISTER_ADDRESS_BITS_MASK 0x0E0000 // CHOPCONF // Locked for Register Browser
//#define TMC2660_REGISTER_ADDRESS_BITS_SHIFT 17 // min.: 4, max.: 4, default: 0
#define TMC2660_TBL_MASK                     0x018000 // CHOPCONF // Blanking time [clock cycles]
#define TMC2660_TBL_SHIFT                    15 // min.: 0, max.: 3, default: 0
#define TMC2660_CHM_MASK                     0x4000 // CHOPCONF //
#define TMC2660_CHM_SHIFT                    14 // min.: 0, max.: 1, default: 0
#define TMC2660_RNDTF_MASK                   0x2000 // CHOPCONF //
#define TMC2660_RNDTF_SHIFT                  13 // min.: 0, max.: 1, default: 0
#define TMC2660_HDEC_MASK                    0x1800 // CHOPCONF // Hysteresis decrement interval [clock cycles]
#define TMC2660_HDEC_SHIFT                   11 // min.: 0, max.: 3, default: 0
#define TMC2660_HEND_MASK                    0x0780 // CHOPCONF // Hysteresis end (low) value; HEND+HSTART < 16
#define TMC2660_HEND_SHIFT                   7 // min.: 0, max.: 15, default: 0
#define TMC2660_HSTRT_MASK                   0x70 // CHOPCONF // Hysteresis start value
#define TMC2660_HSTRT_SHIFT                  4 // min.: 0, max.: 7, default: 0
#define TMC2660_HDEC1_MASK                   0x2000 // CHOPCONF // Fast decay mode settings
#define TMC2660_HDEC1_SHIFT                  12 // min.: 0, max.: 1, default: 0
#define TMC2660_HEND_MASK                    0x0780 // CHOPCONF // Sine wave offset
#define TMC2660_HEND_SHIFT                   7 // min.: 0, max.: 15, default: 0
#define TMC2660_HDEC0_MASK                   0x1000 // CHOPCONF // MSB of fast decay time setting
#define TMC2660_HDEC0_SHIFT                  11 // min.: 0, max.: 1, default: 0
// todo: CHECK 3: Redefinition of HSTRT doesn't really make sense here? (LH)
//#define TMC2660_HSTRT_MASK                   0x70 // CHOPCONF // LSBs of fast decay setting
//#define TMC2660_HSTRT_SHIFT                  0 // min.: 0, max.: 7, default: 0
#define TMC2660_TOFF_MASK                    0x0F // CHOPCONF // Slow decay duration. TOFF=0 => ShutOff
#define TMC2660_TOFF_SHIFT                   0 // min.: 0, max.: 15, default: 0
//#define TMC2660_REGISTER_ADDRESS_BITS_MASK 0x0E0000 // SMARTEN // Locked for Register Browser
//#define TMC2660_REGISTER_ADDRESS_BITS_SHIFT 17 // min.: 5, max.: 5, default: 0
#define TMC2660_SEIMIN_MASK                  0x8000 // SMARTEN // Minimum coolstep current
#define TMC2660_SEIMIN_SHIFT                 15 // min.: 0, max.: 1, default: 0
#define TMC2660_SEDN_MASK                    0x6000 // SMARTEN // StallGuard2 value count
#define TMC2660_SEDN_SHIFT                   13 // min.: 0, max.: 3, default: 0
#define TMC2660_SEUP_MASK                    0x60 // SMARTEN // Current increment size; StallGuard2 value sample count
#define TMC2660_SEUP_SHIFT                   5 // min.: 0, max.: 3, default: 0
#define TMC2660_SEMAX_MASK                   0x0F00 // SMARTEN // Upper coolstep threshold offset
#define TMC2660_SEMAX_SHIFT                  8 // min.: 0, max.: 15, default: 0
#define TMC2660_SEMIN_MASK                   0x0F // SMARTEN // Lower coolstep threshold. SEMIN=0 => coolStep disabled
#define TMC2660_SEMIN_SHIFT                  0 // min.: 0, max.: 15, default: 0
//#define //TMC2660_REGISTER_ADDRESS_BITS_MASK 0x0E0000 // SGCSCONF // Locked for Register Browser
//#define //TMC2660_REGISTER_ADDRESS_BITS_SHIFT 20 // min.: 6, max.: 6, default: 0
#define TMC2660_SFILT_MASK                   0x010000 // SGCSCONF // stallGuard2 filter mode enable
#define TMC2660_SFILT_SHIFT                  16 // min.: 0, max.: 1, default: 0
#define TMC2660_SGT_MASK                     0x7F00 // SGCSCONF // StallGuard2 threshold value
#define TMC2660_SGT_SHIFT                    8 // min.: 0, max.: 127, default: 0
#define TMC2660_CS_MASK                      0x1F // SGCSCONF // Current scale value
#define TMC2660_CS_SHIFT                     0 // min.: 0, max.: 31, default: 0
//#define //TMC2660_REGISTER_ADDRESS_BITS_MASK 0x0E0000 // DRVCONF // Locked for Register Browser
//#define //TMC2660_REGISTER_ADDRESS_BITS_SHIFT 20 // min.: 7, max.: 7, default: 0
#define TMC2660_TST_MASK                     0x010000 // DRVCONF // Reserved Test mode
#define TMC2660_TST_SHIFT                    16 // min.: 0, max.: 1, default: 0
#define TMC2660_SLPH_MASK                    0xC000 // DRVCONF // Slope control, high side
#define TMC2660_SLPH_SHIFT                   14 // min.: 0, max.: 3, default: 0
#define TMC2660_SLPL_MASK                    0x3000 // DRVCONF // Slope control, low side
#define TMC2660_SLPL_SHIFT                   12 // min.: 0, max.: 3, default: 0
#define TMC2660_DISS2G_MASK                  0x0400 // DRVCONF // Disable Short to ground protection
#define TMC2660_DISS2G_SHIFT                 10 // min.: 0, max.: 1, default: 0
#define TMC2660_TS2G_MASK                    0x0300 // DRVCONF // Short to ground detection timer
#define TMC2660_TS2G_SHIFT                   8 // min.: 0, max.: 3, default: 0
#define TMC2660_SDOFF_MASK                   0x80 // DRVCONF // Disable S/D interface
#define TMC2660_SDOFF_SHIFT                  7 // min.: 0, max.: 1, default: 0
#define TMC2660_VSENSE_MASK                  0x40 // DRVCONF // Sense resistor voltage-based current scaling
#define TMC2660_VSENSE_SHIFT                 6 // min.: 0, max.: 1, default: 0
#define TMC2660_RDSEL_MASK                   0x30 // DRVCONF // RD bit selection => DRVSTATUS(19:10)
#define TMC2660_RDSEL_SHIFT                  4 // min.: 0, max.: 2, default: 0

#endif /* TMC2660_FIELDS_H */

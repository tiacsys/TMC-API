/*******************************************************************************
* Copyright © 2019 TRINAMIC Motion Control GmbH & Co. KG
* (now owned by Analog Devices Inc.),
*
* Copyright © 2023 Analog Devices Inc. All Rights Reserved.
* This software is proprietary to Analog Devices, Inc. and its licensors.
*******************************************************************************/


#ifndef TMC2590_FIELDS_H
#define TMC2590_FIELDS_H

#define TMC2590_DRVCTRL_SDOFF_MASK  (0xFFFFF)
#define TMC2590_DRVCTRL_MASK        (0xFFFFF & ~((0x0F<<4) | (0x7F <<10)))
#define TMC2590_CHOPCONF_MASK       (0xFFFFF)
#define TMC2590_SMARTEN_MASK        (0xFFFFF & ~((0x01<<4) | (0x01<<7) | (0x01<<12)))
#define TMC2590_SGCSCONF_MASK       (0xFFFFF & ~((0x07<<5) | (0x01<<15)))
#define TMC2590_DRVCONF_MASK        (0xFFFFF & ~((0x0F<<0) | (0x01<<11)))

#define TMC2590_MSTEP_MASK                   0x0FFC00 // DRVSTATUS / MSTEP // ustep position
#define TMC2590_MSTEP_SHIFT                  10 // min.: 0, max.: 1023, default: 0
#define TMC2590_STATUS_MASK                  0xFF // DRVSTATUS / STATUS // All Status flags (manually added)
#define TMC2590_STATUS_SHIFT                 0 // min.: 0, max.: 256, default 0
#define TMC2590_STST_MASK                    0x80 // DRVSTATUS / MSTEP //
#define TMC2590_STST_SHIFT                   7 // min.: 0, max.: 1, default: 0
#define TMC2590_OLB_MASK                     0x40 // DRVSTATUS / MSTEP //
#define TMC2590_OLB_SHIFT                    6 // min.: 0, max.: 1, default: 0
#define TMC2590_OLA_MASK                     0x20 // DRVSTATUS / MSTEP //
#define TMC2590_OLA_SHIFT                    5 // min.: 0, max.: 1, default: 0
#define TMC2590_S2GB_MASK                    0x10 // DRVSTATUS / MSTEP //
#define TMC2590_S2GB_SHIFT                   4 // min.: 0, max.: 1, default: 0
#define TMC2590_S2GA_MASK                    0x08 // DRVSTATUS / MSTEP //
#define TMC2590_S2GA_SHIFT                   3 // min.: 0, max.: 1, default: 0
#define TMC2590_OTPW_MASK                    0x04 // DRVSTATUS / MSTEP //
#define TMC2590_OTPW_SHIFT                   2 // min.: 0, max.: 1, default: 0
#define TMC2590_OT_MASK                      0x02 // DRVSTATUS / MSTEP //
#define TMC2590_OT_SHIFT                     1 // min.: 0, max.: 1, default: 0
#define TMC2590_SG_MASK                      0x01 // DRVSTATUS / MSTEP //
#define TMC2590_SG_SHIFT                     0 // min.: 0, max.: 1, default: 0
#define TMC2590_SG2_MASK                    0x0FFC00 // DRVSTATUS / SG // stallGuard2 value
#define TMC2590_SG2_SHIFT                   10 // min.: 0, max.: 1023, default: 0
#define TMC2590_STST_MASK                    0x80 // DRVSTATUS / SG //
#define TMC2590_STST_SHIFT                   7 // min.: 0, max.: 1, default: 0
#define TMC2590_OLB_MASK                     0x40 // DRVSTATUS / SG //
#define TMC2590_OLB_SHIFT                    6 // min.: 0, max.: 1, default: 0
#define TMC2590_OLA_MASK                     0x20 // DRVSTATUS / SG //
#define TMC2590_OLA_SHIFT                    5 // min.: 0, max.: 1, default: 0
#define TMC2590_S2GB_MASK                    0x10 // DRVSTATUS / SG //
#define TMC2590_S2GB_SHIFT                   4 // min.: 0, max.: 1, default: 0
#define TMC2590_S2GA_MASK                    0x08 // DRVSTATUS / SG //
#define TMC2590_S2GA_SHIFT                   3 // min.: 0, max.: 1, default: 0
#define TMC2590_OTPW_MASK                    0x04 // DRVSTATUS / SG //
#define TMC2590_OTPW_SHIFT                   2 // min.: 0, max.: 1, default: 0
#define TMC2590_OT_MASK                      0x02 // DRVSTATUS / SG //
#define TMC2590_OT_SHIFT                     1 // min.: 0, max.: 1, default: 0
#define TMC2590_SG_MASK                      0x01 // DRVSTATUS / SG //
#define TMC2590_SG_SHIFT                     0 // min.: 0, max.: 1, default: 0
#define TMC2590_SGU_MASK                     0x0F8000 // DRVSTATUS / SG_SE // Upper stallGuard2 value bit9:5
#define TMC2590_SGU_SHIFT                    15 // min.: 0, max.: 31, default: 0
#define TMC2590_SE_MASK                      0x7C00 // DRVSTATUS / SG_SE // Actual coolstep scaling value
#define TMC2590_SE_SHIFT                     10 // min.: 0, max.: 31, default: 0
#define TMC2590_STST_MASK                    0x80 // DRVSTATUS / SG_SE //
#define TMC2590_STST_SHIFT                   7 // min.: 0, max.: 1, default: 0
#define TMC2590_OLB_MASK                     0x40 // DRVSTATUS / SG_SE //
#define TMC2590_OLB_SHIFT                    6 // min.: 0, max.: 1, default: 0
#define TMC2590_OLA_MASK                     0x20 // DRVSTATUS / SG_SE //
#define TMC2590_OLA_SHIFT                    5 // min.: 0, max.: 1, default: 0
#define TMC2590_S2GB_MASK                    0x10 // DRVSTATUS / SG_SE //
#define TMC2590_S2GB_SHIFT                   4 // min.: 0, max.: 1, default: 0
#define TMC2590_S2GA_MASK                    0x08 // DRVSTATUS / SG_SE //
#define TMC2590_S2GA_SHIFT                   3 // min.: 0, max.: 1, default: 0
#define TMC2590_OTPW_MASK                    0x04 // DRVSTATUS / SG_SE //
#define TMC2590_OTPW_SHIFT                   2 // min.: 0, max.: 1, default: 0
#define TMC2590_OT_MASK                      0x02 // DRVSTATUS / SG_SE //
#define TMC2590_OT_SHIFT                     1 // min.: 0, max.: 1, default: 0
#define TMC2590_SG_MASK                      0x01 // DRVSTATUS / SG_SE //
#define TMC2590_SG_SHIFT                     0 // min.: 0, max.: 1, default: 0
#define TMC2590_REGISTER_ADDRESS_BITS_MASK   0xC00000 // DRVCTRL // Locked for Register Browser
#define TMC2590_REGISTER_ADDRESS_BITS_SHIFT  18 // min.: 0, max.: 0, default: 0
#define TMC2590_INTPOL_MASK                  0x0200 // DRVCTRL // Enabling step pulse interpolation by 16
#define TMC2590_INTPOL_SHIFT                 9 // min.: 0, max.: 1, default: 0
#define TMC2590_DEDGE_MASK                   0x0100 // DRVCTRL // Enabling double edge STEP pulse detection
#define TMC2590_DEDGE_SHIFT                  8 // min.: 0, max.: 1, default: 0
#define TMC2590_MRES_MASK                    0x0F // DRVCTRL // ustep resolution
#define TMC2590_MRES_SHIFT                   0 // min.: 0, max.: 8, default: 0
//#define TMC2590_REGISTER_ADDRESS_BITS_MASK 0x0E0000 // DRVCTRL // Locked for Register Browser
//#define TMC2590_REGISTER_ADDRESS_BITS_SHIFT 17 // min.: 0, max.: 0, default: 0
#define TMC2590_PHA_MASK                     0x020000 // DRVCTRL // Current flow from OA1 -> OA2 (if PHA=0), else from OA2 -> OA1
#define TMC2590_PHA_SHIFT                    17 // min.: 0, max.: 1, default: 0
#define TMC2590_CA_MASK                      0x01FE00 // DRVCTRL // Magnitude of current flow through coil A
#define TMC2590_CA_SHIFT                     9 // min.: 0, max.: 255, default: 0
#define TMC2590_PHB_MASK                     0x0100 // DRVCTRL // Current flow from OB1 -> OB2 (if PHB=0), else from OB2 -> OB1
#define TMC2590_PHB_SHIFT                    8 // min.: 0, max.: 1, default: 0
#define TMC2590_CB_MASK                      0xFF // DRVCTRL // Magnitude of current flow through coil B
#define TMC2590_CB_SHIFT                     0 // min.: 0, max.: 255, default: 0
//#define TMC2590_REGISTER_ADDRESS_BITS_MASK 0x0E0000 // CHOPCONF // Locked for Register Browser
//#define TMC2590_REGISTER_ADDRESS_BITS_SHIFT 17 // min.: 4, max.: 4, default: 0
#define TMC2590_TBL_MASK                     0x018000 // CHOPCONF // Blanking time [clock cycles]
#define TMC2590_TBL_SHIFT                    15 // min.: 0, max.: 3, default: 0
#define TMC2590_CHM_MASK                     0x4000 // CHOPCONF //
#define TMC2590_CHM_SHIFT                    14 // min.: 0, max.: 1, default: 0
#define TMC2590_RNDTF_MASK                   0x2000 // CHOPCONF //
#define TMC2590_RNDTF_SHIFT                  13 // min.: 0, max.: 1, default: 0
#define TMC2590_HDEC_MASK                    0x1800 // CHOPCONF // Hysteresis decrement interval [clock cycles]
#define TMC2590_HDEC_SHIFT                   11 // min.: 0, max.: 3, default: 0
#define TMC2590_HEND_MASK                    0x0780 // CHOPCONF // Hysteresis end (low) value; HEND+HSTART < 16
#define TMC2590_HEND_SHIFT                   7 // min.: 0, max.: 15, default: 0
#define TMC2590_HSTRT_MASK                   0x70 // CHOPCONF // Hysteresis start value
#define TMC2590_HSTRT_SHIFT                  4 // min.: 0, max.: 7, default: 0
#define TMC2590_HDEC1_MASK                   0x2000 // CHOPCONF // Fast decay mode settings
#define TMC2590_HDEC1_SHIFT                  12 // min.: 0, max.: 1, default: 0
#define TMC2590_HEND_MASK                    0x0780 // CHOPCONF // Sine wave offset
#define TMC2590_HEND_SHIFT                   7 // min.: 0, max.: 15, default: 0
#define TMC2590_HDEC0_MASK                   0x1000 // CHOPCONF // MSB of fast decay time setting
#define TMC2590_HDEC0_SHIFT                  11 // min.: 0, max.: 1, default: 0
// todo: CHECK 3: Redefinition of HSTRT doesn't really make sense here? (LH)
//#define TMC2590_HSTRT_MASK                   0x70 // CHOPCONF // LSBs of fast decay setting
//#define TMC2590_HSTRT_SHIFT                  0 // min.: 0, max.: 7, default: 0
#define TMC2590_TOFF_MASK                    0x0F // CHOPCONF // Slow decay duration. TOFF=0 => ShutOff
#define TMC2590_TOFF_SHIFT                   0 // min.: 0, max.: 15, default: 0
//#define TMC2590_REGISTER_ADDRESS_BITS_MASK 0x0E0000 // SMARTEN // Locked for Register Browser
//#define TMC2590_REGISTER_ADDRESS_BITS_SHIFT 17 // min.: 5, max.: 5, default: 0
#define TMC2590_SEIMIN_MASK                  0x8000 // SMARTEN // Minimum coolstep current
#define TMC2590_SEIMIN_SHIFT                 15 // min.: 0, max.: 1, default: 0
#define TMC2590_SEDN_MASK                    0x6000 // SMARTEN // StallGuard2 value count
#define TMC2590_SEDN_SHIFT                   13 // min.: 0, max.: 3, default: 0
#define TMC2590_SEUP_MASK                    0x60 // SMARTEN // Current increment size; StallGuard2 value sample count
#define TMC2590_SEUP_SHIFT                   5 // min.: 0, max.: 3, default: 0
#define TMC2590_SEMAX_MASK                   0x0F00 // SMARTEN // Upper coolstep threshold offset
#define TMC2590_SEMAX_SHIFT                  8 // min.: 0, max.: 15, default: 0
#define TMC2590_SEMIN_MASK                   0x0F // SMARTEN // Lower coolstep threshold. SEMIN=0 => coolStep disabled
#define TMC2590_SEMIN_SHIFT                  0 // min.: 0, max.: 15, default: 0
//#define //TMC2590_REGISTER_ADDRESS_BITS_MASK 0x0E0000 // SGCSCONF // Locked for Register Browser
//#define //TMC2590_REGISTER_ADDRESS_BITS_SHIFT 20 // min.: 6, max.: 6, default: 0
#define TMC2590_SFILT_MASK                   0x010000 // SGCSCONF // stallGuard2 filter mode enable
#define TMC2590_SFILT_SHIFT                  16 // min.: 0, max.: 1, default: 0
#define TMC2590_SGT_MASK                     0x7F00 // SGCSCONF // StallGuard2 threshold value
#define TMC2590_SGT_SHIFT                    8 // min.: 0, max.: 127, default: 0
#define TMC2590_CS_MASK                      0x1F // SGCSCONF // Current scale value
#define TMC2590_CS_SHIFT                     0 // min.: 0, max.: 31, default: 0
//#define //TMC2590_REGISTER_ADDRESS_BITS_MASK 0x0E0000 // DRVCONF // Locked for Register Browser
//#define //TMC2590_REGISTER_ADDRESS_BITS_SHIFT 20 // min.: 7, max.: 7, default: 0
#define TMC2590_TST_MASK                     0x010000 // DRVCONF // Reserved Test mode
#define TMC2590_TST_SHIFT                    16 // min.: 0, max.: 1, default: 0
#define TMC2590_SLPH_MASK                    0xC000 // DRVCONF // Slope control, high side
#define TMC2590_SLPH_SHIFT                   14 // min.: 0, max.: 3, default: 0
#define TMC2590_SLPL_MASK                    0x3000 // DRVCONF // Slope control, low side
#define TMC2590_SLPL_SHIFT                   12 // min.: 0, max.: 3, default: 0
#define TMC2590_DISS2G_MASK                  0x0400 // DRVCONF // Disable Short to ground protection
#define TMC2590_DISS2G_SHIFT                 10 // min.: 0, max.: 1, default: 0
#define TMC2590_TS2G_MASK                    0x0300 // DRVCONF // Short to ground detection timer
#define TMC2590_TS2G_SHIFT                   8 // min.: 0, max.: 3, default: 0
#define TMC2590_SDOFF_MASK                   0x80 // DRVCONF // Disable S/D interface
#define TMC2590_SDOFF_SHIFT                  7 // min.: 0, max.: 1, default: 0
#define TMC2590_VSENSE_MASK                  0x40 // DRVCONF // Sense resistor voltage-based current scaling
#define TMC2590_VSENSE_SHIFT                 6 // min.: 0, max.: 1, default: 0
#define TMC2590_RDSEL_MASK                   0x30 // DRVCONF // RD bit selection => DRVSTATUS(19:10)
#define TMC2590_RDSEL_SHIFT                  4 // min.: 0, max.: 2, default: 0

#endif /* TMC2590_FIELDS_H */

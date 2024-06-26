/*******************************************************************************
* Copyright © 2019 TRINAMIC Motion Control GmbH & Co. KG
* (now owned by Analog Devices Inc.),
*
* Copyright © 2023 Analog Devices Inc. All Rights Reserved.
* This software is proprietary to Analog Devices, Inc. and its licensors.
*******************************************************************************/


// TODO: Incomplete, currently only actively used fields in EvalSystem are defined

#ifndef TMC8462_FIELDS_H
#define TMC8462_FIELDS_H

// TMC8462_ESC_AL_STATUS (0x0130)
#define TMC8462_ESC_AL_STATE_MASK     0x0F
#define TMC8462_ESC_AL_STATE_SHIFT    0
#define TMC8462_ESC_AL_ERROR_MASK     0x10
#define TMC8462_ESC_AL_ERROR_SHIFT    4
#define TMC8462_ESC_DEVICEID_MASK     0x20
#define TMC8462_ESC_DEVICEID_SHIFT    5

// TMC8462_ESC_PDI_CTRL (0x0140)
#define TMC8462_ESC_PDI_MODE_MASK     0xFF
#define TMC8462_ESC_PDI_MODE_SHIFT    0

// TMC8462_ESC_EEP_CFG (0x0500)
#define TMC8462_ESC_EEP_PDI_MASK      0x01
#define TMC8462_ESC_EEP_PDI_SHIFT     0

// TMC8462_ESC_EEP_PDI_ACCESS (0x0501)
#define TMC8462_ESC_PDI_ACCESS_MASK   0x01
#define TMC8462_ESC_PDI_ACCESS_SHIFT  0

// TMC8462_ESC_EEP_STATUS (0x0502)
#define TMC8462_ESC_EEP_BUSY_MASK     0x8000
#define TMC8462_ESC_EEP_BUSY_SHIFT    15
#define TMC8462_ESC_EEP_CMD_MASK      0x0700
#define TMC8462_ESC_EEP_CMD_SHIFT     8

#endif /* TMC8462_FIELDS_H */

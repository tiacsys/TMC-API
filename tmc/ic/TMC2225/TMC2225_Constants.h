/*******************************************************************************
* Copyright © 2019 TRINAMIC Motion Control GmbH & Co. KG
* (now owned by Analog Devices Inc.),
*
* Copyright © 2023 Analog Devices Inc. All Rights Reserved.
* This software is proprietary to Analog Devices, Inc. and its licensors.
*******************************************************************************/


#ifndef TMC_IC_TMC2225_TMC2225_CONSTANTS_H_
#define TMC_IC_TMC2225_TMC2225_CONSTANTS_H_

#include "tmc/helpers/Constants.h"

#define TMC2225_MOTORS           1
#define TMC2225_REGISTER_COUNT   TMC_REGISTER_COUNT
#define TMC2225_WRITE_BIT        TMC_WRITE_BIT
#define TMC2225_ADDRESS_MASK     TMC_ADDRESS_MASK
#define TMC2225_MAX_VELOCITY     s32_MAX
#define TMC2225_MAX_ACCELERATION u24_MAX

#endif /* TMC_IC_TMC2225_TMC2225_CONSTANTS_H_ */

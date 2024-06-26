/*******************************************************************************
* Copyright © 2018 TRINAMIC Motion Control GmbH & Co. KG
* (now owned by Analog Devices Inc.),
*
* Copyright © 2023 Analog Devices Inc. All Rights Reserved.
* This software is proprietary to Analog Devices, Inc. and its licensors.
*******************************************************************************/


#ifndef TMC6200_REGISTER_H
#define TMC6200_REGISTER_H

	// ===== TMC6200 register set =====

	#define TMC6200_GCONF          0x00
	#define TMC6200_GSTAT          0x01
	#define TMC6200_IOIN_OUTPUT    0x04
	#define TMC6200_OTP_PROG       0x06
	#define TMC6200_OTP_READ       0x07
	#define TMC6200_FACTORY_CONF   0x08
	#define TMC6200_SHORT_CONF     0x09
	#define TMC6200_DRV_CONF       0x0A

#endif /* TMC6200_REGISTER_H */

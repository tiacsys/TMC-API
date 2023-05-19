/*
 * Config.h
 *
 *  Created on: 13.06.2018
 *      Author: LK
 */

#ifndef TMC_HELPERS_CONFIG_H_
#define TMC_HELPERS_CONFIG_H_

#include "Constants.h"
#include "Types.h"

#if defined(__ZEPHYR__) && defined(CONFIG_READY)
#undef CONFIG_READY
#endif

#if defined(__ZEPHYR__) && defined(CONFIG_RESET)
#undef CONFIG_RESET
#endif

#if defined(__ZEPHYR__) && defined(CONFIG_RESTORE)
#undef CONFIG_RESTORE
#endif

// Callback functions have IC-dependent parameters
// To store the function pointers we use this dummy type, which is never
// called without casting it to the IC-specific type first.
// (Casting between function pointers is allowed by the C standard)
typedef void (*tmc_callback_config)(void);

// States of a configuration
typedef enum {
	CONFIG_READY,
	CONFIG_RESET,
	CONFIG_RESTORE
} ConfigState;

// structure for configuration mechanism
typedef struct
{
	ConfigState          state;
	uint8_t                configIndex;
	int32_t                shadowRegister[TMC_REGISTER_COUNT];
	uint8_t (*reset)       (void);
	uint8_t (*restore)     (void);
	tmc_callback_config  callback;
	uint8_t                   channel;
} ConfigurationTypeDef;

#endif /* TMC_HELPERS_CONFIG_H_ */

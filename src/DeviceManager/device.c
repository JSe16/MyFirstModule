/*
 * Copyright (c) 2021, Legrand North America, LLC.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "myFirstTry.h"
 #include <zephyr/kernel.h>
 #include <zephyr/logging/log.h>
/* Stackgröße und Priorität für den Thread */


LOG_MODULE_REGISTER(device, CONFIG_APP_LOG_LEVEL);

void init_device(device_t *dev, uint32_t id, uint32_t flags)
{
	dev->id = id;
	dev->flags = flags;
	LOG_INF("Device initialized with ID: %d and flags: %d", id, flags);
}
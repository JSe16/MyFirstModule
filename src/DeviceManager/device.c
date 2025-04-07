/*
 * Copyright (c) 2021, Legrand North America, LLC.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "device.h"
 #include <zephyr/kernel.h>
 #include <zephyr/logging/log.h>
/* Stackgröße und Priorität für den Thread */



void init_device(device_t *dev, uint32_t id, uint32_t flags)
{
	dev->id = id;
	dev->flags = flags;
}
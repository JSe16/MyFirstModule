# Copyright (c) 2021, Legrand North America, LLC.
# SPDX-License-Identifier: Apache-2.0

zephyr_library()
zephyr_library_sources(src/myFirstTry.c
		       src/DeviceManager/device.c)
zephyr_include_directories(include)
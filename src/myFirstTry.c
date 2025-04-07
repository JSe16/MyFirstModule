/*
 * Copyright (c) 2021, Legrand North America, LLC.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "myFirstTry.h"

int init_my_first_try(void)
{
	static int test;
	test++;
	return test;
}

int only_for_test(void)
{
	static int buffer = 10;
	buffer++;
	return buffer;
}
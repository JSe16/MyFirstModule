/*
 * Copyright (c) 2021, Legrand North America, LLC.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "myFirstTry.h"
#include <zephyr.h>
#include <sys/printk.h>
/* Stackgröße und Priorität für den Thread */


#define MY_STACK_SIZE 500
#define MY_PRIORITY 5

/* Thread-Stack und Steuerblock */
K_THREAD_STACK_DEFINE(my_stack_area, MY_STACK_SIZE);
struct k_thread my_thread_data;

/* Funktion, die der Thread ausführt */
void my_thread(void *arg1, void *arg2, void *arg3)
{
    while (1) {
        printk("Hallo aus meinem Thread!\n");
        k_sleep(K_MSEC(1000));  // 1 Sekunde schlafen
    }
}


int init_my_first_try(void)
{
    /* Thread starten */
    k_thread_create(&my_thread_data, my_stack_area,
		K_THREAD_STACK_SIZEOF(my_stack_area),
		my_thread,    // Funktion
		NULL, NULL, NULL,  // Argumente
		MY_PRIORITY, 0, K_NO_WAIT); 
		
	return 0;
}

int only_for_test(void)
{
	static int buffer = 10;
	buffer++;
	return buffer;
}
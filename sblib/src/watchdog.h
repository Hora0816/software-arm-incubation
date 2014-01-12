/*
 *  Copyright (c) 2014 Martin Glueck <martin@mangari.org>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 3 as
 *  published by the Free Software Foundation.
 */


#ifndef WATCHDOG_H_
#define WATCHDOG_H_

/**
 * Initialize and start the watchdog.
 *
 * The clock of the watchdog will be initialized to 1 MHz.
 *
 * @param timeout - watchdog timeout in usec (max is 8s.388608)
 */
void WD_Init(unsigned int timeout);

/**
 * Trigger the watchdog.
 */
void WD_Trigger();

/**
 * Stop the watchdog.
 */
void WD_Stop();

/**
 * Restart the watchdog after it was stopped by WD_Stop().
 */
void WD_Start();

#endif /* WATCHDOG_H_ */

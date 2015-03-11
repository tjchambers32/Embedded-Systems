/*
 * intervalTimer.h
 *
 *  Created on: Sep 23, 2014
 *      Author: tchambs
 */

#ifndef INTERVALTIMER_H_
#define INTERVALTIMER_H_

#include <stdio.h>
#include "xil_io.h"

uint32_t intervalTimer_start(uint32_t);
uint32_t intervalTimer_stop(uint32_t);
uint32_t intervalTimer_reset(uint32_t);
uint32_t intervalTimer_init(uint32_t);
uint32_t intervalTimer_initAll();
uint32_t intervalTimer_resetAll();
uint32_t intervalTimer_testAll();
uint32_t intervalTimer_runTest(uint32_t);
uint32_t intervalTimer_getTotalDurationInSeconds(uint32_t timerNumber, double *seconds);

#endif /* INTERVALTIMER_H_ */

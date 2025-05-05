#ifndef _HFEASY_H_
#define _HFEASY_H_

#include <hsf.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
#include <ctype.h>
#include <errno.h>
#include <limits.h>
#include <math.h>

#include "gpio.h"
#include "httpd.h"
#include "mqttcli.h"
#include "buzzer.h"
#include "timer.h"
#include "config.h"
#include "led.h"
#include "relay.h"
#include "i2c.h"
#include "dimmer.h"
#include "network.h"
#include "echobot.h"

#define HFEASY_VERSION_MAJOR	1
#define HFEASY_VERSION_MINOR	1


enum {
	HFTIMER_ID_DEBOUNCE = 0,
	HFTIMER_ID_RECOVERY,
	HFTIMER_ID_BUZZER,
	HFTIMER_ID_RESET,
	HFTIMER_ID_LED1,
	HFTIMER_ID_LED2,
	HFTIMER_ID_DIMMER,
	HFTIMER_ID_UP,
	HFTIMER_ID_DN
};

#endif

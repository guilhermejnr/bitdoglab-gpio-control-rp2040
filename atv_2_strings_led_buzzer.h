#ifndef ATV_2_STRINGS_LED_BUZZER_H
#define ATV_2_STRINGS_LED_BUZZER_H

#include <stdio.h>
#include <string.h>
#include "pico/stdlib.h"
#include "hardware/watchdog.h"
#include "hardware/structs/psm.h"
#include "pico/bootrom.h"

#define LED_RED 13
#define LED_BLUE 12
#define LED_GREEN 11
#define BUZZER 21


void init_pins();
void execute_command(const char *command);

#endif
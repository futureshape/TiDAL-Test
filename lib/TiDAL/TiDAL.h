#ifndef TIDAL_H
#define TIDAL_H

#include <Arduino.h>

// PIN DEFINITIONS

// Screen
#define LCD_CS      10
#define LCD_RST     14 
#define LCD_DC      13
#define LCD_MOSI    11
#define LCD_SCLK    12
#define LCD_POWER   39
#define LCD_BLEN     0

#define LCD_WIDTH  135
#define LCD_HEIGHT 240

// BUTTONS
#define BTN_A        2
#define BTN_B        1
#define BTN_FRONT    6
#define BTN_J_UP    15
#define BTN_J_JDOWN 16
#define BTN_J_LEFT   8
#define BTN_J_RIGHT  7
#define BTN_J_CENTER 9

// LED (NeoPixel)
#define LED_DATA    46
#define LED_PWREN    3

void tidal_lcd_setup();
void tidal_lcd_backlight_on();
void tidal_lcd_backlight_off();

void tidal_led_setup();
void tidal_led_pwr_on();
void tidal_led_pwr_off();

#endif
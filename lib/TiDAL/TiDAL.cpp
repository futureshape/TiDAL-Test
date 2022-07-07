#include <TiDAL.h>

void tidal_lcd_setup()
{
    // via https://github.com/emfcamp/TiDAL-Firmware/blob/1e8d3cecb728e050b52df72f1005f84dc7869f0a/modules/tidal.py#L197
    // "this is mandatory even if LCD is disabled [...] - having this pin high significantly increases power consumption"
    pinMode(LCD_POWER, OUTPUT);
    digitalWrite(LCD_POWER, 0);

    pinMode(LCD_BLEN, OUTPUT);
    tidal_lcd_backlight_on();
}

void tidal_lcd_backlight_off()
{
    digitalWrite(LCD_BLEN, 1);
}

void tidal_lcd_backlight_on()
{
    digitalWrite(LCD_BLEN, 0);
}

void tidal_led_setup()
{   
    pinMode(LED_PWREN, OUTPUT);
    pinMode(LED_DATA, OUTPUT);
    tidal_led_pwr_on();
}

void tidal_led_pwr_on()
{
    digitalWrite(LED_PWREN, 0);
}

void tidal_led_pwr_off()
{
    digitalWrite(LED_PWREN, 1);
}
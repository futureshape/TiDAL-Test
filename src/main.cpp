#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_ST7789.h> // Hardware-specific library for ST7789
#include <Adafruit_NeoPixel.h>
#include <SPI.h>
#include <TiDAL.h>

Adafruit_ST7789 lcd = Adafruit_ST7789(LCD_CS, LCD_DC, LCD_MOSI, LCD_SCLK, LCD_RST);
Adafruit_NeoPixel led(1, LED_DATA, NEO_GRB + NEO_KHZ800);

void setup(void) {
  Serial.begin(9600);
  Serial.print("Hello World - Testing Serial Output");

  tidal_lcd_setup();
  lcd.init(LCD_WIDTH, LCD_HEIGHT);
  lcd.setSPISpeed(40000000);
  lcd.fillScreen(ST77XX_RED);
  lcd.setTextColor(ST77XX_WHITE);
  lcd.setTextSize(2);
  lcd.println("Hello World");

  tidal_led_setup();
  led.begin();
  led.setPixelColor(0, led.Color(255,0,0));
  led.show();
}

void loop() {
  lcd.invertDisplay(true);
  Serial.println("Ping");
  led.clear();
  led.show();
  delay(500);
  lcd.invertDisplay(false);
  Serial.println("Pong");
  led.setPixelColor(0, led.Color(255,0,0));
  led.show();
  delay(500);
}
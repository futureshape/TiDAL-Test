# TiDAL-Test

Sample project to program [TiDAL](https://badge.emfcamp.org/wiki/TiDAL), the Electromagnetic Field 2022 Badge in C/C++ and the Arduino framework.

This is meant to be used with [PlatformIO](https://platformio.org/platformio-ide) although you could easily adapt it to the Arduino IDE. 

Pin definitions and a couple of necessary power management functions are in `lib/TiDAL`. This could eventually be turned into a proper library that can be imported in any project.

Sample code to use the LCD screen and built-in Neopixel-style LED is in `src/main.cpp`.

## TODO

* Enable and test PSRAM (maybe create a separate PlatformIO board definition for this)

// hb_back_life_epd.ino
// https://gardnertech-my.sharepoint.com/personal/tim_gardnertech_com/_layouts/15/onedrive.aspx?id=%2Fpersonal%2Ftim%5Fgardnertech%5Fcom%2FDocuments%2FPublic%2DShared%2FHB46%5FDemo&ga=1

/* Minimal example code from GxEPD library for the Arduino Uno and MH-ET e-Paper display from Hackerbox #46

   Visit https://www.instructables.com/id/HackerBox-0046-Persistence/
   
   Happy Hacking! :)
*/


// mapping suggestion for AVR, UNO, NANO etc.
// BUSY -> 7, RST -> 9, DC -> 8, CS-> 10, CLK -> 13, DIN -> 11

// include library, include base class, make path known
#include <Arduino.h>
#include <GxEPD.h>

// select the display class to use, only one
#include <GxGDEW0154Z04/GxGDEW0154Z04.h>  // 1.54" b/w/r 200x200  // This is the display in HackerBox #46

#include GxEPD_BitmapExamples

// FreeFonts from Adafruit_GFX
#include <Fonts/FreeMonoBold9pt7b.h>
#include <Fonts/FreeMonoBold12pt7b.h>
#include <Fonts/FreeMonoBold18pt7b.h>
#include <Fonts/FreeMonoBold24pt7b.h>

#include <GxIO/GxIO_SPI/GxIO_SPI.h>
#include <GxIO/GxIO.h>

// for SPI pin definitions see e.g.:
// C:\Users\xxx\AppData\Local\Arduino15\packages\arduino\hardware\avr\1.6.21\variants\standard\pins_arduino.h

GxIO_Class io(SPI, /*CS=*/ SS, /*DC=*/ 8, /*RST=*/ 9); // arbitrary selection of 8, 9 selected for default of GxEPD_Class
GxEPD_Class display(io, /*RST=*/ 9, /*BUSY=*/ 7); // default selection of (9), 7

void showText();

void setup()
{
  Serial.begin(115200);
  Serial.println();
  Serial.println("setup");
  display.init(115200); // enable diagnostic output on Serial
  Serial.println("setup done");


  display.drawPaged(showText);
}

void loop()
{

}

void showText() // Show HACKER BOXES HACK LIFE
{
  const GFXfont* f1 = &FreeMonoBold24pt7b;
  const GFXfont* f2 = &FreeMonoBold12pt7b;
  display.fillScreen(GxEPD_BLACK);  //  Can also do RED for fll color or text.
  display.setTextColor(GxEPD_WHITE);
  display.setFont(f1);
  display.setCursor(18, 50);
  display.println("HACKER");
  display.println(" BOXES");
  display.setFont(f2);
  display.setCursor(35, 120);
  display.println("HACK LIFE");
}

//  Knight rider display on 7 LEDs
//  From: https://content.instructables.com/FR2/MICJ/JZX14RWI/FR2MICJJZX14RWI.ino

#include <Arduino.h>

void setup()
{
    // set up pins 1 to 7 as outputs
    for (int i = 1; i < 8; i++) 
    {
        pinMode(i, OUTPUT);
    }
}

// function to switch all LEDs off
void allLEDsOff(void)
{
    for (int i = 1; i < 8; i++) 
    {
        digitalWrite(i, LOW);
    }
}

void loop() {
    // move one LED to the right
    for (int i = 1; i < 8; i++) 
    {
        allLEDsOff();
        digitalWrite(i, HIGH);
        delay(80);
    }
    // move one LED to the left
    for (int i = 7; i > 0; i--) 
    {
        allLEDsOff();
        digitalWrite(i, HIGH);
        delay(80);
    }
}

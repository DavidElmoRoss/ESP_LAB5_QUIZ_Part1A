/*
This program should count from 0-5 on the top line of the
LCD continously every 2 seconds

What one statement must you add to this code to make this happen
*/
#include <Arduino.h> 
#include <Wire.h>
#include "rgb_lcd.h"
#include <Ticker.h>

Ticker Fred;

short counter=0;
char buf[10];
rgb_lcd LCD;

void count(void)
{
    counter++;
}

void setup()
{

}
void loop()
{
                                   // YOUR STATEMENT goes on THIS LINE
    LCD.begin(16,2);
    LCD.clear();
    LCD.setRGB(0x00,0x00,0xff);
    for(;;)
    {
        while(counter <=5)
        {
          LCD.setCursor(7,0);
          sprintf(buf,"%d",counter);
          LCD.print(buf);
        }
        counter=0;
    }
}


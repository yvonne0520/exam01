#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;

int main()

{
    // basic printf demo = 16 by 18 characters on screen
    uLCD.printf("\n106061229\n"); //Default Green on black text
    uLCD.text_width(4); //4X size text
    uLCD.text_height(4);
    uLCD.color(RED);
    uLCD.line(20,30,100,30,BLUE);
    uLCD.line(20,110,100,110,BLUE);
    uLCD.line(100,30,100,110,BLUE);
    uLCD.line(20,30,20,110,BLUE);
}
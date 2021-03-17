#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2);

int main()
{
    uLCD.background_color(0xFFFFFF);
    uLCD.textbackground_color(WHITE);
    uLCD.cls();
    uLCD.color(BLUE);
    uLCD.printf("\n107061115\n");
    uLCD.text_width(4);
    uLCD.text_height(4);
    uLCD.color(GREEN);
    for (int i=30; i>=0; --i) {
        uLCD.locate(1,2);
        uLCD.printf("%2d",i);
        ThisThread::sleep_for(1s);
    }
}
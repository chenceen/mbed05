// Show your student ID number and a 30 second count down on QC1602A

#include "mbed.h"
#include "TextLCD.h"

TextLCD lcd(D2, D3, D4, D5, D6, D7);

int main()
{
    lcd.printf("107061115\n");
    for (int i = 30; i >= 0; --i)
    {
        lcd.locate(7, 1);
        lcd.printf("%2d", i);
        ThisThread::sleep_for(1s);
    }
}
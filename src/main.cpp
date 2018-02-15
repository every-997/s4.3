#include <mbed.h>
//import the relevant libraries
#include <C12832.h>

// Using Arduino pin notation
C12832 lcd(D11, D13, D12, D7, D10);

int main()
{
    int j=0;
    lcd.cls();
    //places the text at a certain point on the lcd
    lcd.locate(0,0);
    //text output
    lcd.printf("The output ability is amazing");
    lcd.locate(0,10);
    //ouputs the details of the display (14 columns and 3 rows)
    //128x32 pixels
    lcd.printf("char %dx%d : %dx%d pixels",
               lcd.columns(), lcd.rows(),
               lcd.width(), lcd.height() );
    //draws a small circle
    lcd.circle(100, 20, 10, 1);
    //a small counting method - displays the dynamic ability of the lcd
    while(true) {
        lcd.locate(0,20);
        lcd.printf("Counting : %4d",j);
        j++;
        wait(1.0);
    }
}

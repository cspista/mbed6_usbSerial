/* Lab10_USBserail
 *
 * Mbed USBSerial Hello world" example
 * Just Open a terminal window and see the result.
 * Note that no baudrate setting is necessary.
 */
 
#include "mbed.h"
#include "usb/USBSerial.h"
 
USBSerial serial;       //Virtual serial port over USB 
int main(void) { 
    while(1) {
        serial.printf("Hi, type in something!\r\n");
        char ch = serial.getc();
        if(ch > ' ') {
            serial.printf("You typed: %c\r\n", ch);
        }
        ThisThread::sleep_for(500ms);    
    }
}

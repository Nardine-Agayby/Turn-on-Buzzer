/*
 * File:   main.c
 * Author: nagay
 *
 * Created on April 10, 2020, 12:50 AM
 */


#include <avr/io.h>
#define BUZZER 3

int main(void) {
    
    /* Replace with your application code */
    DDRA |= (1 << BUZZER);     // set bit3 to be output
    PORTA |= (1 << BUZZER);    //set bit 3 in portA HIGH
    while (1) {
    }
}

/*
 * File:   application.c
 * Author: ayman
 *
 */

#include "application.h"

    

led_t led1 = {.port_name = PORTC_INDEX, .pin = PIN0, .led_status = LED_OFF};
led_t led2 = {.port_name = PORTC_INDEX, .pin = PIN1, .led_status = LED_OFF};
led_t led3 = {.port_name = PORTC_INDEX, .pin = PIN2, .led_status = LED_OFF};

button_t btn2 = {.port_name = PORTD_INDEX, .pin = PIN1, .button_status = BUTTON_NOT_PRESSED};
uint8_t btn2_status = ZERO_INIT;


int main() {
    
    uint8_t counter =0;
    led_initialize(&led1);
    led_initialize(&led2);
    led_initialize(&led3);
    button_initialize(&btn2);
    
    while(TRUE){
        
        button_get_status(&btn2, &btn2_status);
        
        if(btn2_status == BUTTON_PRESSED){
            if(counter == 0 ){
                led_turn_on(&led1);
                __delay_ms(700);
                led_turn_off((&led1));
                counter = counter++;
            }
            else if(counter == 1){
                led_turn_on(&led2);
                 __delay_ms(700);
                 led_turn_off((&led2));
                __delay_ms(700);
                led_turn_on(&led2);
                __delay_ms(700);
                led_turn_off((&led2));
                counter = counter++;
            }
            else if(counter == 2){
                led_turn_on(&led3);
                    __delay_ms(700);
                    led_turn_off((&led3));
                    __delay_ms(700);
                    led_turn_on(&led3);
                    __delay_ms(700);
                    led_turn_off((&led3));
                    __delay_ms(700);
                    led_turn_on(&led3);
                    __delay_ms(700);
                    led_turn_off((&led3)); 
                    counter = counter++;
            }
            else if(counter == 3){
                led_turn_on(&led1);
                led_turn_on(&led2);
                led_turn_on(&led3);
                __delay_ms(700);
                counter =counter++;
            }
            else{
                led_turn_off(&led1);
                led_turn_off(&led2);
                led_turn_off(&led3);
                __delay_ms(700);
                counter = 0;
                    
            }
        }
        else { }
    }
    
    return (EXIT_SUCCESS);
}


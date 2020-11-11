/* 
 * File:   ecu_button.h
 * Author: ayman
 *
 */

#ifndef ECU_BUTTON_H
#define	ECU_BUTTON_H

#include "../LEDs.X/mcal_gpio.h"

/* Section: Macro Declarations */

/* Section: Data Type Definitions */
typedef enum{
    BUTTON_NOT_PRESSED,
    BUTTON_PRESSED
}button_status;

typedef struct{
    uint8_t port_name : 4;     /* PORTA_INDEX : PORTE_INDEX */
    uint8_t pin : 3;           /* PIN0 : PIN7 */
    uint8_t button_status : 1; /* BUTTON_NOT_PRESSED or BUTTON_PRESSED */
}button_t;

/* Section: Function declarations */
ret_status button_initialize(button_t *btn);
ret_status button_get_status(button_t *btn, button_status *btn_status);

#endif	/* ECU_BUTTON_H */



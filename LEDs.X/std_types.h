/* 
 * File:   std_types.h
 * Author: ayman
 *
 */

#ifndef STD_TYPES_H
#define	STD_TYPES_H

#include "xc.h"
#include "pic18.h"

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef signed char sint8_t;
typedef signed short sint16_t;
typedef signed int sint32_t;

#define ZERO_INIT 0
#define TRUE  1
#define FALSE 0

#define _XTAL_FREQ 4000000UL

typedef enum{
    R_NOK,
    R_OK
}ret_status;

#endif	/* STD_TYPES_H */


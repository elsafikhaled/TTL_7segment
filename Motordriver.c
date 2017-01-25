/*
 * Motordriver.c
 *
 *  Created on: ٢٤‏/٠١‏/٢٠١٧
 *      Author: El-safi
 */
#include "Motordriver.h"



extern void display(U8_t disp_speed,U8_t M_num){
/*
switch(disp_speed){
case A:
	PORTC|=(1<<PC5);
	PORTB=0b01110111;
	break;
case B:
	PORTC|=(1<<PC5);
	PORTB=0b11111111;
	break;
case C:
	PORTC|=(1<<PC5);
	PORTB=0b00111001;
	break;
default :
	break;
}
*/
switch(M_num){
case one:
	PORTC|=(1<<PC4);
	PORTB=1;
	break;
case two:
	PORTC|=(1<<PC4);
	PORTB=2;
	break;
case three:
	PORTC|=(1<<PC4);
	PORTB=3;
	break;
default :
	break;
}
}

/* ************************************************************************************************* */

extern void Motor_driver(U8_t motor){

switch(motor){

case one:
     PORTD|=(1<<PD6)|(1<<PD4);
     _delay_ms(225);
     PORTD&=~(1<<PD4)|(1<<PD6);
     break;
case two:
    PORTD|=(1<<PD6)|(1<<PD4);
    _delay_ms(225);
    PORTD&=~(1<<PD4);
    break;
case three:
    PORTD|=(1<<PD6)|(1<<PD4);
    _delay_ms(225);
    PORTD&=~(1<<PD4);
    break;
default:
	break;

}


}

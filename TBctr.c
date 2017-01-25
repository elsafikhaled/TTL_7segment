/*
 * TBctr.c
 *
 *  Created on: ٢٤‏/٠١‏/٢٠١٧
 *      Author: El-safi
 */
#include "TbUart.h"
#include "Motordriver.h"

 struct GUI{
	U8_t M_num;
	U8_t speed;
};
struct GUI control_para;

int main(void){
	DDRD=0xff;
	PORTD=0x00;
	DDRC=0xff;
	PORTC=0x00;
    DDRB=0xff;
    PORTB=0;

	TbUart_init();
    U8_t MOTOR=0,SPEED=0;
	while(1){
	 /*  GET data from LAPTOB by UART  */
        control_para.M_num=TbUart_get_char();
       // control_para.speed=TbUart_get_char();
        MOTOR=control_para.M_num;
        SPEED=control_para.speed;
    /*  Pass data to  7 segments  */
        display(SPEED,MOTOR);
    /*  Motor control            */
       Motor_driver(MOTOR);

	}

	return 0;
}



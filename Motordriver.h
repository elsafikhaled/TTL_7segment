/*
 * Motordriver.h
 *
 *  Created on: ٢٤‏/٠١‏/٢٠١٧
 *      Author: El-safi
 */

#ifndef MOTORDRIVER_H_
#define MOTORDRIVER_H_
#include "std_data_types_EKE.h"
#include <avr/io.h>
#include <util/delay.h>

enum M_number{
	one='1',two='2',three='3'
};
enum speed{
	A='A',B='B',C='C'
};

extern void display(U8_t disp_speed,U8_t M_num);

extern void Motor_driver(U8_t motor);

#endif /* MOTORDRIVER_H_ */

/*
 * TbUart.h
 *
 *  Created on: ٢٤‏/٠١‏/٢٠١٧
 *      Author: El-safi
 */

#ifndef TBUART_H_
#define TBUART_H_
#include "std_data_types_EKE.h"
#include <avr/io.h>

extern void TbUart_init(void);


extern void TbUart_Send_char(U8_t letter);

extern U8_t TbUart_get_char(void);


extern void TbUart_Send_stri(U8_t *phrase);

extern U8_t* TbUart_get_stri(void);

U8_t string_compare_EKE(char array[],char *string_data);

void string_copy_EKE(char *st_data,char *string_copy);

U8_t string_length_EKE(char *s_data);


#endif /* TBUART_H_ */

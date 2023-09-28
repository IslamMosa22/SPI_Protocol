/*
 * ISR_Prog.c
 *
 *  Created on: Aug 29, 2023
 *      Author: Eslam
 */
#include "SPI_Init.h"
#include "SPI_Priv.h"
#include "SPI_Config.h"
#include "../DIO/DIO_init.h"
#include <util/delay.h>

void MSPI_voidMasterInit(){

	MDIO_voidSetPinDirection(PORTB,PIN5,OUTPUT);
	MDIO_voidSetPinDirection(PORTB,PIN6,INPUT);
	MDIO_voidSetPinDirection(PORTB,PIN7,OUTPUT);
	SPCR = SPCR_MasterSettings;

}
void MSPI_voidSlaveInit(){

	MDIO_voidSetPinDirection(PORTB,PIN5,INPUT);
	MDIO_voidSetPinDirection(PORTB,PIN6,OUTPUT);
	MDIO_voidSetPinDirection(PORTB,PIN7,INPUT);
	SPCR = SPCR_SlaveSettings;

}
void MSPI_u8MaterTransmit(u8 A_u8Data){

	SPDR = A_u8Data;
	while( !(SPSR & 1<<SPIF));

}

u8 MSPI_SlaveReceive(void){

	while(!(SPSR & (1<<SPIF)));

	/* Return data register */
	return SPDR;
}

void MSPI_voidMasterTransString(u8 *str){

	u8 counter = 0;
	while(*(str + counter) != '\0'){

		MSPI_u8MaterTransmit( *(str + counter));
		_delay_ms(5);
		counter++;
	}
}




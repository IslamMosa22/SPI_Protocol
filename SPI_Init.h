/*
 * ISR_Init.h
 *
 *  Created on: Aug 29, 2023
 *      Author: Eslam
 */
#ifndef MCAL_SPI_SPI_INIT_H_
#define MCAL_SPI_SPI_INIT_H_
#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPES.h"



void MSPI_voidMasterInit();
void MSPI_voidSlaveInit();
void MSPI_u8MaterTransmit(u8 A_u8Data);
u8 MSPI_SlaveReceive(void);
void MSPI_voidMasterTransString(u8 *str);

#endif /* MCAL_SPI_SPI_INIT_H_ */

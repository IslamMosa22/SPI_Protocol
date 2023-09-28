/*
 * ISR_Priv.h
 *
 *  Created on: Aug 29, 2023
 *      Author: Eslam
 */
#ifndef MCAL_SPI_SPI_PRIV_H_
#define MCAL_SPI_SPI_PRIV_H_




#define SPIF 7

#define SPCR  *((volatile u8*) 0x2D)
#define SPSR  *((volatile u8*) 0x2E)
#define SPDR  *((volatile u8*) 0x2F)



#endif /* MCAL_SPI_SPI_PRIV_H_ */

/*
 * uart_tasl.h
 *
 *  Created on: Mar 19, 2020
 *      Author: tnguyen
 */

#ifndef INC_UART_TASK_H_
#define INC_UART_TASK_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "main.h"
#include <stdbool.h>
#include <stdio.h>

#define VERSION_FIRMWARE "0.03.00"

typedef enum
{
	/* Uart commande */
	UART_CMD_FREQ =0,				//Change FREQ
	UART_CMD_FREQ_ERROR,			//FREQ ERROR
	UART_CMD_DUTY,					//Change DUTY
	UART_CMD_DUTY_ERROR,			//DUTY ERROR
	UART_CMD_LUMINOSITY,			//Change LUMINOSITY
	UART_CMD_LUMINOSITY_ERROR,		//LUMINOSITY ERROR
	UART_CMD_LEXI_MODE,				//LEXI MODE
	UART_CMD_NORMAL_MODE,			//NORMAL MODE
	UART_CMD_OFF_MODE,				//OFF MODE
	UART_CMD_SCREEN,				//Change SCREEN
	UART_CMD_STATE,
	UART_WAIT_CMD,
	UART_CMD_ERROR			//Error
} UART_CMD;

typedef struct {
	uint8_t 	Rx_indx;
	uint8_t 	Rx_data[2];
	uint8_t 	Rx_Buffer[256];
	uint8_t		Tx_Buffer[50];
	bool 		Transfer_cplt;
	UART_CMD 	Uart_cmd;
	uint8_t		Uart_cmd_value;
	uint8_t		Uart_cmd_duty;
	uint8_t		Uart_cmd_freq;
	uint8_t		Uart_cmd_lum;
} UART_DATA;

extern UART_DATA Uart_data;

void UART_Init();
void UART_Task();
void UART_Reset_CMD();
void UART_Send_CMD();


void UART_Send_Speed();
void UART_Send_Strength();
void UART_Send_Lum();
void UART_Send_Batery();
void UART_Send_LedReading();
void UART_Send_LedNormal();
void UART_Send_LedOff();
void UART_Send_ScreenOn();
void UART_Send_ScreenOff();
void UART_Send_True();
void UART_Send_False();
void UART_Send_Charge();
void UART_Init_Buffer_Tx();
void UART_Init_Buffer_Rx();
void UART_Send_Error();
void UART_Send_Version();

#ifdef __cplusplus
}
#endif

#endif /* INC_UART_TASK_H_ */

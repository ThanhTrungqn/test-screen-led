/*
 * uart_task.c
 *
 *  Created on: Mar 19, 2020
 *      Author: tnguyen
 */


#include "uart_task.h"
#include <string.h>
#include "lexilight.h"

UART_HandleTypeDef huart1;
//Interrupt callback routine

//
/*
void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
	if (huart->Instance == UART5)  //current UART
	{
		uint8_t i;
		if (Uart_data.Rx_indx == 0)  //clear Rx_Buffer before receiving new data
		{
			for (i=0 ; i<100 ; i++) {
				Uart_data.Rx_Buffer[i]=0;
			}
		}
		if ((Uart_data.Rx_data[0]!=10)&&(Uart_data.Rx_data[0]!=13)) //if received data different from ascii 13 (enter)
		{
			Uart_data.Rx_Buffer[Uart_data.Rx_indx]=Uart_data.Rx_data[0];    //add data to Rx_Buffer
			Uart_data.Rx_indx++;
		}
		else            //if received data = 13
		{
			Uart_data.Rx_indx=0;
			Uart_data.Transfer_cplt=true;//transfer complete, data is ready to read
			UART_Task();
		}
		HAL_UART_Receive_IT(&huart5, Uart_data.Rx_data, 1);   //activate UART receive interrupt every time
	}
}
*/
//UART MAIN TASK
void UART_Init(){
	//HAL_UART_Receive_IT(&huart5, Rx_data, 1);
	UART_Reset_CMD();
}

void UART_Task(){
	if (Uart_data.Transfer_cplt)
	{
		if 	((  Uart_data.Rx_Buffer[0]  == 's')
			&& (Uart_data.Rx_Buffer[1]  == 'p')
			&& (Uart_data.Rx_Buffer[2]  == 'e')
			&& (Uart_data.Rx_Buffer[3]  == 'e')
			&& (Uart_data.Rx_Buffer[4]  == 'd'))
		{
			uint8_t value = (Uart_data.Rx_Buffer[5] - '0')*10 + (Uart_data.Rx_Buffer[6] - '0');
			if ((value >=0) && (value <=50)){
				Lexi_Set_Slider_Speed(value);
				UART_Send_True();
			}
			else{
				UART_Send_False();
			}
		}
		else if		((  Uart_data.Rx_Buffer[0]  == 's')
					&& (Uart_data.Rx_Buffer[1]  == 't')
					&& (Uart_data.Rx_Buffer[2]  == 'r')
					&& (Uart_data.Rx_Buffer[3]  == 'e')
					&& (Uart_data.Rx_Buffer[4]  == 'n')
					&& (Uart_data.Rx_Buffer[5]  == 'g')
					&& (Uart_data.Rx_Buffer[6]  == 't')
					&& (Uart_data.Rx_Buffer[7]  == 'h'))
		{
			uint8_t value =(Uart_data.Rx_Buffer[8] - '0')*10 + (Uart_data.Rx_Buffer[9] - '0');
			if ((value >=0) && (value <=50)){
				Lexi_Set_Slider_Strength(value);
				UART_Send_True();
			}
			else{
				UART_Send_False();
			}
		}
		else if		((  Uart_data.Rx_Buffer[0]  == 'l')
					&& (Uart_data.Rx_Buffer[1]  == 'u')
					&& (Uart_data.Rx_Buffer[2]  == 'm'))
		{
			uint8_t value = (Uart_data.Rx_Buffer[3] - '0')*100 + (Uart_data.Rx_Buffer[4] - '0')*10 + (Uart_data.Rx_Buffer[5] - '0');
			if ((value >=0) && (value <=100)){
				Lexi_Set_Slider_Luminosity(value);
				UART_Send_True();
			}
			else{
				UART_Send_False();
			}
		}
		else if		((  Uart_data.Rx_Buffer[0]  == 'r')
					&& (Uart_data.Rx_Buffer[1]  == 'e')
					&& (Uart_data.Rx_Buffer[2]  == 'a')
					&& (Uart_data.Rx_Buffer[3]  == 'd')
					&& (Uart_data.Rx_Buffer[4]  == 'i')
					&& (Uart_data.Rx_Buffer[5]  == 'n')
					&& (Uart_data.Rx_Buffer[6]  == 'g'))
		{
			Lexi_Set_State_LEXI();
			UART_Send_True();
		}
		else if		((  Uart_data.Rx_Buffer[0]  == 'n')
					&& (Uart_data.Rx_Buffer[1]  == 'o')
					&& (Uart_data.Rx_Buffer[2]  == 'r')
					&& (Uart_data.Rx_Buffer[3]  == 'm')
					&& (Uart_data.Rx_Buffer[4]  == 'a')
					&& (Uart_data.Rx_Buffer[5]  == 'l'))
		{
			Lexi_Set_State_STANDARD();
			UART_Send_True();
		}
		else if ((  Uart_data.Rx_Buffer[0]  == 'o')
				&& (Uart_data.Rx_Buffer[1]  == 'f')
				&& (Uart_data.Rx_Buffer[2]  == 'f'))
		{
			Lexi_Set_State_OFF();
			UART_Send_True();
		}

		else if		((  Uart_data.Rx_Buffer[0]  == 's')
					&& (Uart_data.Rx_Buffer[1]  == 't')
					&& (Uart_data.Rx_Buffer[2]  == 'a')
					&& (Uart_data.Rx_Buffer[3]  == 't')
					&& (Uart_data.Rx_Buffer[4]  == 'e')
					&& (Uart_data.Rx_Buffer[5]  == '_')
					&& (Uart_data.Rx_Buffer[6]  == 's')
					&& (Uart_data.Rx_Buffer[7]  == 'p')
					&& (Uart_data.Rx_Buffer[8]  == 'e')
					&& (Uart_data.Rx_Buffer[9]  == 'e')
					&& (Uart_data.Rx_Buffer[10]  == 'd'))
		{
			UART_Send_Speed();
		}
		else if		((  Uart_data.Rx_Buffer[0]  == 's')
						&& (Uart_data.Rx_Buffer[1]  == 't')
						&& (Uart_data.Rx_Buffer[2]  == 'a')
						&& (Uart_data.Rx_Buffer[3]  == 't')
						&& (Uart_data.Rx_Buffer[4]  == 'e')
						&& (Uart_data.Rx_Buffer[5]  == '_')
						&& (Uart_data.Rx_Buffer[6]  == 's')
						&& (Uart_data.Rx_Buffer[7]  == 't')
						&& (Uart_data.Rx_Buffer[8]  == 'r')
						&& (Uart_data.Rx_Buffer[9]  == 'e')
						&& (Uart_data.Rx_Buffer[10]  == 'n')
						&& (Uart_data.Rx_Buffer[11]  == 'g')
						&& (Uart_data.Rx_Buffer[12]  == 't')
						&& (Uart_data.Rx_Buffer[13]  == 'h'))
		{
			UART_Send_Strength();
		}
		else if		((  Uart_data.Rx_Buffer[0]  == 's')
						&& (Uart_data.Rx_Buffer[1]  == 't')
						&& (Uart_data.Rx_Buffer[2]  == 'a')
						&& (Uart_data.Rx_Buffer[3]  == 't')
						&& (Uart_data.Rx_Buffer[4]  == 'e')
						&& (Uart_data.Rx_Buffer[5]  == '_')
						&& (Uart_data.Rx_Buffer[6]  == 'l')
						&& (Uart_data.Rx_Buffer[7]  == 'u')
						&& (Uart_data.Rx_Buffer[8]  == 'm'))
		{
			UART_Send_Lum();
		}
		else if		((  Uart_data.Rx_Buffer[0]  == 's')
						&& (Uart_data.Rx_Buffer[1]  == 't')
						&& (Uart_data.Rx_Buffer[2]  == 'a')
						&& (Uart_data.Rx_Buffer[3]  == 't')
						&& (Uart_data.Rx_Buffer[4]  == 'e')
						&& (Uart_data.Rx_Buffer[5]  == '_')
						&& (Uart_data.Rx_Buffer[6]  == 'b')
						&& (Uart_data.Rx_Buffer[7]  == 'a')
						&& (Uart_data.Rx_Buffer[8]  == 't')
						&& (Uart_data.Rx_Buffer[9]  == 'e')
						&& (Uart_data.Rx_Buffer[10]  == 'r')
						&& (Uart_data.Rx_Buffer[11]  == 'y'))
		{
			UART_Send_Batery();
		}
		else if		((  Uart_data.Rx_Buffer[0]  == 's')
						&& (Uart_data.Rx_Buffer[1]  == 't')
						&& (Uart_data.Rx_Buffer[2]  == 'a')
						&& (Uart_data.Rx_Buffer[3]  == 't')
						&& (Uart_data.Rx_Buffer[4]  == 'e')
						&& (Uart_data.Rx_Buffer[5]  == '_')
						&& (Uart_data.Rx_Buffer[6]  == 'c')
						&& (Uart_data.Rx_Buffer[7]  == 'h')
						&& (Uart_data.Rx_Buffer[8]  == 'a')
						&& (Uart_data.Rx_Buffer[9]  == 'r')
						&& (Uart_data.Rx_Buffer[10]  == 'g')
						&& (Uart_data.Rx_Buffer[11]  == 'e'))
		{
			UART_Send_Charge();
		}
		else if		((  Uart_data.Rx_Buffer[0]  == 's')
						&& (Uart_data.Rx_Buffer[1]  == 't')
						&& (Uart_data.Rx_Buffer[2]  == 'a')
						&& (Uart_data.Rx_Buffer[3]  == 't')
						&& (Uart_data.Rx_Buffer[4]  == 'e')
						&& (Uart_data.Rx_Buffer[5]  == '_')
						&& (Uart_data.Rx_Buffer[6]  == 'm')
						&& (Uart_data.Rx_Buffer[7]  == 'o')
						&& (Uart_data.Rx_Buffer[8]  == 'd')
						&& (Uart_data.Rx_Buffer[9]  == 'e'))
		{
			uint8_t val_lum = Lexi_Get_Slider_Luminosity();
			uint8_t val_mode = Lexi_Get_Led_State();
			if (val_lum == 0){
				//Send Off
				UART_Send_LedOff();
			}
			else
			{
				if (val_mode == 2){
					//Send Reading
					UART_Send_LedReading();
				}
				else{
					//Send Normal
					UART_Send_LedNormal();
				}
			}
		}
		else if		((  Uart_data.Rx_Buffer[0]  == 's')
						&& (Uart_data.Rx_Buffer[1]  == 't')
						&& (Uart_data.Rx_Buffer[2]  == 'a')
						&& (Uart_data.Rx_Buffer[3]  == 't')
						&& (Uart_data.Rx_Buffer[4]  == 'e')
						&& (Uart_data.Rx_Buffer[5]  == '_')
						&& (Uart_data.Rx_Buffer[6]  == 's')
						&& (Uart_data.Rx_Buffer[7]  == 'c')
						&& (Uart_data.Rx_Buffer[8]  == 'r')
						&& (Uart_data.Rx_Buffer[9]  == 'e')
						&& (Uart_data.Rx_Buffer[10]  == 'e')
						&& (Uart_data.Rx_Buffer[11]  == 'n'))
		{
			UART_Send_ScreenOn();
		}
		else if		((  Uart_data.Rx_Buffer[0]  == 'v')
						&& (Uart_data.Rx_Buffer[1]  == 'e')
						&& (Uart_data.Rx_Buffer[2]  == 'r')
						&& (Uart_data.Rx_Buffer[3]  == 's')
						&& (Uart_data.Rx_Buffer[4]  == 'i')
						&& (Uart_data.Rx_Buffer[5]  == 'o')
						&& (Uart_data.Rx_Buffer[6]  == 'n'))
		{
			UART_Send_Version();
		}
		Uart_data.Transfer_cplt = false;
	}
}
void UART_Reset_CMD(){
	Uart_data.Uart_cmd = UART_WAIT_CMD;
	Uart_data.Uart_cmd_value = 0;
}

void UART_Send_Speed(){
	UART_Init_Buffer_Tx();
	uint8_t len;
	uint8_t data = Lexi_Get_Slider_Speed();
	if (data < 10){
		sprintf(Uart_data.Tx_Buffer,"speed:0%i", data);
	}
	else{
		sprintf(Uart_data.Tx_Buffer,"speed:%i", data);
	}
	len=strlen(Uart_data.Tx_Buffer);
	HAL_UART_Transmit(&huart1, Uart_data.Tx_Buffer, len, 100);
}

void UART_Send_Strength(){
	UART_Init_Buffer_Tx();
	uint8_t len;
	uint8_t data = Lexi_Get_Slider_Strength();
	if (data < 10){
		sprintf(Uart_data.Tx_Buffer,"strength:0%i", data);
	}
	else{
		sprintf(Uart_data.Tx_Buffer,"strength:%i", data);
	}
	len=strlen(Uart_data.Tx_Buffer);
	HAL_UART_Transmit(&huart1, Uart_data.Tx_Buffer, len, 100);
}

void UART_Send_Lum(){
	UART_Init_Buffer_Tx();
	uint8_t len;
	uint8_t data = Lexi_Get_Slider_Luminosity();
	if (( data > 0) && ( data < 10)){
			sprintf(Uart_data.Tx_Buffer,"lum:00%i", data);
	}
	else if ((data < 100) && (data >= 10))
	{
		sprintf(Uart_data.Tx_Buffer,"lum:0%i", data);
	}
	else if (data == 100){
		sprintf(Uart_data.Tx_Buffer,"lum:%i", data);
	}
	len=strlen(Uart_data.Tx_Buffer);
	HAL_UART_Transmit(&huart1, Uart_data.Tx_Buffer, len, 100);
}
void UART_Send_Batery(){
	UART_Init_Buffer_Tx();
	uint8_t len;
	uint8_t data = BQ25713_Get_VBat();
	if (data < 10){
		sprintf(Uart_data.Tx_Buffer,"batery:00%i", data);
	}
	else if ((data < 100) && (data >= 10))
	{
		sprintf(Uart_data.Tx_Buffer,"batery:0%i", data);
	}
	else if (data == 100){
		sprintf(Uart_data.Tx_Buffer,"batery:%i", data);
	}
	len=strlen(Uart_data.Tx_Buffer);
	HAL_UART_Transmit(&huart1, Uart_data.Tx_Buffer, len, 100);
}
void UART_Send_LedReading(){
	UART_Init_Buffer_Tx();
	uint8_t len;
	sprintf(Uart_data.Tx_Buffer,"ledreading");
	len=strlen(Uart_data.Tx_Buffer);
	HAL_UART_Transmit(&huart1, Uart_data.Tx_Buffer, len, 100);
}
void UART_Send_LedNormal(){
	UART_Init_Buffer_Tx();
	uint8_t len;
	sprintf(Uart_data.Tx_Buffer,"lednormal");
	len=strlen(Uart_data.Tx_Buffer);
	HAL_UART_Transmit(&huart1, Uart_data.Tx_Buffer, len, 100);
}
void UART_Send_LedOff(){
	UART_Init_Buffer_Tx();
	uint8_t len;
	sprintf(Uart_data.Tx_Buffer,"ledoff");
	len=strlen(Uart_data.Tx_Buffer);
	HAL_UART_Transmit(&huart1, Uart_data.Tx_Buffer, len, 100);
}
void UART_Send_ScreenOn(){
	UART_Init_Buffer_Tx();
	uint8_t len;
	sprintf(Uart_data.Tx_Buffer,"screenon");
	len=strlen(Uart_data.Tx_Buffer);
	HAL_UART_Transmit(&huart1, Uart_data.Tx_Buffer, len, 100);
}
void UART_Send_ScreenOff(){
	UART_Init_Buffer_Tx();
	uint8_t len;
	sprintf(Uart_data.Tx_Buffer,"screenoff");
	len=strlen(Uart_data.Tx_Buffer);
	HAL_UART_Transmit(&huart1, Uart_data.Tx_Buffer, len, 100);
}
void UART_Send_True(){
	UART_Init_Buffer_Tx();
	uint8_t len;
	sprintf(Uart_data.Tx_Buffer,"true");
	len=strlen(Uart_data.Tx_Buffer);
	HAL_UART_Transmit(&huart1, Uart_data.Tx_Buffer, len, 100);
}
void UART_Send_False(){
	UART_Init_Buffer_Tx();
	uint8_t len;
	sprintf(Uart_data.Tx_Buffer,"false");
	len=strlen(Uart_data.Tx_Buffer);
	HAL_UART_Transmit(&huart1, Uart_data.Tx_Buffer, len, 100);
}
void UART_Send_Charge(){
	UART_Init_Buffer_Tx();
	uint8_t data = BQ25713_Get_IsCharge();
	uint8_t len;
	if (data == 1){
		sprintf(Uart_data.Tx_Buffer,"true");
	}
	else {
		sprintf(Uart_data.Tx_Buffer,"false");
	}
	len=strlen(Uart_data.Tx_Buffer);
	HAL_UART_Transmit(&huart1, Uart_data.Tx_Buffer, len, 100);
}
void UART_Send_Error(){
	UART_Init_Buffer_Tx();
	uint8_t len;
	sprintf(Uart_data.Tx_Buffer,"error");
	len=strlen(Uart_data.Tx_Buffer);
	HAL_UART_Transmit(&huart1, Uart_data.Tx_Buffer, len, 100);
}

void UART_Send_Version(){
	UART_Init_Buffer_Tx();
	uint8_t len;
	sprintf(Uart_data.Tx_Buffer, VERSION_FIRMWARE);
	len=strlen(Uart_data.Tx_Buffer);
	HAL_UART_Transmit(&huart1, Uart_data.Tx_Buffer, len, 100);
}

void UART_Init_Buffer_Tx(){
	uint8_t i = 0;
	for (i = 0 ; i < 50 ; i++){
		Uart_data.Tx_Buffer[i] = 0;
	}
}
void UART_Init_Buffer_Rx(){
	uint8_t i = 0;
	for (i = 0 ; i < 256; i++){
		Uart_data.Rx_Buffer[i] = 0;
	}
}

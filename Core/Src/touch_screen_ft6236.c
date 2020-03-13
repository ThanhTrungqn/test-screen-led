/*
 * touch_screen_ft6236.c
 *
 *  Created on: Mar 9, 2020
 *      Author: tnguyen
 */
#include "touch_screen_ft6236.h"

FT6236_DATA FT6236;



void Ft6236_Read_Register(uint8_t register_pointer, uint8_t* receive_buffer , uint8_t buffer_size)
{
	HAL_StatusTypeDef status = HAL_OK;

	status = HAL_I2C_Mem_Read(&FT6236.FT6236_I2C, FT6236.FT6236_I2C_Address, (uint16_t)register_pointer, I2C_MEMADD_SIZE_8BIT, receive_buffer, buffer_size, 100);

	/* Check the communication status */
	if(status != HAL_OK)
	{
	    /* Re-Initialize the BUS */
		//Init
	}
}

void Ft6236_Write_Register(uint8_t register_pointer, uint8_t register_value)
{
	HAL_StatusTypeDef status = HAL_OK;

	status = HAL_I2C_Mem_Write(&FT6236.FT6236_I2C, FT6236.FT6236_I2C_Address, (uint16_t)register_pointer, I2C_MEMADD_SIZE_8BIT, &register_value, 1, 100);
	if(status != HAL_OK)
	{
		/* Re-Initialize the BUS */
		//Init
	}

}


void Ft6236_Init(I2C_HandleTypeDef i2c_handle){
	HAL_GPIO_WritePin(TP_RESET_GPIO_Port , TP_RESET_Pin , GPIO_PIN_SET);
	FT6236.FT6236_I2C_Address = FT6236_ADDRESS;
	FT6236.FT6236_I2C = i2c_handle;
	FT6236.FT6236_Contact_Detected =  FALSE;
	FT6236.PosX = 0;
	FT6236.PosY = 0;
	Ft6236_Write_Register (0x00 , 0x00);
	Ft6236_Write_Register (0xA4 , 0x00);
}

void Ft6236_Read(void){
	uint8_t data[3] = {0};
	uint8_t Event_Flag = 0;

	Ft6236_Read_Register( 0x03, data , 2);

	Event_Flag = (data[0] & 0xC0) >> 6;
	if (Event_Flag == 2){	//Detect a contact
		//Do Something
		FT6236.FT6236_Contact_Detected =  true;

		//Read PosX
		data[0] &= 0x07;
		FT6236.PosX = data[0]<<8 | data[1];
		//Read PosY
		Ft6236_Read_Register( 0x05, data , 2);
		data[0] &= 0x7;
		FT6236.PosY = (data[0] & 0x07)<<8 | data[1];

	}
	else {
		//Do Something
		FT6236.FT6236_Contact_Detected =  false;
	}
}

bool Ft6236_TS_DetectTouch(){
	return FT6236.FT6236_Contact_Detected;
}

uint16_t Ft6236_TS_GetX(){
	return FT6236.PosX;
}

uint16_t Ft6236_TS_GetY(){
	return FT6236.PosY;
}

void BSP_TS_GetState(TS_StateTypeDef* TsState){
	TsState->TouchDetected = Ft6236_TS_DetectTouch();
	TsState->X = Ft6236_TS_GetX();
	TsState->Y = Ft6236_TS_GetY();
}


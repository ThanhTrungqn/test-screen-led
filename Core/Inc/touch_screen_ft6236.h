/*
 * touch_screen_ft6236.h
 *
 *  Created on: Mar 9, 2020
 *      Author: tnguyen
 */

#ifndef INC_TOUCH_SCREEN_FT6236_H_
#define INC_TOUCH_SCREEN_FT6236_H_

#include <string.h>
#include <stdbool.h>
#include "main.h"

typedef struct {
	I2C_HandleTypeDef 	FT6236_I2C;
	uint16_t 			FT6236_I2C_Address;
	uint8_t 			FT6236__Id;
	bool				FT6236_Contact_Detected;
	uint16_t			PosX;
	uint16_t			PosY;
} FT6236_DATA;

#define FALSE 0
#define TRUE 1       // Option 1

#define FT6236_ADDRESS (0x38 << 1)	// the HAL requires the 7-bit address to be shifted by one bit
#define TOUCH_PACKET_SIZE 7
#define EVENT_PRESS_DOWN 0x00
#define EVENT_CONTACT 0x80
#define EVENT_LIFT_UP 0x40
#define EVENT_NO_EVENT 0xC0
#define GESTURE_NO_GESTURE 0x00
#define X_POS_MSB (touch_data[3] & 0x0F)
#define X_POS_LSB (touch_data[4])
#define Y_POS_MSB (touch_data[5] & 0x0F)
#define Y_POS_LSB (touch_data[6])

typedef struct
{
  void       (*Init)(uint16_t);
  uint16_t   (*ReadID)(uint16_t);
  void       (*Reset)(uint16_t);
  void       (*Start)(uint16_t);
  uint8_t    (*DetectTouch)(uint16_t);
  void       (*GetXY)(uint16_t, uint16_t*, uint16_t*);
  void       (*EnableIT)(uint16_t);
  void       (*ClearIT)(uint16_t);
  uint8_t    (*GetITStatus)(uint16_t);
  void       (*DisableIT)(uint16_t);
}TS_DrvTypeDef;


typedef struct
{
  uint16_t TouchDetected;
  uint16_t X;
  uint16_t Y;
}TS_StateTypeDef;


void		Ft6236_Read_Register(uint8_t register_pointer, uint8_t* receive_buffer , uint8_t buffer_size);
void 		Ft6236_Write_Register(uint8_t register_pointer, uint8_t register_value);
void 		Ft6236_Init(I2C_HandleTypeDef i2c_handle);
void 		Ft6236_Read(void);

bool		Ft6236_TS_DetectTouch(void);
uint16_t	Ft6236_TS_GetX(void);
uint16_t	Ft6236_TS_GetY(void);
void BSP_TS_GetState(TS_StateTypeDef* TsState);


#endif /* INC_TOUCH_SCREEN_FT6236_H_ */

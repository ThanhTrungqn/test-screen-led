/*
 * lexilight.c
 *
 *  Created on: Feb 10, 2020
 *      Author: tnguyen
 */

/**
  ******************************************************************************
  * @file           : lexilight.c
  * @brief          : Main LED program
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "lexilight.h"
#include "uart_task.h"

LEXILIGHT_DATA lexilight;

void Lexi_Init_Data() {
	lexilight.system_clock 		= SYSTEM_CLOCK_PER_SECOND;
	lexilight.duty_min 			= LEXILIGHT_DUTY_MIN;
	lexilight.duty_max 			= LEXILIGHT_DUTY_MAX;
	lexilight.duty_cmd 			= LEXILIGHT_DUTY_DEFAULT;
	lexilight.duty				= 30;
	lexilight.freq_max 			= LEXILIGHT_FREQUENCY_MAX;
	lexilight.freq_min 			= LEXILIGHT_FREQUENCY_MIN;
	lexilight.freq_cmd 			= LEXILIGHT_FREQUENCY_DEFAULT;
	lexilight.freq				= 90;
	lexilight.lum_level 		= LIGHT_LUM_LEVEL_0;
	lexilight.lum_value			= 20;
	lexilight.state 			= LIGHT_STATE_WAIT_500_MS;
}


void Lexi_Task (TIM_HandleTypeDef htim_pwm_led, TIM_HandleTypeDef htim_pwm_lum_driver){

	switch (lexilight.state)
	{
		case LIGHT_STATE_ERROR:
		case LIGHT_STATE_INIT:
			Lexi_Init_Data();
			lexilight.state = LIGHT_STATE_WAIT_500_MS;
			break;

		case LIGHT_STATE_WAIT_500_MS:
			HAL_Delay(500);
			lexilight.state = LIGHT_STATE_SERVICE;
			break;

		case LIGHT_STATE_SERVICE:
			Lexi_DO_LED_PWM (htim_pwm_led);
			Lexi_DO_PWM_LUM_DRIVER(htim_pwm_lum_driver);
			lexilight.state = LIGHT_STATE_ON;
			break;

		case LIGHT_STATE_LEXI:
			Lexi_DO_LED_PWM (htim_pwm_led);
			Lexi_DO_PWM_LUM_DRIVER(htim_pwm_lum_driver);
			break;

		case LIGHT_STATE_ON:
		case LIGHT_STATE_STANDARD:
			Lexi_DO_Standard_PWM(htim_pwm_led);
			Lexi_DO_PWM_LUM_DRIVER(htim_pwm_lum_driver);
			break;

		case LIGHT_STATE_OFF:
			Lexi_DO_LED_PWM (htim_pwm_led);
			Lexi_DO_PWM_LUM_DRIVER(htim_pwm_lum_driver);
			//Turn OFF EN_DRIVER
			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_RESET);
			break;
		default:
			lexilight.state = LIGHT_STATE_ERROR;
			break;
		}
}

void Lexi_DO_LED_PWM (TIM_HandleTypeDef htim){
	//Check update Freq
	if ((	lexilight.freq_cmd >= lexilight.freq_min)
			&& (lexilight.freq_cmd <= lexilight.freq_max))
	{
		lexilight.freq = lexilight.freq_cmd;
		int prescaler = (uint16_t)(lexilight.system_clock/(lexilight.freq*100) - 1);
		__HAL_TIM_SET_PRESCALER(&htim, prescaler);
	}
	//Check update Dutycycle
	if ((	lexilight.duty_cmd >= lexilight.duty_min)
			&& (lexilight.duty_cmd <= lexilight.duty_max))
	{
		lexilight.duty = lexilight.duty_cmd;
		__HAL_TIM_SET_COMPARE(&htim, TIM_CHANNEL_1,lexilight.duty);
	}
}

void Lexi_DO_Standard_PWM (TIM_HandleTypeDef htim){
		int prescaler = 119;		//Set frequency 119 = 4KHZ
		__HAL_TIM_SET_PRESCALER(&htim, prescaler);
		__HAL_TIM_SET_COMPARE(&htim, TIM_CHANNEL_2, lexilight.duty);
}

void Lexi_DO_PWM_LUM_DRIVER (TIM_HandleTypeDef htim){
	if ((	lexilight.lum_cmd >= 0)
			&& (lexilight.lum_cmd <= 100)
			&& (lexilight.lum != lexilight.lum_cmd))
	{
		lexilight.lum = lexilight.lum_cmd;
		if (lexilight.lum_cmd == 0){
			//Turn off LED if LED ON
			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_RESET);
			lexilight.state_led = 0;
		}
		else{
			uint8_t value = lexilight.lum; // Value from 0 to 100;
			value = 100 - value;
			__HAL_TIM_SET_COMPARE(&htim, TIM_CHANNEL_3, value);

			//Turn on LED if LED OFF
			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_SET);
			lexilight.state_led = 1;
		}
	}
}

//Get function
unsigned int Lexi_Get_Duty(){
	return lexilight.duty;
}
unsigned int Lexi_Get_Freq(){
	return lexilight.freq;
}
unsigned int Lexi_Get_Luminosity(){
	return (lexilight.lum_value);
}
unsigned int Lexi_Get_Led_State(){
	if (lexilight.state == LIGHT_STATE_LEXI){
		return 2;
	}
	else if ((lexilight.state == LIGHT_STATE_ON) || (lexilight.state == LIGHT_STATE_STANDARD)){
		return 1;
	}
	else if (lexilight.state == LIGHT_STATE_OFF) {
		return 0;
	}
	else{
		return 0;
	}
}
//Set function
void Lexi_Set_State_OFF (){
	Lexi_Set_Slider_Last_Luminosity();
	lexilight.lum_cmd = 0;
}
void Lexi_Set_State_ON (){
	//lexilight.state = LIGHT_STATE_ON;
	Lexi_Get_Slider_Last_Luminosity();
}
void Lexi_Set_State_STANDARD (){
	lexilight.state = LIGHT_STATE_STANDARD;
	Lexi_Get_Slider_Last_Luminosity();
}
void Lexi_Set_State_LEXI (){
	lexilight.state = LIGHT_STATE_LEXI;
	Lexi_Get_Slider_Last_Luminosity();
}
void Lexi_Set_Duty( unsigned int value){
	if (value >=40){
		lexilight.duty_cmd  = 40;
	}
	else{
		lexilight.duty_cmd  = value;
	}
}

void Lexi_Set_Freq( unsigned int value){
	if (value >=120){
			lexilight.freq_cmd  = 120;
	}
	else if (value <=65){
		lexilight.freq_cmd  = 65;
	}
	else{
		lexilight.freq_cmd  = value;
	}
}

void Lexi_Set_Luminosity( unsigned int value){
	lexilight.lum_value =  value;
}


bool Lexi_Set_Slider_Speed(unsigned int value ){
	if ((value  <= 50 )&& (value >= 0 )){
		lexilight.slider_speed  = value;
		lexilight.freq_cmd = (unsigned int )(LEXILIGHT_FREQUENCY_MIN + value *(LEXILIGHT_FREQUENCY_MAX - LEXILIGHT_FREQUENCY_MIN)/50);
		return true;
	}
	return false;
}
bool Lexi_Set_Slider_Strength(unsigned int value ){
	if ((value  <= 50 )&& (value >= 0 )){
		lexilight.slider_strength  = value;
		lexilight.duty_cmd = (unsigned int )(LEXILIGHT_DUTY_MIN + value *(LEXILIGHT_DUTY_MAX - LEXILIGHT_DUTY_MIN)/50);
		return true;
	}
	return false;
}
bool Lexi_Set_Slider_Luminosity(unsigned int value ){
	if ((value  <= 100 )&& (value >= 0 )){
		lexilight.slider_lum  = value;
		lexilight.lum_cmd = value;
		Lexi_Set_Slider_Last_Luminosity();
		return true;
	}
	return false;
}

void Lexi_Set_Slider_Last_Luminosity(){
	lexilight.slider_lum_last = lexilight.lum_cmd;
}

void Lexi_Get_Slider_Last_Luminosity(){
	lexilight.lum_cmd = lexilight.slider_lum_last;
}


unsigned int Lexi_Get_Slider_Speed(){
	return lexilight.slider_speed;
}
unsigned int Lexi_Get_Slider_Strength(){
	return lexilight.slider_strength;
}
unsigned int Lexi_Get_Slider_Luminosity(){
	return lexilight.slider_lum;
}




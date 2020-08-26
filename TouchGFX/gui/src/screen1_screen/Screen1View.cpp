#include <gui/screen1_screen/Screen1View.hpp>
#include "string.h"

extern "C" {
#include "lexilight.h"
#include "uart_task.h"
}


Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
    slider_speed.setValue(Lexi_Get_Slider_Speed());
    slider_strength.setValue(Lexi_Get_Slider_Strength());
    if (Lexi_Get_Led_State() == 2){
    	radioButton1.setSelected(true);
    	radioButton1.setDeselectionEnabled(false);
    }
    else {
    	radioButton1.setSelected(false);
    	radioButton1.setDeselectionEnabled(true);
    }
    slider_luminosity.setValue(Lexi_Get_Slider_Luminosity());
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

void Screen1View::UpdateValue(uint16_t value){
	if (value == 1){
		application().gotoScreen2ScreenSlideTransitionEast();
	}
	//memset(&textArea2Buffer,0,TEXTAREA2_SIZE);
    //Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%d", value);
	//textArea2.invalidate();
}

void Screen1View::Update_Mode_Reading_ON(){
	Lexi_Set_State_LEXI();
	UART_Send_LedReading();
}
void Screen1View::Update_Mode_Reading_OFF(){
	Lexi_Set_State_STANDARD();
	UART_Send_LedNormal();
}
void Screen1View::Update_Luminosity(int value){
	if ((value >= 0) && (value <= 100)){
		Update_Mode_Light_No_BLE();
		Lexi_Set_Slider_Luminosity(value);
		UART_Send_Lum();
		if (value == 0){
			UART_Send_LedOff();
		}
	}
}

void Screen1View::Update_Duty(int value){
    memset(&textArea_strength_heightBuffer,0,TEXTAREA_STRENGTH_HEIGHT_SIZE);
    Unicode::snprintf(textArea_strength_heightBuffer, TEXTAREA_STRENGTH_HEIGHT_SIZE, "%d", (value - (value%10))/10 );
    textArea_strength_height.invalidate();

    memset(&textArea_strength_lowBuffer,0,TEXTAREA_STRENGTH_LOW_SIZE);
    Unicode::snprintf(textArea_strength_lowBuffer, TEXTAREA_STRENGTH_LOW_SIZE, "%d", (value%10));
    textArea_strength_low.invalidate();
	if ((value >= 0) && (value <= 50)){
		Lexi_Set_Slider_Strength(value);
		UART_Send_Strength();
	}
}

void Screen1View::Update_Freq(int value){
    memset(&textArea_speed_heightBuffer,0,TEXTAREA_SPEED_HEIGHT_SIZE);
    Unicode::snprintf(textArea_speed_heightBuffer, TEXTAREA_SPEED_HEIGHT_SIZE, "%d", (value - (value%10))/10 );
    textArea_speed_height.invalidate();

    memset(&textArea_speed_lowBuffer,0,TEXTAREA_SPEED_LOW_SIZE);
    Unicode::snprintf(textArea_speed_lowBuffer, TEXTAREA_SPEED_LOW_SIZE, "%d", (value%10));
    textArea_speed_low.invalidate();
	if ((value >= 0) && (value <= 50)){
		Lexi_Set_Slider_Speed(value);
		UART_Send_Speed();
	}
}

void Screen1View::Update_Mode_Light_No_BLE(){
	if (radioButton1.getSelected()){
		Lexi_Set_State_LEXI();
	}
	else{
		Lexi_Set_State_STANDARD();
	}
}

void Screen1View::Update_Mode_Lexi(){
	Lexi_Set_State_LEXI();
	UART_Send_LedReading();
}
void Screen1View::Update_Mode_Standard(){
	Lexi_Set_State_STANDARD();
	UART_Send_LedNormal();
}


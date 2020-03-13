#include <gui/screen1_screen/Screen1View.hpp>
#include "string.h"
Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}
void Screen1View::UpdateValue(uint16_t value){
	/*
	memset(&textArea2Buffer,0,TEXTAREA2_SIZE);
    Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%d", value);
	textArea2.invalidate();
	*/
}

#ifndef SCREEN1VIEW_HPP
#define SCREEN1VIEW_HPP

#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>

class Screen1View : public Screen1ViewBase
{
public:
    Screen1View();
    virtual ~Screen1View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
	virtual void UpdateValue(uint16_t value);
    virtual void Update_Luminosity(int value);
    virtual void Update_Duty(int value);
	virtual void Update_Freq(int value);
	//virtual void Update_Mode_Light();
	virtual void Update_Mode_Light_No_BLE();
	virtual void Update_Mode_Lexi();
	virtual void Update_Mode_Standard();

	virtual void Update_Mode_Reading_ON();
	virtual void Update_Mode_Reading_OFF();

protected:
};

#endif // SCREEN1VIEW_HPP

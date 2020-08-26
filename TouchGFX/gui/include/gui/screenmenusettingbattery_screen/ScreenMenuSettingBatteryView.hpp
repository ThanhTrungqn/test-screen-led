#ifndef SCREENMENUSETTINGBATTERYVIEW_HPP
#define SCREENMENUSETTINGBATTERYVIEW_HPP

#include <gui_generated/screenmenusettingbattery_screen/ScreenMenuSettingBatteryViewBase.hpp>
#include <gui/screenmenusettingbattery_screen/ScreenMenuSettingBatteryPresenter.hpp>

class ScreenMenuSettingBatteryView : public ScreenMenuSettingBatteryViewBase
{
public:
    ScreenMenuSettingBatteryView();
    virtual ~ScreenMenuSettingBatteryView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SCREENMENUSETTINGBATTERYVIEW_HPP

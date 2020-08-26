#ifndef SCREENCONTROLSLIDERBRIGHTNESSVIEW_HPP
#define SCREENCONTROLSLIDERBRIGHTNESSVIEW_HPP

#include <gui_generated/screencontrolsliderbrightness_screen/ScreenControlSliderBrightnessViewBase.hpp>
#include <gui/screencontrolsliderbrightness_screen/ScreenControlSliderBrightnessPresenter.hpp>

class ScreenControlSliderBrightnessView : public ScreenControlSliderBrightnessViewBase
{
public:
    ScreenControlSliderBrightnessView();
    virtual ~ScreenControlSliderBrightnessView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SCREENCONTROLSLIDERBRIGHTNESSVIEW_HPP

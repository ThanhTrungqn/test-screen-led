#ifndef SCREENCONTROLSLIDERSTRENGTHVIEW_HPP
#define SCREENCONTROLSLIDERSTRENGTHVIEW_HPP

#include <gui_generated/screencontrolsliderstrength_screen/ScreenControlSliderStrengthViewBase.hpp>
#include <gui/screencontrolsliderstrength_screen/ScreenControlSliderStrengthPresenter.hpp>

class ScreenControlSliderStrengthView : public ScreenControlSliderStrengthViewBase
{
public:
    ScreenControlSliderStrengthView();
    virtual ~ScreenControlSliderStrengthView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SCREENCONTROLSLIDERSTRENGTHVIEW_HPP

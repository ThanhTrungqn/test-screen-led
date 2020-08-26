#ifndef SCREENCONTROLSLIDERSPEEDVIEW_HPP
#define SCREENCONTROLSLIDERSPEEDVIEW_HPP

#include <gui_generated/screencontrolsliderspeed_screen/ScreenControlSliderSpeedViewBase.hpp>
#include <gui/screencontrolsliderspeed_screen/ScreenControlSliderSpeedPresenter.hpp>

class ScreenControlSliderSpeedView : public ScreenControlSliderSpeedViewBase
{
public:
    ScreenControlSliderSpeedView();
    virtual ~ScreenControlSliderSpeedView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SCREENCONTROLSLIDERSPEEDVIEW_HPP

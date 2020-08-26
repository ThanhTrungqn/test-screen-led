#ifndef SCREENCONTROLLAMPREADINGVIEW_HPP
#define SCREENCONTROLLAMPREADINGVIEW_HPP

#include <gui_generated/screencontrollampreading_screen/ScreenControlLampReadingViewBase.hpp>
#include <gui/screencontrollampreading_screen/ScreenControlLampReadingPresenter.hpp>

class ScreenControlLampReadingView : public ScreenControlLampReadingViewBase
{
public:
    ScreenControlLampReadingView();
    virtual ~ScreenControlLampReadingView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SCREENCONTROLLAMPREADINGVIEW_HPP

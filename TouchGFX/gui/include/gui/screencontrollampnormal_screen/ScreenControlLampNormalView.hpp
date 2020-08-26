#ifndef SCREENCONTROLLAMPNORMALVIEW_HPP
#define SCREENCONTROLLAMPNORMALVIEW_HPP

#include <gui_generated/screencontrollampnormal_screen/ScreenControlLampNormalViewBase.hpp>
#include <gui/screencontrollampnormal_screen/ScreenControlLampNormalPresenter.hpp>

class ScreenControlLampNormalView : public ScreenControlLampNormalViewBase
{
public:
    ScreenControlLampNormalView();
    virtual ~ScreenControlLampNormalView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SCREENCONTROLLAMPNORMALVIEW_HPP

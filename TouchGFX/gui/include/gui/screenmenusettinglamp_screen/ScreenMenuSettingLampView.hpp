#ifndef SCREENMENUSETTINGLAMPVIEW_HPP
#define SCREENMENUSETTINGLAMPVIEW_HPP

#include <gui_generated/screenmenusettinglamp_screen/ScreenMenuSettingLampViewBase.hpp>
#include <gui/screenmenusettinglamp_screen/ScreenMenuSettingLampPresenter.hpp>

class ScreenMenuSettingLampView : public ScreenMenuSettingLampViewBase
{
public:
    ScreenMenuSettingLampView();
    virtual ~ScreenMenuSettingLampView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SCREENMENUSETTINGLAMPVIEW_HPP

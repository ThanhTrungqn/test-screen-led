/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREENMENUSETTINGLAMPVIEWBASE_HPP
#define SCREENMENUSETTINGLAMPVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screenmenusettinglamp_screen/ScreenMenuSettingLampPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/containers/Slider.hpp>

class ScreenMenuSettingLampViewBase : public touchgfx::View<ScreenMenuSettingLampPresenter>
{
public:
    ScreenMenuSettingLampViewBase();
    virtual ~ScreenMenuSettingLampViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box box1;
    touchgfx::Box border6;
    touchgfx::Box border5;
    touchgfx::Box border4;
    touchgfx::Box border3;
    touchgfx::Box border2;
    touchgfx::Box border1;
    touchgfx::Image iconbatery;
    touchgfx::Image iconbluetooth;
    touchgfx::Image iconupdate;
    touchgfx::Image icondownloadapp;
    touchgfx::Image icondeviceinformation;
    touchgfx::Image iconreset;
    touchgfx::Button buttonback;
    touchgfx::TextArea textBattery;
    touchgfx::TextArea textPairing;
    touchgfx::TextArea textUpdate;
    touchgfx::TextArea textDownloadApp;
    touchgfx::TextArea textDeviceInformation;
    touchgfx::TextArea textReset;
    touchgfx::Slider sliderSound;
    touchgfx::TextArea TextSound;
    touchgfx::TextArea TextBrightness;
    touchgfx::Slider sliderBrightness;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<ScreenMenuSettingLampViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // SCREENMENUSETTINGLAMPVIEWBASE_HPP

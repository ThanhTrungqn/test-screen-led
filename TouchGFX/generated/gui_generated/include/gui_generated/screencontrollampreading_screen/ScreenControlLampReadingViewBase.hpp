/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREENCONTROLLAMPREADINGVIEWBASE_HPP
#define SCREENCONTROLLAMPREADINGVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screencontrollampreading_screen/ScreenControlLampReadingPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/widgets/RadioButton.hpp>
#include <touchgfx/containers/Slider.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/RadioButtonGroup.hpp>

class ScreenControlLampReadingViewBase : public touchgfx::View<ScreenControlLampReadingPresenter>
{
public:
    ScreenControlLampReadingViewBase();
    virtual ~ScreenControlLampReadingViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box box1;
    touchgfx::Button buttonTurnOff;
    touchgfx::Button buttonSetting;
    touchgfx::RadioButton radioButton1;
    touchgfx::Button buttonSpeed;
    touchgfx::Button buttonStrength;
    touchgfx::Slider slider1;
    touchgfx::Image image2;
    touchgfx::TextArea textArea1;
    touchgfx::TextArea textArea2;
    touchgfx::Container SpeedContainer;
    touchgfx::Image speed_icon;
    touchgfx::TextArea Speed;
    touchgfx::TextArea SpeedValue1;
    touchgfx::Container StrengthContainer;
    touchgfx::Image speed_icon_1;
    touchgfx::TextArea Strength;
    touchgfx::TextArea StrengthValue1;
    touchgfx::RadioButtonGroup<1> radioButtonGroup1;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<ScreenControlLampReadingViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // SCREENCONTROLLAMPREADINGVIEWBASE_HPP
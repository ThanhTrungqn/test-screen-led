/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN1VIEWBASE_HPP
#define SCREEN1VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/containers/Slider.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/ToggleButton.hpp>

class Screen1ViewBase : public touchgfx::View<Screen1Presenter>
{
public:
    Screen1ViewBase();
    virtual ~Screen1ViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Image image1;
    touchgfx::Container container1;
    touchgfx::Slider slider_strength;
    touchgfx::TextAreaWithOneWildcard textArea_strength_low;
    touchgfx::TextAreaWithOneWildcard textArea_strength_height;
    touchgfx::TextArea textArea3;
    touchgfx::Image image2;
    touchgfx::Container container1_1;
    touchgfx::Slider slider_speed;
    touchgfx::TextAreaWithOneWildcard textArea_speed_low;
    touchgfx::TextAreaWithOneWildcard textArea_speed_height;
    touchgfx::TextArea textArea3_1;
    touchgfx::Image image2_1;
    touchgfx::Slider slider1;
    touchgfx::TextArea textArea4;
    touchgfx::ToggleButton toggleButton1;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TEXTAREA_STRENGTH_LOW_SIZE = 3;
    touchgfx::Unicode::UnicodeChar textArea_strength_lowBuffer[TEXTAREA_STRENGTH_LOW_SIZE];
    static const uint16_t TEXTAREA_STRENGTH_HEIGHT_SIZE = 3;
    touchgfx::Unicode::UnicodeChar textArea_strength_heightBuffer[TEXTAREA_STRENGTH_HEIGHT_SIZE];
    static const uint16_t TEXTAREA_SPEED_LOW_SIZE = 3;
    touchgfx::Unicode::UnicodeChar textArea_speed_lowBuffer[TEXTAREA_SPEED_LOW_SIZE];
    static const uint16_t TEXTAREA_SPEED_HEIGHT_SIZE = 3;
    touchgfx::Unicode::UnicodeChar textArea_speed_heightBuffer[TEXTAREA_SPEED_HEIGHT_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<Screen1ViewBase, const touchgfx::Slider&, int> sliderValueChangedCallback;

    /*
     * Callback Handler Declarations
     */
    void sliderValueChangedCallbackHandler(const touchgfx::Slider& src, int value);

};

#endif // SCREEN1VIEWBASE_HPP
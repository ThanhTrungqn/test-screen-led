/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREENCONTROLSLIDERBRIGHTNESSVIEWBASE_HPP
#define SCREENCONTROLSLIDERBRIGHTNESSVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screencontrolsliderbrightness_screen/ScreenControlSliderBrightnessPresenter.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/containers/Slider.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>

class ScreenControlSliderBrightnessViewBase : public touchgfx::View<ScreenControlSliderBrightnessPresenter>
{
public:
    ScreenControlSliderBrightnessViewBase();
    virtual ~ScreenControlSliderBrightnessViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Container Background;
    touchgfx::Box box1;
    touchgfx::Image image4;
    touchgfx::Image image1;
    touchgfx::Image image2;
    touchgfx::Image image3;
    touchgfx::Image image5;
    touchgfx::TextArea textArea1;
    touchgfx::Slider slider1;
    touchgfx::TextArea textArea3;
    touchgfx::ButtonWithLabel buttonWithLabel1;

private:

};

#endif // SCREENCONTROLSLIDERBRIGHTNESSVIEWBASE_HPP

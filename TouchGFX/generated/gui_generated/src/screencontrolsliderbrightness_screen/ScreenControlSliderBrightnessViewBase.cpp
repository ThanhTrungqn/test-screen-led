/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screencontrolsliderbrightness_screen/ScreenControlSliderBrightnessViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

ScreenControlSliderBrightnessViewBase::ScreenControlSliderBrightnessViewBase()
{

    Background.setPosition(0, 0, 240, 320);

    box1.setPosition(0, 0, 240, 320);
    box1.setColor(touchgfx::Color::getColorFrom24BitRGB(243, 245, 248));
    Background.add(box1);

    image4.setXY(0, 272);
    image4.setBitmap(touchgfx::Bitmap(BITMAP_FRAME_BOTTOM_LEFT_ID));
    Background.add(image4);

    image1.setXY(0, 0);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_FRAME_TOP_LEFT_ID));
    Background.add(image1);

    image2.setXY(192, 272);
    image2.setBitmap(touchgfx::Bitmap(BITMAP_FRAME_BOTTOM_RIGHT_ID));
    Background.add(image2);

    image3.setXY(192, 0);
    image3.setBitmap(touchgfx::Bitmap(BITMAP_FRAME_TOP_RIGHT_ID));
    Background.add(image3);

    image5.setXY(83, 77);
    image5.setBitmap(touchgfx::Bitmap(BITMAP_ICON_BRIGHTNESS_ID));
    Background.add(image5);

    textArea1.setXY(36, 37);
    textArea1.setColor(touchgfx::Color::getColorFrom24BitRGB(69, 69, 69));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID26));
    Background.add(textArea1);

    slider1.setXY(14, 186);
    slider1.setBitmaps(touchgfx::Bitmap(BITMAP_SLIDER_BACKGROUND_ID), touchgfx::Bitmap(BITMAP_SLIDER_100_ID), touchgfx::Bitmap(BITMAP_SLIDER_OVAL_ID));
    slider1.setupHorizontalSlider(2, 22, 20, 0, 175);
    slider1.setValueRange(0, 100);
    slider1.setValue(100);

    textArea3.setXY(97, 160);
    textArea3.setColor(touchgfx::Color::getColorFrom24BitRGB(1, 31, 111));
    textArea3.setLinespacing(0);
    textArea3.setTypedText(touchgfx::TypedText(T_SINGLEUSEID27));

    buttonWithLabel1.setXY(83, 260);
    buttonWithLabel1.setBitmaps(touchgfx::Bitmap(BITMAP_BUTTON_NEXT_ID), touchgfx::Bitmap(BITMAP_BUTTON_NEXT_ID));
    buttonWithLabel1.setLabelText(touchgfx::TypedText(T_SINGLEUSEID28));
    buttonWithLabel1.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonWithLabel1.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));

    add(Background);
    add(slider1);
    add(textArea3);
    add(buttonWithLabel1);
}

void ScreenControlSliderBrightnessViewBase::setupScreen()
{

}

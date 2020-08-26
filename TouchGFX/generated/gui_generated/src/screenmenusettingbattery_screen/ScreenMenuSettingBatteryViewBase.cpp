/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screenmenusettingbattery_screen/ScreenMenuSettingBatteryViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

ScreenMenuSettingBatteryViewBase::ScreenMenuSettingBatteryViewBase()
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

    textArea1.setXY(36, 37);
    textArea1.setColor(touchgfx::Color::getColorFrom24BitRGB(69, 69, 69));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID50));
    Background.add(textArea1);

    buttonWithLabel1.setXY(83, 260);
    buttonWithLabel1.setBitmaps(touchgfx::Bitmap(BITMAP_BUTTON_NEXT_ID), touchgfx::Bitmap(BITMAP_BUTTON_NEXT_ID));
    buttonWithLabel1.setLabelText(touchgfx::TypedText(T_SINGLEUSEID52));
    buttonWithLabel1.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonWithLabel1.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));

    image5.setXY(67, 88);
    image5.setBitmap(touchgfx::Bitmap(BITMAP_BATTERY_LOW_ID));
    image5.setAlpha(137);

    add(Background);
    add(buttonWithLabel1);
    add(image5);
}

void ScreenMenuSettingBatteryViewBase::setupScreen()
{

}

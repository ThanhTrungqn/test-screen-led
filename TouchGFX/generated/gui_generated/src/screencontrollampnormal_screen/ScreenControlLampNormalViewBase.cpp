/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screencontrollampnormal_screen/ScreenControlLampNormalViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

ScreenControlLampNormalViewBase::ScreenControlLampNormalViewBase()
{

    box1.setPosition(0, 0, 240, 320);
    box1.setColor(touchgfx::Color::getColorFrom24BitRGB(233, 233, 233));

    button1.setXY(14, 9);
    button1.setBitmaps(touchgfx::Bitmap(BITMAP_SWITCH_ID), touchgfx::Bitmap(BITMAP_SWITCH_ID));

    button2.setXY(171, 9);
    button2.setBitmaps(touchgfx::Bitmap(BITMAP_SETTINGS_ID), touchgfx::Bitmap(BITMAP_SETTINGS_ID));

    radioButton1.setXY(170, 78);
    radioButton1.setBitmaps(touchgfx::Bitmap(BITMAP_TOGGLE_OFF_ID), touchgfx::Bitmap(BITMAP_TOGGLE_OFF_ID), touchgfx::Bitmap(BITMAP_TOGGLE_ON_ID), touchgfx::Bitmap(BITMAP_TOGGLE_ON_ID));
    radioButton1.setSelected(false);
    radioButton1.setDeselectionEnabled(false);

    image1.setXY(8, 112);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_GRAY_ADJUST_BACK_ID));

    image1_1.setXY(120, 112);
    image1_1.setBitmap(touchgfx::Bitmap(BITMAP_GRAY_ADJUST_BACK_ID));

    slider1.setXY(14, 256);
    slider1.setBitmaps(touchgfx::Bitmap(BITMAP_SLIDER_BACKGROUND_ID), touchgfx::Bitmap(BITMAP_SLIDER_100_ID), touchgfx::Bitmap(BITMAP_SLIDER_OVAL_ID));
    slider1.setupHorizontalSlider(0, 13, 11, 0, 175);
    slider1.setValueRange(0, 100);
    slider1.setValue(100);

    image2.setXY(88, 228);
    image2.setBitmap(touchgfx::Bitmap(BITMAP_COUNT_BACK_PERCENT_ID));

    textArea1.setXY(18, 81);
    textArea1.setColor(touchgfx::Color::getColorFrom24BitRGB(94, 94, 94));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID34));

    textArea2.setXY(96, 243);
    textArea2.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea2.setLinespacing(0);
    textArea2.setTypedText(touchgfx::TypedText(T_SINGLEUSEID35));

    SpeedContainer.setPosition(18, 128, 92, 90);

    speed_icon.setXY(12, 0);
    speed_icon.setBitmap(touchgfx::Bitmap(BITMAP_IC_40_SPEED_GREY_ID));
    SpeedContainer.add(speed_icon);

    Speed.setXY(12, 36);
    Speed.setColor(touchgfx::Color::getColorFrom24BitRGB(197, 203, 220));
    Speed.setLinespacing(0);
    Speed.setTypedText(touchgfx::TypedText(T_SINGLEUSEID36));
    SpeedContainer.add(Speed);

    SpeedValue1.setXY(12, 54);
    SpeedValue1.setColor(touchgfx::Color::getColorFrom24BitRGB(197, 203, 220));
    SpeedValue1.setLinespacing(0);
    SpeedValue1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID37));
    SpeedContainer.add(SpeedValue1);

    StrengthContainer.setPosition(129, 128, 92, 90);

    speed_icon_1.setXY(12, 0);
    speed_icon_1.setBitmap(touchgfx::Bitmap(BITMAP_IC_40_LIGHTNESS_GREY_ID));
    StrengthContainer.add(speed_icon_1);

    Strength.setXY(12, 36);
    Strength.setColor(touchgfx::Color::getColorFrom24BitRGB(197, 203, 220));
    Strength.setLinespacing(0);
    Strength.setTypedText(touchgfx::TypedText(T_SINGLEUSEID38));
    StrengthContainer.add(Strength);

    StrengthValue1.setXY(12, 54);
    StrengthValue1.setColor(touchgfx::Color::getColorFrom24BitRGB(197, 203, 220));
    StrengthValue1.setLinespacing(0);
    StrengthValue1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID39));
    StrengthContainer.add(StrengthValue1);

    add(box1);
    add(button1);
    add(button2);
    add(radioButton1);
    add(image1);
    add(image1_1);
    add(slider1);
    add(image2);
    add(textArea1);
    add(textArea2);
    add(SpeedContainer);
    add(StrengthContainer);
    radioButtonGroup1.add(radioButton1);
}

void ScreenControlLampNormalViewBase::setupScreen()
{

}

/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screenmenusettinglamp_screen/ScreenMenuSettingLampViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

ScreenMenuSettingLampViewBase::ScreenMenuSettingLampViewBase() :
    buttonCallback(this, &ScreenMenuSettingLampViewBase::buttonCallbackHandler)
{

    box1.setPosition(0, 0, 240, 320);
    box1.setColor(touchgfx::Color::getColorFrom24BitRGB(237, 237, 237));

    border6.setPosition(0, 284, 240, 1);
    border6.setColor(touchgfx::Color::getColorFrom24BitRGB(208, 208, 208));

    border5.setPosition(0, 248, 240, 1);
    border5.setColor(touchgfx::Color::getColorFrom24BitRGB(208, 208, 208));

    border4.setPosition(0, 212, 240, 1);
    border4.setColor(touchgfx::Color::getColorFrom24BitRGB(208, 208, 208));

    border3.setPosition(0, 176, 240, 1);
    border3.setColor(touchgfx::Color::getColorFrom24BitRGB(208, 208, 208));

    border2.setPosition(0, 140, 240, 1);
    border2.setColor(touchgfx::Color::getColorFrom24BitRGB(208, 208, 208));

    border1.setPosition(0, 104, 240, 1);
    border1.setColor(touchgfx::Color::getColorFrom24BitRGB(208, 208, 208));

    iconbatery.setXY(6, 106);
    iconbatery.setBitmap(touchgfx::Bitmap(BITMAP_SETTINGS_ICON_BATTERY_ID));

    iconbluetooth.setXY(6, 140);
    iconbluetooth.setBitmap(touchgfx::Bitmap(BITMAP_SETTINGS_ICON_BLUETOOTH_ID));

    iconupdate.setXY(6, 178);
    iconupdate.setBitmap(touchgfx::Bitmap(BITMAP_SETTINGS_ICON_UPDATE_ID));

    icondownloadapp.setXY(6, 212);
    icondownloadapp.setBitmap(touchgfx::Bitmap(BITMAP_SETTINGS_ICON_APP_ID));

    icondeviceinformation.setXY(6, 248);
    icondeviceinformation.setBitmap(touchgfx::Bitmap(BITMAP_SETTINGS_ICON_INFO_ID));

    iconreset.setXY(6, 285);
    iconreset.setBitmap(touchgfx::Bitmap(BITMAP_SETTINGS_ICON_RESET_ID));

    buttonback.setXY(8, 8);
    buttonback.setBitmaps(touchgfx::Bitmap(BITMAP_SETTINGS_BACK_BUTTON_ID), touchgfx::Bitmap(BITMAP_SETTINGS_BACK_BUTTON_ID));
    buttonback.setAction(buttonCallback);

    textBattery.setXY(58, 117);
    textBattery.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textBattery.setLinespacing(0);
    textBattery.setTypedText(touchgfx::TypedText(T_SINGLEUSEID42));

    textPairing.setXY(58, 151);
    textPairing.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textPairing.setLinespacing(0);
    textPairing.setTypedText(touchgfx::TypedText(T_SINGLEUSEID43));

    textUpdate.setXY(58, 189);
    textUpdate.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textUpdate.setLinespacing(0);
    textUpdate.setTypedText(touchgfx::TypedText(T_SINGLEUSEID44));

    textDownloadApp.setXY(58, 223);
    textDownloadApp.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textDownloadApp.setLinespacing(0);
    textDownloadApp.setTypedText(touchgfx::TypedText(T_SINGLEUSEID45));

    textDeviceInformation.setXY(58, 259);
    textDeviceInformation.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textDeviceInformation.setLinespacing(0);
    textDeviceInformation.setTypedText(touchgfx::TypedText(T_SINGLEUSEID46));

    textReset.setXY(58, 296);
    textReset.setColor(touchgfx::Color::getColorFrom24BitRGB(216, 0, 0));
    textReset.setLinespacing(0);
    textReset.setTypedText(touchgfx::TypedText(T_SINGLEUSEID47));

    sliderSound.setXY(58, 59);
    sliderSound.setBitmaps(touchgfx::Bitmap(BITMAP_SETTINGS_SLIDER_0_ID), touchgfx::Bitmap(BITMAP_SETTINGS_SLIDER_100_ID), touchgfx::Bitmap(BITMAP_SETTINGS_SLIDER_MARKER_ID));
    sliderSound.setupHorizontalSlider(0, 22, 13, 0, 149);
    sliderSound.setValueRange(0, 100);
    sliderSound.setValue(36);

    TextSound.setXY(58, 59);
    TextSound.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    TextSound.setLinespacing(0);
    TextSound.setTypedText(touchgfx::TypedText(T_SINGLEUSEID48));

    TextBrightness.setXY(58, 16);
    TextBrightness.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    TextBrightness.setLinespacing(0);
    TextBrightness.setTypedText(touchgfx::TypedText(T_SINGLEUSEID49));

    sliderBrightness.setXY(58, 16);
    sliderBrightness.setBitmaps(touchgfx::Bitmap(BITMAP_SETTINGS_SLIDER_0_ID), touchgfx::Bitmap(BITMAP_SETTINGS_SLIDER_100_ID), touchgfx::Bitmap(BITMAP_SETTINGS_SLIDER_MARKER_ID));
    sliderBrightness.setupHorizontalSlider(0, 22, 13, 0, 149);
    sliderBrightness.setValueRange(0, 100);
    sliderBrightness.setValue(68);

    add(box1);
    add(border6);
    add(border5);
    add(border4);
    add(border3);
    add(border2);
    add(border1);
    add(iconbatery);
    add(iconbluetooth);
    add(iconupdate);
    add(icondownloadapp);
    add(icondeviceinformation);
    add(iconreset);
    add(buttonback);
    add(textBattery);
    add(textPairing);
    add(textUpdate);
    add(textDownloadApp);
    add(textDeviceInformation);
    add(textReset);
    add(sliderSound);
    add(TextSound);
    add(TextBrightness);
    add(sliderBrightness);
}

void ScreenMenuSettingLampViewBase::setupScreen()
{

}

void ScreenMenuSettingLampViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonback)
    {
        //Interaction1
        //When buttonback clicked change screen to ScreenControlLampReading
        //Go to ScreenControlLampReading with no screen transition
        application().gotoScreenControlLampReadingScreenNoTransition();
    }
}

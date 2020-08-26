#ifndef SCREENMENUSETTINGLAMPPRESENTER_HPP
#define SCREENMENUSETTINGLAMPPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ScreenMenuSettingLampView;

class ScreenMenuSettingLampPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    ScreenMenuSettingLampPresenter(ScreenMenuSettingLampView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~ScreenMenuSettingLampPresenter() {};

private:
    ScreenMenuSettingLampPresenter();

    ScreenMenuSettingLampView& view;
};

#endif // SCREENMENUSETTINGLAMPPRESENTER_HPP

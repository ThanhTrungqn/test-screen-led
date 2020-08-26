#ifndef SCREENCONTROLSLIDERBRIGHTNESSPRESENTER_HPP
#define SCREENCONTROLSLIDERBRIGHTNESSPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ScreenControlSliderBrightnessView;

class ScreenControlSliderBrightnessPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    ScreenControlSliderBrightnessPresenter(ScreenControlSliderBrightnessView& v);

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

    virtual ~ScreenControlSliderBrightnessPresenter() {};

private:
    ScreenControlSliderBrightnessPresenter();

    ScreenControlSliderBrightnessView& view;
};

#endif // SCREENCONTROLSLIDERBRIGHTNESSPRESENTER_HPP

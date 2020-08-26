#ifndef SCREENCONTROLSLIDERSTRENGTHPRESENTER_HPP
#define SCREENCONTROLSLIDERSTRENGTHPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ScreenControlSliderStrengthView;

class ScreenControlSliderStrengthPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    ScreenControlSliderStrengthPresenter(ScreenControlSliderStrengthView& v);

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

    virtual ~ScreenControlSliderStrengthPresenter() {};

private:
    ScreenControlSliderStrengthPresenter();

    ScreenControlSliderStrengthView& view;
};

#endif // SCREENCONTROLSLIDERSTRENGTHPRESENTER_HPP

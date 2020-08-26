#ifndef SCREENCONTROLLAMPNORMALPRESENTER_HPP
#define SCREENCONTROLLAMPNORMALPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ScreenControlLampNormalView;

class ScreenControlLampNormalPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    ScreenControlLampNormalPresenter(ScreenControlLampNormalView& v);

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

    virtual ~ScreenControlLampNormalPresenter() {};

private:
    ScreenControlLampNormalPresenter();

    ScreenControlLampNormalView& view;
};

#endif // SCREENCONTROLLAMPNORMALPRESENTER_HPP

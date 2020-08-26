#ifndef SCREENWELCOMEWARNINGPRESENTER_HPP
#define SCREENWELCOMEWARNINGPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ScreenWelcomeWarningView;

class ScreenWelcomeWarningPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    ScreenWelcomeWarningPresenter(ScreenWelcomeWarningView& v);

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

    virtual ~ScreenWelcomeWarningPresenter() {};

private:
    ScreenWelcomeWarningPresenter();

    ScreenWelcomeWarningView& view;
};

#endif // SCREENWELCOMEWARNINGPRESENTER_HPP

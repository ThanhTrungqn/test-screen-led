#ifndef SCREENWELCOMEWARNINGVIEW_HPP
#define SCREENWELCOMEWARNINGVIEW_HPP

#include <gui_generated/screenwelcomewarning_screen/ScreenWelcomeWarningViewBase.hpp>
#include <gui/screenwelcomewarning_screen/ScreenWelcomeWarningPresenter.hpp>

class ScreenWelcomeWarningView : public ScreenWelcomeWarningViewBase
{
public:
    ScreenWelcomeWarningView();
    virtual ~ScreenWelcomeWarningView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SCREENWELCOMEWARNINGVIEW_HPP

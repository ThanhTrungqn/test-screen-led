#ifndef SCREENWELCOMEANIMATIONVIEW_HPP
#define SCREENWELCOMEANIMATIONVIEW_HPP

#include <gui_generated/screenwelcomeanimation_screen/ScreenWelcomeAnimationViewBase.hpp>
#include <gui/screenwelcomeanimation_screen/ScreenWelcomeAnimationPresenter.hpp>

class ScreenWelcomeAnimationView : public ScreenWelcomeAnimationViewBase
{
public:
    ScreenWelcomeAnimationView();
    virtual ~ScreenWelcomeAnimationView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    void imageMoveAnimationEndedHandler(const touchgfx::MoveAnimator<Button>& comp);

protected:
    Callback <ScreenWelcomeAnimationView, const touchgfx::MoveAnimator<Button>&> imageMoveAnimationEndedCallback;
};

#endif // SCREENWELCOMEANIMATIONVIEW_HPP

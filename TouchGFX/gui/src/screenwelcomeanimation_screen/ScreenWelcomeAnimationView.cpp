#include <gui/screenwelcomeanimation_screen/ScreenWelcomeAnimationView.hpp>

ScreenWelcomeAnimationView::ScreenWelcomeAnimationView()
{

}

void ScreenWelcomeAnimationView::setupScreen()
{
    ScreenWelcomeAnimationViewBase::setupScreen();
    image1.startMoveAnimation(35, 35, 30, EasingEquations::linearEaseNone, EasingEquations::linearEaseNone);
    image2.startMoveAnimation(97, 107, 30, EasingEquations::linearEaseNone, EasingEquations::linearEaseNone);
    button1.startMoveAnimation(22, 153, 50, EasingEquations::linearEaseNone, EasingEquations::linearEaseNone);
    textArea1.startFadeAnimation(255, 50, EasingEquations::linearEaseNone);
    //textArea2.startFadeAnimation(255, 50, EasingEquations::linearEaseNone);


}

void ScreenWelcomeAnimationView::tearDownScreen()
{
    ScreenWelcomeAnimationViewBase::tearDownScreen();
}

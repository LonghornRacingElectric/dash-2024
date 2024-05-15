#ifndef START_1VIEW_HPP
#define START_1VIEW_HPP

#include <gui_generated/start_1_screen/Start_1ViewBase.hpp>
#include <gui/start_1_screen/Start_1Presenter.hpp>

class Start_1View : public Start_1ViewBase
{
public:
	int startTicks;
    Start_1View();
    virtual ~Start_1View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    //virtual void setSpeed();

protected:
};

#endif // START_1VIEW_HPP

#ifndef START_1PRESENTER_HPP
#define START_1PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Start_1View;

class Start_1Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    Start_1Presenter(Start_1View& v);

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

    virtual ~Start_1Presenter() {}

private:
    Start_1Presenter();

    Start_1View& view;
};

#endif // START_1PRESENTER_HPP

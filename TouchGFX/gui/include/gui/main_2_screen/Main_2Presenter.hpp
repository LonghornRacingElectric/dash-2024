#ifndef MAIN_2PRESENTER_HPP
#define MAIN_2PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Main_2View;

class Main_2Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    Main_2Presenter(Main_2View& v);

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

    virtual ~Main_2Presenter() {}

private:
    Main_2Presenter();

    Main_2View& view;
};

#endif // MAIN_2PRESENTER_HPP

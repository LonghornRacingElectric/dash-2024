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

    int dash_hvCharge(){
        return static_cast<int>(model->getHV());
    }

    int dash_motorTemp(){
        return static_cast<int>(model->getMotorTemp());
    }

    int dash_speed(){
        return static_cast<int>(model->getSpeed());
    }

    int dash_lvCharge(){
        return static_cast<int>(model->getLV());
    }

    int dash_draw(){
        return static_cast<int>(model->getDraw());
    }

    int dash_accel(){
        return static_cast<int>(model->getAccel());
    }

    int dash_brake(){
        return static_cast<int>(model->getBrake());
    }

    int dash_hvTemp(){
        return static_cast<int>(model->getHVTemp());
    }

    bool dash_inverter(){
        return true;
    }

    bool dash_wheelSpeed(){
        return true;
    }

    bool dash_cooling(){
        return true;
    }

    bool dash_VCU(){
        return true;
    }


private:
    Main_2Presenter();

    Main_2View& view;
};

#endif // MAIN_2PRESENTER_HPP

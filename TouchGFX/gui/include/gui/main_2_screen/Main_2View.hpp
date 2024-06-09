#ifndef MAIN_2VIEW_HPP
#define MAIN_2VIEW_HPP

#include <gui_generated/main_2_screen/Main_2ViewBase.hpp>
#include <gui/main_2_screen/Main_2Presenter.hpp>



class Main_2View : public Main_2ViewBase
{
public:

//	int time_seconds, time_minutes, time_tenths, time_miliseconds;
	int ticks; //,errTick;
//	int count;
//
//	uint8_t CAN_SPEED, CAN_MIN, CAN_MAX, CAN_DRAW, CAN_HV, CAN_LV, CAN_BREAK, CAN_ACCEL;//brake is wrong on purpose i am not dumb i swear
//
//
//	uint16_t tempHV;
//
//
//	bool hv_over, lv_over, acc_over, break_over;
//
//	volatile uint32_t id;
//	FDCAN_RxHeaderTypeDef RxHeader;
//	uint8_t RxData[8];
//
//
//	bool err_Kooling, err_VCU, err_Inverter, err_WheelSpeed;
//

    Main_2View();
    virtual ~Main_2View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    virtual void updateCAN();


protected:
    void setSpeed(int speedVal);

    void setHV(int HV);
    void setLV(int LV);

    void setHVTemp(int temp);
    void setMotorTemp(int motorTemp);

    void setDraw(int draw);
    void setLapTime(int min, int sec, int hundredths, int thousandths);

    void setAccelVal(int accel);
    void setBrakeVal(int brake);

    void setErrs(bool VCU, bool inverter, bool cooling, bool wheelSpeed);



};

#endif // MAIN_2VIEW_HPP

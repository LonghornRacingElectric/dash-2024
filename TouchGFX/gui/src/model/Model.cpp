#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

#ifndef SIMULATOR
#include <fdcan.h>
#include <stdint.h>
#endif



Model::Model() : modelListener(0)
{

}
void Model::receivePacket() {
    static FDCAN_RxHeaderTypeDef RxHeader;
    static uint8_t RxData[8];
    static bool started = false;
    static uint32_t err;

    static uint8_t data[8];
    if(!started) {
        err = HAL_FDCAN_Start(&hfdcan1);
        started = true;
        return;
    }

    err = HAL_FDCAN_GetRxMessage(&hfdcan1, FDCAN_RX_FIFO0, &RxHeader, RxData);
    if(err) {
    } else {
        uint32_t id = RxHeader.Identifier;
        if(id == 0x710)  {//Dash 1
            speed = static_cast<float>(RxData[0]);
            draw = static_cast<float>(RxData[1]);
            accel = static_cast<float>(RxData[2]);
            brake = static_cast<float>(RxData[3]);
            lvCharge = static_cast<float>(RxData[5]);
            hvTemp = static_cast<float>(RxData[6]);//Currently HV max temp
            motorTemp = static_cast<float>(RxData[7]);//Currently Motor Temp
        }

        if(id == 0x711) {//Dash 2
            //laptime time_seconds, time_minutes, time_tenths, time_miliseconds;
            time_seconds = static_cast<float>(RxData[0]);
            time_minutes = static_cast<float>(RxData[1]);
            time_tenths = static_cast<float>(RxData[2]);
            time_miliseconds = static_cast<float>(RxData[3]);
        }

    }
}

float Model::getSpeed(){
    return speed;
}

float Model::getMotorTemp(){
    return motorTemp;
}

float Model::getHV(){
    return hvCharge;
}

float Model::getHVTemp(){
    return hvTemp;
}

float Model::getLV(){
    return lvCharge;
}

float Model::getDraw(){
    return draw;
}

float Model::getAccel(){
    return accel;
}

float Model::getBrake(){
    return brake;
}

int Model::errInverterFlag(){
    return err_Inverter;
}

int Model::errCoolingFlag(){
    return err_Cooling;
}

int Model::errWheelSpeedFlag(){
    return err_WheelSpeed;
}

int Model::errVCUFlag(){
    return err_VCU;
}

/*
    float getSpeed();
    float getMotorTemp();
    float getHV();
    float getLV();
    float getDraw();

    float getAccel();
    float getBrake();

    int errInverterFlag();
    int errWheelSpeedFlag();
    int errCoolingFlag();
    int errVCUFlag();

 */



void Model::tick()
{
#ifndef SIMULATOR
    receivePacket();
    //sendPacket();
#endif
}

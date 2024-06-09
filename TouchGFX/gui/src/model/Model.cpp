#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

#ifndef SIMULATOR
#include <fdcan.h>
#include <stdint.h>
#endif

int testCan = 0;

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
    }
    else {
        uint32_t id = RxHeader.Identifier;
        if (id == 0x18FF50E5){
            draw = 10;
        }
        if (id == 0x710) {//Dash 1
            speed = static_cast<float>(RxData[0]);
            draw = static_cast<float>(RxData[1]);
            accel = static_cast<float>(RxData[2]);
            brake = static_cast<float>(RxData[3]);
            hvCharge = static_cast<float>(RxData[4]);
            lvCharge = static_cast<float>(RxData[5]);
            hvTemp = static_cast<float>(RxData[6]);//Currently HV max temp
            motorTemp = static_cast<float>(RxData[7]);//Currently Motor Temp
        }

        if (id == 0x711) {//Dash 2
            //laptime time_seconds, time_minutes, time_tenths, time_miliseconds;
            time_seconds = static_cast<float>(RxData[0]);
            time_minutes = static_cast<float>(RxData[1]);
            time_tenths = static_cast<float>(RxData[2]);
            time_milliseconds = static_cast<float>(RxData[3]);
            err_WheelSpeed = static_cast<bool>(RxData[4]);
            err_VCU = static_cast<bool>(RxData[4]);
            err_Inverter = static_cast<bool>(RxData[4]);
            err_Cooling = static_cast<bool>(RxData[4]);
        }
    }
}

float Model::getSpeed(){
    //return speed;
    return testCan;
}

float Model::getMotorTemp(){
    //return motorTemp;
    return testCan;
}

float Model::getHV(){
    return hvCharge;
    //return testCan;
}

float Model::getHVTemp(){
    return hvTemp;
    //return testCan;
}

float Model::getLV(){
    return lvCharge;
    //return testCan;
}

float Model::getDraw(){
    return draw;
    //return testCan;
}

float Model::getAccel(){
    return accel;
    //return testCan;
}

float Model::getBrake(){
    return brake;
    //return testCan;
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

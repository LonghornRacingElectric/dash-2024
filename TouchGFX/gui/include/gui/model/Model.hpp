#ifndef MODEL_HPP
#define MODEL_HPP

class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void tick();
    float getSpeed();
    float getMotorTemp();
    float getHV();
    float getLV();
    float getDraw();
    float getAccel();
    float getBrake();
    float getHVTemp();

    int errInverterFlag();
    int errWheelSpeedFlag();
    int errCoolingFlag();
    int errVCUFlag();


protected:
    ModelListener* modelListener;
    float hvCharge;
    float lvCharge;
    float speed;
    float accel;
    float brake;
    float motorTemp;
    float hvTemp;
    float draw;
    float lapTime_min;
    float lapTime_;
    bool err_VCU;
    bool err_Cooling;
    bool err_WheelSpeed;
    bool err_Inverter;



#ifndef SIMULATOR
    void receivePacket();

    //void sendPacket();
#endif

};

#endif // MODEL_HPP
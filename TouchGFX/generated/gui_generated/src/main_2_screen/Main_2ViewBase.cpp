/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/main_2_screen/Main_2ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

Main_2ViewBase::Main_2ViewBase()
{
    __background.setPosition(0, 0, 800, 480);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    main_background.setXY(0, 0);
    main_background.setBitmap(touchgfx::Bitmap(BITMAP_BLANKBACK_BLACK_ID));
    add(main_background);

    speed.setPosition(270, -16, 287, 183);
    speed.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    speed.setLinespacing(0);
    Unicode::snprintf(speedBuffer, SPEED_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_I6JL).getText());
    speed.setWildcard(speedBuffer);
    speed.setTypedText(touchgfx::TypedText(T___SINGLEUSE_LP9N));
    add(speed);

    bar_LV.setXY(750, 0);
    bar_LV.setProgressIndicatorPosition(0, 0, 50, 434);
    bar_LV.setRange(0, 100);
    bar_LV.setDirection(touchgfx::AbstractDirectionProgress::UP);
    bar_LV.setBackground(touchgfx::Bitmap(BITMAP_BLANKPROGRESSBAR_ID));
    bar_LV.setColor(touchgfx::Color::getColorFromRGB(0, 38, 255));
    bar_LV.setValue(100);
    add(bar_LV);

    bar_HV.setXY(0, 0);
    bar_HV.setProgressIndicatorPosition(0, 0, 50, 434);
    bar_HV.setRange(0, 100);
    bar_HV.setDirection(touchgfx::AbstractDirectionProgress::UP);
    bar_HV.setBackground(touchgfx::Bitmap(BITMAP_BLANKPROGRESSBAR_ID));
    bar_HV.setColor(touchgfx::Color::getColorFromRGB(0, 38, 255));
    bar_HV.setValue(100);
    add(bar_HV);

    txt_MAX.setXY(50, 0);
    txt_MAX.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    txt_MAX.setLinespacing(0);
    txt_MAX.setTypedText(touchgfx::TypedText(T___SINGLEUSE_D5EY));
    add(txt_MAX);

    txt_MIN.setXY(582, 0);
    txt_MIN.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    txt_MIN.setLinespacing(0);
    txt_MIN.setTypedText(touchgfx::TypedText(T___SINGLEUSE_NWIC));
    add(txt_MIN);

    txt_kW.setXY(630, 341);
    txt_kW.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    txt_kW.setLinespacing(0);
    txt_kW.setTypedText(touchgfx::TypedText(T___SINGLEUSE_WBQP));
    add(txt_kW);

    txt_ERRORS.setXY(60, 349);
    txt_ERRORS.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    txt_ERRORS.setLinespacing(0);
    txt_ERRORS.setTypedText(touchgfx::TypedText(T___SINGLEUSE_RRK6));
    add(txt_ERRORS);

    max_Speed.setXY(60, 120);
    max_Speed.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    max_Speed.setLinespacing(0);
    Unicode::snprintf(max_SpeedBuffer, MAX_SPEED_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_7F43).getText());
    max_Speed.setWildcard(max_SpeedBuffer);
    max_Speed.resizeToCurrentText();
    max_Speed.setTypedText(touchgfx::TypedText(T___SINGLEUSE_3IMD));
    add(max_Speed);

    min_Speed.setXY(621, 120);
    min_Speed.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    min_Speed.setLinespacing(0);
    Unicode::snprintf(min_SpeedBuffer, MIN_SPEED_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_YT4K).getText());
    min_Speed.setWildcard(min_SpeedBuffer);
    min_Speed.resizeToCurrentText();
    min_Speed.setTypedText(touchgfx::TypedText(T___SINGLEUSE_L6S9));
    add(min_Speed);

    draw_val.setXY(615, 392);
    draw_val.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    draw_val.setLinespacing(0);
    Unicode::snprintf(draw_valBuffer, DRAW_VAL_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_Y1U1).getText());
    draw_val.setWildcard(draw_valBuffer);
    draw_val.resizeToCurrentText();
    draw_val.setTypedText(touchgfx::TypedText(T___SINGLEUSE_QGWY));
    add(draw_val);

    bar_accel.setXY(400, 277);
    bar_accel.setProgressIndicatorPosition(10, 0, 340, 50);
    bar_accel.setRange(0, 100);
    bar_accel.setDirection(touchgfx::AbstractDirectionProgress::RIGHT);
    bar_accel.setBackground(touchgfx::Bitmap(BITMAP_ACCELERATION_ID));
    bar_accel.setColor(touchgfx::Color::getColorFromRGB(34, 255, 0));
    bar_accel.setValue(10);
    add(bar_accel);

    bar_brake.setXY(50, 277);
    bar_brake.setProgressIndicatorPosition(0, 0, 340, 50);
    bar_brake.setRange(0, 100);
    bar_brake.setDirection(touchgfx::AbstractDirectionProgress::LEFT);
    bar_brake.setBackground(touchgfx::Bitmap(BITMAP_BREAK_ID));
    bar_brake.setColor(touchgfx::Color::getColorFromRGB(255, 5, 5));
    bar_brake.setValue(50);
    add(bar_brake);

    error_Cooling.setXY(93, 420);
    error_Cooling.setBitmap(touchgfx::Bitmap(BITMAP_HANDMADE_AIR_ID));
    add(error_Cooling);

    errorOverlay_Cooling.setXY(93, 420);
    errorOverlay_Cooling.setBitmap(touchgfx::Bitmap(BITMAP_RED_BORDER_60X60_ID));
    add(errorOverlay_Cooling);

    error_WheelSpeed.setXY(238, 420);
    error_WheelSpeed.setBitmap(touchgfx::Bitmap(BITMAP_WHEELSPEEDERROR_ID));
    add(error_WheelSpeed);

    error_VCU.setXY(165, 420);
    error_VCU.setBitmap(touchgfx::Bitmap(BITMAP_VCU_ERROR_ID));
    add(error_VCU);

    error_Inverter.setXY(316, 420);
    error_Inverter.setBitmap(touchgfx::Bitmap(BITMAP_INVERTER_ERROR_ID));
    add(error_Inverter);

    errorOverlay_WheelSpeed.setXY(238, 420);
    errorOverlay_WheelSpeed.setBitmap(touchgfx::Bitmap(BITMAP_RED_BORDER_60X60_ID));
    add(errorOverlay_WheelSpeed);

    errorOverlay_VCU.setXY(165, 420);
    errorOverlay_VCU.setBitmap(touchgfx::Bitmap(BITMAP_RED_BORDER_60X60_ID));
    add(errorOverlay_VCU);

    errorOverlay_Inverter.setXY(316, 420);
    errorOverlay_Inverter.setBitmap(touchgfx::Bitmap(BITMAP_RED_BORDER_60X60_ID));
    add(errorOverlay_Inverter);

    laptime_min.setXY(170, 187);
    laptime_min.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    laptime_min.setLinespacing(0);
    Unicode::snprintf(laptime_minBuffer, LAPTIME_MIN_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_Q3TA).getText());
    laptime_min.setWildcard(laptime_minBuffer);
    laptime_min.resizeToCurrentText();
    laptime_min.setTypedText(touchgfx::TypedText(T___SINGLEUSE_TEPV));
    add(laptime_min);

    laptime_colon.setXY(280, 187);
    laptime_colon.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    laptime_colon.setLinespacing(0);
    laptime_colon.setTypedText(touchgfx::TypedText(T___SINGLEUSE_9ASA));
    add(laptime_colon);

    laptime_seconds.setXY(316, 187);
    laptime_seconds.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    laptime_seconds.setLinespacing(0);
    Unicode::snprintf(laptime_secondsBuffer, LAPTIME_SECONDS_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_A32Z).getText());
    laptime_seconds.setWildcard(laptime_secondsBuffer);
    laptime_seconds.resizeToCurrentText();
    laptime_seconds.setTypedText(touchgfx::TypedText(T___SINGLEUSE_YMA8));
    add(laptime_seconds);

    laptime_period.setXY(426, 187);
    laptime_period.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    laptime_period.setLinespacing(0);
    laptime_period.setTypedText(touchgfx::TypedText(T___SINGLEUSE_3QHR));
    add(laptime_period);

    laptime_hundreths.setXY(455, 187);
    laptime_hundreths.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    laptime_hundreths.setLinespacing(0);
    Unicode::snprintf(laptime_hundrethsBuffer, LAPTIME_HUNDRETHS_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_ZF07).getText());
    laptime_hundreths.setWildcard(laptime_hundrethsBuffer);
    laptime_hundreths.resizeToCurrentText();
    laptime_hundreths.setTypedText(touchgfx::TypedText(T___SINGLEUSE_M8AI));
    add(laptime_hundreths);

    laptime_mili.setXY(565, 187);
    laptime_mili.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    laptime_mili.setLinespacing(0);
    laptime_mili.setWildcard(touchgfx::TypedText(T___SINGLEUSE_KZWY).getText());
    laptime_mili.resizeToCurrentText();
    laptime_mili.setTypedText(touchgfx::TypedText(T___SINGLEUSE_SV5H));
    add(laptime_mili);

    HV_text.setXY(0, 436);
    HV_text.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    HV_text.setLinespacing(0);
    HV_text.setTypedText(touchgfx::TypedText(T___SINGLEUSE_75R8));
    add(HV_text);

    LV_text.setXY(753, 433);
    LV_text.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    LV_text.setLinespacing(0);
    LV_text.setTypedText(touchgfx::TypedText(T___SINGLEUSE_CJBB));
    add(LV_text);

    textArea1.setXY(262, 332);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea1.setLinespacing(0);
    textArea1.setWildcard(touchgfx::TypedText(T___SINGLEUSE_RFJ4).getText());
    textArea1.resizeToCurrentText();
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_TBV8));
    textArea1.setAlpha(0);
    add(textArea1);
}

Main_2ViewBase::~Main_2ViewBase()
{

}

void Main_2ViewBase::setupScreen()
{

}

void Main_2ViewBase::handleTickEvent()
{
    //CAN_Update
    //When every N tick call virtual function
    //Call updateCAN
    updateCAN();
}

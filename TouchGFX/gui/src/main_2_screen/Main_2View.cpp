#include <gui/main_2_screen/Main_2View.hpp>
#include <iostream>
#include <texts/TextKeysAndLanguages.hpp>
#include <main.h>
#include <fdcan.h>


Main_2View::Main_2View()
{
	ticks = 0;
	count = 0;
	errTick = 0;

	CAN_SPEED = -1;
	CAN_MIN = -1;
	CAN_MAX = -1;
	CAN_DRAW = -1;
	CAN_HV = 0;
	CAN_LV = 0;

	hv_over = false;
	lv_over = false;
	acc_over = false;
	break_over = false;


	err_Kooling = true;
	err_VCU = true;
	err_Inverter = true;
	err_WheelSpeed = true;



}



void Main_2View::setupScreen()
{
    Main_2ViewBase::setupScreen();
}

void Main_2View::tearDownScreen()
{
    Main_2ViewBase::tearDownScreen();
}

void Main_2View::unveilingUpdate(){

}

void Main_2View::updateCAN(){


//	if(ticks == 0){
//		CAN_DRAW = 30;
//		CAN_SPEED = 0;
//		CAN_ACCEL = 70;
//		CAN_BREAK = 0;
//		CAN_HV = 80;
//		CAN_LV = 75;
//		CAN_MIN = 49;
//		CAN_MAX = 25;
//	}
//	ticks ++;
//
//	if(ticks%3 == 0 &&  ticks<= 192 && CAN_SPEED < 60){
//		CAN_SPEED++;
//		if(CAN_ACCEL < 100 && ticks <150){
//			CAN_ACCEL ++;
//		}
//		if(CAN_DRAW< 80){
//			CAN_DRAW ++;
//		}
//
//	}
//	if(ticks> 150 && CAN_ACCEL >16){
//		CAN_ACCEL --;
//	}
//	if(ticks>= 192 && ticks <= 312){
//		CAN_SPEED = 60;
//
//		CAN_BREAK = 0;
//		CAN_DRAW = 10;
//		if (ticks >= 300 && CAN_ACCEL >0){
//			CAN_ACCEL --;
//		}
//		if(ticks == 312){
//			CAN_BREAK = 10;
//			CAN_ACCEL = 0;
//			CAN_DRAW = 0;
//		}
//	}
//
//	if(ticks > 312){
//		if(CAN_SPEED >= 24 && ticks%5 == 0){
//			CAN_SPEED --;
//			CAN_SPEED --;
//
//		}
//		if(CAN_SPEED > 0 && CAN_SPEED < 24){
//			CAN_SPEED --;
//			if(CAN_BREAK < 5){
//				CAN_BREAK --;
//			}else{
//				CAN_BREAK --;
//				CAN_BREAK --;
//				CAN_BREAK --;
//				CAN_BREAK --;
//			}
//			if(CAN_SPEED == 0){
//				CAN_BREAK = 0;
//			}
//		}
//
//		if(CAN_BREAK < 40&& CAN_SPEED > 24){
//			CAN_BREAK ++;
//			CAN_BREAK ++;
//			CAN_BREAK ++;
//
//		}
//		if(CAN_BREAK < 69&& CAN_SPEED > 24){
//			CAN_BREAK ++;
//		}
//
//	}
//	if(ticks >=888){
//		ticks = 0;
//		CAN_BREAK = 0;
//		CAN_ACCEL = 0;
//	}
//	while(HAL_FDCAN_GetRxMessage(&hfdcan1, FDCAN_RX_FIFO0, &RxHeader, RxData) == HAL_OK) {
//		errorOverlay_Cooling.setAlpha(0);
//	}

	while(HAL_FDCAN_GetRxMessage(&hfdcan1, FDCAN_RX_FIFO0, &RxHeader, RxData) == HAL_OK) {
		id = RxHeader.Identifier;
		if(id == 0x710) {//Dash 1
		  CAN_SPEED = (uint8_t)RxData[0];
		  CAN_DRAW = (uint8_t)RxData[1];
		  CAN_ACCEL = (uint8_t)RxData[2];
		  CAN_BREAK = (uint8_t)RxData[3];
		  CAN_HV = (uint8_t)RxData[4];
		  CAN_LV = (uint8_t)RxData[5];
		  CAN_MAX = (uint8_t)RxData[6];//Currently HV max temp
		  CAN_MIN = (uint8_t)RxData[7];//Currently Motor Temp
		}

		if(id == 0x711) {//Dash 2
		  //laptime time_seconds, time_minutes, time_tenths, time_miliseconds;
		  time_seconds = (uint8_t)RxData[0];
		  time_minutes = (uint8_t)RxData[1];
		  time_tenths = (uint8_t)RxData[2];
		  time_miliseconds = (uint8_t)RxData[3];
//		  err_Kooling = (bool)RxData[4];
//		  err_VCU = (bool)RxData[5];
//		  err_Inverter = (bool)RxData[6];
//		  err_WheelSpeed = (bool)RxData[7];

		}
	}
}

void Main_2View::setSpeed()
{
	switch(CAN_SPEED) {
	    case 0:
	        speed.setTypedText(touchgfx::TypedText(T_NUM0));
	        break;
	    case 1:
	        speed.setTypedText(touchgfx::TypedText(T_NUM1));
	        break;
	    case 2:
	        speed.setTypedText(touchgfx::TypedText(T_NUM2));
	        break;
	    case 3:
	        speed.setTypedText(touchgfx::TypedText(T_NUM3));
	        break;
	    case 4:
	        speed.setTypedText(touchgfx::TypedText(T_NUM4));
	        break;
	    case 5:
	        speed.setTypedText(touchgfx::TypedText(T_NUM5));
	        break;
	    case 6:
	        speed.setTypedText(touchgfx::TypedText(T_NUM6));
	        break;
	    case 7:
	        speed.setTypedText(touchgfx::TypedText(T_NUM7));
	        break;
	    case 8:
	        speed.setTypedText(touchgfx::TypedText(T_NUM8));
	        break;
	    case 9:
	        speed.setTypedText(touchgfx::TypedText(T_NUM9));
	        break;
	    case 10:
	        speed.setTypedText(touchgfx::TypedText(T_NUM10));
	        break;
	    case 11:
	        speed.setTypedText(touchgfx::TypedText(T_NUM11));
	        break;
	    case 12:
	        speed.setTypedText(touchgfx::TypedText(T_NUM12));
	        break;
	    case 13:
	        speed.setTypedText(touchgfx::TypedText(T_NUM13));
	        break;
	    case 14:
	        speed.setTypedText(touchgfx::TypedText(T_NUM14));
	        break;
	    case 15:
	        speed.setTypedText(touchgfx::TypedText(T_NUM15));
	        break;
	    case 16:
	        speed.setTypedText(touchgfx::TypedText(T_NUM16));
	        break;
	    case 17:
	        speed.setTypedText(touchgfx::TypedText(T_NUM17));
	        break;
	    case 18:
	        speed.setTypedText(touchgfx::TypedText(T_NUM18));
	        break;
	    case 19:
	        speed.setTypedText(touchgfx::TypedText(T_NUM19));
	        break;
	    case 20:
	        speed.setTypedText(touchgfx::TypedText(T_NUM20));
	        break;
	    case 21:
	        speed.setTypedText(touchgfx::TypedText(T_NUM21));
	        break;
	    case 22:
	        speed.setTypedText(touchgfx::TypedText(T_NUM22));
	        break;
	    case 23:
	        speed.setTypedText(touchgfx::TypedText(T_NUM23));
	        break;
	    case 24:
	        speed.setTypedText(touchgfx::TypedText(T_NUM24));
	        break;
	    case 25:
	        speed.setTypedText(touchgfx::TypedText(T_NUM25));
	        break;
	    case 26:
	        speed.setTypedText(touchgfx::TypedText(T_NUM26));
	        break;
	    case 27:
	        speed.setTypedText(touchgfx::TypedText(T_NUM27));
	        break;
	    case 28:
	        speed.setTypedText(touchgfx::TypedText(T_NUM28));
	        break;
	    case 29:
	        speed.setTypedText(touchgfx::TypedText(T_NUM29));
	        break;
	    case 30:
	        speed.setTypedText(touchgfx::TypedText(T_NUM30));
	        break;
	    case 31:
	        speed.setTypedText(touchgfx::TypedText(T_NUM31));
	        break;
	    case 32:
	        speed.setTypedText(touchgfx::TypedText(T_NUM32));
	        break;
	    case 33:
	        speed.setTypedText(touchgfx::TypedText(T_NUM33));
	        break;
	    case 34:
	        speed.setTypedText(touchgfx::TypedText(T_NUM34));
	        break;
	    case 35:
	        speed.setTypedText(touchgfx::TypedText(T_NUM35));
	        break;
	    case 36:
	        speed.setTypedText(touchgfx::TypedText(T_NUM36));
	        break;
	    case 37:
	        speed.setTypedText(touchgfx::TypedText(T_NUM37));
	        break;
	    case 38:
	        speed.setTypedText(touchgfx::TypedText(T_NUM38));
	        break;
	    case 39:
	        speed.setTypedText(touchgfx::TypedText(T_NUM39));
	        break;
	    case 40:
	        speed.setTypedText(touchgfx::TypedText(T_NUM40));
	        break;
	    case 41:
	        speed.setTypedText(touchgfx::TypedText(T_NUM41));
	        break;
	    case 42:
	        speed.setTypedText(touchgfx::TypedText(T_NUM42));
	        break;
	    case 43:
	        speed.setTypedText(touchgfx::TypedText(T_NUM43));
	        break;
	    case 44:
	        speed.setTypedText(touchgfx::TypedText(T_NUM44));
	        break;
	    case 45:
	        speed.setTypedText(touchgfx::TypedText(T_NUM45));
	        break;
	    case 46:
	        speed.setTypedText(touchgfx::TypedText(T_NUM46));
	        break;
	    case 47:
	        speed.setTypedText(touchgfx::TypedText(T_NUM47));
	        break;
	    case 48:
	        speed.setTypedText(touchgfx::TypedText(T_NUM48));
	        break;
	    case 49:
	        speed.setTypedText(touchgfx::TypedText(T_NUM49));
	        break;
	    case 50:
	        speed.setTypedText(touchgfx::TypedText(T_NUM50));
	        break;
	    case 51:
	        speed.setTypedText(touchgfx::TypedText(T_NUM51));
	        break;
	    case 52:
	        speed.setTypedText(touchgfx::TypedText(T_NUM52));
	        break;
	    case 53:
	        speed.setTypedText(touchgfx::TypedText(T_NUM53));
	        break;
	    case 54:
	        speed.setTypedText(touchgfx::TypedText(T_NUM54));
	        break;
	    case 55:
	        speed.setTypedText(touchgfx::TypedText(T_NUM55));
	        break;
	    case 56:
	        speed.setTypedText(touchgfx::TypedText(T_NUM56));
	        break;
	    case 57:
	        speed.setTypedText(touchgfx::TypedText(T_NUM57));
	        break;
	    case 58:
	        speed.setTypedText(touchgfx::TypedText(T_NUM58));
	        break;
	    case 59:
	        speed.setTypedText(touchgfx::TypedText(T_NUM59));
	        break;
	    case 60:
	        speed.setTypedText(touchgfx::TypedText(T_NUM60));
	        break;
	    case 61:
	        speed.setTypedText(touchgfx::TypedText(T_NUM61));
	        break;
	    case 62:
	        speed.setTypedText(touchgfx::TypedText(T_NUM62));
	        break;
	    case 63:
	        speed.setTypedText(touchgfx::TypedText(T_NUM63));
	        break;
	    case 64:
	        speed.setTypedText(touchgfx::TypedText(T_NUM64));
	        break;
	    case 65:
	        speed.setTypedText(touchgfx::TypedText(T_NUM65));
	        break;
	    case 66:
	        speed.setTypedText(touchgfx::TypedText(T_NUM66));
	        break;
	    case 67:
	        speed.setTypedText(touchgfx::TypedText(T_NUM67));
	        break;
	    case 68:
			speed.setTypedText(touchgfx::TypedText(T_NUM68));
			break;
		case 69:
			speed.setTypedText(touchgfx::TypedText(T_NUM69));
			break;
		case 70:
			speed.setTypedText(touchgfx::TypedText(T_NUM70));
			break;
		case 71:
			speed.setTypedText(touchgfx::TypedText(T_NUM71));
			break;
		case 72:
			speed.setTypedText(touchgfx::TypedText(T_NUM72));
			break;
		case 73:
			speed.setTypedText(touchgfx::TypedText(T_NUM73));
			break;
		case 74:
			speed.setTypedText(touchgfx::TypedText(T_NUM74));
			break;
		case 75:
			speed.setTypedText(touchgfx::TypedText(T_NUM75));
			break;
		case 76:
			speed.setTypedText(touchgfx::TypedText(T_NUM76));
			break;
		case 77:
			speed.setTypedText(touchgfx::TypedText(T_NUM77));
			break;
		case 78:
			speed.setTypedText(touchgfx::TypedText(T_NUM78));
			break;
		case 79:
			speed.setTypedText(touchgfx::TypedText(T_NUM79));
			break;
		case 80:
			speed.setTypedText(touchgfx::TypedText(T_NUM80));
			break;
		case 81:
			speed.setTypedText(touchgfx::TypedText(T_NUM81));
			break;
		case 82:
			speed.setTypedText(touchgfx::TypedText(T_NUM82));
			break;
		case 83:
			speed.setTypedText(touchgfx::TypedText(T_NUM83));
			break;
		case 84:
			speed.setTypedText(touchgfx::TypedText(T_NUM84));
			break;
		case 85:
			speed.setTypedText(touchgfx::TypedText(T_NUM85));
			break;
		case 86:
			speed.setTypedText(touchgfx::TypedText(T_NUM86));
			break;
		case 87:
			speed.setTypedText(touchgfx::TypedText(T_NUM87));
			break;
		case 88:
			speed.setTypedText(touchgfx::TypedText(T_NUM88));
			break;
		case 89:
			speed.setTypedText(touchgfx::TypedText(T_NUM89));
			break;
		case 90:
			speed.setTypedText(touchgfx::TypedText(T_NUM90));
			break;
		case 91:
			speed.setTypedText(touchgfx::TypedText(T_NUM91));
			break;
		case 92:
			speed.setTypedText(touchgfx::TypedText(T_NUM92));
			break;
		case 93:
			speed.setTypedText(touchgfx::TypedText(T_NUM93));
			break;
		case 94:
			speed.setTypedText(touchgfx::TypedText(T_NUM94));
			break;
		case 95:
			speed.setTypedText(touchgfx::TypedText(T_NUM95));
			break;
		case 96:
			speed.setTypedText(touchgfx::TypedText(T_NUM96));
			break;
		case 97:
			speed.setTypedText(touchgfx::TypedText(T_NUM97));
			break;
		case 98:
			speed.setTypedText(touchgfx::TypedText(T_NUM98));
			break;
		case 99:
			speed.setTypedText(touchgfx::TypedText(T_NUM99));
			break;
		default:
			speed.setTypedText(touchgfx::TypedText(T_NUMNA));
			break;
	}

	speed.invalidate();

}

void Main_2View::setMinSpeed()
{


	switch(CAN_MIN) {
	    case 0:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_0));
	        break;
	    case 1:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_1));
	        break;
	    case 2:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_2));
	        break;
	    case 3:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_3));
	        break;
	    case 4:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_4));
	        break;
	    case 5:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_5));
	        break;
	    case 6:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_6));
	        break;
	    case 7:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_7));
	        break;
	    case 8:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_8));
	        break;
	    case 9:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_9));
	        break;
	    case 10:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_10));
	        break;
	    case 11:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_11));
	        break;
	    case 12:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_12));
	        break;
	    case 13:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_13));
	        break;
	    case 14:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_14));
	        break;
	    case 15:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_15));
	        break;
	    case 16:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_16));
	        break;
	    case 17:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_17));
	        break;
	    case 18:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_18));
	        break;
	    case 19:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_19));
	        break;
	    case 20:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_20));
	        break;
	    case 21:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_21));
	        break;
	    case 22:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_22));
	        break;
	    case 23:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_23));
	        break;
	    case 24:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_24));
	        break;
	    case 25:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_25));
	        break;
	    case 26:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_26));
	        break;
	    case 27:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_27));
	        break;
	    case 28:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_28));
	        break;
	    case 29:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_29));
	        break;
	    case 30:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_30));
	        break;
	    case 31:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_31));
	        break;
	    case 32:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_32));
	        break;
	    case 33:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_33));
	        break;
	    case 34:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_34));
	        break;
	    case 35:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_35));
	        break;
	    case 36:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_36));
	        break;
	    case 37:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_37));
	        break;
	    case 38:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_38));
	        break;
	    case 39:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_39));
	        break;
	    case 40:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_40));
	        break;
	    case 41:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_41));
	        break;
	    case 42:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_42));
	        break;
	    case 43:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_43));
	        break;
	    case 44:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_44));
	        break;
	    case 45:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_45));
	        break;
	    case 46:
	        min_Speed.setTypedText(touchgfx::TypedText(T_NUM_46));
	        break;
	    case 47:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_47));
			break;
		case 48:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_48));
			break;
		case 49:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_49));
			break;
		case 50:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_50));
			break;
		case 51:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_51));
			break;
		case 52:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_52));
			break;
		case 53:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_53));
			break;
		case 54:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_54));
			break;
		case 55:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_55));
			break;
		case 56:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_56));
			break;
		case 57:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_57));
			break;
		case 58:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_58));
			break;
		case 59:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_59));
			break;
		case 60:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_60));
			break;
		case 61:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_61));
			break;
		case 62:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_62));
			break;
		case 63:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_63));
			break;
		case 64:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_64));
			break;
		case 65:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_65));
			break;
		case 66:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_66));
			break;
		case 67:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_67));
			break;
		case 68:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_68));
			break;
		case 69:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_69));
			break;
		case 70:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_70));
			break;
		case 71:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_71));
			break;
		case 72:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_72));
			break;
		case 73:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_73));
			break;
		case 74:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_74));
			break;
		case 75:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_75));
			break;
		case 76:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_76));
			break;
		case 77:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_77));
			break;
		case 78:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_78));
			break;
		case 79:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_79));
			break;
		case 80:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_80));
			break;
		case 81:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_81));
			break;
		case 82:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_82));
			break;
		case 83:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_83));
			break;
		case 84:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_84));
			break;
		case 85:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_85));
			break;
		case 86:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_86));
			break;
		case 87:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_87));
			break;
		case 88:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_88));
			break;
		case 89:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_89));
			break;
		case 90:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_90));
			break;
		case 91:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_91));
			break;
		case 92:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_92));
			break;
		case 93:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_93));
			break;
		case 94:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_94));
			break;
		case 95:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_95));
			break;
		case 96:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_96));
			break;
		case 97:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_97));
			break;
		case 98:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_98));
			break;
		case 99:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_99));
			break;
		default:
			min_Speed.setTypedText(touchgfx::TypedText(T_NUM_NA));
			break;
	}
	min_Speed.invalidate();

}

void Main_2View::setMaxSpeed()
{



	switch(CAN_MAX) {
	case 0:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_0));
	        break;
	    case 1:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_1));
	        break;
	    case 2:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_2));
	        break;
	    case 3:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_3));
	        break;
	    case 4:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_4));
	        break;
	    case 5:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_5));
	        break;
	    case 6:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_6));
	        break;
	    case 7:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_7));
	        break;
	    case 8:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_8));
	        break;
	    case 9:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_9));
	        break;
	    case 10:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_10));
	        break;
	    case 11:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_11));
	        break;
	    case 12:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_12));
	        break;
	    case 13:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_13));
	        break;
	    case 14:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_14));
	        break;
	    case 15:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_15));
	        break;
	    case 16:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_16));
	        break;
	    case 17:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_17));
	        break;
	    case 18:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_18));
	        break;
	    case 19:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_19));
	        break;
	    case 20:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_20));
	        break;
	    case 21:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_21));
	        break;
	    case 22:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_22));
	        break;
	    case 23:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_23));
	        break;
	    case 24:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_24));
	        break;
	    case 25:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_25));
	        break;
	    case 26:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_26));
	        break;
	    case 27:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_27));
	        break;
	    case 28:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_28));
	        break;
	    case 29:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_29));
	        break;
	    case 30:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_30));
	        break;
	    case 31:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_31));
	        break;
	    case 32:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_32));
	        break;
	    case 33:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_33));
	        break;
	    case 34:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_34));
	        break;
	    case 35:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_35));
	        break;
	    case 36:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_36));
	        break;
	    case 37:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_37));
	        break;
	    case 38:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_38));
	        break;
	    case 39:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_39));
	        break;
	    case 40:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_40));
	        break;
	    case 41:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_41));
	        break;
	    case 42:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_42));
	        break;
	    case 43:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_43));
	        break;
	    case 44:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_44));
	        break;
	    case 45:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_45));
	        break;
	    case 46:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_46));
	        break;
	    case 47:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_47));
	        break;
	    case 48:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_48));
	        break;
	    case 49:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_49));
	        break;
	    case 50:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_50));
	        break;
	    case 51:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_51));
	        break;
	    case 52:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_52));
	        break;
	    case 53:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_53));
	        break;
	    case 54:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_54));
	        break;
	    case 55:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_55));
	        break;
	    case 56:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_56));
	        break;
	    case 57:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_57));
	        break;
	    case 58:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_58));
	        break;
	    case 59:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_59));
	        break;
	    case 60:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_60));
	        break;
	    case 61:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_61));
	        break;
	    case 62:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_62));
	        break;
	    case 63:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_63));
	        break;
	    case 64:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_64));
	        break;
	    case 65:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_65));
	        break;
	    case 66:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_66));
	        break;
	    case 67:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_67));
	        break;
	    case 68:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_68));
	        break;
	    case 69:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_69));
	        break;
	    case 70:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_70));
	        break;
	    case 71:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_71));
	        break;
	    case 72:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_72));
	        break;
	    case 73:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_73));
	        break;
	    case 74:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_74));
	        break;
	    case 75:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_75));
	        break;
	    case 76:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_76));
	        break;
	    case 77:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_77));
	        break;
	    case 78:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_78));
	        break;
	    case 79:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_79));
	        break;
	    case 80:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_80));
	        break;
	    case 81:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_81));
	        break;
	    case 82:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_82));
	        break;
	    case 83:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_83));
	        break;
	    case 84:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_84));
	        break;
	    case 85:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_85));
	        break;
	    case 86:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_86));
	        break;
	    case 87:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_87));
	        break;
	    case 88:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_88));
	        break;
	    case 89:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_89));
	        break;
	    case 90:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_90));
	        break;
	    case 91:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_91));
	        break;
	    case 92:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_92));
	        break;
	    case 93:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_93));
	        break;
	    case 94:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_94));
	        break;
	    case 95:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_95));
	        break;
	    case 96:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_96));
	        break;
	    case 97:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_97));
	        break;
	    case 98:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_98));
	        break;
	    case 99:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_99));
	        break;
	    default:
	        max_Speed.setTypedText(touchgfx::TypedText(T_NUM_NA));
	        break;
	}

	max_Speed.invalidate();
}

void Main_2View::setDraw()
{


	switch(CAN_DRAW) {
	    case 0:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_0));
	        break;
	    case 1:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_1));
	        break;
	    case 2:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_2));
	        break;
	    case 3:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_3));
	        break;
	    case 4:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_4));
	        break;
	    case 5:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_5));
	        break;
	    case 6:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_6));
	        break;
	    case 7:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_7));
	        break;
	    case 8:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_8));
	        break;
	    case 9:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_9));
	        break;
	    case 10:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_10));
	        break;
	    case 11:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_11));
	        break;
	    case 12:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_12));
	        break;
	    case 13:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_13));
	        break;
	    case 14:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_14));
	        break;
	    case 15:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_15));
	        break;
	    case 16:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_16));
	        break;
	    case 17:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_17));
	        break;
	    case 18:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_18));
	        break;
	    case 19:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_19));
	        break;
	    case 20:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_20));
	        break;
	    case 21:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_21));
	        break;
	    case 22:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_22));
	        break;
	    case 23:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_23));
	        break;
	    case 24:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_24));
	        break;
	    case 25:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_25));
	        break;
	    case 26:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_26));
	        break;
	    case 27:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_27));
	        break;
	    case 28:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_28));
	        break;
	    case 29:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_29));
	        break;
	    case 30:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_30));
	        break;
	    case 31:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_31));
	        break;
	    case 32:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_32));
	        break;
	    case 33:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_33));
	        break;
	    case 34:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_34));
	        break;
	    case 35:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_35));
	        break;
	    case 36:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_36));
	        break;
	    case 37:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_37));
	        break;
	    case 38:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_38));
	        break;
	    case 39:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_39));
	        break;
	    case 40:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_40));
	        break;
	    case 41:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_41));
	        break;
	    case 42:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_42));
	        break;
	    case 43:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_43));
	        break;
	    case 44:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_44));
	        break;
	    case 45:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_45));
	        break;
	    case 46:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_46));
	        break;
	    case 47:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_47));
			break;
		case 48:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_48));
			break;
		case 49:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_49));
			break;
		case 50:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_50));
			break;
		case 51:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_51));
			break;
		case 52:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_52));
			break;
		case 53:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_53));
			break;
		case 54:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_54));
			break;
		case 55:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_55));
			break;
		case 56:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_56));
			break;
		case 57:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_57));
			break;
		case 58:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_58));
			break;
		case 59:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_59));
			break;
		case 60:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_60));
			break;
		case 61:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_61));
			break;
		case 62:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_62));
			break;
		case 63:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_63));
			break;
		case 64:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_64));
			break;
		case 65:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_65));
			break;
		case 66:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_66));
			break;
		case 67:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_67));
			break;
		case 68:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_68));
			break;
		case 69:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_69));
			break;
		case 70:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_70));
			break;
		case 71:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_71));
			break;
		case 72:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_72));
			break;
		case 73:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_73));
			break;
		case 74:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_74));
			break;
		case 75:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_75));
			break;
		case 76:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_76));
			break;
		case 77:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_77));
			break;
		case 78:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_78));
			break;
		case 79:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_79));
			break;
		case 80:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_80));
			break;
		case 81:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_81));
			break;
		case 82:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_82));
			break;
		case 83:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_83));
			break;
		case 84:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_84));
			break;
		case 85:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_85));
			break;
		case 86:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_86));
			break;
		case 87:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_87));
			break;
		case 88:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_88));
			break;
		case 89:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_89));
			break;
		case 90:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_90));
			break;
		case 91:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_91));
			break;
		case 92:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_92));
			break;
		case 93:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_93));
			break;
		case 94:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_94));
			break;
		case 95:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_95));
			break;
		case 96:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_96));
			break;
		case 97:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_97));
			break;
		case 98:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_98));
			break;
		case 99:
			draw_val.setTypedText(touchgfx::TypedText(T_NUM_99));
			break;
	    default:
	        draw_val.setTypedText(touchgfx::TypedText(T_NUM_NA));
	        break;
	}
	draw_val.invalidate();

}

void Main_2View::setHV()
{


	if(CAN_HV >= 0 && CAN_HV <= 100){
		hv_over = false;
		bar_HV.setValue(CAN_HV);
	}
	else{
		hv_over = true;
	}

}

void Main_2View::setLV()
{
	if(CAN_LV >= 0 && CAN_LV <= 100){
		lv_over = false;
		bar_LV.setValue(CAN_LV);
	}
	else{
		lv_over = true;
	}
}

void Main_2View::setAccel(){


	if(CAN_ACCEL >= 0 && CAN_ACCEL <= 100){
		acc_over = false;
		bar_accel.setValue(CAN_ACCEL);
	}
	else{
		acc_over = true;
	}
}

void Main_2View::setBrake(){

		if(CAN_BREAK >= 0 && CAN_BREAK <= 100){
			break_over = false;
			bar_brake.setValue(CAN_BREAK);
		}
		else{
			break_over = true;
		}
}

void Main_2View::setError_Cooling(){
	errTick ++;
	if(err_Kooling == false){
		error_Cooling.setAlpha(0);
		errorOverlay_Cooling.setAlpha(0);
	}
	else{
		error_Cooling.setAlpha(255);
		if(errTick%15 == 0){
			if(errorOverlay_Cooling.getAlpha() == 0){
				errorOverlay_Cooling.setAlpha(255);
			}
			else{
				errorOverlay_Cooling.setAlpha(0);
			}
		}
	}
	errorOverlay_Cooling.invalidate();
	error_Cooling.invalidate();

}

void Main_2View::setError_VCU(){
	if(err_VCU == false){
			error_VCU.setAlpha(0);
			errorOverlay_VCU.setAlpha(0);
		}
		else{
			error_VCU.setAlpha(255);
			if(errTick%15 == 0){
				if(errorOverlay_VCU.getAlpha() == 0){
					errorOverlay_VCU.setAlpha(255);
				}
				else{
					errorOverlay_VCU.setAlpha(0);
				}
			}
		}
	errorOverlay_VCU.invalidate();
	error_VCU.invalidate();
}

void Main_2View::setError_Inverter(){
	if(err_Inverter == false){
			error_Inverter.setAlpha(0);
			errorOverlay_Inverter.setAlpha(0);
		}
	else{
		error_Inverter.setAlpha(255);
		if(errTick%15 == 0){
			if(errorOverlay_Inverter.getAlpha() == 0){
				errorOverlay_Inverter.setAlpha(255);
			}
			else{
				errorOverlay_Inverter.setAlpha(0);
			}
		}
	}
	errorOverlay_Inverter.invalidate();
	error_Inverter.invalidate();

}

void Main_2View::setError_WheelSpeed(){
	if(err_WheelSpeed == false){
			error_WheelSpeed.setAlpha(0);
			errorOverlay_WheelSpeed.setAlpha(0);
		}
		else{
			error_WheelSpeed.setAlpha(255);
			if(errTick%15 == 0){
				if(errorOverlay_WheelSpeed.getAlpha() == 0){
					errorOverlay_WheelSpeed.setAlpha(255);
				}
				else{
					errorOverlay_WheelSpeed.setAlpha(0);
				}
			}
		}
	errorOverlay_WheelSpeed.invalidate();
	error_WheelSpeed.invalidate();
}

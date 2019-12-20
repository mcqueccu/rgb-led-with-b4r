#include "B4RDefines.h"

B4R::Serial* b4r_main::_serial1;
B4R::Pin* b4r_main::_led;
Byte b4r_main::_count;
static B4R::Serial be_gann1_3;
static B4R::Pin be_gann2_3;


 void b4r_main::_appstart(){
const UInt cp = B4R::StackMemory::cp;
 //BA.debugLineNum = 16;BA.debugLine="Private Sub AppStart";
 //BA.debugLineNum = 17;BA.debugLine="Serial1.Initialize(9600)";
b4r_main::_serial1->Initialize((ULong) (9600));
 //BA.debugLineNum = 18;BA.debugLine="Log(\"AppStart\")";
B4R::Common::LogHelper(1,102,F("AppStart"));
 //BA.debugLineNum = 19;BA.debugLine="led.Initialize(2,led.MODE_OUTPUT)";
b4r_main::_led->Initialize((Byte) (2),Pin_MODE_OUTPUT);
 //BA.debugLineNum = 30;BA.debugLine="Do Until count = 15";
while (!(b4r_main::_count==15)) {
 //BA.debugLineNum = 31;BA.debugLine="led.DigitalWrite(True)";
b4r_main::_led->DigitalWrite(Common_True);
 //BA.debugLineNum = 32;BA.debugLine="Delay(500)";
Common_Delay((ULong) (500));
 //BA.debugLineNum = 33;BA.debugLine="led.DigitalWrite(False)";
b4r_main::_led->DigitalWrite(Common_False);
 //BA.debugLineNum = 34;BA.debugLine="Delay(1000)";
Common_Delay((ULong) (1000));
 //BA.debugLineNum = 35;BA.debugLine="count = count + 1";
b4r_main::_count = (Byte) (b4r_main::_count+1);
 }
;
 //BA.debugLineNum = 37;BA.debugLine="End Sub";
B4R::StackMemory::cp = cp;
}

void b4r_main::initializeProcessGlobals() {
     B4R::StackMemory::buffer = (byte*)malloc(STACK_BUFFER_SIZE);
     b4r_main::_process_globals();

   
}
void b4r_main::_process_globals(){
const UInt cp = B4R::StackMemory::cp;
 //BA.debugLineNum = 8;BA.debugLine="Sub Process_Globals";
 //BA.debugLineNum = 11;BA.debugLine="Public Serial1 As Serial";
b4r_main::_serial1 = &be_gann1_3;
 //BA.debugLineNum = 12;BA.debugLine="Private led As Pin";
b4r_main::_led = &be_gann2_3;
 //BA.debugLineNum = 13;BA.debugLine="Private count As Byte = 0";
b4r_main::_count = (Byte) (0);
 //BA.debugLineNum = 14;BA.debugLine="End Sub";
}

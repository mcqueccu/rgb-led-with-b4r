# 1 "C:\\BACKUUP\\ANDROI~1\\AB4A5~1.0CO\\B4RPRO~1\\Blink\\Objects\\src\\src.ino"
# 1 "C:\\BACKUUP\\ANDROI~1\\AB4A5~1.0CO\\B4RPRO~1\\Blink\\Objects\\src\\src.ino"
# 2 "C:\\BACKUUP\\ANDROI~1\\AB4A5~1.0CO\\B4RPRO~1\\Blink\\Objects\\src\\src.ino" 2

void setup() {
 b4r_main::initializeProcessGlobals();
 b4r_main::_appstart();
}

void loop() {
 while (true) {
  B4R::scheduler.loop();
 }
}

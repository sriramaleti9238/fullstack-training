#include<SoftwareSerial.h>
#include<ArduinoJson.h>
SoftwareSerial s(5,6);

void setup() {
  // put your setup code here, to run once:
s.begin(9600);
}

void loop() {
StaticJsonBuffer<1000>jsonBuffer;
JsonObject& root= jsonBuffer.createObject();
root["data1"]=100;
root["data2"]=200;
if(s.available()>0)
{
  root.printTo(s);
}


}

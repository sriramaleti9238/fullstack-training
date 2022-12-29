#include<ESP8266WiFi.h>

void setup() {
  WiFi.mode(WIFI_STA);
  WiFi.begin("Realme","987654321");
  Serial.begin(115200);
  while(WiFi.status()!=WL_CONNECTED){
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("connected to");
   Serial.print("Realme");
    Serial.print("IP Address"); 
     Serial.print(WiFi.localIP());
}

void loop() {
  // put your main code here, to run repeatedly:

}


#include "MQ135.h"
MQ135 gasSensor = MQ135(A0);
int val=0;
float zero=0;
float ppm=0;
int sensorPin = A0;
int sensorValue = 0;
void setup()
{
Serial.begin(9600);
//pinMode (sensorPin, INPUT);
}
void loop()
{
  Serial.println('a');
  delay(1000);
}

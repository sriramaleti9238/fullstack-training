const int ledpin=13; // ledpin and soundpin are not changed throughout the process
const int soundpin=A3;
const int threshold=900; // sets threshold value for sound sensor
void setup()
{
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(A2,INPUT);
  pinMode(ledpin,OUTPUT);
  pinMode(soundpin,INPUT);
  Serial.begin(9600);
}
void loop()
{
  int soundsens=analogRead(soundpin); // reads analog data from sound sensor
  int a=analogRead(A0);
  int b=analogRead(A2);
  Serial.print("AQI of MQ135 is ");
   Serial.println(a); 
   Serial.print("AQIof MQ9 is ");
   Serial.println(b);
   delay(5000);
   if (soundsens>=threshold)
   {
    digitalWrite(ledpin,LOW); //turns led on
    delay(5000);
    Serial.print("sound value in db is ");
    Serial.println(soundsens);
   }
   else
   {
    digitalWrite(ledpin,HIGH);
    Serial.print("sound value in db is ");
    Serial.println(soundsens);
   }
   

}

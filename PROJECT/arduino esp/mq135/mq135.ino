void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(A2,INPUT);
  Serial.begin(9600);

}

void loop() {
 
  int a=analogRead(A0);
  int b=analogRead(A2);
  Serial.print("AQI of MQ135 is ");
   Serial.println(a); 
    
   Serial.print("AQIof MQ9 is ");
   Serial.println(b);
   
   delay(20000);
   

}

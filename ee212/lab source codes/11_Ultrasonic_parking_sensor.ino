#define PIN_TRIG 	(3)
#define PIN_ECHO	(2)
#define PIN_BUZZ	(6)

void setup()
{
  Serial.begin(9600);
  pinMode(PIN_TRIG, OUTPUT);
  pinMode(PIN_ECHO, INPUT);
  pinMode(PIN_BUZZ, OUTPUT);
  
  digitalWrite(PIN_TRIG, LOW);
}

void loop()
{
  int beepDelay;
  long duration;
  float distance;
  
  digitalWrite(PIN_TRIG, LOW); 
  delayMicroseconds(2); 

  digitalWrite(PIN_TRIG, HIGH); 
  delayMicroseconds(10); 
  digitalWrite(PIN_TRIG, LOW); 
  
  duration = pulseIn(PIN_ECHO, HIGH); 
  distance = 340.0*duration*1.0e-6*0.5;
  
  Serial.println(distance);
  
  if (distance<2.0){
    if 		(distance<0.5)	beepDelay = 32;
    else if (distance<1.0)	beepDelay = 128;
    else if (distance<1.5)	beepDelay = 256;
    else 					beepDelay = 512;
    tone(PIN_BUZZ,1760,5);
    delay(beepDelay);
  }
  
}
  

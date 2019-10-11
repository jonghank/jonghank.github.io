int lampStatus = 0;
int prevButtonStatus = 0;

void setup()
{
  pinMode(2, INPUT);
  for (int i=4; i<=7; i++){
    pinMode(i, OUTPUT);
  }
  Serial.begin(9600);
}

void loop()
{
  int buttonStatus;
  
  buttonStatus = digitalRead(2);
  
  if (buttonStatus > prevButtonStatus){
    lampStatus += 1;
    lampStatus %= 5;
  }
  
  Serial.println(lampStatus);
  
  for (int i=4; i<=7; i++){
    if (i < lampStatus+4)
      digitalWrite(i,HIGH);
    else
      digitalWrite(i,LOW);      
  }
  
  prevButtonStatus = buttonStatus;
}
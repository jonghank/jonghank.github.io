
int buttonState = 0;

int lastButtonState = 0;

bool LEDState = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  buttonState = digitalRead(2);

// This block implements the first example //
//  digitalWrite(5, buttonState);
//  digitalWrite(6, buttonState);
//  digitalWrite(7, buttonState);
// This block implements the first example //
  
// This block implements the second example //
  digitalWrite(5, LEDState);
  digitalWrite(6, LEDState);
  digitalWrite(7, LEDState);
// This block implements the second example //

  if (buttonState != lastButtonState) {
    if (buttonState){
      LEDState = !LEDState;
    }
  }
  lastButtonState = buttonState;
 
}
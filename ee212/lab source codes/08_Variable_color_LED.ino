#define R_PIN  (9)
#define G_PIN (10)
#define B_PIN (11)

void setup()
{
  pinMode(R_PIN, OUTPUT);
  pinMode(G_PIN, OUTPUT);
  pinMode(B_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int rPot = analogRead(A2);
  int gPot = analogRead(A1);
  int bPot = analogRead(A0);
  
  Serial.println(rPot/4);
  
  analogWrite(R_PIN,floor(rPot/4));
  analogWrite(G_PIN,floor(gPot/4));
  analogWrite(B_PIN,floor(bPot/4));
}

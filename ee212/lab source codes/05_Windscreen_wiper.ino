#include <Servo.h>
#include <math.h>
#define SERVO_PIN (9)
#define TOUCH_PIN (2)

Servo myservo;

int pos = 0;
int vel = 1;
void setup() {
  myservo.attach(SERVO_PIN);
  myservo.write(0);
}

void loop() {
  if(digitalRead(TOUCH_PIN)==1)
  {
    if( pos<=0 )  vel = 1;
    if( pos>=90 ) vel = -1;
    pos += vel;
    myservo.write(pos);
  }
  else{
    if(pos>0){
      pos -= 1;
      myservo.write(pos);
    }
  }
  delay( 20 - 2 * log( analogRead(A0) + 10 ) );
}


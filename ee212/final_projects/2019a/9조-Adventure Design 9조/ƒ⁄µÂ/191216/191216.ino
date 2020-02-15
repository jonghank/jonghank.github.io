#include <Servo.h>
#define TIME 30000

int iPinMotor_X_CW  = 2;
int iPinMotor_X_CCW = 3; 
int iPinMotor_Y_CW  = 4; 
int iPinMotor_Y_CCW = 5; 
int iPinMotor_Z_CW  = 6;
int iPinMotor_Z_CCW = 7;
int iPinLimit_X_Min = 8; 
int iPinLimit_X_Max = 9; 
int iPinLimit_Y_Min = 10; 
int iPinLimit_Y_Max = 11;
int iPinJog_X = A0; 
int iPinJog_Y = A1;
int iPinServo = 38;
int iPinBtn_Start = 12; 
int iPinBtn_Crain = 13;
int iOldVal_X = 0; 
int iOldVal_Y = 0;

int iStep = 0;
unsigned long ulPreTime = 0;
unsigned long ulPreTime_Demo = 0;
Servo Gripper;

void setup() {
  Serial.begin(9600);
  Gripper.attach(iPinServo);
  Gripper.write(180);
  pinMode(iPinLimit_X_Min, INPUT_PULLUP);
  pinMode(iPinLimit_X_Max, INPUT_PULLUP);
  pinMode(iPinLimit_Y_Min, INPUT_PULLUP);
  pinMode(iPinLimit_Y_Max, INPUT_PULLUP);

  pinMode(iPinBtn_Start, INPUT_PULLUP);
  pinMode(iPinBtn_Crain, INPUT_PULLUP);

  delay(500);
}
int iStateDemo = 1;

void loop()
 {
  // 리미트 센서
  boolean bLimit_X_Min = (boolean)!digitalRead(iPinLimit_X_Min);
  boolean bLimit_X_Max = (boolean)!digitalRead(iPinLimit_X_Max);
  boolean bLimit_Y_Min = (boolean)!digitalRead(iPinLimit_Y_Min);
  boolean bLimit_Y_Max = (boolean)!digitalRead(iPinLimit_Y_Max);
  
  int iVal_X = analogRead(iPinJog_X);
  int iVal_Y = analogRead(iPinJog_Y);
  unsigned long ulCurTime = millis();
  if (iStep == 0)
  {
    Serial.println("INITIALIZE");
    Serial.println("WAIT START");
    iStep = 1;
  }
  if (iStep == 1)
  {
    if (digitalRead(iPinBtn_Start) == LOW)
    {
      delay(50);
      Serial.println("GAME START");
      iStep = 2;
      ulPreTime = ulCurTime;
    }

    if (iVal_Y > 700)  // Y+
    {
      analogWrite(iPinMotor_Z_CW, 0);
      analogWrite(iPinMotor_Z_CCW, 255);
    }
    else if (iVal_Y < 300)   // Y
    {
      analogWrite(iPinMotor_Z_CW, 255);
      analogWrite(iPinMotor_Z_CCW, 0);
    }
    else
    {
      analogWrite(iPinMotor_Z_CW, 0);
      analogWrite(iPinMotor_Z_CCW, 0);
    }
  }
  if (iStep == 2)
  {
    unsigned long ulElapsedTime = ulCurTime - ulPreTime;

    double dTime = (double)(TIME - ulElapsedTime)/1000.;

    if (ulElapsedTime >= TIME)
    {
      Serial.println("TIME OVER");
      iStep = 3;
    }
    else
    {
      // 조그 동작
      if ( (abs(iOldVal_X - iVal_X) > 30) || (abs(iOldVal_Y - iVal_Y) > 30) )
      {
        iOldVal_X = iVal_X;
        iOldVal_Y = iVal_Y;
        Serial.print(iVal_X);
        Serial.print(", ");
        Serial.println(iVal_Y);
      }
 
      if (iVal_X < 300)   // X+
      {
        if (bLimit_X_Max == false)
        {
          analogWrite(iPinMotor_X_CW, 0);
          analogWrite(iPinMotor_X_CCW, 255);
        }
        else
        {
          Serial.println("Limit_X_Max");
          analogWrite(iPinMotor_X_CW, 0);
          analogWrite(iPinMotor_X_CCW, 0);
        }
      }
      else if (iVal_X > 500)  // X
      {
        if (bLimit_X_Min == false)
        {
          analogWrite(iPinMotor_X_CW, 255);
          analogWrite(iPinMotor_X_CCW, 0);
        }
        else
        {
          Serial.println("Limit_X_Min");
          analogWrite(iPinMotor_X_CW, 0);
          analogWrite(iPinMotor_X_CCW, 0);
        }
      }
      else
      {
        analogWrite(iPinMotor_X_CW, 0);
        analogWrite(iPinMotor_X_CCW, 0);
      }
      if (iVal_Y > 500)  // Y+
      {
        if (bLimit_Y_Max == false)
        {
          analogWrite(iPinMotor_Y_CW, 0);
          analogWrite(iPinMotor_Y_CCW, 255);
        }
        else
        {
          Serial.println("Limit_Y_Max");
          analogWrite(iPinMotor_Y_CW, 0);
          analogWrite(iPinMotor_Y_CCW, 0);
        }
      }
      else if (iVal_Y < 300)   // Y
      {
        if (bLimit_Y_Min == false)
        {
          analogWrite(iPinMotor_Y_CW, 255);
          analogWrite(iPinMotor_Y_CCW, 0);
        }
        else
        {
          Serial.println("Limit_Y_Min");
          analogWrite(iPinMotor_Y_CW, 0);
          analogWrite(iPinMotor_Y_CCW, 0);
        }
      }
      else
      {
        analogWrite(iPinMotor_Y_CW, 0);
        analogWrite(iPinMotor_Y_CCW, 0);
      }
      // 크레인 동작버튼
      if (digitalRead(iPinBtn_Crain) == LOW)
      {
        delay(50);

        // 모터 정지
        analogWrite(iPinMotor_X_CW, 0);
        analogWrite(iPinMotor_X_CCW, 0);
        analogWrite(iPinMotor_Y_CW, 0);
        analogWrite(iPinMotor_Y_CCW, 0);
        iStep = 3;
      }
    }
  }
  if (iStep == 3)
  {
    Serial.println("PICK UP");

    // 1. 하강
    analogWrite(iPinMotor_Z_CW, 0);
    analogWrite(iPinMotor_Z_CCW, 255);

    delay(3500);
    // 2. 정지 & GRAP ON
    analogWrite(iPinMotor_Z_CW, 0);
    analogWrite(iPinMotor_Z_CCW, 0);
    Gripper.attach(iPinServo);
    Gripper.write(180);
    delay(1000);
    // 3. 상승
    analogWrite(iPinMotor_Z_CW, 255);
    analogWrite(iPinMotor_Z_CCW, 0);
    delay(3500);
    // 4. 정지
    analogWrite(iPinMotor_Z_CW, 0);
    analogWrite(iPinMotor_Z_CCW, 0);
    iStep = 4;
    Serial.println("TAKE OUT");
  }
  if (iStep == 4)
  {
    if (bLimit_X_Max == false)
    {
      analogWrite(iPinMotor_X_CW, 0);
      analogWrite(iPinMotor_X_CCW, 255);
    }
    else
    {
      analogWrite(iPinMotor_X_CW, 0);
      analogWrite(iPinMotor_X_CCW, 0);
    }
    if (bLimit_Y_Max == false)
    {
      analogWrite(iPinMotor_Y_CW, 0);
      analogWrite(iPinMotor_Y_CCW, 255);
    }
    else
    {
      analogWrite(iPinMotor_Y_CW, 0);
      analogWrite(iPinMotor_Y_CCW, 0);
    }
    if (bLimit_X_Max == true && bLimit_Y_Max == true)
    {
      analogWrite(iPinMotor_X_CW, 0);
      analogWrite(iPinMotor_X_CCW, 0);
      analogWrite(iPinMotor_Y_CW, 0);
      analogWrite(iPinMotor_Y_CCW, 0);
      iStep = 5;
    }
  }
  if (iStep == 5)
  {
    Serial.println("GRAP OFF");
    Gripper.attach(iPinServo);
    Gripper.write(180);
    delay(3000);
    iStep = 6;
    Serial.println("RETURN HOME");
  }
  if (iStep == 6)
  {
    if (bLimit_X_Min == false)
    {
      analogWrite(iPinMotor_X_CW, 255);
      analogWrite(iPinMotor_X_CCW, 0);
    }
    else
    {
      analogWrite(iPinMotor_X_CW, 0);
      analogWrite(iPinMotor_X_CCW, 0);
    }

    if (bLimit_Y_Min == false)
    {
      analogWrite(iPinMotor_Y_CW, 255);
      analogWrite(iPinMotor_Y_CCW, 0);
    }
    else
    {
      analogWrite(iPinMotor_Y_CW, 0);
      analogWrite(iPinMotor_Y_CCW, 0);
    }
    if (bLimit_X_Min == true && bLimit_Y_Min == true)
    {
      Serial.println("GAME OVER");
      analogWrite(iPinMotor_X_CW, 0);
      analogWrite(iPinMotor_X_CCW, 0);
      analogWrite(iPinMotor_Y_CW, 0);
      analogWrite(iPinMotor_Y_CCW, 0);
      iStep = 0;
    }
  }
 }

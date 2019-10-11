// ABCDEFG: 7843265: 

int timerMode;  // 0: Ready, timer set
          // 1: Timer run
int modeButtonStatus;
int prevModeButtonStatus;
int addButtonStatus;
int prevAddButtonStatus;
int setTime;
  
int numValue[10][7] = {
// 2 3 4 5 6 7 8
// E D C G F A B
  {1,1,1,0,1,1,1},  // 0: ABCDEF
  {0,0,1,0,0,0,1},  // 1: BC
  {1,1,0,1,0,1,1},  // 2: ABDEG
  {0,1,1,1,0,1,1},  // 3: ABCDG
  {0,0,1,1,1,0,1},  // 4: BCFG
  {0,1,1,1,1,1,0},  // 5: ACDFG
  {1,1,1,1,1,0,0},  // 6: CDEFG
  {0,0,1,0,0,1,1},  // 7: ABC
  {1,1,1,1,1,1,1},  // 8: ABCDEFG
  {0,0,1,1,1,1,1} // 9: ABCFG
};

int timerStatus = 0;

void setup()
{
  int i;
  
  for (i=10; i<=11; i++){
    pinMode(i, INPUT);
  }
  for (i=2; i<=10; i++){
    pinMode(i, OUTPUT);
  }
  
  timerMode = 0;  // 0: Ready, timer set
            // 1: Timer run
  modeButtonStatus = 0;
  prevModeButtonStatus = 0;
  addButtonStatus = 0;
  prevAddButtonStatus = 0;
  setTime = 0;
  
}

void loop()
{
  modeButtonStatus = digitalRead(11);
  addButtonStatus = digitalRead(12);
  if (modeButtonStatus > prevModeButtonStatus){
    tone(10,1760,5);
    timerMode = !timerMode;
    if (timerMode==0){
      setTime = 0;
    }
  digitalWrite(9,timerMode);    
  }  
  
  if (timerMode==0){  // 0: Ready, timer set
  if (addButtonStatus > prevAddButtonStatus){
      tone(10,1760,5);
      setTime += 1;
      setTime %= 10;
    }
  }
  else{         // 1: Timer run
    delay(500);
    digitalWrite(9,0);
    delay(500);
    digitalWrite(9,1);
    setTime -= 1;
    if (setTime==0){
      timerMode = 0;
      displayDigit(setTime);
      digitalWrite(9,0);
      playMelody();
    }
  }
  
  displayDigit(setTime); 
  
  prevModeButtonStatus = modeButtonStatus;
  prevAddButtonStatus = addButtonStatus;
  
}
  
void displayDigit(int status){
  for (int i=0; i<7; i++){
    digitalWrite(i+2,numValue[status][i]);
  }
}

void playMelody(void){
  for (int k=0; k<4; k++){
    for (int i=0; i<2; i++){
      tone(10,880,50);
      delay(100);
    }
    delay(200);
  }
}

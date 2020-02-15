#define STROBE 4
#define RESET 5
#define DC_One A0
#define DC_Two A1

int LED[] = {7,8,9,10,11,12,13};

int freq_amp;
int Frequencies_One[7];
int Frequencies_Two[7];
int i;

void Read_Frequencies(void);

void Print_Frequencies(void);

void setup(void)
{
  Serial.begin(9600);
  
  for (i=0; i<7; i++)
  {
    pinMode(LED[i], OUTPUT);
    digitalWrite(LED[i], LOW);
  }

  //Set spectrum Shield pin configurations
  pinMode(STROBE, OUTPUT);
  pinMode(RESET, OUTPUT);
  pinMode(DC_One, INPUT);
  pinMode(DC_Two, INPUT);  
  digitalWrite(STROBE, HIGH);
  digitalWrite(RESET, HIGH);

  //Initialize Spectrum Analyzers
  digitalWrite(STROBE, LOW);
  delay(1);
  digitalWrite(RESET, HIGH);
  delay(1);
  digitalWrite(STROBE, HIGH);
  delay(1);
  digitalWrite(STROBE, LOW);
  delay(1);
  digitalWrite(RESET, LOW);
}

void loop(void)
{
  Read_Frequencies();
  Print_Frequencies();

  /*
  for (int iter=0; iter<7 ;iter++){
    if (iter != 6){
      Serial.print(Frequencies_Two[iter]);
      Serial.print(" ");
    }
    else {
      Serial.println(Frequencies_Two[iter]);
    }
  }
  */
  
  delay(100);
}

void Read_Frequencies(void)
{
  //Read frequencies for each band
  for (freq_amp = 0; freq_amp<7; freq_amp++){
    Frequencies_One[freq_amp] = analogRead(DC_One);
    digitalWrite(STROBE, HIGH);
    digitalWrite(STROBE, LOW);
  }
}

void Print_Frequencies(void)
{
  if ((Frequencies_One[0] > 150) || (Frequencies_One[1] > 150) || (Frequencies_One[2]>400)) {
    digitalWrite(7, HIGH);
  }
  else
  {
    digitalWrite(7, LOW);
  }

  if ((Frequencies_One[1] > 150) || (Frequencies_One[2] > 400) || (Frequencies_One[3] > 400)) {
    digitalWrite(8, HIGH);
  }
  else
  {
    digitalWrite(8, LOW);
  }

  if ((Frequencies_One[3] > 400) || (Frequencies_One[4] > 400)|| (Frequencies_One[5] > 200)) {
    digitalWrite(9, HIGH);
  }
  else
  {
    digitalWrite(9, LOW);
  }
  
  if ((Frequencies_One[5] > 200) || (Frequencies_One[6]> 200)) {
    digitalWrite(10, HIGH);
  }
  else
  {
    digitalWrite(10, LOW);
  }
}


/*
void Print_Frequencies(void)
{
   for( i= 0; i<7; i++){
     if(Frequencies_Two[i] > Frequencies_One[i]){
        analogWrite(LED[i], Frequencies_Two[i]/4);
     }
     else{
        analogWrite(LED[i], Frequencies_One[i]/4);
     }
   }
}
*/

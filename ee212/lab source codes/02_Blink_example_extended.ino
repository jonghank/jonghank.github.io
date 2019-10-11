void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  int i;
  for (i=1;i<=8;i++)
  {
    blink_n_times(i, 500/i);
  }
}

void blink_n_times(int n, int ms)
{
  int i;
  for (i=0; i<n; i++)
  {
  	digitalWrite(13, HIGH);
  	delay(ms);
  	digitalWrite(13, LOW);
  	delay(ms);
  }  
}
/*
  This program builds upon the previous single blinking LED.
  Get that working in both Tinkercad and hardware before attempting this.
  
  Then copy the Tinkercad circuit. Add the yellow LED. Again test it.
  
  Then add the green and test.
  
  The circuit should blink red then yellow then green, each for 1 second.
*/


const int RED = 13;
const int YELLOW = 9;
const int GREEN = 6;

void setup()
{
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
}

void loop()
{
  digitalWrite(RED, HIGH);
  delay(1000);
  digitalWrite(RED, LOW);
  delay(1000);
  digitalWrite(YELLOW, HIGH);
  delay(1000);
  digitalWrite(YELLOW, LOW);
  delay(1000);
  digitalWrite(GREEN, HIGH);
  delay(1000);
  digitalWrite(GREEN, LOW);
  delay(1000);
}


/* 
  Bored? Try:
  
  1. Imagine these are traffic lights that cycle every 10 seconds.
  Change the delay times so that red and green are on for 4 seconds
  each and yellow for 2 seconds.
  
  2. Reversing the lighting order of LEDs,
  green then yellow then red (in software).
  
  3. Also try making the LEDs blink at same time.  
*/

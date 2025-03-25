/*
  This program blinks pin 13 of the Arduino (the
  built-in LED).
  
  Both the red LED on the breadboard and the built-in LED should
  blink in sync.
*/

const int RED = 13; // this is a better way to label pins
// as seen before, pin 13 is also called LED_BUILTIN

void setup()
{
  pinMode(RED, OUTPUT);
}

void loop()
{
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(RED, HIGH);
  delay(1000); // Wait for 1000 millisecond(s) or 1 second
  // turn the LED off by making the voltage LOW
  digitalWrite(RED, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}

// Try modifying the delay time to 3 seconds. 
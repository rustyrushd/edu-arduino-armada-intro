/*
  This program blinks pin 13 of the Arduino (the
  built-in LED, just below pin 13).
  
  Use this program to test that the Arduino is 
  properly connected to the computer.
  
  If it fails to upload, check if the correct 
  COM port (under Tools) is selected.   
*/

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s) or 1 second
  // turn the LED off by making the voltage LOW
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}

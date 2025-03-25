/*
  A pushbutton switch turns on and off the build-in LED.
  
  Note the 10K resistor on the switch connected to ground. 
  Connected this way, it is known as a pull down resistor. 
*/


int buttonState = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  // read the state of the pushbutton value
  buttonState = digitalRead(2);
  // check if pushbutton is pressed.  if it is, the
  // buttonState is HIGH
  if (buttonState == HIGH) {
    // turn LED on
    digitalWrite(LED_BUILTIN, HIGH);
  } else {
    // turn LED off
    digitalWrite(LED_BUILTIN, LOW);
  } 
}
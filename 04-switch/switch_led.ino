/*
*/

const int SW = 2;
const int RED = 13;

int buttonState = 0;

void setup()
{
  pinMode(SW, INPUT);
  pinMode(RED, OUTPUT);
}

void loop()
{
  // read the state of the pushbutton value
  buttonState = digitalRead(SW);
  // check if pushbutton is pressed.  if it is, the
  // buttonState is HIGH
  if (buttonState == HIGH) {
    // turn LED on
    digitalWrite(RED, HIGH);
  } else {
    // turn LED off
    digitalWrite(RED, LOW);
  } 
}
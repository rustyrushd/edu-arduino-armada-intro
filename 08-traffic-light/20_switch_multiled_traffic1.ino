/*
*/

const int SW = 2;
const int RED = 13;
const int YELLOW = 9;
const int GREEN = 6;

int buttonState = 0;

void lightsOn()
{
  digitalWrite(GREEN, HIGH);
  delay(4000);
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, HIGH);
  delay(2000);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, HIGH);
  delay(2000);
  digitalWrite(YELLOW, HIGH);
  delay(2000);
  digitalWrite(RED, LOW);
  digitalWrite(YELLOW, LOW);
}

void lightsOff()
{
  digitalWrite(RED, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(GREEN, LOW);
}

void setup()
{
  pinMode(SW, INPUT);
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
}

void loop()
{
 
  // read the state of the pushbutton value
  buttonState = digitalRead(SW);
  // check if pushbutton is pressed.  if it is, the
  // buttonState is HIGH
  if (buttonState == HIGH) {
    lightsOn();
    } else {
    lightsOff();
  } 
}
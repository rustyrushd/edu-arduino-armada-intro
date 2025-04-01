/*
*/

const int SW = 2;
const int RED = 13;
const int YELLOW = 9;
const int GREEN = 6;

int buttonState = 0;

// buzzer tone constants
#define NOTE_C4  262
#define NOTE_G3  196
#define NOTE_A3  220
#define NOTE_B3  247
#define NOTE_C4  262


void lightsOn()
{
  digitalWrite(GREEN, HIGH);
  delay(4000);
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, HIGH);
  delay(2000);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, HIGH);
  buzzer();
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


void buzzer()
{
  // notes in the melody:
  int melody[] = {
    NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4};

  // note durations: 4 = quarter note, 8 = eighth note, etc.:
  int noteDurations[] = {4, 8, 8, 4, 4, 4, 4, 4};
  
  for (int thisNote = 0; thisNote < 8; thisNote++) {

    // to calculate the note duration, take one second
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 2.0;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(8);
  }
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
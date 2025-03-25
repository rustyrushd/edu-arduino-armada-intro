/*
  A toggle switch turns on and off the build-in LED. 
  However unlike the pushbutton switch, it does not need to be held
  down to stay HIGH.
  
  Note the 10K resistor on the switch connected to ground. 
  Connected this way, it is known as a pull down resistor. 
*/

const int SW = 2; 

int buttonState = 0;  

void setup()  
{  
  pinMode(LED_BUILTIN, OUTPUT);  
  pinMode(SW, INPUT_PULLUP);   
}  

void loop()  
{  
  if (digitalRead(SW) == true) 
  {  
    buttonState = !buttonState;  
    digitalWrite(LED_BUILTIN, buttonState);  
  }  
  while(digitalRead(SW) == true);  
  delay(50);  
}
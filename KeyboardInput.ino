// Sam Kasten
// Program created for Franken Pong Controller

#include "USBHIDKeyboard.h"

USBHIDKeyboard Keyboard;

const int upButtonPin = 8;
const int downButtonPin = 9;

int previousUpButtonState = HIGH;
int previousDownButtonState = HIGH;

void setup() {

  pinMode(upButtonPin, INPUT_PULLUP); 
  pinMode(downButtonPin, INPUT_PULLUP); 
  Keyboard.begin();

}

void loop() {

  int upButtonState = digitalRead(upButtonPin);
  int downButtonState = digitalRead(downButtonPin);

  if (upButtonState != previousUpButtonState && upButtonState == LOW) {
    
    // Acts as keyboard  
    Keyboard.press('w');
  }
  else{

    // Acts as keyboard input 
    Keyboard.release('w');
  }
  

  if (downButtonState != previousDownButtonState && downButtonState == LOW) {
    // Button pressed, send message
    Keyboard.press('s');
  }
  else{
    Keyboard.release('s');
  }

  previousUpButtonState = upButtonState;
  previousDownButtonState = downButtonState;
}
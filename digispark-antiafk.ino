#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.sendKeyStroke(0);
}

void loop() {
  // Press and release the W button
  DigiKeyboard.sendKeyPress(KEY_W);
  delay(100);
  DigiKeyboard.sendKeyPress(0);
  delay(1000);
  
  // Press and release the S button
  DigiKeyboard.sendKeyPress(KEY_S);
  delay(100);
  DigiKeyboard.sendKeyPress(0);
  delay(1000);
  
  // Press and release the A button
  DigiKeyboard.sendKeyPress(KEY_A);
  delay(100);
  DigiKeyboard.sendKeyPress(0);
  delay(1000);
  
  // Press and release the D button
  DigiKeyboard.sendKeyPress(KEY_D);
  delay(100);
  DigiKeyboard.sendKeyPress(0);
  delay(1000);
}
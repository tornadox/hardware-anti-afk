#include "DigiKeyboard.h"
#include <stdlib.h>

const int LED_PIN = 1; // Pin for the LED
int ledState = LOW;    // Starting state of the LED

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Press and release the W button
  digitalWrite(LED_PIN, HIGH);
  DigiKeyboard.sendKeyPress(KEY_W);
  delay(1000);
  DigiKeyboard.sendKeyPress(0);
  digitalWrite(LED_PIN, LOW);
  delay(random(5000, 50000));

  // Press and release the S button
  digitalWrite(LED_PIN, HIGH);
  DigiKeyboard.sendKeyPress(KEY_S);
  delay(1000);
  DigiKeyboard.sendKeyPress(0);
  digitalWrite(LED_PIN, LOW);
  delay(random(5000, 50000));

  // Press and release the A button
  digitalWrite(LED_PIN, HIGH);
  DigiKeyboard.sendKeyPress(KEY_A);
  delay(1000);
  DigiKeyboard.sendKeyPress(0);
  digitalWrite(LED_PIN, LOW);
  delay(random(5000, 50000));

  // Press and release the D button
  digitalWrite(LED_PIN, HIGH);
  DigiKeyboard.sendKeyPress(KEY_D);
  delay(1000);
  DigiKeyboard.sendKeyPress(0);
  digitalWrite(LED_PIN, LOW);
  delay(random(5000, 50000));

  // Press and release the SPACE button
  digitalWrite(LED_PIN, HIGH);
  DigiKeyboard.sendKeyPress(KEY_SPACE);
  delay(1000);
  DigiKeyboard.sendKeyPress(0);
  digitalWrite(LED_PIN, LOW);
  delay(random(5000, 50000));
}

#include <Arduino.h>
#include <IRremoteESP8266.h>
#include <IRsend.h>

const uint16_t pinIR = 4;

IRsend irsend(pinIR);

void setup() {
  // put your setup code here, to run once:
  irsend.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  irsend.sendNEC(0x21);
  delay(5000);
  irsend.sendNEC(0x23);
  delay(5000);
}
#include <Arduino.h>

int MOSFET0_PIN = 13; //IO13 15
int MOSFET1_PIN = 14; //IO14 12
int MOSFET2_PIN = 27; //IO27 11
int MOSFET3_PIN = 26; //IO26 10
int MOSFET4_PIN = 25; //IO25 9
int MOSFET5_PIN = 21; //IO21 25
int MOSFET6_PIN = 22; //IO22 22
int MOSFET7_PIN = 23; //IO23 21

void setup() {
  pinMode(MOSFET0_PIN, OUTPUT);
  pinMode(MOSFET1_PIN, OUTPUT);
  pinMode(MOSFET2_PIN, OUTPUT);
  pinMode(MOSFET3_PIN, OUTPUT);
  pinMode(MOSFET4_PIN, OUTPUT);
  pinMode(MOSFET5_PIN, OUTPUT);
  pinMode(MOSFET6_PIN, OUTPUT);
  pinMode(MOSFET7_PIN, OUTPUT);
}

void loop() {
  digitalWrite(MOSFET0_PIN, HIGH);
  digitalWrite(MOSFET1_PIN, HIGH);
  digitalWrite(MOSFET2_PIN, HIGH);
  digitalWrite(MOSFET3_PIN, HIGH);
  digitalWrite(MOSFET4_PIN, HIGH);
  digitalWrite(MOSFET5_PIN, HIGH);
  digitalWrite(MOSFET6_PIN, HIGH);
  digitalWrite(MOSFET7_PIN, HIGH);
  delay(1000);  
  digitalWrite(MOSFET0_PIN, LOW);
  digitalWrite(MOSFET1_PIN, LOW);
  digitalWrite(MOSFET2_PIN, LOW);
  digitalWrite(MOSFET3_PIN, LOW);
  digitalWrite(MOSFET4_PIN, LOW);
  digitalWrite(MOSFET5_PIN, LOW);
  digitalWrite(MOSFET6_PIN, LOW);
  digitalWrite(MOSFET7_PIN, LOW);
  delay(1000); 
}
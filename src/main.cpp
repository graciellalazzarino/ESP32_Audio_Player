#include <Arduino.h>

/*********
 Graciella Lazzarino
 Blink Test for ESP32
 This is a simple blink test for the ESP32 using the Arduino framework. It turns an LED on and off with a 1 second interval and prints the LED state to the serial monitor.
 Code Sourced from:
  Rui Santos
  Complete project details at https://RandomNerdTutorials.com/vs-code-platformio-ide-esp32-esp8266-arduino/
*********/

#include <Arduino.h>

#define LED 2

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED, HIGH);
  Serial.println("LED is on");
  delay(1000);
  digitalWrite(LED, LOW);
  Serial.println("LED is off");
  delay(1000);
}
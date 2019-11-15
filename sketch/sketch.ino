#include <ESP8266WiFi.h>

//output pin
const int gpioOut = 4;

void setup() {
  Serial.begin(115200);
  delay(30);
  initWifi();
  Serial.println("start");
}

void loop() {
}

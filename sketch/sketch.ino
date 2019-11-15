#include <ESP8266WiFi.h>

//output pin
const int gpioOut = 4;

void setup() {
  Serial.begin(115200);
  delay(300);
  Serial.println("start");
}

void loop() {
  delay(1000);
  Serial.println("run");
}

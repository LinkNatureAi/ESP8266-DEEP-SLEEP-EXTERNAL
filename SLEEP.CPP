//esp8266 deep sleep external wake up connect D0 to RST
#include <ESP8266WiFi.h>
const int ledPin = D4; 

void setup() {
  Serial.begin(115200); 
  pinMode(ledPin, OUTPUT); 
  digitalWrite(ledPin, HIGH);
  Serial.println("Initial status: LED OFF");

  digitalWrite(ledPin, LOW); 
  Serial.println("LED ON");
  delay(1000);
  digitalWrite(ledPin, HIGH); 
  Serial.println("LED OFF");
  delay(1000);

  // Enter deep sleep for 8 seconds
  Serial.println("Entering deep sleep for 8 seconds...");
  ESP.deepSleep(8e6); // 8e6 microseconds = 8 seconds
}

void loop() {
  // This function will not be called as the ESP is in deep sleep
}

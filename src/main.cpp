#include <Arduino.h>

void setup() {
    Serial.begin(115200);  // Start serial communication
}

void loop() {
    Serial.println("Hello, World!");  // Print message
    delay(1000);  // Wait 1 second
}

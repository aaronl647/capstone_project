#include <Arduino.h>
#include <Stepper.h>

//Define motor steps per revolution
#define STEPS_PER_REV 2048 //specific to 28BYJ-48 motor

#define IN1 18
#define IN2 19
#define IN3 21
#define IN4 22

void setup() {
    Serial.begin(115200);  // Start serial communication
}

void loop() {
    Serial.println("Hello, World!");  // Print message
    delay(1000);  // Wait 1 second
}

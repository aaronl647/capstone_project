#include <Arduino.h>
#include <Stepper.h>

//Define motor steps per revolution
#define STEPS_PER_REV 2048 //specific to 28BYJ-48 motor

#define IN1 18
#define IN2 19
#define IN3 21
#define IN4 22

Stepper stepper(STEPS_PER_REV, IN1, IN3, IN2, IN4);

void setup()
{
  stepper.setSpeed(10); //Set RPM
  Serial.begin(115200); // Start serial communication
  Serial.println("Stepper Motor Test"); //Print initial message
}

void loop() {
    Serial.println("Moving forward"); // Print message
    stepper.step(STEPS_PER_REV); // Move 1 full revolution forward
    delay(1000);  // Wait 1 second

    Serial.println("Moving backwards");
    stepper.step(-STEPS_PER_REV); // Move 1 full revolution backwards
    delay(1000);
}

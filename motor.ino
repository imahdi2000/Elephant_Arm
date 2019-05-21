// Stepper - Version: Latest 
#include <Stepper.h>

/*
 Stepper Motor Control - one revolution

 This program drives a unipolar or bipolar stepper motor.
 The motor is attached to digital pins 8 - 11 of the Arduino.

 The motor should revolve one revolution in one direction, then
 one revolution in the other direction.


 Created 11 Mar. 2007
 Modified 30 Nov. 2009
 by Tom Igoe

 */

const int stepsPerRevolution = 1200;  // change this to fit the number of steps per revolution
// for your motor

// initialize the stepper library on pins 8 through 11:
Stepper myStepper(stepsPerRevolution, 6, 8, 7, 9);
Stepper myStepper2(stepsPerRevolution, 2, 4, 3, 5);
Stepper myStepper3(stepsPerRevolution, 10, 12, 11, 13);


void setup() {
  // set the speed at 60 rpm:
  myStepper.setSpeed(20);
  myStepper2.setSpeed(20);
  myStepper3.setSpeed(20);
    
  // initialize the serial port:
  Serial.begin(9600);
}

void loop() {
  // step one revolution  in one direction:
  Serial.println("clockwise");
  myStepper.step(stepsPerRevolution);
  myStepper2.step(stepsPerRevolution);
  myStepper3.step(stepsPerRevolution);
  delay(500);

  // step one revolution in the other direction:
  Serial.println("counterclockwise");
  myStepper.step(-stepsPerRevolution);
  myStepper2.step(-stepsPerRevolution);
  myStepper3.step(-stepsPerRevolution);
  delay(500);
}

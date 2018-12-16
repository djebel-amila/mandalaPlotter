//////////////////////////////////////////////////////////////////////
// Manual controlled CNC                                            //
// Physical Computing/Computational Arts/Goldsmiths/2018-19         //
// Project by Julien Mercier                                        //
// Tutor: Evan Raskob                                               //
//////////////////////////////////////////////////////////////////////

// import AccelStepper library (http://www.airspayce.com/mikem/arduino/AccelStepper/)
#include <MultiStepper.h>
#include <AccelStepper.h>

// define joystick X & Y axis analog read
#define joyX A0
#define joyY A1

// define joystick switch input
const int SW_pin = 13;

// defin solenoid output
int solenoidPin = 12;

// steppers X & Y
#define STEPPER_ENABLE_PIN 8
#define MOTOR_X_STEP_PIN 2
#define MOTOR_X_DIR_PIN 5
#define MOTOR_Y_STEP_PIN 3
#define MOTOR_Y_DIR_PIN 6
AccelStepper motor_X(1, MOTOR_X_STEP_PIN, MOTOR_X_DIR_PIN);
AccelStepper motor_Y(1, MOTOR_Y_STEP_PIN, MOTOR_Y_DIR_PIN);

void setup() {
  //  Serial.begin(9600);
  // joystick analog read, X & Y
  pinMode(SW_pin, INPUT);
  digitalWrite(SW_pin, HIGH); // ??
  Serial.begin(115200);
  //Sets the solenoid’s pin as an output
  pinMode(solenoidPin, OUTPUT);
  motor_X.setEnablePin(STEPPER_ENABLE_PIN);
  motor_X.setPinsInverted(false, false, true);
  motor_X.setAcceleration(200);
  motor_X.setMaxSpeed(200);
  motor_X.setSpeed(200);
  motor_X.enableOutputs();
  motor_Y.setEnablePin(STEPPER_ENABLE_PIN);
  motor_Y.setPinsInverted(false, false, true);
  motor_Y.setAcceleration(200);
  motor_Y.setMaxSpeed(200);
  motor_Y.setSpeed(200);
  motor_Y.enableOutputs();
}

void loop()
{
  int xValue = analogRead(joyX);
  int yValue = analogRead(joyY);
  // on switch (SW_pin) click, turn on or off the solenoid
  if (digitalRead(SW_pin) == LOW)digitalWrite(solenoidPin, HIGH);
  if (digitalRead(SW_pin) == HIGH)digitalWrite(solenoidPin, LOW);
  // make 10 steps on X or Y, in one direction or the other, depending on the joystick input.
  motor_X.run();
  motor_Y.run();
  if (xValue < 500)motor_X.move(-10);
  if (xValue > 550)motor_X.move(10);
  if (yValue < 500)motor_Y.move(-10);
  if (yValue > 550)motor_Y.move(10);
}

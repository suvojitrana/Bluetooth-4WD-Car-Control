//Code Written By Suvojit Rana 

#include <AFMotor.h>
AF_DCMotor motor1(1, MOTOR12_1KHZ);
AF_DCMotor motor2(2, MOTOR12_1KHZ);
AF_DCMotor motor3(3, MOTOR34_1KHZ);
AF_DCMotor motor4(4, MOTOR34_1KHZ);

#define MAX_SPEED 255 // (You can change the speed of the motor, according to your needs)
int speedSet = 0;
boolean goesForward = false;

char command = 'S'; // Default is Stop

void setup() {
  Serial.begin(9600); // Serial Monitor + Bluetooth via HC-05
  Serial.println("Bluetooth Control Ready"); // Show ready status
}

void loop() {
  if (Serial.available()) {
    command = Serial.read();
    Serial.print("Command Received: ");
    Serial.println(command);  // Show in Serial Monitor and send back to app
    bluetoothControl(command);
  }
}

//Bluetooth Manual Control (in case change the bluetooth data to your requirement)
void bluetoothControl(char cmd) {
  switch (cmd) {
    case 'F':
      moveForward();
      Serial.println("Moving Forward");
      break;
    case 'B':
      moveBackward();
      Serial.println("Moving Backward");
      break;
    case 'L':
      turnLeft();
      Serial.println("Turning Left");
      break;
    case 'R':
      turnRight();
      Serial.println("Turning Right");
      break;
    case 'S':
      moveStop();
      Serial.println("Stopping");
      break;
    default:
      Serial.println("Unknown Command");
      break;
  }
}

void moveStop() {
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  motor4.run(RELEASE);
  goesForward = false;
}

void moveForward() {
  if (!goesForward) {
    goesForward = true;
    motor1.run(FORWARD);
    motor2.run(FORWARD);
    motor3.run(FORWARD);
    motor4.run(FORWARD);
    for (speedSet = 0; speedSet < MAX_SPEED; speedSet += 2) {
      motor1.setSpeed(speedSet);
      motor2.setSpeed(speedSet);
      motor3.setSpeed(speedSet);
      motor4.setSpeed(speedSet);
      delay(5);
    }
  }
}

void moveBackward() {
  goesForward = false;
  motor1.run(BACKWARD);
  motor2.run(BACKWARD);
  motor3.run(BACKWARD);
  motor4.run(BACKWARD);
  for (speedSet = 0; speedSet < MAX_SPEED; speedSet += 2) {
    motor1.setSpeed(speedSet);
    motor2.setSpeed(speedSet);
    motor3.setSpeed(speedSet);
    motor4.setSpeed(speedSet);
    delay(5);
  }
}

void turnRight() {
  motor1.run(FORWARD);
  motor2.run(FORWARD);
  motor3.run(BACKWARD);
  motor4.run(BACKWARD);
  delay(500);
  moveStop();
}

void turnLeft() {
  motor1.run(BACKWARD);
  motor2.run(BACKWARD);
  motor3.run(FORWARD);
  motor4.run(FORWARD);
  delay(500);
  moveStop();
}

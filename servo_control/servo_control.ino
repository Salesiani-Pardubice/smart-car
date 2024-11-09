#include <ESP32Servo.h>

Servo myServo;         // Create a Servo object
int servoPin = 16;     // Pin connected to the MG996R signal pin
int angle = 0;         // Variable to store the servo angle

void setup() {
  // Attach the servo to the pin
  myServo.attach(servoPin);
  
  Serial.begin(115200);
  Serial.println("MG996R Servo Control with ESP32");
}

void loop() {
  // Move the servo to 0 degrees
  myServo.write(0);
  Serial.println("Servo at 0 degrees");
  delay(1000);  // Wait for 1 second

  // Move the servo to 90 degrees
  myServo.write(90);
  Serial.println("Servo at 90 degrees");
  delay(1000);  // Wait for 1 second

  // Move the servo to 180 degrees
  myServo.write(180);
  Serial.println("Servo at 180 degrees");
  delay(1000);  // Wait for 1 second
}

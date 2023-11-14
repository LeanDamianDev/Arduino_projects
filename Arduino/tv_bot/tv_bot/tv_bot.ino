#include <Servo.h>

int IN1 = 2;
int IN3 = 3;

Servo servo;
void setup() {
  Serial.begin(9600);
  servo.attach(5);
  pinMode(IN1, OUTPUT);
  pinMode(IN3, OUTPUT);
  
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(IN1, HIGH);
  delay(1000);
  // put your main code here, to run repeatedly
}

void init_IN3(){
  digitalWrite(IN3, HIGH);

}

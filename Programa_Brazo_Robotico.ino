#include <Servo.h>

Servo motor1;
Servo motor2;
Servo motor3;
Servo motor4;

int Y1 = 0;
int X1 = 1;
int Y2 = 2;
int X2 = 3;

void setup() {

   motor1.attach(3);
   motor2.attach(4);
   motor3.attach(5);
   motor4.attach(6);
}

void loop() {

int position_Y1 = analogRead(Y1);
int angulo1 = map(position_Y1, 0, 1023, 0, 180);
int position_X1 = analogRead(X1);
int angulo2 = map(position_X1, 0, 1023, 0, 180);
int position_Y2 = analogRead(Y2);
int angulo3 = map(position_Y2, 0, 1023, 0, 180);
int position_X2 = analogRead(X2);
int angulo4 = map(position_X2, 0, 1023, 0, 180);

motor1.write(angulo1);
motor2.write(angulo2);
motor3.write(angulo3);
motor4.write(angulo4);

delay(10);
}

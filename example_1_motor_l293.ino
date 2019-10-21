#include <AFMotor.h>
AF_DCMotor motor1(1); //Khai báo động cơ 1
AF_DCMotor motor2(2); //Khai báo động cơ 2
AF_DCMotor motor3(3); //Khai báo động cơ 3
AF_DCMotor motor4(4); //Khai báo động cơ 4

void setup() {  
    
    //Serial.begin(9600);           // mở cổng Serial monitor 9600 bps
    motor1.setSpeed(255);    // chọn tốc độ maximum 255`/25
    motor2.setSpeed(255);
    motor3.setSpeed(255);
    motor4.setSpeed(255);
}  
 
void loop() {  
    motor1.run(FORWARD); 
    motor2.run(FORWARD); 
    motor3.run(FORWARD);    // động cơ tiến
    motor4.run(FORWARD);
    delay(5000);
    //Serial.print("lui");
    motor1.run(BACKWARD);
    motor2.run(BACKWARD);
    motor3.run(BACKWARD);
    motor4.run(BACKWARD);
    delay(5000);
    //Serial.print("tack");
    motor1.run(RELEASE);
    motor2.run(RELEASE);
    motor3.run(RELEASE);     //   dừng động co
    motor4.run(RELEASE);
    delay(5000);
}

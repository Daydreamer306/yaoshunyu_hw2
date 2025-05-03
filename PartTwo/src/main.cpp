#include <Arduino.h>

// 定义LED引脚（根据实际连接修改）
const int LED1_PIN = 25;
const int LED2_PIN = 26;

void setup() {
  Serial.begin(9600);          // 初始化串口通信
  pinMode(LED1_PIN, OUTPUT);  // 设置LED引脚为输出模式
  pinMode(LED2_PIN, OUTPUT);
  digitalWrite(LED1_PIN, LOW); // 初始状态为熄灭
  digitalWrite(LED2_PIN, LOW);
}

void loop() {
  if (Serial.available() > 0) {
    // 读取直到换行符（根据串口助手的设置调整）
    String command = Serial.readStringUntil('\n');
    command.trim(); // 去除首尾空白字符

    if (command == "1") {
      digitalWrite(LED1_PIN, HIGH);
      Serial.println("LED1已点亮");
    }
    else if (command == "2") {
      digitalWrite(LED2_PIN, HIGH);
      Serial.println("LED2已点亮");
    }
    if (command == "-1") {
      digitalWrite(LED1_PIN, LOW);
      Serial.println("LED1已熄灭");
    }
    else if (command == "-2") {
      digitalWrite(LED2_PIN, LOW);
      Serial.println("LED2已熄灭");
    }
  }
  
  // 添加延时降低CPU占用
  delay(10);
}
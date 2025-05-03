#include <Arduino.h>
void setup() {
  pinMode(35, OUTPUT);  
  pinMode(32, OUTPUT);
  pinMode(33, OUTPUT);
  pinMode(25, OUTPUT);
  pinMode(26, OUTPUT);
  pinMode(27, OUTPUT);
}

void loop() {
  digitalWrite(35, HIGH);
  delay(500);
  digitalWrite(35, LOW);
  delay(500);

  digitalWrite(32, HIGH);
  delay(500);           
  digitalWrite(32, LOW);   
  delay(500);    

  digitalWrite(33, HIGH); 
  delay(500);       
  digitalWrite(33, LOW);  
  delay(500);         

  digitalWrite(25, HIGH); 
  delay(500);      
  digitalWrite(25, LOW);   
  delay(500);     

  digitalWrite(26, HIGH);  
  delay(500);      
  digitalWrite(26, LOW);  
  delay(500);     

  digitalWrite(27, HIGH);  
  delay(500);       
  digitalWrite(27, LOW); 
  delay(500);         
}
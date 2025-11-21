// C++ code
//
#include<LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7);
void setup()
{
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  lcd.begin(16,2);
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available()>0){
    String data=Serial.readString();
    lcd.setCursor(0,0);
    lcd.print(data);
    digitalWrite(8,HIGH);
    tone(9,400);
    analogWrite(10,255);
    delay(200);
    digitalWrite(8,LOW);
    noTone(9);
    analogWrite(10,10);
    delay(200);
    digitalWrite(8,HIGH);
    tone(9,400);
    analogWrite(10,255);
    delay(200);
    digitalWrite(8,LOW);
    analogWrite(10,10);
    noTone(9);
    delay(200);
  }
    
}
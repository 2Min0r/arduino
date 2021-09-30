#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);   // LCD가 연결된 핀 설정

void setup() {
  lcd.begin(16,2);  // LCD의 크기 설정
  lcd.print("hello, world!");   // 나오지 않을 경우 저항 조절
}

void loop() {
  lcd.noDisplay();
  delay(500);
  lcd.display();
  delay(500);
}
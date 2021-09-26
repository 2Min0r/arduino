void setup() {
  pinMode(3, OUTPUT);   // 디지털 3번핀을 출력모드로 설정
}

void loop() {
  for (int i =10; i<255 ; i=i+10) {
    analogWrite(3,i);   // 3번핀에 i만큼의 신호 출력
    delay(1000);
  }
}
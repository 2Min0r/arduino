void setup() {
  pinMode(5, OUTPUT);   // 디지털 5번핀을 출력모드로 설정
  pinMode(10, INPUT);   // 디지털 10번핀을 입력모드로 설정
  pinMode(11, INPUT);   // 디지털 11번핀을 입력모드로 설정
  pinMode(12, INPUT);   // 디지털 12번핀을 입력모드로 설정
  pinMode(13, INPUT);   // 디지털 13번핀을 입력모드로 설정
}

void loop() {
  if (digitalRead(13)==HIGH) {
    tone(5, 261.6);             // 도
  }
  else if(digitalRead(12)==HIGH) {
    tone(5, 293.7);             // 레
  }
  else if(digitalRead(11)==HIGH) {
    tone(5, 329.6);             // 미
  }
  else if(digitalRead(10)==HIGH) {
    tone(5, 349.2);             // 파
  }
  else {
    noTone(5);
  }
}
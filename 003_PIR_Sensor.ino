int val=0;
int pirState = LOW;     // 초기값은 LOW 가정

void setup() {
  pinMode(2,INPUT);     // 디지털 2번핀을 입력모드로 설정
  pinMode(3,OUTPUT);    // 디지털 3번핀을 출력모드로 설정
  Serial.begin(9600);   // 시리얼 통신 시작, 통신속도 9600
}

void loop() {
  val=digitalRead(2);       // 신호값 대입
  if (val==HIGH) {          // 만약 신호값이 HIGH 일 경우,
    digitalWrite(3,HIGH);   // 디지털 3번 핀에 HIGH 신호 출력
    if (pirState==LOW){     // LOW -> HIGH로 변환될 경우 Welcome! 출력
      Serial.println("Welcome!");
      pirState = HIGH;
    }
  }
  else{
    digitalWrite(3,LOW);    // 디지털 3번 핀에 LOW 신호 출력
    if (pirState==HIGH){    // HIGH -> LOW로 변환될 경우 BYE! 출력
      Serial.println("BYE!");
      pirState = LOW;
    }
  }
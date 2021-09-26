int trig = 2;
int echo = 3;

void setup() {
  Serial.begin(9600);
  pinMode(trig, OUTPUT);    // trig(2)핀을 출력모드로 설정
  pinMode(echo, INPUT);     // echo(3)핀을 입력모드로 설정
}

void loop() {
  digitalWrite(trig, HIGH);                             // trig(2)핀에 HIGH 신호 출력
  delayMicroseconds(10);                                // 10마이크로초 동안 대기
  digitalWrite(trig, LOW);                              // trig(2)핀에 LOW 신호 출력
  int distance = pulseIn(echo, HIGH)*340/2/10000;       // 시간 * 속도 / 2(왕복계산) / 10000(cm 단위변환)
  Serial.print(distance);
  Serial.println("cm");
  delay(100);                                           // 0.1초 지연
}
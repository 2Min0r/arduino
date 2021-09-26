int val=0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  val=analogRead(A0);       // 아날로그 A0에 입력되는 신호 대입
  Serial.println(val);
  delay(1000);
}
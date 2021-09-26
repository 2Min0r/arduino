int a=30;

void setup() {              // 시리얼 통신 시작. 통신속도 9600
    Serial.begin(9600);
}

void loop() {
    Serial.println(a);                  // 시리얼 모니터에 a를 출력
    Serial.println("Hello, World");     // 시리얼 모니터에 "Hello, World" 출력
    delay(1000);                        // 1초간 대기
}
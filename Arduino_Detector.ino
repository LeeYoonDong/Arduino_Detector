// 핀 정의
const int FLAME_SENSOR_PIN = 2;  // 불꽃 감지 센서 핀
const int GAS_SENSOR_PIN = A0;   // MQ-2 가스 센서 핀
const int BUZZER_PIN = 8;        // 피에조 부저 핀
const int RED_PIN = 9;           // RGB LED 빨간색 핀
const int GREEN_PIN = 10;        // RGB LED 초록색 핀
const int BLUE_PIN = 11;         // RGB LED 파란색 핀

// 임계값 설정
const int GAS_THRESHOLD = 300;   // 가스 감지 임계값, 센서에 따라 조정 필요

// 상태 변수
bool isFireDetected = false;
bool isGasDetected = false;

void setup() {
  Serial.begin(9600);
  
  pinMode(FLAME_SENSOR_PIN, INPUT);
  pinMode(GAS_SENSOR_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
  
  // 초기 상태: LED 꺼짐
  setLEDColor(0, 0, 0);
}

void loop() {
  // 불꽃 감지
  int flameValue = digitalRead(FLAME_SENSOR_PIN);
  if (flameValue == LOW && !isFireDetected) {
    isFireDetected = true;
    Serial.println("Fire Detected!");
    activateAlarm(true);
  } else if (flameValue == HIGH && isFireDetected) {
    isFireDetected = false;
    Serial.println("Fire OFF");
    deactivateAlarm();
  }
  
  // 가스 감지
  int gasValue = analogRead(GAS_SENSOR_PIN);
  if (gasValue > GAS_THRESHOLD && !isGasDetected) {
    isGasDetected = true;
    Serial.println("Gas Detected!");
    activateAlarm(false);
  } else if (gasValue <= GAS_THRESHOLD && isGasDetected) {
    isGasDetected = false;
    Serial.println("Gas OFF");
    deactivateAlarm();
  }
  
  delay(100);  // 약간의 지연을 두어 안정성 향상
}

void activateAlarm(bool isFireAlarm) {
  if (isFireAlarm) {
    setLEDColor(255, 0, 0);  // 빨간색
  } else {
    setLEDColor(255, 165, 0);  // 주황색 (가스 경보)
  }
  tone(BUZZER_PIN, 1000);  // 1kHz 경고음
}

void deactivateAlarm() {
  setLEDColor(0, 0, 0);  // LED 끄기
  noTone(BUZZER_PIN);    // 부저 끄기
}

void setLEDColor(int red, int green, int blue) {
  analogWrite(RED_PIN, red);
  analogWrite(GREEN_PIN, green);
  analogWrite(BLUE_PIN, blue);
}
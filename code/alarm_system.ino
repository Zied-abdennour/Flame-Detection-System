const int flamePin = A0;
const int buzzerPin = 8;

const int threshold = 500;


void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(flamePin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int flameValue = analogRead(flamePin);

  Serial.print("Flame sensor value: ");
  Serial.println(flameValue);

  if (flameValue < threshold) {
    digitalWrite(buzzerPin, HIGH);
    Serial.println("FLAME DETECTED!");
  } 
  else {
    digitalWrite(buzzerPin, LOW);
  }
  delay(100);
}

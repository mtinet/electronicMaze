int red = 9;
int buzzer = 13;
int sensor = 2;

void setup() {
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT); 
  pinMode(red, OUTPUT);
  pinMode(sensor, INPUT);
}

void loop() {
  int sensorVal = digitalRead(sensor);
  Serial.println(sensorVal);

  if (sensorVal == HIGH) {
    digitalWrite(buzzer, LOW);
  } else {
    digitalWrite(buzzer, HIGH);
    digitalWrite(red, HIGH); 
  }
}

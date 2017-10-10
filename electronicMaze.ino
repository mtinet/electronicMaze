#define r 9

int buzzer = 13;

void setup() {
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT); 
  pinMode(r, OUTPUT);
}

void loop() {
  int sensorVal = digitalRead(2);
  Serial.println(sensorVal);

  if (sensorVal == HIGH) {
    digitalWrite(13, LOW);
  } else {
    digitalWrite(13, HIGH);
    digitalWrite(r, HIGH); //if you want to change color, just change r,g,b HIGH and LOW
  }
}

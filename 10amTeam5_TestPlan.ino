const int photoPin = A0;
double average = 0;

void setup() {
  pinMode(photoPin, INPUT);
  Serial.begin(9600);

  average = 0;
  for (int i = 0; i < 30; i++) {
    average += analogRead(photoPin);
    delay(500);
  }

  average /= 30;
  Serial.println("This test has concluded. You may STOP.");
  Serial.println();
  Serial.print("Average Reading - ");
  Serial.print(average);

  Serial.println();
  
  
}

void loop() {
  
}

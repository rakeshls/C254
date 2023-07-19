int buzzerPin = 26;

void setup() {
  // put your setup code here, to run once:
 pinMode(buzzerPin, OUTPUT);

}

void loop() {
  unsigned char j;
  while(1){
    for(int j=0;j<100;j++){
      digitalWrite(buzzerPin, HIGH);
      delay(2);
      digitalWrite(buzzerPin, LOW);
      delay(2);
    }
    delay(100);
  }
}

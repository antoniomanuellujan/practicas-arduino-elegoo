/**
 * Semáforo de peatones
 */
 int rojo =13;
 int verde=12;
 int buzzer=11;

void setup() {
  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(buzzer, OUTPUT);
  digitalWrite(rojo, LOW);
  digitalWrite(verde, LOW);
  digitalWrite(buzzer, LOW);
}

void loop() {
  digitalWrite(rojo, HIGH);
  delay(5000);
  digitalWrite(rojo, LOW);
  
  digitalWrite(verde, HIGH);
  for(int i=0; i<10; i++){
    digitalWrite(buzzer, HIGH);
    delay(200);
    digitalWrite(buzzer, LOW);
    delay(500);
  }
  digitalWrite(verde, LOW);
}

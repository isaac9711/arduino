#define R_LED 13
#define O_LED 10
#define G_LED 7


void setup(){
  pinMode(R_LED, OUTPUT);
  pinMode(O_LED, OUTPUT);
  pinMode(G_LED, OUTPUT);
}

void loop() {
  digitalWrite(G_LED, HIGH);
  delay(5000);
  digitalWrite(G_LED, LOW);
  digitalWrite(O_LED, HIGH);
  delay(3000);
  digitalWrite(O_LED, LOW);
  digitalWrite(R_LED, HIGH);
  delay(5000);
  digitalWrite(R_LED, LOW);
}
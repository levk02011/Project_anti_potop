int water = 0;
void setup (){
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}
void loop()
{
  water = analogRead(A0);
  Serial.println(water);
  if (water > 105) {
    digitalWrite(2, HIGH);
  }
  if (water > 205) {
    digitalWrite(3, HIGH);
  }
  if (water > 305) {
    digitalWrite(4, HIGH);
  }
  if (water > 405) {
    digitalWrite(5, HIGH);
  }
  if (water > 505) {
    digitalWrite(6, HIGH);
  }  
  if (water <= 505)
  delay(50);
}
int verde=13;
int amarillo=12;
int rojo=11;

void setup(){
  pinMode(verde,OUTPUT);
  pinMode(amarillo,OUTPUT);
  pinMode(rojo,OUTPUT);



}

void loop(){
  digitalWrite(verde,HIGH);
  delay(2000);
  digitalWrite(verde,LOW);
  delay(500);
  digitalWrite(amarillo,HIGH);
  delay(500);
  digitalWrite(amarillo,LOW);
  delay(500);
  digitalWrite(rojo,HIGH);
  delay(2000);
  digitalWrite(rojo,LOW);
  delay(500);

}

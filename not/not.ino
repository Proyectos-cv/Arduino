int estado1;
void setup() {
  // put your setup code here, to run once:
pinMode(2, INPUT);
pinMode(13, OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
estado1=digitalRead(2);
  if (estado1==0)   
  {
    digitalWrite(13,LOW);
  }
  else
  {
    digitalWrite(13,HIGH);
  }
}

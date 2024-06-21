int estado1;
int estado2;
void setup() {
  // put your setup code here, to run once:
pinMode(2, INPUT);
pinMode(4, INPUT);
pinMode(13, OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  estado1=digitalRead(2);
  estado2=digitalRead(4);
  if ((estado1==0 || estado2==0) && (estado1==1 || estado2==0) && (estado1==0 || estado2==1))   
  {
    digitalWrite(13,LOW);
  }
  else
  {
    digitalWrite(13,HIGH);
  }
}

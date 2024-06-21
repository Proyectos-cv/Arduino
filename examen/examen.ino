int estado1;
int estado2;
int estado3;
void setup() {
  // put your setup code here, to run once:
pinMode(3,INPUT);
pinMode(2,INPUT);
pinMode(6,INPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
estado1=digitalRead(6);
estado2=digitalRead(2);
estado3=digitalRead(3);
if (estado1==1 && estado2==1 && estado3==1)
{
  digitalWrite(5,HIGH);
}
if(estado1==1 && estado2==1 && estado3==0)
{
digitalWrite(5,HIGH);
}
if(estado1==1 && estado2==0 && estado3==1) 
{
digitalWrite(4,HIGH);
}
if(estado1==1 && estado2==0 && estado3==0) 
{
digitalWrite(4,HIGH);
}
if(estado1==0 && estado2==0 && estado3==1) 
{
digitalWrite(4,HIGH);
}
else
{
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
}
}

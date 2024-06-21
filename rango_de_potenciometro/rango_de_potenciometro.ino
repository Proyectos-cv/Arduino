long valor;
void setup() {
  // put your setup code here, to run once:
pinMode(A1,OUTPUT);
pinMode(A2,OUTPUT);
pinMode(A3,OUTPUT);
pinMode(A4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  valor=analogRead(A0);
  //o255, 256-511, 512- 767, 768-123
  if (valor<255)
{
  analogWrite(A1,valor);
//analogWrite(A1,valor/4);
 // delay(50);
}
 if ((valor<511)&&(valor>256))
{
  analogWrite(A2,valor);
//analogWrite(A1,valor/4);
 // delay(50);
} if ((valor<767)&&(valor>512))
{
  analogWrite(A3,valor);
//analogWrite(A1,valor/4);
 // delay(50);
} if ((valor<1023)&&(valor>768))
{
  analogWrite(A4,valor);
//analogWrite(A1,valor/4);
 // delay(50);
}
else
{
   analogWrite(A2,LOW);
    analogWrite(A3,LOW);
     analogWrite(A4,LOW);
     analogWrite(A1,LOW);
}

  
  
 // analogWrite(A2,valor/4);
  //delay(50);
  
  //analogWrite(A3,valor/4);
  //delay(50);

  //analogWrite(A4,valor/4);
//  delay(50);
}

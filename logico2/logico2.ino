int estado1;
int estado2;
void setup() {
  // put your setup code here, to run once:
pinMode(2, INPUT);
pinMode(7,INPUT);
pinMode(12, OUTPUT);
pinMode(8,OUTPUT); 
}


void loop() {
  // put your main code here, to run repeatedly:
  estado1=digitalRead(2);
  estado2=digitalRead(7);
  if ((estado1==1)&&(estado2==1))   
  {
    digitalWrite(8,LOW);
    digitalWrite(12,HIGH);
    
  }
  else if ((estado1==0)&&(estado2==1))   
  {
   digitalWrite(12,LOW);    
    digitalWrite(8,HIGH);
    
  }
  else if ((estado1==1)&&(estado2==0))   
  {
    digitalWrite(12,LOW);
    digitalWrite(8,HIGH);
    
  }  
  else
  {
    digitalWrite(12,LOW);
    digitalWrite(8,LOW);
    
  }
}

int a=0;
int b=0;
int c=0;
int d=0;
int e=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(2 ,OUTPUT);
pinMode(4 ,OUTPUT);
pinMode(7 ,OUTPUT);
pinMode(8 ,OUTPUT);
pinMode(12 ,OUTPUT);

Serial.println("1. sala.");
Serial.println("2. cocina.");
Serial.println("3. recamara.");
Serial.println("4. comedor.");
Serial.println("5. patio.");
}

void loop() {
  // put your main code here, to run repeatedly:
int x;
x=Serial.parseInt();
switch(x)
{
  case 1:
  {
     if (a==0)
     {
        digitalWrite(2,HIGH);
        a=1;       
     }
     else
    {
      digitalWrite(2,LOW);
      a=0;
    }
      break;
  }
   case 2:
  {
if (b==0)
     {
        digitalWrite(4,HIGH);
        b=1;         
     }
    else
    {
      digitalWrite(4,LOW);
      b=0;
    }
      break;
  }  case 3:
  {
if (c==0)
     {
        digitalWrite(7,HIGH);
        c=1;         
     }
    else
    {
      digitalWrite(7,LOW);
      c=0;
    }
      break;
  }  case 4:
  {
  if (d==0)
     {
        digitalWrite(8,HIGH);
        d=1;         
     }
    else
    {
      digitalWrite(8,LOW);
      d=0;
    }
      break;
  }  case 5:
  {
if (e==0)
     {
        digitalWrite(12,HIGH); 
        e=1;        
     }
    else
    {
      digitalWrite(12,LOW);
      e=0;
    }
      break;
  }
}
}

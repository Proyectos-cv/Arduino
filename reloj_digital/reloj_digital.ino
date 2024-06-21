int segpin  [] = {2,3,4};
int minpin  [] = {5,6,7};
int horpin  [] = {8,9,10};

int segtam=sizeof(segpin)/2;//2 bytes de int
int mintam=sizeof(minpin)/2;
int hortam=sizeof(horpin)/2;

int seg=0;
int min=0;
int hor=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  //int t= sizeof(segpin)/sizeof(segpin[0]);
 // Serial.print(t);
  for (int i=0;i<segtam;i++)
  {
    pinMode(segpin[i],OUTPUT);
  }
  for (int i=0;i<mintam;i++)
  {
    pinMode(minpin[i],OUTPUT);
  }
  for (int i=0;i<hortam;i++)
  {
    pinMode(horpin[i],OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  seg++;

  if(seg>6)
  {
    seg=0;
    min++;
    if (min>6)
    {
      min=0;
      hor++;
      if (hor>6)
      {
        hor=0;
      }
    }
  }
  dseg();
  dmin();
  dhor();

  delay(500);
}

void dseg()
{
  for(int i=segtam-1;i>=0;i--)
  {
    int segactual = bitRead(seg,i);
    digitalWrite(segpin[i],segactual);
  }
}

void dmin()
{
  for(int i=mintam-1;i>=0;i--)
  {
    int minactual = bitRead(min,i);
    digitalWrite(minpin[i],minactual);
  }
}

void dhor()
{
  for(int i=hortam-1;i>=0;i--)
  {
    int horactual = bitRead(hor,i);
    digitalWrite(horpin[i],horactual);
  }
}
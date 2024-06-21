long valor;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  Serial.println("inicio de setch - valores del potenciometro");
}

void loop() {
  // put your main code here, to run repeatedly:
valor =analogRead(A0);
Serial.print("el valor es : ");
Serial.println(valor);
delay(1000);
}

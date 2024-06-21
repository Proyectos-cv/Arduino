int tecla; // definimos la variable tecla donde guardaremos la lectura de la tecla.
int Pinled = 13; // definimos la variable Pinled que corresponderá la pin 5 donde conectaremos el led.
 
void setup(){
  Serial.begin(9600);  //inicializamos el puerto serie.
  pinMode(Pinled, OUTPUT);  // Definimos el pin 5 como salida.
}
 
void loop(){
  //si hay datos disponibles por el puerto serial hacemos la lectura.
  if (Serial.available()>0){
    tecla=Serial.read(); // leemos los datos y los guardamos en la variable tecla
    if(tecla=='a') {
      digitalWrite(Pinled, HIGH); // si presionamos la tecla "a" encendemos el led.
      Serial.println("ON"); // imprimimos por pantalla "ON" de encendido.
    }
    if(tecla=='b') {
      digitalWrite(Pinled, LOW); // si presionamos la tecla "b" apagamos el led.
      Serial.println("OFF"); // imprimimos por pantalla "OFF" de apagado.
    }
  }
}
// Autor: Alejandro Mancilla Huanca - (+591)65537461
// Contacto: alejandro.mancilla.umsa@gmail.com
//
const byte ledPin = 13; //definimos el pin que tendra el led
const byte interruptPin = 2; // definimos el pin 2 que acepta interrupciones
volatile byte state = LOW; // iniciamos un estado para controlar el estado del led

void setup() {
  pinMode(ledPin, OUTPUT);  //definimos ledPin como pin de salida
  pinMode(interruptPin, INPUT_PULLUP); //interruptPin como pin entrada con resistencia
  attachInterrupt(digitalPinToInterrupt(interruptPin), blink, CHANGE);// INTERRUPCION
}


void blink() { // funcion que se llamara al ser ejecutada la interrupcion
  state = !state; // cambio de estado del led
}


delay(20);


void loop() {
  digitalWrite(ledPin, state); // define el estado del led
}



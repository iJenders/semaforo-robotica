//Declaracion de los LEDs dependiendo del pin donde este conectado
int Led1 = 7;
int Led2 = 6;
int Led3 = 13;
int Led4 = 12;
int Led5 = 11;
int Led6 = 10;

int Led7 = 9;
int Led8 = 8; 
int Led9 = 5;
int Led10 =4;
int Led11 =3;
int Led12 =2;


// Funciones para encender leds (Así evitamos confundirnos con los argumenos)

void EncenderLedVerde1()
{
	digitalWrite(Led1, HIGH);
}


void EncenderLedVerde2()
{
	digitalWrite(Led5, HIGH);
}


void EncenderLedVerde3()
{
	digitalWrite(Led9, HIGH);
}


void EncenderLedAmarillo1()
{
	digitalWrite(Led2, HIGH);
}


void EncenderLedAmarillo2()
{
	digitalWrite(Led6, HIGH);
}


void EncenderLedAmarillo3()
{
	digitalWrite(Led10, HIGH); 
}

void EncenderLedRojo1()
{
	digitalWrite(Led3, HIGH);
}

void EncenderLedRojo2()
{
	digitalWrite(Led7, HIGH);
}

void EncenderLedRojo3()
{
	digitalWrite(Led11, HIGH); 
}


void EncenderLedAzul1()
{
	digitalWrite(Led4, HIGH);
}


void EncenderLedAzul2()
{
	digitalWrite(Led8, HIGH);
}


void EncenderLedAzul3()
{
	digitalWrite(Led12, HIGH); 
}

//Funciones para apagar leds para evitar redundancia de codigo

void ApagarTodosLeds(){
	digitalWrite(Led1, LOW);
	digitalWrite(Led2, LOW);
	digitalWrite(Led3, LOW);
	digitalWrite(Led4, LOW);
	digitalWrite(Led5, LOW);
	digitalWrite(Led6, LOW);
	digitalWrite(Led7, LOW);
	digitalWrite(Led8, LOW);
	digitalWrite(Led9, LOW);
	digitalWrite(Led10, LOW);
	digitalWrite(Led11, LOW);
	digitalWrite(Led12, LOW);
}


// Ciclo de vida del arduino

void setup()
{
  for (int i = 0; i <= 13; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop()
{
    digitalWrite(2, HIGH);
    delay(1000);
    digitalWrite(2, LOW);
    delay(1000);
}
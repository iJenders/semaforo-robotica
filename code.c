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
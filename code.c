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
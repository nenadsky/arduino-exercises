// pinovi na koje su povezane diode, obavezno moraju da podrzavaju PWM
const int led1 = 9;
const int led2 = 10;
const int led3 = 11;

// pinovi na koje su povezani tasteri, moraju da budu 2 i 3 zbog koriscenja prekida  (interrupt-a)
const int tasterUvecaj = 3;
const int tasterUmanji = 2;

// pocetno stanje osvetljaja dioda
// volatile - jer se vrednost menja u funkcijama prekida
volatile int ukljuci = LOW;

void setup() {
  // Pinovi na koje su povezane diode se definisu da rade kao izlazi
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

  // Pinovi na koje su povezani tasteri se definisu da rade kao ulazi
  // i to realizovani preko pullup otpornika
  pinMode(tasterUvecaj, INPUT);
  pinMode(tasterUmanji, INPUT);

  // pocetno stanje dioda - iskljucene (ne svetle);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);

  // Osluskivanje stanja tastera - pritisak bilo kog tastera poziva odgovarajucu funckiju
  attachInterrupt(digitalPinToInterrupt(tasterUvecaj), ukljuciDiode, RISING);
  attachInterrupt(digitalPinToInterrupt(tasterUmanji), iskljuciDiode, RISING);
}

void loop()
{
  digitalWrite(led1, ukljuci);
  digitalWrite(led2, ukljuci);
  digitalWrite(led3, ukljuci);
}

void ukljuciDiode() {
  ukljuci = HIGH;
}

void iskljuciDiode() {
  ukljuci = LOW;
}

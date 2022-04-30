// pinovi na koje su povezane diode, obavezno moraju da podrzavaju PWM
const int led1 = 9;
const int led2 = 10;
const int led3 = 11;

// pinovi na koje su povezani tasteri, moraju da budu 2 i 3 zbog koriscenja 
// prekida  (interrupt-a)
const int tasterUvecaj = 3;
const int tasterUmanji = 2;

// pocetni intenzitet osvetljaja dioda
// volatile - jer se vrednost menja u funkcijama prekida
volatile int osvetljenjeProc = 0;
int osvetljenjePWM;

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

  // Osluskivanje stanja tastera - pritisak bilo kog tastera poziva odgovarajucu 
  // funckiju [povecajNivoOsvetljenosti ili smanjiNivoOsvetljenosti]
  attachInterrupt(digitalPinToInterrupt(tasterUvecaj), povecajNivoOsvetljenosti, RISING);
  attachInterrupt(digitalPinToInterrupt(tasterUmanji), smanjiNivoOsvetljenosti, RISING);

}

void loop()
{
  osvetljenjePWM = map(osvetljenjeProc, 0, 100, 0, 255);
  diodeTrepere();
}

void povecajNivoOsvetljenosti() {
  if (osvetljenjeProc < 100) osvetljenjeProc += 10;
}

void smanjiNivoOsvetljenosti() {
  if (osvetljenjeProc > 0) osvetljenjeProc -= 10;
}

void diodeTrepere() {
  analogWrite(led1, osvetljenjePWM);
  analogWrite(led2, osvetljenjePWM);
  analogWrite(led3, osvetljenjePWM);
  delay(200);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  delay(200);
}

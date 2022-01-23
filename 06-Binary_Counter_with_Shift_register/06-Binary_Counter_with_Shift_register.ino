// HC595
int CLOCK = 12;
int LATCH = 11;
int DATA = 10;
int counter = 1;

//podesavanje pinova kao izlaznih kako bi se kontrolisao registar
//setting pins as output to control the register
void setup(){ 
  pinMode(LATCH, OUTPUT);
  pinMode(CLOCK, OUTPUT);
  pinMode(DATA, OUTPUT);
}

void loop() { 
  digitalWrite(LATCH, LOW);
  shiftOut(DATA, CLOCK, MSBFIRST, counter);
  digitalWrite(LATCH, HIGH);
  delay(500);
  counter++;
  if (counter >= 256) counter=1;
}

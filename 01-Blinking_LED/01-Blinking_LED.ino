
#define led1 2
#define led2 5

int state=HIGH;

 
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}


void loop() {
  digitalWrite(led1, state);
  digitalWrite(led2, !state);
  delay(1000);
  state=!state;
}

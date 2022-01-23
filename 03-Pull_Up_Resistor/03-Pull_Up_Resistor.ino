//
// Pull up resistor
//
int pushButton = 2;
int buttonState = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(pushButton, INPUT);
}

void loop()
{
  int buttonState = digitalRead(pushButton);
  Serial.println(buttonState);
  if(!btn) Serial.println("Button pushed!");
  delay(200);
}

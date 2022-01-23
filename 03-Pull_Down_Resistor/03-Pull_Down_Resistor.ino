//
// Pull down resistor
//
#define BUTTON 3

void setup()
{
  Serial.begin(9600);
  pinMode(BUTTON, INPUT);
}

void loop()
{
  int btn = digitalRead(BUTTON);
  Serial.println(btn);
  if(btn) Serial.println("Button pushed!");
  delay(200);
}

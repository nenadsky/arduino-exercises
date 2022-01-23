//
// Analog pins explained
//
#define LED 10
#define POT A0

void setup()
{
  pinMode(LED, OUTPUT);
}

void loop()
{
  int sensorValue = analogRead(POT);
  int ledPWM = map(sensorValue, 0, 1023, 0, 255);
  analogWrite(LED, ledPWM);
  delay(200);
}

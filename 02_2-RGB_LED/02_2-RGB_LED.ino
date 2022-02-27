int red = 11; 
int green = 10; 
int blue = 9; 

void setup() { 
  pinMode(red, OUTPUT); 
  pinMode(green, OUTPUT); 
  pinMode(blue, OUTPUT); 
} 

void loop() { 
  analogWrite(red, random(0, 255)); 
  analogWrite(green, random(0, 255)); 
  analogWrite(blue, random(0, 255)); 
  delay(1000); 
} 

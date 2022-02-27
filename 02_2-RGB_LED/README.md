# РГБ ЛЕД

## Опис

Циљ овог пројекта је демонстрација принципа рада РГБ ЛЕД диоде.

## Шема
![Шема кола](https://github.com/nenadsky/arduino-exercises/blob/main/02_2-RGB_LED/RGB_LED_circuit.png "Шема кола")

## Скица - Код

```int red = 11; 
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
```
## Објашњење скице

```
int red = 11; 
int green = 10; 
int blue = 9; 
```
1. Дефинисање целобројних променљивих *red, green* и *blue* које представљају број пина на који је повезана одговарајућа ножица диоде.

```
void setup() {
  pinMode(red, OUTPUT); 
  pinMode(green, OUTPUT); 
  pinMode(blue, OUTPUT);
}
```
2. У конфигурационом делу (функција *setup()* ) се дефинишу почетни услови при покретању извршења скице. У овом случају се пин број 9, 10 и 11 дефинишу као излази.
```
void loop() { 
  analogWrite(red, random(256)); 
  analogWrite(green, random(256)); 
  analogWrite(blue, random(256)); 
  delay(1000); 
} 
```
3. У делу петље се најпре генерише случајни број функцијом *random* у опсегу између 0 и 255. РГБ диода је везана на дигиталне улазе који подржавају PWM (Модулацију Ширине Импулса), па ће свака диоде у кућишту РГБ диоде светлети неком насумично генерисаним интензитетом и тиме омогућити диоди да светли насумично генерисаном бојом.

[Ардуино документација](https://create.arduino.cc/projecthub/muhammad-aqib/arduino-rgb-led-tutorial-fc003e)

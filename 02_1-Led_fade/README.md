# ЛЕД - аутоматска (програмска) контрола јачине светлости диоде

## Опис

Циљ овог пројекта је демонстрација принципа рада функције *analogWrite()* приликом постепеног повећавања и смањивања јачине светлости ЛЕД диоде. Функција користи Модулацију Ширине Импулса (енг. Pulse Width Modulation - PWM) за контролу јачине светлости диоде, на Арудину су ови пинови (пинови који подржавају PWM обележени знаком "~".

*АnalogWrite()* функција има два параметра, први је пин на који је повезана диода, а други вредност између 0 и 255. Вредност 0 одговара 0% ширине импулса, док 255 одговара вредности од 100% ширине импулса. Мењајући ову вредност у границама од 0 до 255 диода постепено почиње да светли. Смањивање вредности од 255 до 0 врши постепено слабљење светлости диоде до њеног искључења.

*НПР.*
1. 0   => јачина светлости диоде 0%
2. 128 => јачина светлости диоде 50%
3. 255 => јачина светлости диоде 100%

## Шема
![Шема кола](https://github.com/nenadsky/arduino-exercises/blob/main/02_1-Led_fade/led-fade-circuit.png "Шема кола")

## Скица - Код

```int led = 6;
int brightness = 0;
int fadeAmount = 5;

void setup() {
  pinMode(led, OUTPUT);
}

void loop () {
  analogWrite(led, brightness);
  brightness = brightness + fadeAmount;
  if( brightness < 1 || brightness > 255)
  {
    fadeAmount = -fadeAmount;
  }
  delay(100);
}
```
## Објашњење скице

```
int led = 6;
int brightness = 0;
int fadeAmount = 5;
```
1. Дефинисање целобројних променљивих *led, brightness* и *fadeAmount*. Прва представља број пина на који је повезана диода (у овом примеру је то пин 6), друга представља јачину светлости којом светли диода (почетна вредност 0) и трећа представља инкремент којим се повећава или смањује јачина светлости диоде.

```
void setup() {
  pinMode(led, OUTPUT);
}
```
2. У конфигурационом делу (функција *setup()* ) се дефинишу почетни услови при покретању извршења скице. У овом случају се пин број 6 (што је вредност смештена у променљиву *led*) дефинише као излаз.
```
analogWrite(led, brightness);
```
3. Функцијом *analogWrite()* на пину 6 "пишемо" вредност променљиве *brightness*. Како је почетна вредност променљиве 0, диода неће светлети.
```
brightness = brightness + fadeAmount;
```
4. Врши се инкрементација вредности променљиве *brightness* за вредност *fadeAmount* а то је 5.

| Итерација  |  brightness |
| :---: | :---: |
|    0      |      0  |
|    1      |      5  |
|    2      |      10 |
|    3      |      15...|

```
if( brightness < 1 || brightness > 255)
  {
    fadeAmount = -fadeAmount;
  }
```
5. Како су дозвољене вредности другог параметра функције *analogWrite()* у опсегу [0,255] морамо имати механизам који не дозвољава испадање из овог опсега. На почетку извршавања скице, вредност променљиве расте од 0 до 255 са кораком 5, чим се пређе горња граница (тада ће услов иф блока бити тачан), мења се знак корака из позитивног у негативни, тако да је сада вредност променљиве *fadeAmount* -5. Након промене знака, вредност променљиве *brightness* ће се смањивати са кораком -5, док не достигне вредност < 0 када ће услов у "иф" блоку бити поново тачан и поново ће се извршити промена знака променљиве *fadeAmount*.
```
delay(100);
```
6. Временско кашњење између две итерације од 100 милисекунди.

[Ардуино документација](https://docs.arduino.cc/built-in-examples/basics/Fade)

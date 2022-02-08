***Binary counter and shift register 74HG595***

At first glance, with the Arduino UNO microcontroller (μcontroller) it can be concluded that the number of digital pins is insufficient for a more serious project. The Arduino Mega offers 54 digital pins, so you can consider purchasing such a microcontroller. Another solution that allows you to increase the number of pins is to use shift registers. In this case, we are talking about the shift register 74HC595. How this is achieved, how a scroll register works and how to use it with an Arduino UNO controller is the topic of this video tutorial and text.

**Required components**

    1. LED's (8. pcs)

    2. Resistors 220Ω (8 pcs)

    3. Shift register 74HC595

**Sketch explanation**

*Definition section*

The variables CLOCK, LATCH and DATA are defined with values 12, 11 and 10 (respectively). The names of the variables represent the pins on the integrated circuit to which the Arduino UNO will be connected, and their values represent the digital pins of the Arduino. The counter variable represents a counter whose initial value is 1.

*Setup section*

The CLOCK, LATCH, and DATA pins (12, 11, and 10) are defined as the output pins used to control the shift register itself. CLOCK represents the clock pin of the register, LATCH is the pin which (when active) displays the data stored in the register on the output pins. The DATA pin is the one with which we send data bit by bit and place it in the register.s

*Loop section*

>digitalWrite(LATCH, LOW);

the LATCH pin (11) is set to logic 0, which turns off the output pins of the register, so there is no signal at the output;

>shiftOut(DATA, CLOCK, MSBFIRST, counter);

This function writes one bit from the DATA pin (10) to the shift register with the clock CLOCK (12) in the order defined by the third parameter MSBFIRST, while the last parameter is the data that is written to the register - counter.

>digitalWrite(LATCH, HIGH);

the LATCH pin (11) is placed on logic 1, allowing data to be displayed on the output pins of the register;

>counter++;

the counter value increases

>if (counter >= 256) counter=1;

if the value of the counter is greater than or equal to 256, then its value is set to 1 (the counter starts counting from the number 1 again).

***More @ https://blog.nenadsky.com/en/binarni-brojac-i-pomeracki-registar-74hc595/***

***Српски - Serbian @ https://blog.nenadsky.com/binarni-brojac-i-pomeracki-registar-74hc595/***

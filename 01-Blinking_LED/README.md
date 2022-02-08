
**Flashing LED - Arduino project**

It is a basic, beginner project that aims to get acquainted with the pins of the Arduino, how they are used as outputs to control the operation of the electrical circuit. In this case, this control is reduced to alternating on and off LEDs in a certain time interval.

**Required components**

For such a simple project, few components are needed, in this case two LED diodes. Resistors, one for each diode - the resistance values are 220Ω.

**Sketch explanation**

In the first three rows of the sketch, we define two constants led1 with value of 2 and led2 with value of 5 and one integer variable state having value HIGH. A HIGH value indicates that the output of the Arduino pin is at the supply voltage value (5V or 3.3V).

In the configuration function, we define how the Arduino pins work, as inputs or outputs. We achieve this by using the pinMode function which receives two arguments. The first is the value, perhaps better called the name, of the pin we are working with, and the second is the pin mode, input / output using the INPUT / OUTPUT value.

The loop function, one that repeats until the Arduino power is cut off, alternately turns the LEDs on and off using the digitalWrite function, which also has two arguments. The first, as with the previous function, defines the pin we are working with, and the second sets the voltage value on the pin to a high or low value, ie HIGH / LOW. Initially, the value of the state will be HIGH for led1 and LOW for led2.

After a delay of 1000 milliseconds, determined by the delay(1000) function, the value of the variable state changes to LOW (because it is the opposite value of HIGH) by the negation operator - "!".

The negation operator was also used with the digitalWrite function to provide the opposite value for the state and thus allow the LEDs to alternately turn on and off. In a function call, using the negation operator does not change the value of the state.

***More on https://blog.nenadsky.com/en/hello-arduino-world-trepcuci-led/***

***Српски - Serbian @ https://blog.nenadsky.com/hello-arduino-world-trepcuci-led/***

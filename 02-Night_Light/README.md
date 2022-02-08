***Night light - Arduino project***

Circuit that turns the night light on or off based on the brightness of the room. 

**Required components**

Required components are 2 resistors. Resistance values are 220Ω for LED protection and 10kΩ and a photoresistor.

**Sketch explanation**

*Definition section*

In the definition section, we define two constants light and sensor. The constant light has a value of 13 and represents information about the pin we use to control the LED. While the constant sensor has the value A0 and represents the input pin to the Arduino to which information about the brightness of the room arrives.

*Setup section*

A light constant with a value of 13 is defined as an output, while a sensor constant is defined as an input using the function pinMode. This function has two arguments, the first is the pin we set, and the second is the mode of operation, ie input (INPUT) or output (OUTPUT). The second argument must be written in capital letters!

*Loop section*

The measurement is performed and depending on the measurement value (in this case we examine whether the brightness is less or greater than 300lxwe send the signal ON (HIGH) or OFF (LOW) to the output defined by the constant light . The value of the brightness of the room is obtained using the function analogRead(sensor). It can literally be read as a read value from an analog input defined by a constant sensor. Using the digitalWrite function, we send a HIGH or LOW signal to the output defined by the light constant, depending on the fulfillment of the conditions in the branching block.

***More @ https://blog.nenadsky.com/en/nocno-svetlo-arduino-projekat/***

***Српски - Serbian @ https://blog.nenadsky.com/nocno-svetlo-arduino-projekat/***

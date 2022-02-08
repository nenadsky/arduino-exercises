
***Principle of operation of analog pins of Arudino Uno***

The voltage range that can be applied to the analog pins (A0-A5) is between 0 and 5V. The input signals are fed to the A / D converters of the internal microcontroller, which convert the analog signals to the corresponding digital numbers and can take values ​​between 0 and 1023. The analog signal of 0V corresponds to a digital value of 0, while the voltage of 5V corresponds to a value of 1023. This means that the resolution (sensitivity) is slightly less than 50mV (digital value 1 is about 50mV of input voltage).

A4 and A5 pins are used as SDA and SCL lines for I2C serial communication.

**Required components**

1. Potentiometer

2. LED diode

3. Resistor 220Ω (for LED protection)

**Sketch explanation**

*Definition section*

Two constants "LED" and "POT" are defined with the values "10" and "A0". A value of "10" corresponds to pin "10" to which the LED is connected, while "A0" represents the analog input "A0" to which the middle terminal of the potentiometer is connected.
Setup section

In the configuration section, we define pin "10" as output, the syntax looks like this:

>pinMode(LED, OUTPUT)

*Loop section*

The voltage at the analog input "A0" is read by the function "analogRead (POT)" and stored in the variable "sensorValue".

The "map" function changes the range of values of the "sensorValue" variable.

>ledPWM = map(sensorValue, 0, 1023, 0, 255)

```
- sensorValue - a variable that changes the value range
- 0 (first 0) - the minimum value of the range from which we change
- 1023 - the maximum value of the range from which we change
- 0 (second 0) - minimum value of the new range
- 255 - maximum value of the new range
```

Note: the minimum values of the range can be smaller or larger than the maximum so that the "map" function can create an inverse range, e.g. [0..100] => [100..0]

With the "analogWrite" function, the diode connected to pin 10 is switched on and illuminated by the intensity defined by the variable ledPWM.

The "delay" function defines a delay of 100 milliseconds before moving on to the next iteration of the "loop" function.

***More @ https://blog.nenadsky.com/en/princip-rada-analognih-ulaza-arudina/***

***Српски - Serbian @ https://blog.nenadsky.com/princip-rada-analognih-ulaza-arudina/***

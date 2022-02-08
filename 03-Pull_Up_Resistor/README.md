
***The concept and application of "pull up" and "pull down" resistors***

When using a microcontroller, when the pin we use as an input is not set to "HIGH" or "LOW" state, but its state "floats" between these two values, we say that it is in a state of high impedance. This is a condition that we definitely want to avoid because it leads to irregularities (unpredictability) in work and that is why we introduce a concept like"pull-up"and"pull-down"resistors. These are not special types of resistors, but resistors that allow us to maintain the desired state of the logic circuit regardless of the conditions. Arduino pin is connected via this resistor to a constant value, either to the + 5V power supply or to the GND (ground). In the first case it is a "pull-up", while in the second we are talking about a "pull-down" resistor.

**Required components**

Push button, resistors

**Sketch explanation**

*"Pull up" sketch*

The push button is connected to pin 2 which is configured to operate in "INPUT_PULLUP" mode. A serial connection speed of 9600 baud has also been defined. The variable "buttonState" saves the state of the push button - it will store information about whether the key was pressed or not. As said, with a "pull up" resistor, the pin is tied to the "HIGH" level, when the key is pressed it is tied to ground, ie set to "LOW". When the button is pressed the buttonState is set to the value "0". The statement in the "if" structure will then be true and the message "Button pushed!" Will be printed.

*"Pull down" sketch*

The key is connected to pin 2 which is configured to operate in "INPUT_PULLUP" mode. A serial connection speed of 9600 baud has also been defined. The variable "buttonState" saves the state of the push button - it will store information about whether the button was pressed or not. As said, with the "pull down" resistor, the pin is tied to the "LOW" level, when the button is pressed it is connected to the power source, ie set to "HIGH". When the button is pressed the buttonState is set to the value "1". The statement in the "if" structure will then be true and the message "Button pushed!" Will be printed.

***More @ https://blog.nenadsky.com/en/pojam-pull-up-i-pull-down-otpornika/***

***Српски - Serbian @ https://blog.nenadsky.com/pojam-pull-up-i-pull-down-otpornika/***

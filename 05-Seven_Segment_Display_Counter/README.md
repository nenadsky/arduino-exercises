
***Seven-segment LED display***

The seven-segment display (single-digit) is one of the electronic components intended for displaying numerical values (integers from 0 to 9). The designation of the component that will be used in the exercise is 5161AS.

**Required components**

    1. Seven-segment display
    2. 8 resistors - 220Ω or 1kΩ

**Sketch explanation**

*Definition section*

For each segment from "a" to "g", an integer variable is defined that corresponds to the number of pin to which it is connected. In this example, all segments are connected in order between pins 4 and 11.

*Setup section*

In the configuration section instead of writting 8 rows og pinMode ([a, b, ... g], OUTPUT); a "for" loop was used whose initial value is 4 (which corresponds to pin number 4) and the final 11 (which corresponds to pin number 11) and are defined as output.

*Loop section*

In the loop section, there are function calls, where one function defines which one of the segments will turn on for each number from 0 to 9 individually. Function digital_0 (); will print 0, digital_1 (); will print 1 and so on until the number 9.

***More @ https://blog.nenadsky.com/en/sedmosegmentni-led-displej-5161as/***

***Српски - Serbian @ https://blog.nenadsky.com/sedmosegmentni-led-displej-5161as/***

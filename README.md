# Arduino Push Button Toggle

Project Overview
This project demonstrates how to toggle an LED ON and OFF using a single push button.
Each button press changes the LED state.

Components Used
- Arduino Uno
- Push Button
- LED
- 220Ω Resistor
- Jumper Wires

Circuit Description
The push button is connected between digital pin 2 and GND.
The internal pull-up resistor is enabled in Arduino.
An LED is connected to digital pin 13 through a current limiting resistor.

Working Principle
The program stores the previous button state and compares it with the current state.
When a valid button press is detected, the LED state is toggled.
A small delay is used for button debouncing.

Learning Outcome
- Button toggle logic
- State memory concept
- Internal pull-up usage
- Simple debouncing

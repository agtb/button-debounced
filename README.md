# ButtonDebounced

A library for simple debouncing of buttons.

## Description

Enables button presses to be cleanly detected without additional pull-up and pull-down resistors by using onboard internal pull-up resistors.

Generally speaking, it's [good practice to steer an input](https://www.arduino.cc/en/Tutorial/Foundations/DigitalPins#pullup-resistors-with-pins-configured-as-input) to ground with a pulldown resistor or the high logic level with a pullup resistor (e.g. Arduino 5V, ESP8266 3.3V). However, if you just want to add a simple button on an Arduino or ESP8266 you can use GPIO 0-15, which have built-in pull-up resistors.

I find this approach useful for quick test circuits when connecting buttons using only DuPont jumper wires instead of using breadboards or soldering. This button debouncing library defaults to using the built-in pullup resistors with the `INPUT_PULLUP` pin mode. 

![TODO alt text](https://github.com/agtb/button-debounced/blob/main/extras/button-debounced.png?raw=true)

## Getting Started

### Dependencies

* Developed and tested on an ESP8266 but should work on similar devices e.g. Arduino.

### Installing

* [Download the library](http://github.com/agtb/button-debounced/archive/main.zip)
* In the Arduino IDE, Sketch | Include Library | Add .ZIP Library…

### Using

* See the [examples](https://github.com/agtb/button-debounced/tree/main/examples) for recommended usage.

## Help

Feel free to open an [issue](https://github.com/agtb/button-debounced/issues) for help!

## Authors

Alistair Buckle agtb@agtb.net

## Changelog

* 0.1.0
    * Initial release.

## License

This project is licensed under the GNU General Public License v3.0 - see the LICENSE file for details.

## Acknowledgments

* [Arduino Debounce example](https://www.arduino.cc/en/Tutorial/BuiltInExamples/Debounce)


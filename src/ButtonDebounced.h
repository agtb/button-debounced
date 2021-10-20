/*
ButtonDebounced

Copyright (C) 2021 Alistair Buckle

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "Arduino.h"

#ifndef ButtonDebounced_h
#define ButtonDebounced_h

#define BUTTON_DEFAULT_PIN 5 // ESP8266 label D1 
#define BUTTON_DEBOUNCE_TIME 50 // time to wait for button press/release in milliseconds

class ButtonDebounced
{
  public:
  
    ButtonDebounced(int pin = BUTTON_DEFAULT_PIN, byte mode = INPUT_PULLUP, int debounce = BUTTON_DEBOUNCE_TIME);
    bool debounce();
  
  private:
  
    int _delay;
    bool _last;
    byte _mode;
    int _pin;
    bool _read;
    bool _state;
    unsigned long _time;
};

#endif

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
#include "ButtonDebounced.h"

ButtonDebounced::ButtonDebounced(int pin, byte mode, int delay)
{
  _delay = delay;
  _pin = pin;
  pinMode(pin, mode);
}

bool ButtonDebounced::debounce()
{
  _read = digitalRead(_pin);
  
  if (_read != _last)
  {
    _time = millis(); // reset debounce timer
  }
  
  if ((millis() - _time) > _delay) { 
    if (_read != _state) {
      _state = _read;
      if (_state == LOW) {
        // button pressed
        return true;
      }
    }
  }

  _last = _read;
  
  // button not pressed
  return false;
}

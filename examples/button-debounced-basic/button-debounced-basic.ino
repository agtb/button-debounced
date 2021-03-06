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

#include <ButtonDebounced.h> // library: https://github.com/agtb/button-debounced

ButtonDebounced *button;

void setup()
{
  Serial.begin(115200);

  button = new ButtonDebounced(/*pin*/ 5, /*mode*/ INPUT_PULLUP, /*delay*/ 50);
}

void loop()
{
  if (button->debounce() == true) {
    Serial.println("Button pressed!");
  }
}

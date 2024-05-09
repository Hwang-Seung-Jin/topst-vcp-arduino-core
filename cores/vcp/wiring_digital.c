/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include "Arduino.h"
//hsj #include "PinConfigured.h"


#ifdef __cplusplus
extern "C" {
#endif


//hsj extern uint32_t g_anOutputPinConfigured[MAX_NB_PORT];

void pinMode(uint32_t ulPin, uint32_t ulMode)
{
   GPIO_Config(GPIO_GPK(ulPin), (GPIO_FUNC(0UL) | ulMode));
}

void digitalWrite(uint32_t ulPin, uint32_t ulVal)
{
  //digitalWriteFast(digitalPinToPinName(ulPin), ulVal);
  GPIO_Set(GPIO_GPK(ulPin), ulVal);
}

int digitalRead(uint32_t ulPin)
{
  return digitalReadFast(digitalPinToPinName(ulPin));
}

void digitalToggle(uint32_t ulPin)
{
  digitalToggleFast(digitalPinToPinName(ulPin));
}

#ifdef __cplusplus
}
#endif

/************************************************************************
Copyright 2018 Ciira wa Maina
Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

**************************************************************************/
#include "select_program.h"

#if PROGRAM ==  MOTION_DETECT

#include "mbed.h"

Ticker clear_counter;
InterruptIn motion_sensor(D6);

const uint16_t MAXIMUM_DETECTIONS = (1 << 16) - 1;  // maximum number of detections expected
const uint16_t CLEAR_COUNTER_S = 1 * 60;  // clear the counter every * seconds
uint16_t number_of_detections = 0;  // detections counter

void set_counter_to_zero() {
  number_of_detections = 0;
}

void action_on_detection(void) {
  if (number_of_detections < MAXIMUM_DETECTIONS) {
    number_of_detections += 1;
    printf("\rCurrently %d detections\n",  number_of_detections);
  } else {
    printf("\rMaximum number of detections %i reached\n", MAXIMUM_DETECTIONS);
  }
}

int main() {
  motion_sensor.rise(&action_on_detection);
  clear_counter.attach(&set_counter_to_zero, CLEAR_COUNTER_S);
}

#endif

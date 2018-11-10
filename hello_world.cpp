#include "select_program.h"

#if PROGRAM == HELLO_WORLD

#include "mbed.h"

DigitalOut led(LED1);  // led to blink

int main() {
  while (1) {
    led = 1;  // turn LED1 on
    wait(1);  // wait 1 second
    led = 0;  // turn LED1 off
    wait(1);
  }
}

#endif


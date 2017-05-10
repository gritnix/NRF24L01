// Example usage for NRF24L01 library by Matthew Libhart.

#include "NRF24L01.h"

// Initialize objects from the lib
NRF24L01 nRF24L01;

void setup() {
    // Call functions on initialized library objects that require hardware
    nRF24L01.begin();
}

void loop() {
    // Use the library's initialized objects and functions
    nRF24L01.process();
}

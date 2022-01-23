
#ifdef LTE
/**
 * this is just an example of code that will only be read when
 * LTE is defined. The idea is to write parts of code
 * that are specific to our groups in defines, so
 * that the same code base can be used for both
 * groups while each having our own specific code for
 * our differences
 * 
 **/
#endif
#ifdef WiFi
#endif

#include <SoftwareSerial.h>
#include "TFMini.h"


// Setup software serial port 
SoftwareSerial mySerial(10, 11);      // Uno RX (TFMINI TX), Uno TX (TFMINI RX)
TFMini tfmini;

void setupLIDAR() {
    // Step 2: Initialize the data rate for the SoftwareSerial port
    mySerial.begin(TFMINI_BAUDRATE);

    // Step 3: Initialize the TF Mini sensor
    tfmini.begin(&mySerial);  
}

void setup() {
    // Step 1: Initialize hardware serial port (serial debug port)
    Serial.begin(115200);

    // wait for serial port to connect. Needed for native USB port only
    while (!Serial);
        
    Serial.println ("Initializing...");

    setupLIDAR();

    // initialize digital pin LED_BUILTIN as an output.
    pinMode(LED_BUILTIN, OUTPUT);
}


// the loop function runs over and over again forever
void loop() {
    // Take one TF Mini distance measurement
    uint16_t dist = tfmini.getDistance();
    uint16_t strength = tfmini.getRecentSignalStrength();

    // Display the measurement
    Serial.print(dist);
    Serial.print(" cm      sigstr: ");
    Serial.println(strength);

    // Wait some short time before taking the next measurement
    delay(25);  
}

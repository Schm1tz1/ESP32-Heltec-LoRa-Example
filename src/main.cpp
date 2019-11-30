//
// Created by Roman Schmitz on 27.11.2019.
//

#include <Arduino.h>
#include <heltec.h>
#include <WiFi.h>

#define BAND    868E6  //you can set band here directly,e.g. 868E6,915E6,433E6

void loraReceived(int packetSize) {

}

void setup() {
    Heltec.begin(true, true, true, true, BAND);
    LoRa.onReceive(loraReceived);
}
void loop() {

}
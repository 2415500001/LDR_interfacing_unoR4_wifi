#include <Arduino.h>
#define LED_PIN A0
void setup() {
    Serial.begin(9600);
    while (!Serial);
    // wait for serial port to connect. Needed for native USB
}
void loop()
{
    int ldrRaw = analogRead(pinNumber: LED_PIN);
    // map to percentage
    int lightPercent =map (ldrRaw, 0, 1023, 100, 0);
    serial.print("LDR Raw: ");
    serial.print(ldrRaw);
    serial.print(" - Light : ");
    serial.print(lightPercent);
    serial.println("%");
    delay(1000);
}

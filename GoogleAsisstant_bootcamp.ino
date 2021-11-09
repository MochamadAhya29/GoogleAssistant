#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "TacH4WBE_bz6S7Nmib70Lbw8epjJMAi2";
char ssid[] = "AndroidAPdcd2";
char pass[] = "hotspot12";

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  Blynk.run();
}

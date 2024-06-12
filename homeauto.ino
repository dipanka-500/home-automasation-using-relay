#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
char auth[] = "give your AuthToken";
char ssid[] = "give YourNetworkName";
char pass[] = "give YourPassword";
#define RELAY_PIN 2  
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  Blynk.begin(auth, ssid, pass

}

void loop() {
  // put your main code here, to run repeatedly:
  BLYNK_WRITE(V0)
{
  

  int pinValue = param.asInt();
  
  if (pinValue == 1) {
    digitalWrite(RELAY_PIN, HIGH); // Turn relay ON
  } else {
    digitalWrite(RELAY_PIN, LOW); // Turn relay OFF
  }


}
}

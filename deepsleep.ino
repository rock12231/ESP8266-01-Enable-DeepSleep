// https://www.electronicshub.org/esp8266-deep-sleep-mode/
#define ledPin 2 /**/

void setup()
{
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, HIGH);

}

void loop()
{
  digitalWrite(ledPin, LOW);
  delay(5000);
  ESP.deepSleep(5e6); /* Sleep for 5 seconds */
}

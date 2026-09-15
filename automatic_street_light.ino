// Arduino Automatic Street Light Simulation
// LDR detects light intensity and controls an LED

const int ldrPin = A0;
const int ledPin = 9;

int lightValue;
int threshold = 500;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);

  Serial.println("Automatic Street Light Simulation");
}

void loop() {
  lightValue = analogRead(ldrPin);

  Serial.print("Light Value: ");
  Serial.println(lightValue);

  if (lightValue < threshold) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Dark - Street Light ON");
  } 
  else {
    digitalWrite(ledPin, LOW);
    Serial.println("Bright - Street Light OFF");
  }

  delay(1000);
}

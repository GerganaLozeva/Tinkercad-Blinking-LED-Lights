// Define pin numbers for LEDs
const int ledBuiltin = LED_BUILTIN;  
const int ledOrange = 12;
const int ledYellow = 11;
const int ledGreen = 10;
const int ledBlue = 9;

// Define animation speed
const int animationSpeed = 400; 

void setup() {
  // Set all LED pins as OUTPUT
  pinMode(ledBuiltin, OUTPUT);
  pinMode(ledOrange, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledBlue, OUTPUT);
}

void loop() {
  digitalWrite(ledBuiltin, HIGH);
  delay(animationSpeed);
  digitalWrite(ledBuiltin, LOW);
  delay(animationSpeed);

  digitalWrite(ledOrange, HIGH);
  delay(animationSpeed);
  digitalWrite(ledOrange, LOW);
  delay(animationSpeed);

  digitalWrite(ledYellow, HIGH);
  delay(animationSpeed);
  digitalWrite(ledYellow, LOW);
  delay(animationSpeed);

  digitalWrite(ledGreen, HIGH);
  delay(animationSpeed);
  digitalWrite(ledGreen, LOW);
  delay(animationSpeed);

  digitalWrite(ledBlue, HIGH);
  delay(animationSpeed);
  digitalWrite(ledBlue, LOW);
  delay(animationSpeed);
}

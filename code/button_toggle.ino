// Push Button Toggle LED
// Button: Pin 2 (Internal Pull-Up)
// LED: Pin 13

int buttonPin = 2;
int ledPin = 13;

int ledState = LOW;        // LED current state
int buttonState;           // current button reading
int lastButtonState = HIGH; // previous button state

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  // Detect button press (HIGH -> LOW)
  if (lastButtonState == HIGH && buttonState == LOW) {
    ledState = !ledState;              // toggle LED state
    digitalWrite(ledPin, ledState);
    delay(200);                        // simple debounce
  }

  lastButtonState = buttonState;
}

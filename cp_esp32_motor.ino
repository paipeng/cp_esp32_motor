
//定义LED1管脚
#define CP_GPIO 33
#define BUTTON_PIN 26 // ESP32 GPIO16 pin connected to button's pin

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP); // set ESP32 pin to input pull-up mode
  pinMode(CP_GPIO, OUTPUT);       // set ESP32 pin to output mode
}


void loop() {
  int buttonState = digitalRead(BUTTON_PIN); // read new state
  if (buttonState == LOW) {
    Serial.println("The button is being pressed");
    digitalWrite(CP_GPIO, HIGH); // turn on
    
  } else {
    Serial.println("The button is unpressed");
    digitalWrite(CP_GPIO, LOW); // turn on
  }
}

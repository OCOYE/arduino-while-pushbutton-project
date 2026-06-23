const int pin_led_red = 5;
const int pin_pushbutton = 6;
const int pin_led_green = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin_led_red, OUTPUT);
  pinMode(pin_pushbutton, INPUT_PULLUP);
  pinMode(pin_led_green, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

    while (digitalRead(pin_pushbutton) == LOW) {
    digitalWrite(pin_led_red, HIGH);
    digitalWrite(pin_led_green, LOW);
  }

  digitalWrite(pin_led_red, LOW);

  for (int x= 0; x <= 10; x++) {
    }
    digitalWrite(pin_led_green, HIGH);
    delay(120);
    digitalWrite(pin_led_green, LOW);
    delay(120);
    
  }


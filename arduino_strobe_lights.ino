int LED1 = 0;

int LED2 = 0;

int LED3 = 0;

int LED4 = 0;

int SW1 = 0;

int SW2 = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  SW1 = digitalRead(2);
  // interruptor1 digital read in pin 2
  SW2 = digitalRead(3);
  // Interruptor2 digital read in pin -3
  LED1 = 4;
  // LED1 digital read in pin 4
  LED2 = 8;
  // LED2 digital read in pin 8
  LED3 = 6;
  // LED3 digital read in pin 6
  LED4 = 7;
  // LED4 digital read in pin 7
  if (SW1 == 0 && SW2 == 0) {
    // If SW1 and SW2 == 0 ; then all LEDS are LOW
    digitalWrite(4, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
  } else {
    if (SW1 == 0 && SW2 == 1) {
      // If SW1 ==  0 and SW2 = 1; then RED LEDS are HIGH
      // AND BLUE LEDS are LOW
      digitalWrite(4, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, HIGH);
      delay(200); // Wait for 200 millisecond(s)
      // After 2 seconds delay all LEDS are LOW
      digitalWrite(4, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      delay(200); // Wait for 200 millisecond(s)
      // After 2 seconds delay RED LEDS are High
      // AND BLUE LEDS are LOW again
      digitalWrite(4, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, HIGH);
      delay(200); // Wait for 200 millisecond(s)
      // After 2 seconds delay ALL LEDS are LOW
      digitalWrite(4, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      delay(200); // Wait for 200 millisecond(s)
      // After 2 seconds delay BLUE LEDS are HIGH
      // AND RED LEDS are LOW
      digitalWrite(4, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, LOW);
      delay(200); // Wait for 200 millisecond(s)
      // After a 2 seconds delay ALL LEDS are LOW
      digitalWrite(4, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      delay(200); // Wait for 200 millisecond(s)
      // After the delay JUST BLUE LEDS ARE HIGH
      digitalWrite(4, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, LOW);
      delay(200); // Wait for 200 millisecond(s)
      // After the delay all LEDS are LOW
      digitalWrite(4, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      delay(200); // Wait for 200 millisecond(s)
    } else {
      if (SW1 == 1 && SW2 == 0) {
        // If SW1 ==  0 and SW2 = 1; then RED LEDS are HIGH
        // AND BLUE LEDS are LOW
        digitalWrite(4, HIGH);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);
        digitalWrite(8, HIGH);
        delay(100); // Wait for 100 millisecond(s)
        // After 2 seconds delay all LEDS are LOW
        digitalWrite(4, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);
        digitalWrite(8, LOW);
        delay(100); // Wait for 100 millisecond(s)
        // After 2 seconds delay RED LEDS are High
        // AND BLUE LEDS are LOW again
        digitalWrite(4, HIGH);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);
        digitalWrite(8, HIGH);
        delay(100); // Wait for 100 millisecond(s)
        // After 2 seconds delay ALL LEDS are LOW
        digitalWrite(4, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);
        digitalWrite(8, LOW);
        delay(100); // Wait for 100 millisecond(s)
        // After 2 seconds delay BLUE LEDS are HIGH
        // AND RED LEDS are LOW
        digitalWrite(4, LOW);
        digitalWrite(6, HIGH);
        digitalWrite(7, HIGH);
        digitalWrite(8, LOW);
        delay(100); // Wait for 100 millisecond(s)
        // After a 2 seconds delay ALL LEDS are LOW
        digitalWrite(4, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);
        digitalWrite(8, LOW);
        delay(100); // Wait for 100 millisecond(s)
        // After the delay JUST BLUE LEDS ARE HIGH
        digitalWrite(4, LOW);
        digitalWrite(6, HIGH);
        digitalWrite(7, HIGH);
        digitalWrite(8, LOW);
        delay(100); // Wait for 100 millisecond(s)
        // After the delay all LEDS are LOW
        digitalWrite(4, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);
        digitalWrite(8, LOW);
        delay(100); // Wait for 100 millisecond(s)
      } else {
        if (SW1 == 1 && SW2 == 1) {
          digitalWrite(4, HIGH);
          digitalWrite(6, HIGH);
          digitalWrite(7, HIGH);
          digitalWrite(8, HIGH);
        }
      }
    }
  }
}

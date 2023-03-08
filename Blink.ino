/*
Program from Arduino "Blink" example. An LED will turn on for 1000 
milliseconds and then turn off for 1000 milliseconds 
*/

int LED= 8; 

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(LED, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second
}

/* 
This program will demonstrate a chain of LED's turning on one after the other, 
then looped back to the beginning. The sequence will start at pin13 till pin7,
then back to 13.
 */ 

int redPIN = 13; //red LED pin
int bluePIN = 12; // blue LED pin
int greenPIN = 8; // green LED pin
int yellowPIN = 7; // yellow LED pin

int onDelay = 550; 
int offDelay = 100; 

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(redPIN, OUTPUT); 
  pinMode(bluePIN, OUTPUT);
  pinMode(greenPIN, OUTPUT);
  pinMode(yellowPIN, OUTPUT);
  
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(redPIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  digitalWrite(bluePIN, LOW);  // turn the LED on (LOW is the voltage level)
  digitalWrite(greenPIN, LOW);  // turn the LED on (LOW is the voltage level)
  digitalWrite(yellowPIN, LOW);  // turn the LED on (LOW is the voltage level)
  delay(onDelay);                      // wait for a second

  digitalWrite(redPIN, LOW);  // turn the LED off (LOW is the voltage level)
  digitalWrite(bluePIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  digitalWrite(greenPIN, LOW);  // turn the LED on (LOW is the voltage level)
  digitalWrite(yellowPIN, LOW);  // turn the LED on (LOW is the voltage level)
  delay(onDelay);                      // wait for a second 

  digitalWrite(redPIN, LOW);  // turn the LED on (LOW is the voltage level)
  digitalWrite(bluePIN, LOW);  // turn the LED on (LOW is the voltage level)
  digitalWrite(greenPIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  digitalWrite(yellowPIN, LOW);  // turn the LED on (LOW is the voltage level)
  delay(onDelay);                      // wait for a second 

  digitalWrite(redPIN, LOW);  // turn the LED on (LOW is the voltage level)
  digitalWrite(bluePIN, LOW);  // turn the LED on (LOW is the voltage level)
  digitalWrite(greenPIN, LOW);  // turn the LED on (LOW is the voltage level)
  digitalWrite(yellowPIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(onDelay);                      // wait for a second
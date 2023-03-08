/* 
This program will demonstrate the light chaser program where the lights will turn on one
after the other but using an RGB instaed of stanndard LED's. It will follow the same 
principle as if you used other LED's, and in the case of the RGB, different colour 
combinations from the original red, green and blue will provide for the display of other
colours. 
*/
int redPIN = 13; //red LED pin
int bluePIN = 12; // blue LED pin
int greenPIN = 8; // green LED pin

int onDelay = 550; // set an ON delay for 550 milliseconds 


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pins as outputs
  pinMode(redPIN, OUTPUT); 
  pinMode(bluePIN, OUTPUT);
  pinMode(greenPIN, OUTPUT);
 
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(redPIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  digitalWrite(bluePIN, LOW);  // turn the LED on (LOW is the voltage level)
  digitalWrite(greenPIN, LOW);  // turn the LED on (LOW is the voltage level)
    delay(onDelay);                      // wait for 550 ms

  digitalWrite(redPIN, LOW);  // turn the LED off (LOW is the voltage level)
  digitalWrite(bluePIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  digitalWrite(greenPIN, LOW);  // turn the LED on (LOW is the voltage level)
    delay(onDelay);                      // wait for 550 ms

  digitalWrite(redPIN, LOW);  // turn the LED on (LOW is the voltage level)
  digitalWrite(bluePIN, LOW);  // turn the LED on (LOW is the voltage level)
  digitalWrite(greenPIN, HIGH);  // turn the LED on (HIGH is the voltage level)
   delay(onDelay);                      // wait for 550 ms


  digitalWrite(redPIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  digitalWrite(bluePIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  digitalWrite(greenPIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(onDelay);                      // wait for 550 ms

    digitalWrite(redPIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  digitalWrite(bluePIN, LOW);  // turn the LED on (LOW is the voltage level)
  digitalWrite(greenPIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(onDelay);                      // wait for 550 ms

  digitalWrite(redPIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  digitalWrite(bluePIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  digitalWrite(greenPIN, LOW);  // turn the LED on (LOW is the voltage level)
  delay(onDelay);                      // wait for 550 ms 
 

}

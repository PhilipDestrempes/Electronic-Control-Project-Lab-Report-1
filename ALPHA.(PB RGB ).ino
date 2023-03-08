/*

The goal of this program is to demonstrate an alternative to an IF statement using 
a pushbutton and an RGB. When the pushbutton will be pressed, the blue and green 
pin of the LED will be activated, and if the pushbutton isn't pressed, the red and green 
pins will be activated. This will be acheived with a NOT gate, using "!" in our program. 

The pushbutton will also be connected to take advatage of the built-in pull-up connection

*/

int PUSHBUTTON = 13 ; //set pin13 to PUSHBUTTON 
int RED = 12 ; //set pin12 to RED
int BLUE = 8 ; //set pin8 to BLUE
int GREEN = 7 ; //set pin7 to GREEN

void setup() {
pinMode(PUSHBUTTON, INPUT_PULLUP); //set pushbutton as an INPUT (pull-up)
pinMode(RED, OUTPUT); //set RED as an OUTPUT
pinMode(BLUE, OUTPUT); //set BLUE as an OUTPUT
pinMode(GREEN, OUTPUT); //set GREEN as an OUTPUT

}

void loop() {

int STATE = digitalRead(PUSHBUTTON); /*read the state of the input, and set it as 
an int to indicate the pushbutton state */

digitalWrite(RED, !STATE); //if the pushbutton state is ON, turn on red and green pins
digitalWrite(GREEN, HIGH);
  
digitalWrite(BLUE, STATE); //if the pushbutton state is OFF, turn on blue and green pins 
digitalWrite(GREEN, HIGH);

}
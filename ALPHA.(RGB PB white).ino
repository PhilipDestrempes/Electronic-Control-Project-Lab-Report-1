/*

The goal of this program is to demonstrate an alternative to an IF statement using 
a pushbutton and an RGB. The RGB will be originally in an ON position, and when the pushbutton 
will be pressed, the RGB will turn OFF. This will be wih the help of an internal
pull-down resistor. 

*/

int PUSHBUTTON = 13; //set pin13 to PUSHBUTTON 
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

digitalWrite(RED, STATE); //if the pushbutton state is ON, turn on red pins
digitalWrite(BLUE, STATE); //if the pushbutton state is ON, turn on blue pins
digitalWrite(GREEN, STATE); //if the pushbutton state is ON, turn on green pins

}

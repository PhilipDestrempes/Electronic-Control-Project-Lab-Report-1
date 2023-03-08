/* 
This program will demonstarte a serial display of the state of a pushbutton.
The program can be used in configuration of a pull-up resistor and will 
show wether the pushbutton is on or off. 
*/
int pushbutton= 13; //set pushbutton to pin 13
int LED= 12; //set LED to pin 12

void setup() {

pinMode(pushbutton, INPUT);  // set pushbutton (pin13) as a input
pinMode(LED ,OUTPUT); //set pin 12 as output
Serial.begin(9600); //set the baud rate that the monitor will read the values 
}

void loop() {
 
int buttonState = digitalRead(pushbutton); /*set button state as an integer 
to read inout 13, called "pushbutton" */
Serial.print("PBvalue"); //Monitor value name set
Serial.print("\t"); //leave a space 
Serial.println(!buttonState); /* serial monitor display of the pushbutton, 
"!" is to invert the value so that the value is display as 0 when pushbutton
is not pressed and 1 when pushbutton is pressed */

digitalWrite(LED,!buttonState); //when conditions are met, energize pin 12
delay(1000); //add 1000 millisecond delay


}
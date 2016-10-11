//Example - DigitalRead
//Reads from a pin to the serial port
//To setup arduino for upload:
  //Go to Tools -> Port and select the only one there
//To upload press the right arrow button in the top left corner
//To open the serial port, press the magnifying glass button in the top right corner

const int pin=11;	//IDK - change later
void setup(){                    //Setup: Code that runs at startup
  Serial.begin(9600);             //Start serial at 9600 bits per second
	pinMode(pin,OUTPUT);
}                                 //End of setup

void loop() {                    //Loop: Code that runs repeately after setup
	Serial.print("Pin ");
	Serial.print(pin);
	Serial.print(": ");
	Serial.println(digitalRead(pin));	//Print: Pin <pin>: <state>
}

//Example - Serial Input & PWM
//Writes numbers entered over serial to a PWM pin
//To setup arduino for upload:
  //Go to Tools -> Port and select the only one there
//To upload press the right arrow button in the top left corner
//To open the serial port, press the magnifying glass button in the top right corner

const int pin=11;//Fix

void setup() {                    //Setup: Code that runs at startup
  Serial.begin(9600);             //Start serial at 9600 bits per second
	pinMode(pin,OUTPUT);						//Set pin to output
}                                 //End of setup

void loop(){											//Loop: Code that runs repeately after setup
	int in=Serial.parseInt();				//Read a number
	if(in>-1){
		analogWrite(pin,in);					//Set PWM pin output
	}
}																	//End of loop

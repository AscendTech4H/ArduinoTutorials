//Example - Hello World
//Prints hello world to the serial port
//To setup arduino for upload:
  //Go to Tools -> Port and select the one there
//To upload press the right arrow button in the top left corner
//To open the serial port, press the magnifying glass button in the top right corner

void setup() {                    //Setup: Code that runs at startup
  Serial.begin(9600);             //Start serial at 9600 bits per second
  Serial.println("Hello World");  //Print "Hello World" to serial
}                                 //End of setup

void loop() {}                    //Code that runs repeately after setup - we aren't using it now

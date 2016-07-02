//Example - Blink
//Blinks the internal light
//To setup arduino for upload:
  //Go to Tools -> Port and select the one there
//To upload press the right arrow button in the top left corner

void setup() {                    //Setup: Code that runs at startup
  pinMode(13,OUTPUT);             //Tell arduino that the light is an output
}                                 //End of setup

void loop() {                     //Loop: Code that runs repeately after setup
  digitalWrite(13,HIGH);          //Turn on light
  delay(1000);                    //Wait one second
  digitalWrite(13,LOW);           //Turn off light
  delay(1000);                    //Wait one second
}                                 //End of loop

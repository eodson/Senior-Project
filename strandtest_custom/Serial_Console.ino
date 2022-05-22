/*
  Serial Event example

  When new serial data arrives, this sketch adds it to a String.
  When a newline is received, the loop prints the string and clears it.

  A good test for this is to try it with a GPS receiver that sends out
  NMEA 0183 sentences.

  NOTE: The serialEvent() feature is not available on the Leonardo, Micro, or
  other ATmega32U4 based boards.

  created 9 May 2011
  by Tom Igoe

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/SerialEvent
*/

String inputString = "";         // a String to hold incoming data
bool stringComplete = false;  // whether the string is complete


void setup_Console() {
  // initialize serial:
  Serial.begin(115200);
  // reserve 200 bytes for the inputString:
  inputString.reserve(200);
  Serial.println("Coms Started");
}

void Check_Coms() {
  // print the string when a newline arrives:
  if (stringComplete) {
    switch(inputString[0]){
      case 'T':
      case 't':
        test_Matrix();
        Serial.println("Turn matrix on");
        break;
      case 'C':
      case 'c':
        clear_Matrix();
        Serial.println("Turn matrix off");
        break;
      case 'P':
      case 'p':
        clear_Matrix();
//        delay(50);
        if (inputString.length() <= 2)
        {
          break;
        }
        inputString = inputString.substring(1);
        printStringToDisplay(inputString);
//        Serial.println("Turn matrix off");
        break;
  }
    inputString = "";
    stringComplete = false;
  }
  serialEvent();
}

///*
//  SerialEvent occurs whenever a new data comes in the hardware serial RX. This
//  routine is run between each time loop() runs, so using delay inside loop can
//  delay response. Multiple bytes of data may be available.
//*/
void serialEvent() {
  while (Serial.available()) {
    // get the new byte:
    char inChar = (char)Serial.read();
    // add it to the inputString:
    inputString += inChar;
    // if the incoming character is a newline, set a flag so the main loop can
    // do something about it:
    if (inChar == '\n') {
      stringComplete = true;
    }
  }
}

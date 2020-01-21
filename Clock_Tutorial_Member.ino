/*
    Title: NSBE Digital Electronics Tutorial
    Author: ENTER YOUR NAME HERE
    Date: 01/22/2020
    Description: LED light sequence
*/

// Pin mapping for each LED
const int REDLED1 =     6;
const int BLUELED1 =    7;
const int GREENLED1 =   8;
const int YELLOWLED1 =  9;
const int REDLED2 =     10;
const int BLUELED2 =    11;
const int GREENLED2 =   12;
const int YELLOWLED2 =  13;

void setup()
{
  // Put your setup code here, to run once:
  // Setup each pin with the pin number and
  // whether it is input or output
  // *** REMOVE AND START CODING HERE ***
}

void loop()
{
  // put your main code here, to run repeatedly:
  // We will start by calling the ASCII_To_Binary
  // function to test the setup, then we will
  // call our Light_Sequence functions
  // *** REMOVE AND START CODING HERE ***
}

// First Light Sequence
// Each LED will turn on then off in sequential order
void Light_Sequence_1()
{
  // *** REMOVE AND START CODING HERE ***
}

// Second Light Sequence
// All of the LEDS will turn on in sequential order
// then turn off in sequential order
void Light_Sequence_2()
{
  // *** REMOVE AND START CODING HERE ***
}

// Turns all LEDS on as a test
void Test_All()
{
  digitalWrite(REDLED1, HIGH);   
  digitalWrite(BLUELED1, HIGH);
  digitalWrite(GREENLED1, HIGH);   
  digitalWrite(YELLOWLED1, HIGH);
  digitalWrite(REDLED2, HIGH);   
  digitalWrite(BLUELED2, HIGH);
  digitalWrite(GREENLED2, HIGH);   
  digitalWrite(YELLOWLED2, HIGH);

  delay(300000);
}

// Display Characters in Binary
void ASCII_To_Binary()
{
  char ascii[4] = {'N', 'S', 'B', 'E'};
  char curr_char = null;

  for (int i = 0; i < 4; i++)
  {
    curr_char = ascii[i]

    digitalWrite(REDLED1, (curr_char >> 0) & 1);
    digitalWrite(BLUELED1, (curr_char >> 1) & 1);
    digitalWrite(GREENLED1, (curr_char >> 2) & 1);
    digitalWrite(YELLOWLED1, (curr_char >> 3) & 1);
    digitalWrite(REDLED2, (curr_char >> 4) & 1);
    digitalWrite(BLUELED2, (curr_char >> 5) & 1);
    digitalWrite(GREENLED2, (curr_char >> 6) & 1);
    digitalWrite(YELLOWLED2, (curr_char >> 7) & 1);

    delay(5000);
  }
}

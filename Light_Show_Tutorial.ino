/*
    Title: NSBE Digital Electronics Tutorial
    Author: ENTER YOUR NAME HERE
    Date: ENTER DATE HERE
    Description: LED light sequence
*/

// Pin mapping for each LED
const int LED1 =  6;
const int LED2 =  7;
const int LED3 =  8;
const int LED4 =  9;
const int LED5 =  10;
const int LED6 =  11;
const int LED7 =  12;
const int LED8 =  13;

void setup()
{
  // Put your setup code here, to run once:
  // Setup each pin with the pin number and
  // whether it is input or output
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(LED8, OUTPUT); 
}

void loop()
{
  // put your main code here, to run repeatedly:
  // We will start by calling the ASCII_To_Binary
  // function to test the setup, then we will
  // call our Light_Sequence functions
  // ****** REMOVE AND START CODING HERE ******
}

// First Light Sequence
// Each LED will turn on then off in sequential order
void Light_Sequence_1()
{
  // ****** REMOVE AND START CODING HERE ******
}

// Second Light Sequence
// All of the LEDS will turn on in sequential order
// then turn off in sequential order
void Light_Sequence_2()
{
  // ****** REMOVE AND START CODING HERE ******
}

// Third Light Sequence
// Make whatever light sequence you desire!
void Light_Sequence_3()
{
  // ****** REMOVE AND START CODING HERE ******
}


/*
 * =======================================
 * 
 * IGNORE THE REST OF THIS CODE
 * 
 * =======================================
 */

 
// Turns all LEDS on as a test
void Test_All()
{
  digitalWrite(LED8, HIGH);   
  digitalWrite(LED7, HIGH);
  digitalWrite(LED6, HIGH);   
  digitalWrite(LED5, HIGH);
  digitalWrite(LED4, HIGH);   
  digitalWrite(LED3, HIGH);
  digitalWrite(LED2, HIGH);   
  digitalWrite(LED1, HIGH);

  delay(300000);
}

// Display Characters in Binary
void ASCII_To_Binary()
{
  char ascii[4]= {'N', 'S', 'B', 'E'};
  char curr_char = '0';
  
  for (int i = 0; i < 4; i++)
  {
    curr_char = ascii[i];
    
    digitalWrite(LED8, (curr_char >> 0) & 1);   
    digitalWrite(LED7, (curr_char >> 1) & 1);
    digitalWrite(LED6, (curr_char >> 2) & 1);   
    digitalWrite(LED5, (curr_char >> 3) & 1);
    digitalWrite(LED4, (curr_char >> 4) & 1);   
    digitalWrite(LED3, (curr_char >> 5) & 1);
    digitalWrite(LED2, (curr_char >> 6) & 1);   
    digitalWrite(LED1, (curr_char >> 7) & 1);

    delay(2000);
  }
}

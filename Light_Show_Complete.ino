/*
 *  Title: NSBE Digital Electronics Tutorial
 *  Author: Chidi Ewenike
 *  Date: 01/22/2020
 *  Description: LED light sequence
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
  /* put your main code here, to run repeatedly
     If you would like to run one of these sequences, simply remove the "//" below before the sequence name
     Example:
     // Light_Sequence_2();
     ^^ Remove "//" 
     Light_Sequence_2();
  */
  
  //  Test_All();
    ASCII_To_Binary();
  //  Light_Sequence_1();
  //  Light_Sequence_2();
}

// First Light Sequence
void Light_Sequence_1()
{
    digitalWrite(LED8, 1);
    delay(250);
    digitalWrite(LED8, 0);
    delay(250);

    digitalWrite(LED7, 1);
    delay(250);
    digitalWrite(LED7, 0);
    delay(250);

    digitalWrite(LED6, 1);
    delay(250);
    digitalWrite(LED6, 0);
    delay(250);

    digitalWrite(LED5, 1);
    delay(250);
    digitalWrite(LED5, 0);
    delay(250);
    
    digitalWrite(LED4, 1);
    delay(250);
    digitalWrite(LED4, 0);
    delay(250);

    digitalWrite(LED3, 1);
    delay(250);
    digitalWrite(LED3, 0);
    delay(250);

    digitalWrite(LED2, 1);
    delay(250);
    digitalWrite(LED2, 0);
    delay(250);

    digitalWrite(LED1, 1);
    delay(250);
    digitalWrite(LED1, 0);
    delay(250);
}

// Second Light Sequence
void Light_Sequence_2()
{
    digitalWrite(LED8, 1);
    delay(250);

    digitalWrite(LED7, 1);
    delay(250);

    digitalWrite(LED6, 1);
    delay(250);

    digitalWrite(LED5, 1);
    delay(250);

    digitalWrite(LED4, 1);
    delay(250);

    digitalWrite(LED3, 1);
    delay(250);

    digitalWrite(LED2, 1);
    delay(250);

    digitalWrite(LED1, 1);
    delay(250);

    digitalWrite(LED8, 0);
    delay(250);
    
    digitalWrite(LED7, 0);
    delay(250);
    
    digitalWrite(LED6, 0);
    delay(250);

    digitalWrite(LED5, 0);
    delay(250);
    
    digitalWrite(LED4, 0);
    delay(250);
    
    digitalWrite(LED3, 0);
    delay(250);
    
    digitalWrite(LED2, 0);
    delay(250); 

    digitalWrite(LED1, 0);
    delay(250);
}

// Turns all LEDS on as a test
void Test_All()
{
  digitalWrite(LED8, 1);   
  digitalWrite(LED7, 1);
  digitalWrite(LED6, 1);   
  digitalWrite(LED5, 1);
  digitalWrite(LED4, 1);   
  digitalWrite(LED3, 1);
  digitalWrite(LED2, 1);   
  digitalWrite(LED1, 1);

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

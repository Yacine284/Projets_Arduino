
/* Include DigitLedDisplay Library */
#include "DigitLedDisplay.h"
int capteur = 7; 
int detection= HIGH;
int capteur1 = 4; 
int detection1= HIGH;
int  buzzer= 8;


/* Arduino Pin to Display Pin
   12 to DIN,
   11 to CS,
   10 to CLK 
   int DIN =12;
   int CS =11;
   int CLK =10;*/
DigitLedDisplay ld = DigitLedDisplay(12, 11, 10);

void setup() {
 
   pinMode(capteur, INPUT);
   pinMode(capteur1, INPUT);
  /* Set the brightness min:1, max:15 */
  ld.setBright(15);

  /* Set the digit count */
  ld.setDigitLimit(8);
  //Serial.begin(9600);
  
}

void loop() {
 
 detection = digitalRead(capteur); 

 detection1 = digitalRead(capteur1); 
 pinMode(buzzer, OUTPUT);
 
 if(detection == HIGH && detection1 == LOW )
    {   
         
         tone(buzzer,2500,50);
         delay(50);
         digitalWrite(buzzer,LOW);
    
   }
  if (detection == LOW && detection1 == LOW )  
  {
    digitalWrite(buzzer,LOW);
    delay(1000);
         
  }
  

}

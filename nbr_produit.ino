                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                /* Include DigitLedDisplay Library */
#include "DigitLedDisplay.h"
int capteur = 7; 
int detection= HIGH;
int etp=HIGH;
int capteur1 = 4; 
int detection1= HIGH;
int etp1=HIGH;
int i=0;;
int j=0;
int LED = 13;


int h;
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
  ld.setDigitLimit(3);
  Serial.begin(9600);
  
  
}

void loop() {
  
 delay(500);
 etp=detection;
 detection = digitalRead(capteur); 
 etp1=detection1;
 detection1 = digitalRead(capteur1); 
 
 
 if(detection == LOW && detection != etp )
    {    
         i++;
          Serial.println("i=");
         Serial.println(i);
         //ld.printDigit(i);
         //delay(1000);
          
         
   } 

  if(detection1 == LOW && detection1 != etp1  )
    {    
         j++;
         Serial.println("j=");
         Serial.println(j);
         //ld.printDigit(j);
         // ld.write(5, j);
         //delay(1000);
     
  
    }  
     
  

   
   ld.printDigit(i+j);
  
   //Serial.println(h);
   //delay(1000);
   
     /*ld.write(8,B00001110);
     ld.write(7,B00001110);
     ld.write(6,0x77);*/
     
 
   //
    
   
   }

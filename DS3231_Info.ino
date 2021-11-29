/*
* Module d'horloge temps réel Arduino DS3231
*/
#include <DS3231.h>// bobliothèque pour le module DS3231
#include <LiquidCrystal.h> // la bibliothèque LiquidCrystal pour afficheur lcd
DS3231  rtc(SDA,SCL);
LiquidCrystal lcd(1, 2, 4, 5, 6, 7); // Creation des oblet LC Parameters: (rs, enable, d4, d5, d6, d7) 
void setup() { 
 rtc.begin(); // Initialisation  l'objet rtc (horloge temps réel).
 lcd.begin(16,2); // Initialisation de  l'interface à l'écran LCD, et definir  dimensions  de l'écran(largeur et hauteur) 
}
void loop() { 
 lcd.setCursor(0,0);
 lcd.print("Time:  ");
 int h =rtc.getTimeStr();
 lcd.print(rtc.getTimeStr());
 
 lcd.setCursor(0,1);
 lcd.print("Date: ");// affichage sur l'écran LCD
 lcd.print(rtc.getDateStr());
 
 delay(1000); 
}

}

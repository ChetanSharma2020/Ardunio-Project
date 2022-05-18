#include <LiquidCrystal.h>  
int Contrast=40;
 LiquidCrystal lcd(12, 11, 5, 4, 3, 2);   

 void setup()
 { 
    analogWrite(6,Contrast);
     lcd.begin(16,2);
   
  }  


     void loop()
 {  
     lcd.setCursor(4,0);
     lcd.print("Hello Friends");
    
   
     
     for (int positionCounter = 0; positionCounter < 13; positionCounter++) {
    // scroll one position left:
    lcd.scrollDisplayLeft();
    // wait a bit:
    delay(300);
    }
    lcd.setCursor(0,1);
     lcd.print("Made by CHETAN SHARMA");
    
}

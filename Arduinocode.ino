#include <LiquidCrystal.h> //Import the LCD library
#define brig 10
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

#define contra 9 

void setup() {

  lcd.begin(16, 2); 
  pinMode(contra, OUTPUT);
  pinMode(brig, OUTPUT); 
  analogWrite(brig, 255);
  
}

void loop() {
  
  lcd.print(" Jag hatar Pite"); 
  lcd.setCursor(0, 1);
  lcd.print(" Hatar Lule med");
  
  for (int l = 0; l < 16; l++) { 
    lcd.scrollDisplayRight();
    delay(30); 
  }
  
  for (int l = 0; l < 16; l++)
    lcd.scrollDisplayLeft();
    
  for (int l = 51; l > -1; l--) { 
    delay(30);
  }

  digitalWrite(contra,LOW);
  lcd.setCursor(0, 0);
}

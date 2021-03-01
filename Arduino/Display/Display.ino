#include <LiquidCrystal.h>

int analog_pin = A0;

float tempC;
float tempF;
int tempdigital;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup ()
{
   lcd.begin(16, 2);
}

void loop()
{



  tempdigital = analogRead(analog_pin);  //lectura digital
  tempC = (tempdigital * 5.0)*100.0/ 1024.0;  //lectura analogica
  tempF = tempC * 9.0 / 5.0 + 32.0;  //temperatura en grados F
  //
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp");
  lcd.setCursor(6, 0);
  lcd.print(tempC);


  delay(10);

}

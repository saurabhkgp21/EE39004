#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
int analog_input = 0;
void setup() {
  // put your setup code here, to run once:
    lcd.begin(16, 2);
    lcd.setCursor(0,0);
    lcd.print("Satu vs Mrinalini");
    pinMode(analog_input, INPUT);
}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("Satyam");
  int value = analogRead(analog_input);
  lcd.setCursor(0,1);
  lcd.print(value);
  delay(1000);
  lcd.clear();
}

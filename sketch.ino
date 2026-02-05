#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// I2C address from scanner
#define LCD_ADDR 0x27

// Create LCD object
LiquidCrystal_I2C lcd(LCD_ADDR, 16, 2);

void setup() {

  // Start I2C
  Wire.begin(21, 22);   // SDA, SCL

  // Initialize LCD
  lcd.init();
  lcd.backlight();

  // Print message
  lcd.setCursor(0, 0);
  lcd.print("Hello Vrushank");

  lcd.setCursor(0, 1);
  lcd.print("I2C Working!");
}

void loop() {
  // Nothing needed here
}

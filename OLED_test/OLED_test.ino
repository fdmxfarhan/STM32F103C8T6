#include <Adafruit_SH1106_STM32.h>
Adafruit_SH1106 display(-1);

void setup() {
  display.begin(0x2, 0x3C);
  display.clearDisplay();
  display.fillCircle(64, 32, 25, WHITE);
  display.display();
  delay(1000);

  display.clearDisplay();
  display.fillRect(10,10,50,50, WHITE);
  display.display();
  delay(1000);

  display.clearDisplay();
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.println("Hello, world!");
  display.display();
  delay(1000);

  
}

void loop() {
  
}

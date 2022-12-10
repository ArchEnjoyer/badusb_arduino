#include <Mouse.h>

void setup () {
   Mouse.begin();
}

void loop () {
  Mouse.move(2034, -246, 394); 
  delay(20);
  Mouse.move(234, 200, 677); 
  delay(20);  
  Mouse.move(-2000, 0, 10000); 
  delay(20);  
  Mouse.move(-234, -2000, 9453); 
  delay(20);
  Mouse.move(3245, -9234, -9394); 
  delay(20);
  Mouse.move(234, 11200, 1677); 
  delay(20);  
  Mouse.move(-5620, -2345, 12300); 
  delay(20);  
  Mouse.move(20000, 2000, -450); 
  delay(20);  
}

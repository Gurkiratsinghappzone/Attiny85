int time =YOUR_TIME; //replace YOUR_TIME with the time u want the pc to shutdwon 
//Time must be in Second .For Example for 10 min Write 600
#include "DigiKeyboard.h"
void setup() {
  pinMode(1,OUTPUT);
  
}

void loop() {
DigiKeyboard.update();
DigiKeyboard.sendKeyStroke(0);
DigiKeyboard.delay(3000);
DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
DigiKeyboard.delay(100);
DigiKeyboard.println("cmd");
DigiKeyboard.delay(500);

DigiKeyboard.print("shutdown -s -t ");
DigiKeyboard.println(time);

DigiKeyboard.delay(500);





DigiKeyboard.println("exit");
delay(500);
DigiKeyboard.println("exit");

digitalWrite(1,1);
 DigiKeyboard.delay(90000);
  digitalWrite(1, LOW); 
  DigiKeyboard.delay(5000);




}

#include <Keyboard.h>
//#include <HID.h>

void setup() {
  // Start Keyboard Control
  Keyboard.begin();
}

void loop() {
    // This delay is mandatory. If you want to understand why, delete it.
    // Wait 1350 ms = 1,35 seconds
    delay(1350);
    // Press Windows key
    Keyboard.press(KEY_LEFT_GUI);
    delay(300);
    // Press R key
    Keyboard.press('r');
    // Release the keys Windows and R so output = WIN + R
    Keyboard.releaseAll();
    delay(300);

    // launch notepad.exe
    Keyboard.println("notepad.exe");
    // Press ENTER key
    typeKey(KEY_RETURN);
    delay(300);

    // Write "Hello WORLD !" in the notepad window
    Keyboard.print("Hello WORLD !");

    //As it is a loop, the delay prevents the payload to run endless
    delay(50000);
    
    //End Keyboard Control
    Keyboard.end();
}

// Utility function
void typeKey(int key){
  // Press key
  Keyboard.press(key);
  // Wait 300 ms
  delay(300);
  // Release key
  Keyboard.release(key);
}

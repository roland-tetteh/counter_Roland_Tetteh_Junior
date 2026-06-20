int startValue = 5;   // we'll count down from 5
int ledPin = 13;      // this is the built-in LED on most Arduino boards
 
// This function makes the LED blink 'times' times
// For our countdown we’ll just call it with 1, so it blinks once per number
void flashLED(int times) {
    int i = 0;  // little counter just for this function
    while (i < times) {
        digitalWrite(ledPin, HIGH);   // turn LED on
        delay(500);                   // keep it on for half a second
        digitalWrite(ledPin, LOW);    // turn LED off
        delay(500);                   // keep it off for half a second
        i = i + 1;                    // one blink done
    }
}
 
void setup() {
    pinMode(ledPin, OUTPUT);   // tell Arduino pin 13 is for output
    Serial.begin(9600);        // start talking to Serial Monitor
    
    Serial.println("=== Smart Countdown Starting ===");

    int count = startValue;    // start our countdown at 5
    while (count > 0) {        // keep going while count is still above 0
        Serial.print("Count: ");
        Serial.println(count); // show the current number

        flashLED(1);    // blink the LED once for this number
        
        count = count - 1;  // count down to the next number
    }
 
    Serial.println("=== Countdown Complete ==="); // we’re done!
}
 
void loop() { 
    // nothing here - everything happens once in setup()
}
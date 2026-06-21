Assignment 1 Report
Arduino Fundamentals

Name: Roland Tetteh Junior
Course: Programming C++ for Engineers Using Arduino

Introduction

This assignment introduced me to the basic concepts of Arduino programming and how software can interact with hardware components. Throughout the activities, I learned how variables store information, how functions make code reusable, how LEDs can be controlled using digital outputs, and how loops help programs repeat actions automatically.
The assignment also taught me how to use the Serial Monitor to observe what is happening inside the Arduino program. Each task built upon the previous one, gradually combining variables, functions, loops, and LEDs into a complete Smart Countdown program.
By completing these tasks, I gained practical experience in writing Arduino programs, debugging errors, and understanding how embedded systems work.

TASK 1: Variables and Serial Monitor
Description of the Work
In this task, I learned how to create variables of different data types such as integers, floating-point numbers, Boolean values, and strings. I used the Serial Monitor to display these values on the computer screen. This helped me understand how data is stored and displayed in Arduino programs.

Question 1
What is the difference between int and float? Give one example of when you would use each.
An int stores whole numbers without decimal points, while a float stores numbers that contain decimal values.
Example:

int age = 21;
float voltage = 3.3;
Integers are used for counting objects, while floats are used for measurements such as temperature or voltage.

Question 2
What happens if you forget to write Serial.begin(9600)?
If Serial.begin(9600) is not included, the Serial Monitor cannot communicate with the Arduino properly. As a result, no output appears or unreadable characters may be displayed.

Question 3
Why does the output appear only once and not repeatedly?
The output appears only once because the code is inside the setup() function. The setup() function runs only once when the Arduino starts.

TASK 2: LED Blink Using Variables
Description of the Work

This task involved controlling the built-in LED using variables. Instead of typing numbers directly in the code, variables were used to control the LED pin and the delay times. This made the program easier to modify.

Question 1
Why do we put pinMode(ledPin, OUTPUT); inside setup() and not inside loop()?

pinMode() only needs to configure the pin once when the Arduino starts. Putting it inside loop() would repeatedly configure the same pin and waste processing time.

Question 2

What would happen if both delay() functions were removed?

The LED would switch ON and OFF extremely fast. The blinking would become too fast for the human eye to notice, making the LED appear constantly ON.

Question 3

If you wanted the LED to stay ON for 3 seconds and OFF for half a second, what values would you change?

onTime = 3000;
offTime = 500;
TASK 3: Functions
Description of the Work

This task introduced functions. A custom function called blinkOnce() was created to control the LED. Instead of writing the same code multiple times, the function was called with different values to produce different blinking speeds.

Question 1

What is a parameter?

A parameter is a value passed into a function when it is called. In blinkOnce(int waitTime), waitTime is the parameter that controls how long the LED stays on and off.

Question 2

Why is it useful to use functions?

Functions reduce repetition, make programs easier to read, and simplify debugging. If changes are needed, they only need to be made once inside the function.

Question 3

Could blinkOnce work without parameters?

Yes. The delay values could be stored in global variables. However, using parameters provides greater flexibility because different values can be used each time the function is called.

TASK 4: While Loop
Description of the Work

This task demonstrated how while loops repeatedly execute code as long as a condition remains true. The program counted down from 5 to 1 before blinking the LED three times.

Question 1

What is the role of counter = counter - 1?

This statement decreases the counter value each time the loop runs. Without it, the condition would always remain true, causing an infinite loop.

Question 2

Rewrite the countdown from 7 instead of 5.

int counter = 7;

while(counter > 0)
Question 3

What is the difference between setup() and a while loop?

setup() runs automatically once when the Arduino starts. A while loop repeatedly executes code as long as its condition remains true

TASK 5: Smart Countdown
Description of the Work

This task combined variables, functions, LEDs, while loops, and the Serial Monitor into one complete program. The program counted down from 5 to 1, displayed each number on the Serial Monitor, and blinked the LED according to the count value.

Question 1: Final Code

Since you uploaded your code file, you can paste your actual code from your .ino file here

Question 2

Describe one bug or mistake you encountered.

One mistakle I encountered was forgetting to decrease the counter inside the while loop. This caused the program to remain inside the loop indefinitely. I fixed the problem by adding:

count = count - 1;
Question 3

How would you count down by 2?

Change:

count = count - 1;

to:

count = count - 2;

The output would become:

5
3
1
Question 4

how would you keep the LED ON for 5 seconds after the countdown

Add the following code after:

Serial.println("=== Countdown Complete ===");
digitalWrite(ledPin, HIGH);
delay(5000);
digitalWrite(ledPin, LOW);
Tetteh Roland Junior - 2526403290

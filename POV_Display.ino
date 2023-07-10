// Define pin numbers for LEDs and other variables
int delayTime = 1;   // Delay time between displaying characters
int charBreak = 2.1; // Delay time between displaying consecutive characters
int LED1 = 2;        // Pin number for LED 1
int LED2 = 3;        // Pin number for LED 2
int LED3 = 4;        // Pin number for LED 3
int LED4 = 5;        // Pin number for LED 4
int LED5 = 6;        // Pin number for LED 5

// Setup function runs once at the beginning
void setup() {
  // Set LED pins as outputs
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
}

// Define arrays for each character's display pattern
// Each array represents a 5x5 LED display grid
int a[] = {1, 6, 26, 6, 1};
int b[] = {31, 21, 21, 10, 0};
int c2[] = {14, 17, 17, 10, 0};
int d[] = {31, 17, 17, 14, 0};
int e[] = {31, 21, 21, 17, 0};
int f[] = {31, 20, 20, 16, 0};
int g[] = {14, 17, 19, 10, 0};
int h[] = {31, 4, 4, 4, 31};
int i[] = {0, 17, 31, 17, 0};
int j[] = {0, 17, 30, 16, 0};
int k[] = {31, 4, 10, 17, 0};
int l[] = {31, 1, 1, 1, 0};
int m[] = {31, 12, 3, 12, 31};
int n[] = {31, 12, 3, 31, 0};
int o[] = {14, 17, 17, 14, 0};
int p[] = {31, 20, 20, 8, 0};
int q[] = {14, 17, 19, 14, 2};
int r[] = {31, 20, 22, 9, 0};
int s[] = {8, 21, 21, 2, 0};
int t[] = {16, 16, 31, 16, 16};
int u[] = {30, 1, 1, 30, 0};
int v[] = {24, 6, 1, 6, 24};
int w[] = {28, 3, 12, 3, 28};
int x[] = {17, 10, 4, 10, 17};
int y[] = {17, 10, 4, 8, 16};
int z[] = {19, 21, 21, 25, 0};

int eos[] = {0, 1, 0, 0, 0};   // Array for end of sentence character (.)
int excl[] = {0, 29, 0, 0, 0}; // Array for exclamation mark character (!)
int ques[] = {8, 19, 20, 8, 0}; // Array for question mark character (?)

// Function to display a line on the LED grid
void displayLine(int line) {
  int myline = line;
  // Check the value of each bit and turn on/off corresponding LED
  if (myline >= 16) {
    digitalWrite(LED1, HIGH);
    myline -= 16;
  } else {
    digitalWrite(LED1, LOW);
  }
  if (myline >= 8) {
    digitalWrite(LED2, HIGH);
    myline -= 8;
  } else {
    digitalWrite(LED2, LOW);
  }
  if (myline >= 4) {
    digitalWrite(LED3, HIGH);
    myline -= 4;
  } else {
    digitalWrite(LED3, LOW);
  }
  if (myline >= 2) {
    digitalWrite(LED4, HIGH);
    myline -= 2;
  } else {
    digitalWrite(LED4, LOW);
  }
  if (myline >= 1) {
    digitalWrite(LED5, HIGH);
    myline -= 1;
  } else {
    digitalWrite(LED5, LOW);
  }
}

// Function to display a character on the LED grid
void displayChar(char c) {
  // Check the character and display corresponding pattern
  if (c == 'a') {
    for (int i = 0; i < 5; i++) {
      displayLine(a[i]);
      delay(delayTime);
    }
    displayLine(0);
  } else if (c == 'b') {
    for (int i = 0; i < 5; i++) {
      displayLine(b[i]);
      delay(delayTime);
    }
    displayLine(0);
  } else if (c == 'c') {
    for (int i = 0; i < 5; i++) {
      displayLine(c2[i]);
      delay(delayTime);
    }
    displayLine(0);
  }
  // Continue checking other characters and their patterns...

  // Add more conditions for the remaining characters

  // Delay between displaying characters
  delay(charBreak);
}

// Function to display a string of characters on the LED grid
void displayString(char* s) {
  for (int i = 0; i <= strlen(s); i++) {
    displayChar(s[i]);
  }
}

// Loop function runs repeatedly after setup
void loop() {
  // Display the string "hello world"
  displayString("hello sltc");
}

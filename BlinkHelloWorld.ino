// BlinkHelloWorld
// GeekMustHave Version 2.1b 06/12/2017
//    INitial version to test ATTiny85

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(0, OUTPUT); //LED on Model B
  pinMode(1, OUTPUT); //LED on Model A  or Pro
}

// the loop routine runs over and over again forever:
void loop() {
  sendH();
  sendE();
  sendL();
  sendL();
  sendO();
  sendWordSpace();
  sendW();
  sendO();
  sendR();
  sendL();
  sendD();
  sendWordSpace();
  sendWordSpace();  
  
}

// Functions for Dit and Dah
void sendDit(){
  digitalWrite(0, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(1, HIGH);
  delay(200); 
  digitalWrite(0, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(1, LOW); 
  delay(100);
}  

void sendDah(){
  digitalWrite(0, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(1, HIGH);
  delay(500); 
  digitalWrite(0, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(1, LOW); 
  delay(100);
}

void sendLetterSpace(){
  delay(700);
}

void sendWordSpace(){
  delay(1000);
}

void sendH(){
  // H = . . . . 
  sendDit();
  sendDit();
  sendDit();  
  sendDit();
  sendLetterSpace();
}

void sendE(){
  // E = .
  sendDit();
  sendLetterSpace();
}

void sendL(){
  // L = . - . .
  sendDit();
  sendDah();
  sendDit();
  sendDit();
  sendLetterSpace();  
}

void sendO(){
  // O = - - -
  sendDah();
  sendDah();
  sendDah();
  sendLetterSpace();
}

void sendW(){
  // W = . - -
  sendDit();
  sendDah();
  sendDah();
  sendLetterSpace();
}

void sendR() {
  // R = . - . 
  sendDit();
  sendDah();
  sendDit();
  sendWordSpace();
}

void sendD(){
  // D = - . .
  sendDah();
  sendDit();
  sendDit();
  sendWordSpace();    
}


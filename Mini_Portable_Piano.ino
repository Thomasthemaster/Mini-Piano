const int buzzerPin = A0;

// Buttons
const int buttonLowB = A2;
const int buttonC = 9;
const int buttonD = 4;
const int buttonE = 10;
const int buttonF = 5;
const int buttonG = A5;
const int buttonA = A4;
const int buttonB = A3;

// Frequencies
const int noteC = 262;
const int noteD = 294;
const int noteE = 330;
const int noteF = 349;
const int noteG = 392;
const int noteA = 440;
const int noteB = 494;
const int noteHighC = 523;

void setup() {
  pinMode(buttonLowB, INPUT_PULLUP);
  pinMode(buttonC, INPUT_PULLUP);
  pinMode(buttonD, INPUT_PULLUP);
  pinMode(buttonE, INPUT_PULLUP);
  pinMode(buttonF, INPUT_PULLUP);
  pinMode(buttonG, INPUT_PULLUP);
  pinMode(buttonA, INPUT_PULLUP);
  pinMode(buttonB, INPUT_PULLUP);

  pinMode(buzzerPin, OUTPUT);
}

void loop() {

  if (digitalRead(A2) == LOW) {
    tone(buzzerPin, noteC);
  }
  else if (digitalRead(9) == LOW) {
    tone(buzzerPin, noteD);
  }
  else if (digitalRead(4) == LOW) {
    tone(buzzerPin, noteE);
  }
  else if (digitalRead(10) == LOW) {
    tone(buzzerPin, noteF);
  }
  else if (digitalRead(5) == LOW) {
    tone(buzzerPin, noteG);
  }
  else if (digitalRead(A5) == LOW) {
    tone(buzzerPin, noteA);
  }
  else if (digitalRead(A4) == LOW) {
    tone(buzzerPin, noteB);
  }
  else if (digitalRead(A3) == LOW) {
    tone(buzzerPin, noteHighC);
  }
  else {
    noTone(buzzerPin);
  }

}

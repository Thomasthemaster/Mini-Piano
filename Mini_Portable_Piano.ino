const int buzzerPin = A0;

// Buttons
const int buttonC = A2;
const int buttonD = 9;
const int buttonE = 4;
const int buttonF = 10;
const int buttonG = 5;
const int buttonA = A5;
const int buttonB = A4;
const int buttonHighC = A3;

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
  pinMode(buttonC, INPUT_PULLUP);
  pinMode(buttonD, INPUT_PULLUP);
  pinMode(buttonE, INPUT_PULLUP);
  pinMode(buttonF, INPUT_PULLUP);
  pinMode(buttonG, INPUT_PULLUP);
  pinMode(buttonA, INPUT_PULLUP);
  pinMode(buttonB, INPUT_PULLUP);
  pinMode(buttonHighC, INPUT_PULLUP);

  pinMode(buzzerPin, OUTPUT);
}

void loop() {

  if (digitalRead(buttonC) == LOW) {
    tone(buzzerPin, noteC);
  }
  else if (digitalRead(buttonD) == LOW) {
    tone(buzzerPin, noteD);
  }
  else if (digitalRead(buttonE) == LOW) {
    tone(buzzerPin, noteE);
  }
  else if (digitalRead(buttonF) == LOW) {
    tone(buzzerPin, noteF);
  }
  else if (digitalRead(buttonG) == LOW) {
    tone(buzzerPin, noteG);
  }
  else if (digitalRead(buttonA) == LOW) {
    tone(buzzerPin, noteA);
  }
  else if (digitalRead(buttonB) == LOW) {
    tone(buzzerPin, noteB);
  }
  else if (digitalRead(buttonHighC) == LOW) {
    tone(buzzerPin, noteHighC);
  }
  else {
    noTone(buzzerPin);
  }

}

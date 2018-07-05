#define SDA 13
#define SCL 14
#define CS 15
#define DC 4
#define RST 2
#define BSY 5

void sendData() {
  digitalWrite(CS, LOW);
  digitalWrite(DC, HIGH);
  digitalWrite(SCL, LOW);
}

void sendCommand() {
  digitalWrite(CS, LOW);
  digitalWrite(DC, LOW);
  digitalWrite(SCL, LOW);
}

void setup() {
  pinMode(SDA, OUTPUT);
  pinMode(SCL, OUTPUT);
  pinMode(CS, OUTPUT);
  pinMode(DC, OUTPUT);
  pinMode(RST, OUTPUT);
  pinMode(BSY, INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:

}

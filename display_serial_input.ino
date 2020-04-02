
// the "{},"s pads the array with the chars we dont use to avoid a bunch of stupid code.
const char CHARS[123][11] = {
//  0    1    2    3    4    5    6    7    8    9    10
  {LOW ,HIGH,HIGH,LOW ,HIGH,HIGH ,HIGH,HIGH,LOW ,HIGH,HIGH},//NUL
  {},
  {},
  {},
  {},
  {},
  {},
  {},
  {},
  {},
  {},
  {},
  {},
  {},
  {},
  {},
  {},
  {},
  {},
  {},
  {},
  {},
  {},
  {},
  {},
  {},
  {},
  {},
  {},
  {},
  {},
  {},
  {LOW ,HIGH,HIGH,LOW ,HIGH,HIGH ,HIGH,HIGH,LOW ,HIGH,HIGH}, // ' '
  {},
  {},
  {},
  {},
  {},
  {},
  {},
  {},
  {},
  {},
  {},
  {},
  {},
  {LOW ,HIGH,HIGH,LOW ,HIGH,LOW ,HIGH,HIGH,LOW ,HIGH,HIGH},//.
  {},
  {LOW ,LOW ,LOW ,LOW ,LOW ,HIGH,LOW ,LOW ,LOW ,LOW ,HIGH},//'0'
  {LOW ,HIGH,HIGH,LOW ,LOW ,HIGH,LOW ,HIGH,LOW ,HIGH,HIGH},//'1'
  {LOW ,LOW ,LOW ,LOW ,HIGH,HIGH,LOW ,LOW ,LOW ,HIGH,LOW },//'2'
  {LOW ,HIGH,LOW ,LOW ,LOW ,HIGH,LOW ,LOW ,LOW ,HIGH,LOW },//'3'
  {LOW ,HIGH,HIGH,LOW ,LOW ,HIGH,LOW ,HIGH,LOW ,LOW ,LOW },//'4'
  {LOW ,HIGH,LOW ,LOW ,LOW ,HIGH,HIGH,LOW ,LOW ,LOW ,LOW },//'5'
  {LOW ,LOW ,LOW ,LOW ,LOW ,HIGH,HIGH,LOW ,LOW ,LOW ,LOW },//'6'
  {LOW ,HIGH,HIGH,LOW ,LOW ,HIGH,LOW ,LOW ,LOW ,HIGH,HIGH},//'7'
  {LOW ,LOW ,LOW ,LOW ,LOW ,HIGH,LOW ,LOW ,LOW ,LOW ,LOW },//'8'
  {LOW ,HIGH,LOW ,LOW ,LOW ,HIGH,LOW ,LOW ,LOW ,LOW ,LOW },//'9'
  {},
  {},
  {},
  {},
  {},
  {},
  {},
  {LOW ,LOW ,HIGH,LOW ,LOW ,HIGH,LOW ,LOW ,LOW ,LOW ,LOW },// 'a'
  {LOW ,LOW ,LOW ,LOW ,LOW ,HIGH,HIGH,HIGH,LOW ,LOW ,LOW },// 'b'
  {LOW ,LOW ,LOW ,LOW ,HIGH,HIGH,HIGH,LOW ,LOW ,LOW ,HIGH},// 'c'
  {LOW ,LOW ,LOW ,LOW ,LOW ,HIGH,LOW ,HIGH,LOW ,HIGH,LOW },// 'd'
  {LOW ,LOW ,LOW ,LOW ,HIGH,HIGH,HIGH,LOW ,LOW ,LOW ,LOW },// 'e'
  {LOW ,LOW ,HIGH,LOW ,HIGH,HIGH,HIGH,LOW ,LOW ,LOW ,LOW },// 'f'
  {LOW ,HIGH,LOW ,LOW ,LOW ,HIGH,LOW ,LOW ,LOW ,LOW ,LOW },// 'g'
  {LOW ,LOW ,HIGH,LOW ,LOW ,HIGH,HIGH,HIGH,LOW ,LOW ,LOW },// 'h'
  {LOW ,LOW ,HIGH,LOW ,HIGH,HIGH,HIGH,HIGH,LOW ,LOW ,HIGH},// 'i'
  {LOW ,HIGH,LOW ,LOW ,LOW ,HIGH,LOW ,HIGH,LOW ,HIGH,HIGH},// 'j'
  {LOW ,HIGH,HIGH,LOW ,HIGH,LOW ,HIGH,HIGH,LOW ,HIGH,HIGH},// 'k' .
  {LOW ,LOW ,LOW ,LOW ,HIGH,HIGH,HIGH,HIGH,LOW ,LOW ,HIGH},// 'l'
  {LOW ,HIGH,HIGH,LOW ,HIGH,LOW ,HIGH,HIGH,LOW ,HIGH,HIGH},// 'm' .
  {LOW ,LOW ,HIGH,LOW ,LOW ,HIGH,HIGH,HIGH,LOW ,HIGH,LOW },// 'n'
  {LOW ,LOW ,LOW ,LOW ,LOW ,HIGH,HIGH,HIGH,LOW ,HIGH,LOW },// 'o'
  {LOW ,LOW ,HIGH,LOW ,HIGH,HIGH,LOW ,LOW ,LOW ,LOW ,LOW },// 'p'
  {LOW ,HIGH,HIGH,LOW ,LOW ,HIGH,LOW ,LOW ,LOW ,LOW ,LOW },// 'q'
  {LOW ,LOW ,HIGH,LOW ,HIGH,HIGH,HIGH,LOW ,LOW ,LOW ,HIGH},// 'r'
  {LOW ,HIGH,LOW ,LOW ,LOW ,HIGH,HIGH,LOW ,LOW ,LOW ,LOW },// 's'
  {LOW ,LOW ,LOW ,LOW ,HIGH,HIGH,HIGH,HIGH,LOW ,LOW ,LOW },// 't'
  {LOW ,LOW ,LOW ,LOW ,LOW ,HIGH,LOW ,HIGH,LOW ,LOW ,HIGH},// 'u'
  {LOW ,HIGH,HIGH,LOW ,HIGH,LOW ,HIGH,HIGH,LOW ,HIGH,HIGH},// 'v' .
  {LOW ,HIGH,HIGH,LOW ,HIGH,LOW ,HIGH,HIGH,LOW ,HIGH,HIGH},// 'w' .
  {LOW ,LOW ,HIGH,LOW ,LOW ,HIGH,LOW ,HIGH,LOW ,LOW ,LOW },// 'x'
  {LOW ,HIGH,LOW ,LOW ,LOW ,HIGH,LOW ,HIGH,LOW ,LOW ,LOW },// 'y'
  {LOW ,LOW ,LOW ,LOW ,HIGH,HIGH,LOW ,LOW ,LOW ,HIGH,LOW },// 'z'
  {},
  {},
  {},
  {},
  {},
  {},
  {LOW ,LOW ,HIGH,LOW ,LOW ,HIGH,LOW ,LOW ,LOW ,LOW ,LOW },// 'a'
  {LOW ,LOW ,LOW ,LOW ,LOW ,HIGH,HIGH,HIGH,LOW ,LOW ,LOW },// 'b'
  {LOW ,LOW ,LOW ,LOW ,HIGH,HIGH,HIGH,LOW ,LOW ,LOW ,HIGH},// 'c'
  {LOW ,LOW ,LOW ,LOW ,LOW ,HIGH,LOW ,HIGH,LOW ,HIGH,LOW },// 'd'
  {LOW ,LOW ,LOW ,LOW ,HIGH,HIGH,HIGH,LOW ,LOW ,LOW ,LOW },// 'e'
  {LOW ,LOW ,HIGH,LOW ,HIGH,HIGH,HIGH,LOW ,LOW ,LOW ,LOW },// 'f'
  {LOW ,HIGH,LOW ,LOW ,LOW ,HIGH,LOW ,LOW ,LOW ,LOW ,LOW },// 'g'
  {LOW ,LOW ,HIGH,LOW ,LOW ,HIGH,HIGH,HIGH,LOW ,LOW ,LOW },// 'h'
  {LOW ,LOW ,HIGH,LOW ,HIGH,HIGH,HIGH,HIGH,LOW ,LOW ,HIGH},// 'i'
  {LOW ,HIGH,LOW ,LOW ,LOW ,HIGH,LOW ,HIGH,LOW ,HIGH,HIGH},// 'j'
  {LOW ,HIGH,HIGH,LOW ,HIGH,LOW ,HIGH,HIGH,LOW ,HIGH,HIGH},// 'k' .
  {LOW ,LOW ,LOW ,LOW ,HIGH,HIGH,HIGH,HIGH,LOW ,LOW ,HIGH},// 'l'
  {LOW ,HIGH,HIGH,LOW ,HIGH,LOW ,HIGH,HIGH,LOW ,HIGH,HIGH},// 'm' .
  {LOW ,LOW ,HIGH,LOW ,LOW ,HIGH,HIGH,HIGH,LOW ,HIGH,LOW },// 'n'
  {LOW ,LOW ,LOW ,LOW ,LOW ,HIGH,HIGH,HIGH,LOW ,HIGH,LOW },// 'o'
  {LOW ,LOW ,HIGH,LOW ,HIGH,HIGH,LOW ,LOW ,LOW ,LOW ,LOW },// 'p'
  {LOW ,HIGH,HIGH,LOW ,LOW ,HIGH,LOW ,LOW ,LOW ,LOW ,LOW },// 'q'
  {LOW ,LOW ,HIGH,LOW ,HIGH,HIGH,HIGH,LOW ,LOW ,LOW ,HIGH},// 'r'
  {LOW ,HIGH,LOW ,LOW ,LOW ,HIGH,HIGH,LOW ,LOW ,LOW ,LOW },// 's'
  {LOW ,LOW ,LOW ,LOW ,HIGH,HIGH,HIGH,HIGH,LOW ,LOW ,LOW },// 't'
  {LOW ,LOW ,LOW ,LOW ,LOW ,HIGH,LOW ,HIGH,LOW ,LOW ,HIGH},// 'u'
  {LOW ,HIGH,HIGH,LOW ,HIGH,LOW ,HIGH,HIGH,LOW ,HIGH,HIGH},// 'v' .
  {LOW ,HIGH,HIGH,LOW ,HIGH,LOW ,HIGH,HIGH,LOW ,HIGH,HIGH},// 'w' .
  {LOW ,LOW ,HIGH,LOW ,LOW ,HIGH,LOW ,HIGH,LOW ,LOW ,LOW },// 'x'
  {LOW ,HIGH,LOW ,LOW ,LOW ,HIGH,LOW ,HIGH,LOW ,LOW ,LOW },// 'y'
  {LOW ,LOW ,LOW ,LOW ,HIGH,HIGH,LOW ,LOW ,LOW ,HIGH,LOW },// 'z'
};


/*
 * this is the list of pins, in order from left
 * to right, that supply current to the displays
 */
const int DIGITS[4] = {A1,A2,A3,A4};
int DISPLAYCYCLES = 35;
char charBuff[32] = {0};
int buffLen = 0;
int buffIndex = 0;

void setup() {
  // put your setup code here, to run once:
  for (int i = 1; i < 13; i++) { // initialize digital pins
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }

  for (int i = 0; i < 4; i++) { // initialize analog pins
    pinMode(DIGITS[i], OUTPUT);
    digitalWrite(DIGITS[i], LOW);
  }
//
//  charBuff = malloc(32);
//  charBuff[0] = 0; // init to empty string
  
  Serial.begin(9600);
  while (!Serial); // wait for serial connection
  delay(1);
  Serial.println("setup() complete");
}

/*
time in ms that the display stays on
this setting affects: scroll speed, brightness, flicker
I have found 4ms to be a good setting
*/
int ONTIME = 4;

void display(int displayIndex, char ch) {
  /*
    open the required segment pins
    this loop includes some of the digit pins but
    thats fine because they are set to low in the
    DIGITS constant, which is what they already are
  */
  digitalWrite(11, CHARS[ch][1]); // pin 1 is used for serial connection and so cant be used for the display
  for (int i = 2; i <= 10; i++) {
    digitalWrite(i, CHARS[ch][i]);
  }
  digitalWrite(DIGITS[displayIndex], HIGH); // light up display
  /*
   * this is so you can actually see the display
   * it gets marginally brigter with a longer delay
   * but the flickering is also more noticable
   * i have found 4ms to be a good compromise
   */
  delay(ONTIME);
  /*
   * we must reset the pins to their base state
   * turn off the voltage first so we don't see
   * any inconsistency between segments.
   */
  for (int i = 0; i < 4; i++) { // reset analog pins
    pinMode(DIGITS[i], OUTPUT);
    digitalWrite(DIGITS[i], LOW);
  }
  for (int i = 1; i < 13; i++) { // reset digital pins
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
}

/*
this is to prevent an issue where the program runs faster than the serial
monitor, leaving the program with just one character to display.
then, the rest of the string gets sent and overwrites the first character.
This is a simple race condition.
*/
bool first = true;


/*
 * will display a string provided over serial
 * 
 * will wait for the current string to finish displaying
 * before displaying the next one
 */
void loop() {
  /*
   * if there is a new string to display, clear the buffer and
   * set the buffer to the new string
   */
  if (Serial.available()) {
    if (first) {
      // we will always have a delay to let the string finish filling the serial buffer
      delay(40);
      first = false;
      return;
    }
    first = true; // we should have the whole string now. reset for the next one
    charBuff[0] = 0; // clear the buffer
    buffLen = 0;
  }
  while(Serial.available()) {
    char c = Serial.read();
    if (!c || c==10) break; // if the character is NUL or LF, signaling end of string. break so we can display this one before moving on to the next one.
    charBuff[buffLen] = c; // put in the new char
    charBuff[buffLen+1] = 0; // we need to move the NUL as well
    buffLen++; // I know that you will probably never read this. But if you do, have a nice day! c:
  }
  if (charBuff[0]) { // dont print if nothing, it gets pretty annoying
    Serial.print("charBuff says: ");
    Serial.println(charBuff);
  }
  
  char displayBuff[4] = {0,0,0,0}; // clear the display

  // for each character in the charBuff
  for (int ch = 0; ch < buffLen; ch++) {
    // shift the previous characters to the left
    for (int j = 0; j < 3; j++) {
      displayBuff[j] = displayBuff[j+1];
    }
    // add the next character
    displayBuff[3] = charBuff[ch];

    // do the actual displaying `DISPLAYCYCLES` times
    // change the value of `DISPLAYCYCLES` to change the scroll speed
    for (int j = 0; j < DISPLAYCYCLES; j++) {
      for (int displayChar = 0; displayChar < 4; displayChar++) {
        display(displayChar, displayBuff[displayChar]);
      }
    }
  }
}

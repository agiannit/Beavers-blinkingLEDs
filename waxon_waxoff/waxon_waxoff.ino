void setup()
{
  //Set Pins 0, 1, 2, 3, and 4 as outputs.	
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}
void loop()
{
  //Set the LED pins to HIGH. This gives power to the LED and turns it on
  digitalWrite(0, HIGH);
  delay(200);
  digitalWrite(1, HIGH);
  delay(200);
  digitalWrite(2, HIGH);
  delay(200);
  digitalWrite(3, HIGH);
  delay(200);
  digitalWrite(4, HIGH);
  //Wait for a second
  delay(500);
  //Set the LED pins to LOW. This turns it off
  digitalWrite(4, LOW);
  delay(200);
  digitalWrite(3, LOW);
  delay(200);
  digitalWrite(2, LOW);
  delay(200);
  digitalWrite(1, LOW);
  delay(200);
  digitalWrite(0, LOW);
  //Wait for a second
  delay(500);
}

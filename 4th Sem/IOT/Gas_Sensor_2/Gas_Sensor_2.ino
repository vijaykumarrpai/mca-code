const int mq3 = A0;

//the analog pin of the alcohol sensor goes into analog pin A0 of the arduino

int limit;
int value;

void setup() {
  Serial.begin(115200);//sets the baud rate
}

void loop()
{
  value = analogRead(mq3); //reads the analaog value from the alcohol sensor's AOUT pin
  Serial.print("Alcohol value: ");
  Serial.println(value);//prints the alcohol value

  delay(100);
}

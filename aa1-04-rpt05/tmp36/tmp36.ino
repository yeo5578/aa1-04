//
// AA0104, TMP36 sensor
//

#define TEMP_INPUT 0
// or  int TEMP_INPUT = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
   //getting the voltage reading from the temperature sensor
  int value = analogRead(TEMP_INPUT);
  // Print value
  Serial.print("AA0104, value = ");
  Serial.print(value);
  Serial.print(" : ");

  //converthing that reading to volatage
  float voltage = value * 5.0 * 1000;
  voltage /= 1023.0;

  //print out the voltage
  Serial.print(voltage);
  Serial.print(" mV, ");

  //now print out the temperature
  float temperatureC = (voltage - 500) / 10;
  Serial.print(temperatureC);
  Serial.println(" degress C");

  delay(100);
}

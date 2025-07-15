const int sensorPin = A0;     
const float BETA = 3950.0;  
const float seriesResistor = 10000.0; 
const float nominalRes = 10000.0;     
const float nominalTemp = 25.0;     

void setup() {
  Serial.begin(9600); 
}

void loop() {
  int analogValue = analogRead(sensorPin);  
  float voltage = analogValue * (5.0 / 1023.0);  


  float thermistorRes = seriesResistor * (5.0 / voltage - 1.0);


  float tempK = 1.0 / (1.0 / (nominalTemp + 273.15) + (1.0 / BETA) * log(thermistorRes / nominalRes));
  float tempC = tempK - 273.15;  
  float tempF = tempC * 9.0 / 5.0 + 32.0;  
  Serial.print("Temp: ");
  Serial.print(tempC);
  Serial.print(" °C  |  ");
  Serial.print(tempF);
  Serial.println(" °F");

  delay(500);  
}

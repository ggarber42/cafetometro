const int hot = 70; //set hot parameter
const int medium = 50; //set cold parameter

void setup() {
  pinMode(A2, INPUT); 
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);
}

int setBlinkTime(float tempCelsius){
     Serial.println(tempCelsius);
     int blinkTime;
     if (tempCelsius >= hot) {
          blinkTime = 5000;
     Serial.println(" It's Hot.");
     } else if(tempCelsius < hot && tempCelsius >= medium ) {
          blinkTime = 2000;
          Serial.println(" It's Ok.");
     } else { //hot
          blinkTime = 500;
          Serial.println(" It's Cold.");
     }
     return blinkTime;
}

void loop() {
     int rawvoltage = analogRead(A2);
     float millivolts= (rawvoltage/1024.0) * 5000;
     float tempCelsius = millivolts/10;    
     int blinkTime = setBlinkTime(tempCelsius);     
     digitalWrite(2, HIGH);
     digitalWrite(3, HIGH);
     digitalWrite(4, HIGH);
     digitalWrite(5, HIGH);          
     delay(blinkTime);
     digitalWrite(2, LOW);
     digitalWrite(3, LOW);
     digitalWrite(4, LOW);
     digitalWrite(5, LOW); 
     delay(blinkTime);
}


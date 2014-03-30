char ch;

void setup() {
 pinMode(8, INPUT);
 pinMode(9, OUTPUT);
 pinMode(12, OUTPUT);
 
 digitalWrite(9,HIGH); 
 Serial.begin(9600);
}


void loop() {
  if (Serial.available()) {
  
     ch = Serial.read();
    switch (ch) {
     case '1': digitalWrite(12,HIGH); break;
     case '2': digitalWrite(12, LOW); break;
     default: break; 
    }
  }
  delay(100);
  
}

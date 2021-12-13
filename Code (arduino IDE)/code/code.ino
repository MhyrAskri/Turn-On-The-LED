int led = 3;
char serial;

void setup() {

  Serial.begin(9600);
  pinMode(led , OUTPUT);
  
}

void loop() {

  while(Serial.available()) {

    serial = Serial.read();
    if (serial == '1') {

      digitalWrite(led , 1);
      
    } else if (serial == '0') {

      digitalWrite(led , 0);
      
    }
    
  }
  
}

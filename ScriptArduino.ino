const int ldr_pin = 4;
const int led1_pin = 12;
const int led2_pin = 13;
const int led3_pin = 8;

void setup()
{
    pinMode(ldr_pin, INPUT);
    pinMode (led1_pin, OUTPUT);
    pinMode (led2_pin, OUTPUT);
    pinMode (led3_pin, OUTPUT);
}

void loop(){
  if(digitalRead(ldr_pin) == 1){
     digitalWrite(led1_pin, HIGH);
     digitalWrite(led2_pin, HIGH);
     digitalWrite(led3_pin, HIGH);
  }

else {
    digitalWrite(led1_pin, LOW);
    digitalWrite(led2_pin, LOW);
    digitalWrite(led3_pin, LOW);
}

if (digitalRead(ldr_pin) == 0){
    Serial.println("Lampu Mati");
    delay (100);
}
else {Serial.println("Lampu Menyala");
      delay(100);
}
}

int flash_led1=6;
int flash_led2=8;
int flash_led3=10;
int flash_led4=12;

int photonen_led1=4;
int photonen_led2=2;

void setup() {
  pinMode(flash_led1, OUTPUT);
  pinMode(flash_led2, OUTPUT);
  pinMode(flash_led3, OUTPUT);
  pinMode(flash_led4, OUTPUT);

  pinMode(photonen_led1, OUTPUT);
  pinMode(photonen_led2, OUTPUT);

  pinMode(LED_BUILTIN, OUTPUT);
}

void flash() {
  digitalWrite(flash_led1, HIGH);
  digitalWrite(flash_led2, HIGH);
  digitalWrite(flash_led3, HIGH);
  digitalWrite(flash_led4, HIGH);
  delay(70);
  digitalWrite(flash_led1, LOW);
  digitalWrite(flash_led2, LOW);
  digitalWrite(flash_led3, LOW);
  digitalWrite(flash_led4, LOW);
}

void photonen() {
  digitalWrite(photonen_led1, HIGH);
  digitalWrite(photonen_led2, HIGH);
  delay(200);
  digitalWrite(photonen_led1, LOW);
  digitalWrite(photonen_led2, LOW);

  delay(1000);

  digitalWrite(photonen_led1, HIGH);
  delay(200);
  digitalWrite(photonen_led1, LOW);
  delay(100);
  digitalWrite(photonen_led1, HIGH);
  delay(200);
  digitalWrite(photonen_led1, LOW);
  
  delay(500);

  digitalWrite(photonen_led2, HIGH);
  delay(200);
  digitalWrite(photonen_led2, LOW);
  delay(100);
  digitalWrite(photonen_led2, HIGH);
  delay(200);
  digitalWrite(photonen_led2, LOW);

  delay(700);

  digitalWrite(photonen_led1, HIGH);
  digitalWrite(photonen_led2, HIGH);
  delay(300);
  digitalWrite(photonen_led1, LOW);
  digitalWrite(photonen_led2, LOW);

  delay(200);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on 
  delay(500);                       // wait for half a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off 
  
  for (int i=0; i<5; i++){
    flash();
    delay(4000);
   }
  
  flash();
  photonen();
}


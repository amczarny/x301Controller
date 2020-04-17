int SW_1 = A0;
int SW_2 = 13;
int SW_3 = 10;
int SW_4 = 8;
int SW_5 = 7;
int MOTOR_POSITION = 9 ;
int MOTOR_ON  = A1;

int MOTOR_DIR_2 = 11;
int MOTOR_DIR_1 = 12;
int VR_CTL = A3;

void setup() {
  pinMode(SW_1 , INPUT_PULLUP); 
  pinMode(SW_2 , INPUT_PULLUP); 
  pinMode(SW_3 , INPUT_PULLUP); 
  pinMode(SW_4 , INPUT_PULLUP); 
  pinMode(SW_5 , INPUT_PULLUP);
  pinMode(MOTOR_POSITION , INPUT_PULLUP);

  pinMode(MOTOR_ON, OUTPUT);
  pinMode(MOTOR_DIR_1, OUTPUT);
  pinMode(MOTOR_DIR_2, OUTPUT);
  pinMode(VR_CTL, OUTPUT);
  
  digitalWrite(MOTOR_DIR_1, LOW);
  digitalWrite(MOTOR_DIR_2, LOW);
  digitalWrite(VR_CTL, HIGH);
  digitalWrite(MOTOR_ON, HIGH);

  Serial.begin(9600);
}

void loop() {
  int sw_1 = digitalRead(SW_1);
  int sw_2 = digitalRead(SW_2);
  int sw_3 = digitalRead(SW_3);
  int sw_4 = digitalRead(SW_4);
  int sw_5 = digitalRead(SW_5);
  int motor_positin = digitalRead(MOTOR_POSITION);

  if (sw_1 == LOW) {
     digitalWrite(MOTOR_DIR_1, HIGH); 
  } else {
     digitalWrite(MOTOR_DIR_1, LOW);
  }
  if (sw_2 == LOW) {
     digitalWrite(MOTOR_DIR_2, HIGH); 
  } else {
     digitalWrite(MOTOR_DIR_2, LOW);
  }
  if (sw_3 == LOW) {
    Serial.println("sw_3"); 
  }
  if (sw_4 == LOW) {
    Serial.println("sw_4"); 
  }
  if (sw_5 == LOW) {
    Serial.println("sw_5"); 
  }
  if (motor_positin == LOW) {
    Serial.println("motor_positin"); 
  }
  delay(10);
}

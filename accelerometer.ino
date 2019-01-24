 const int xPin = A0;
 const int led=D0;

void setup() {
  pinMode(led,OUTPUT);
  digitalWrite(led,LOW);
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x1 = analogRead(xPin);
  delay(150);
  int x2 = analogRead(xPin);
  
  if(x1-x2>=110)
  {
    Serial.print(x2); 
    digitalWrite(led,HIGH);  
//    delay(3000);
//    digitalWrite(led,LOW);  
    
  }
    

  Serial.print("X-axis:\n");
  Serial.print(x2); 
}

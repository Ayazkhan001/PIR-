
void setup(){
// put your setup code here, to run once:
  pinMode(7, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a=digitalWrite(7);
  Serial.println(a);
  delay(1000);

  if(a==1){
  digitalWrite(2,HIGH);
  Serial.println("LED is ON");
  }
  else{
    digitalWrite(2,LOW);
    Serial.println("LED is OFF");
  }

}

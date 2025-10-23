void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(6,LOW); 
  digitalWrite(5,HIGH);
  delay(1000);
  digitalWrite(6,HIGH); 
  digitalWrite(5,LOW);
  delay(1000);
}

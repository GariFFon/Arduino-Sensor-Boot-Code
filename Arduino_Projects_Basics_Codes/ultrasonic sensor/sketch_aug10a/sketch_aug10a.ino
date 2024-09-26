int trigPin = 9;
int echoPin = 10;
int led = 7;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(led, OUTPUT);
pinMode(echoPin, OUTPUT);
pinMode(trigPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
long duration, distance;
digitalWrite(trigPin,HIGH);
delayMicroseconds(1000);
digitalWrite(trigPin,LOW);
duration=pulseIn(echoPin,HIGH);
distance =(duration/2)/29.1;
Serial.print(distance);
Serial.println("CM");
delay(10);

if((distance<=10))
{
  digitalWrite(led,HIGH);
  delay(1000);
}
  else if(distance>10)
  {
    digitalWrite(led,LOW);
    delay(1000);
  } 
}

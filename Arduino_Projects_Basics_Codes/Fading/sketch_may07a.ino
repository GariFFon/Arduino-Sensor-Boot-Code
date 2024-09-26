#define red 9
#define green 10
#define blue 11
#define DELAY 1000
void setup() {
  // put your setup code here, to run once:
pinMode(red, OUTPUT);
pinMode(green, OUTPUT);
pinMode(blue, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int i;
for(i=0;i++;i<255);
{analogWrite(red,i);
analogWrite(green,i=0);
analogWrite(blue,i-255);
delay(DELAY);
}
{analogWrite(red,i=0);
analogWrite(green,i-255);
analogWrite(blue,i);
delay(DELAY);
}
{analogWrite(red,i-255);
analogWrite(green,i);
analogWrite(blue,i=0);
delay(DELAY);
}}

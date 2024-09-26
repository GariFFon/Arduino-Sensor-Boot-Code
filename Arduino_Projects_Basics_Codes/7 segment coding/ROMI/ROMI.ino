#define a 1
#define b 2
#define c 3
#define d 4
#define e 5
#define f 6
#define g 7
#define h 13
void setup() {
  // put your setup code here, to run once:
pinMode(a,OUTPUT);
pinMode(b,OUTPUT);
pinMode(c,OUTPUT);
pinMode(d,OUTPUT);
pinMode(e,OUTPUT);
pinMode(f,OUTPUT);
pinMode(g,OUTPUT);
pinMode(h,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(a,HIGH);digitalWrite(b,HIGH);digitalWrite(c,HIGH);digitalWrite(d,HIGH);digitalWrite(e,HIGH);digitalWrite(f,HIGH);digitalWrite(g,HIGH);digitalWrite(h,HIGH);
digitalWrite(b,LOW);digitalWrite(c,LOW);
delay(1000); // for one    
digitalWrite(a,HIGH);digitalWrite(b,HIGH);digitalWrite(c,HIGH);digitalWrite(d,HIGH);digitalWrite(e,HIGH);digitalWrite(f,HIGH);digitalWrite(g,HIGH);
digitalWrite(a,LOW);digitalWrite(b,LOW);digitalWrite(g,LOW);digitalWrite(e,LOW);digitalWrite(d,LOW);
delay(1000); // for two            
digitalWrite(a,HIGH);digitalWrite(b,HIGH);digitalWrite(c,HIGH);digitalWrite(d,HIGH);digitalWrite(e,HIGH);digitalWrite(f,HIGH);digitalWrite(g,HIGH);
digitalWrite(a,LOW);digitalWrite(b,LOW);digitalWrite(g,LOW);digitalWrite(c,LOW);digitalWrite(d,LOW);
delay(1000); // for three
digitalWrite(a,HIGH);digitalWrite(b,HIGH);digitalWrite(c,HIGH);digitalWrite(d,HIGH);digitalWrite(e,HIGH);digitalWrite(f,HIGH);digitalWrite(g,HIGH);
digitalWrite(b,LOW);digitalWrite(c,LOW);digitalWrite(f,LOW);digitalWrite(g,LOW);
delay(1000); // for four             
digitalWrite(a,HIGH);digitalWrite(b,HIGH);digitalWrite(c,HIGH);digitalWrite(d,HIGH);digitalWrite(e,HIGH);digitalWrite(f,HIGH);digitalWrite(g,HIGH);
digitalWrite(g,LOW);digitalWrite(c,LOW);digitalWrite(f,LOW);digitalWrite(a,LOW);digitalWrite(d,LOW);
delay(1000); // for five             
digitalWrite(a,HIGH);digitalWrite(b,HIGH);digitalWrite(c,HIGH);digitalWrite(d,HIGH);digitalWrite(e,HIGH);digitalWrite(f,HIGH);digitalWrite(g,HIGH);
digitalWrite(g,LOW);digitalWrite(c,LOW);digitalWrite(f,LOW);digitalWrite(a,LOW);digitalWrite(d,LOW);digitalWrite(e,LOW);
delay(1000); // for six 
digitalWrite(a,HIGH);digitalWrite(b,HIGH);digitalWrite(c,HIGH);digitalWrite(d,HIGH);digitalWrite(e,HIGH);digitalWrite(f,HIGH);digitalWrite(g,HIGH);
digitalWrite(b,LOW);digitalWrite(c,LOW);digitalWrite(a,LOW);
delay(1000); // for seven
digitalWrite(a,HIGH);digitalWrite(b,HIGH);digitalWrite(c,HIGH);digitalWrite(d,HIGH);digitalWrite(e,HIGH);digitalWrite(f,HIGH);digitalWrite(g,HIGH);
digitalWrite(g,LOW);digitalWrite(c,LOW);digitalWrite(f,LOW);digitalWrite(a,LOW);digitalWrite(d,LOW);digitalWrite(e,LOW);digitalWrite(b,LOW);
delay(1000); // for eight
 digitalWrite(a,HIGH);digitalWrite(b,HIGH);digitalWrite(c,HIGH);digitalWrite(d,HIGH);digitalWrite(e,HIGH);digitalWrite(f,HIGH);digitalWrite(g,HIGH);
digitalWrite(g,LOW);digitalWrite(c,LOW);digitalWrite(f,LOW);digitalWrite(a,LOW);digitalWrite(d,LOW);digitalWrite(b,LOW);
delay(1000); // for nine
digitalWrite(a,HIGH);digitalWrite(b,HIGH);digitalWrite(c,HIGH);digitalWrite(d,HIGH);digitalWrite(e,HIGH);digitalWrite(f,HIGH);digitalWrite(g,HIGH);
digitalWrite(c,LOW);digitalWrite(f,LOW);digitalWrite(a,LOW);digitalWrite(d,LOW);digitalWrite(e,LOW);digitalWrite(b,LOW);
delay(1000); // for zero
}

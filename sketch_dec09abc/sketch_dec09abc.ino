int Red = 1;
int yellow = 3;
int green = 2;
int red4  = 4;
int red5  = 5;
int red6  = 7;
void setup() {
  // put your setup code here, to run once:
pinMode(yellow,OUTPUT);
pinMode(green,OUTPUT);
pinMode(Red,OUTPUT);
pinMode(red4,OUTPUT);
pinMode(red5,OUTPUT);
pinMode(red6,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(Red,HIGH);
delay(1000);

delay(1000);
digitalWrite(green,HIGH);
delay(1000);

delay(1000);
  digitalWrite(yellow,HIGH);
delay(1000);

delay(1000);
digitalWrite(red4,HIGH);
delay(1000);

delay(1000);
digitalWrite(red5,HIGH);
delay(1000);

delay(1000);
digitalWrite(red6,HIGH);
delay(1000);

delay(1000);
}

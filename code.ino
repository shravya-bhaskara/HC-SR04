#define trig_pin 9
#define echo_pin 11
int led = 3;
long t;
int d;
void setup() {
  // put your setup code here, to run once:
pinMode(trig_pin, OUTPUT);
pinMode(echo_pin, INPUT);
pinMode(led, OUTPUT);

Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trig_pin, LOW);
delayMicroseconds(2);

digitalWrite(trig_pin, HIGH);
delayMicroseconds(10);
digitalWrite(trig_pin, LOW);

t = pulseIn(echo_pin, HIGH);
d = t*(0.034/2);

if(d<=50){
  Serial.print("distance: ");
  Serial.print(d);
  Serial.print(" cm \n");
  
  digitalWrite(led, HIGH);
  
}else{
  Serial.print("distance: ");
  Serial.print(d);
  Serial.print(" cm \n");

  digitalWrite(led, LOW);
}
}

#define trig_pin 9  //since trigger pin is connected to digital pin 9
#define echo_pin 11 //since echo pin is connected to digital pin 11
int led = 3;        //led connected to digital pin 3
long t;             // variable to measure time taken (t)
int d;              // variable to measure distance between the sensor and the object 
void setup() {
  // put your setup code here, to run once:
pinMode(trig_pin, OUTPUT);  //trigger pin is an output pin
pinMode(echo_pin, INPUT);   //echo pin is an input pin
pinMode(led, OUTPUT);       

Serial.begin(9600);         //starting communication with the serial monitor

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trig_pin, LOW);
delayMicroseconds(2);

digitalWrite(trig_pin, HIGH);      //this is when the sensor transmits high frequency wave
delayMicroseconds(10);             
digitalWrite(trig_pin, LOW);       
                                    
t = pulseIn(echo_pin, HIGH);       //this is when the sensor recieves signal 

d = t*(0.034/2);                   /*speed of sound in air is 340 m/s. since time is calculated in micro seconds, thus speed of sound is equivalent to 0.034 cm/(micro)s. 
                                   thus while calculating distance, distance = speed * time. 
                                   since distance traversed by the wave is twice the actual distance, (transmitting and recieving), 
                                   thus, the distance calcuted is divided by 2, so as to get the original lentgh between the sensor and the obstacle. */

if(d<=50){                        // if distance is less than or equal to 50 cm 
  Serial.print("distance: ");
  Serial.print(d);
  Serial.print(" cm \n");
  
  digitalWrite(led, HIGH);        //led glows bright
  
}else{                            //if distance is greater than 50 cm
  Serial.print("distance: ");   
  Serial.print(d);
  Serial.print(" cm \n");

  digitalWrite(led, LOW);         //led glows dim
}
}

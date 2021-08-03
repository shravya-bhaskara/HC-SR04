## Sensors:

In this project, I have made use of the ultra-sonic sensor (HC-SR04). This sensor is widely used as a distance sensor.

Here is the data sheet available for the [HC-SR04](https://cdn.sparkfun.com/datasheets/Sensors/Proximity/HCSR04.pdf) sensor.

I used this sensors since :
- It requires a simple 5V power input which is more than enough
- It has a working frequency of 40Hz
- Has a maximum range upto 4m.

![image](https://user-images.githubusercontent.com/59280388/128071036-8cc41983-ec2c-4dba-934b-afc8cd83a150.png)

As we can see from the above pinout diagram, the ultra-sonic sensor has 4 pins, VCC, Trigger, Echo and Ground. Vin is given at Vcc, the trigger and echo pins are used for transmission and receivig of signals whereas the ground pin is simply used to provide a 0 voltage or a reference voltage to the circuit. 

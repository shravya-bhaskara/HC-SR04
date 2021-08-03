## Sensors:

In this project, I have made use of the ultra-sonic sensor (HC-SR04). This sensor is widely used as a distance sensor.

Here is the data sheet available for the [HC-SR04](https://cdn.sparkfun.com/datasheets/Sensors/Proximity/HCSR04.pdf) sensor.

I used this sensors since :
- It requires a simple 5V power input which is more than enough
- It has a working frequency of 40Hz
- Has a maximum range upto 4m.

![image](https://user-images.githubusercontent.com/59280388/128071036-8cc41983-ec2c-4dba-934b-afc8cd83a150.png)

As we can see from the above pinout diagram, the ultra-sonic sensor has 4 pins, VCC, Trigger, Echo and Ground. Vin is given at Vcc, the trigger and echo pins are used for transmission and receivig of signals whereas the ground pin is simply used to provide a 0 voltage or a reference voltage to the circuit. 

# Actuators:

I have used an electronic buzzer to depict the actuation. It is an audio signalling device which consists of two pins, Vcc and Ground. The implementation is simple and is explained in the overview. 

Here is the data sheet available for the [Electric Buzzer](https://components101.com/misc/buzzer-pinout-working-datasheet).

![image](https://user-images.githubusercontent.com/59280388/128072165-21ab6fc0-96b0-4913-96b4-e0dbaeed659e.png)

As we can see, it has two pins, one for Vcc/ Signal and the other for Ground.

# Micro-controller:

## Arduino UNO:

Arduino is a free open source software used for the development of projects. It makes use of ```ATmega-328``` micro-controller.

You may refer to [Arduino Home Page](https://www.arduino.cc/) for more details and integrated projects. Arduino requires an ArduinoIDE software which can be easy installed from this [link](https://www.arduino.cc/en/software)

![image](https://user-images.githubusercontent.com/59280388/128072949-1be4bd22-44c9-42f8-b3f5-be13cd46200a.png)

The above pinout diagram will give you a clear idea about the various pins. Please refer this [link](https://www.circuito.io/blog/arduino-uno-pinout/) for the pinout guide. 


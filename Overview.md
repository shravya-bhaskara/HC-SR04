# HC-SR04
This repository shall explain the working of HC-SR04 (Ultra sonic Sensor) using an arduino as an open source platform.

This project shall explain the working of an HC-SR04 module (Ultrasonic Sensor).

## To begin with:

HC-SR04 (Ultrasonic Sensor): an ultrasonic sensor is used when we need to measure distances. Following the principle of how bats detect objects in the dark, it sends out high frequency sound waves which are inaudible to the human ear (range – 25 to 50 kHz). In case an object comes in between, the pressure waves get reflected back and the distance is calculated based on the time taken for the wave to get reflected back.

The ultrasonic sensor has 4 pins :

- VCC- should be connected to a 5V pin of the arduino.
- gnd- should be connected to ground pin of the arduino.
- trigger pin- can be connected to any of the digital pins on arduino.
- echo pin- can be connected to any of the digital pins on arduino.

The trigger pin is an output pin, as it sends out ultrasonic waves. While working out the project, if one eye (trigger pin eye) of the sensor is closed, we do not see any output, as no waves are sent out in the first place.

The echo pin on the other hand is an input pin, as it receives the ultrasonic waves after they hit an obstacle. In case no obstacle is present in its path, no output is seen. While working out the project if we close the other eye (echo pin eye) of the sensor, we might still see the output, as the signal is still sent out.

## Working:

In this project, the ultrasonic sensor shall sense the distance between itself and the object in its path. If the distance is less than equal to 50 cm, the led shall glow indicating a close proximity of the object. However if distance is greater than 50 cm, the led shall remain dim. 

The connections, and code are available in the respective files. 


# NTC-Thermistor
A project for temperature measurement using Arduino.

Analog Sensor Integration with Arduino UNO
Overview
This project demonstrates a basic analog sensor integration using the Arduino UNO microcontroller. The setup enables reading environmental or physical signals through an analog sensor, allowing data to be processed and visualized via the Serial Monitor. This configuration serves as a foundational approach for sensor-based automation and monitoring systems.

Hardware Components
Arduino UNO board

Analog sensor module (three-pin: VCC, GND, Signal)

Male-to-male jumper wires

USB cable for power and programming

Wiring Instructions
The sensor module is interfaced with the Arduino UNO according to the following pin mapping:

Sensor Pin	Arduino UNO Pin	Wire Color
VCC	5V	Red
GND	GND	Black
S (Signal)	A0	Green
Ensure all connections are stable and match the color coding for clarity and safety. The analog signal (green wire) should be connected to the A0 pin for proper analog-to-digital conversion.

Applications
Environmental monitoring (e.g., light, temperature, gas)

IoT prototyping and sensor calibration

Educational demonstrations on analog signal processing

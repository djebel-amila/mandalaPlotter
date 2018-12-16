# mandalaPlotter
This is the arduino code for a joystick controlled CNC plotter with infinite Y-axis. A video making-of is visible here: 
https://www.youtube.com/watch?v=JPHRC_p_l5g

Hardware and parts used in the project:

*Arduino Uno R3
*CNC shield v3 by protoneer: https://blog.protoneer.co.nz/arduino-cnc-shield/
*4 pololu a4988 drivers
* 2 Nema 17 steppers
* 1 12V solenoid

*Arduino analog joystick
*Resistors: 1k Ω
*various mechanical parts from ebay

Software, references:

*“Accelstepper and Multistepper” library by Mike Mc Cauley: http://www.airspayce.com/mikem/arduino/AccelStepper/ and  https://github.com/vberkaltun/MultiStepper
*tutorial hosted on brainy-bits.com  for analog joystick control: https://www.brainy-bits.com/arduino-joystick-tutorial/
*I found additional help and information for the joystick (adapting servos to steppers) from maker.pro: https://maker.pro/arduino/tutorial/how-to-control-servo-motors-with-an-arduino-and-joystick
*tutorial from bc-robotics and built the circuit, in order to control and power the solenoid I use in my printing shaft. I built and soldered the matching circuit: https://www.bc-robotics.com/tutorials/controlling-a-solenoid-valve-with-arduino/

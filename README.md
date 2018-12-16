# mandalaPlotter
This is the arduino code for a joystick controlled CNC plotter with infinite Y-axis. A video making-of is visible here: 
https://www.youtube.com/watch?v=JPHRC_p_l5g

Hardware and parts used in the project:

*Arduino Uno R3<br>
*CNC shield v3 by protoneer: https://blog.protoneer.co.nz/arduino-cnc-shield/<br>
*4 pololu a4988 drivers<br>
*2 Nema 17 steppers<br>
*1 12V solenoid<br>
*Arduino analog joystick<br>
*Resistors: 1k Ω<br>
*various mechanical parts from ebay<br>

Software, references:

*“Accelstepper and Multistepper” library by Mike Mc Cauley: http://www.airspayce.com/mikem/arduino/AccelStepper/ and  https://github.com/vberkaltun/MultiStepper<br>
*tutorial hosted on brainy-bits.com  for analog joystick control: https://www.brainy-bits.com/arduino-joystick-tutorial/<br>
*I found additional help and information for the joystick (adapting servos to steppers) from maker.pro: https://maker.pro/arduino/tutorial/how-to-control-servo-motors-with-an-arduino-and-joystick<br>
*tutorial from bc-robotics and built the circuit, in order to control and power the solenoid I use in my printing shaft. I built and soldered the matching circuit: https://www.bc-robotics.com/tutorials/controlling-a-solenoid-valve-with-arduino/<br>

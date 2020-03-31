# Tasin Firmata
An easy way to controll arduino uno from a terminal with some commands.

Command lists:
  Switching any digital pin's status from HIGH (1) to LOW(0) or vice versa.
  D<pin> <stat>
  examples: "D13 HIGH", "D13 LOW"
  
  Getting value of any Digital Pin.
  D<pin> READ
  examples: "D13 READ" , "D10 READ"
  
  Getting value of any Analog Pin.
  A<pin> READ
  examples: "A0 READ"
 
 You can't use 0 and 1 pins of Arduino. Because They are Rx and Tx pins. They are used to communicate with the python terminal
 provided with this repository.
 
 Unfortunately You can't set and use any PWM Pin. I'm still developing this project and I was unable to use the PWM function with this firmata.
 
 Unfortunately This project is developed only for Arduino UNO R3. UNO R2 or Pro mini may work but they are not tested with this firmta yet.
 I need contributer for this project.
 
 I really want to develope this project further.

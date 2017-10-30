# BlindSonic
In this project we use ultrasonic sensor meusurment to activate a mobile buzzer periodicaly, like a sonar.
Materials : 
  -1 * Arduino mini Pro
  -1 * MB1230, XL-MaxSonar-EZ3
  -1 * Mobile vibrator
  -1 * Mini switch
  -2 * 3Volt plate sell

The analog Output voltage of XL-MaxSonar-EZ3 not accurate rather than PW And serial . so I prefer to use PW or serial .
Pulse width "PW" Is another way to communicate with this sensor .

This pin outputs a pulse width representation of range. The distance can be calculated using the scale factor of 147uS per inch.
So using Pulse in to calculate the distance .

Arduino mini Pro
![alt text](https://cdn.sparkfun.com//assets/parts/6/9/8/3/11303-01a.jpg)

MB1230, XL-MaxSonar-EZ3
![alt text](https://cdn.instructables.com/F41/I1D8/HJKBVFX5/F41I1D8HJKBVFX5.MEDIUM.jpg)
Hardware Constraints
Range:
Close: 0-20cm (will result in 20cm reading)
Long: 20-765cm
Resolution: 1cm

Mobile vibrator
![alt text](https://diazoniclabs.files.wordpress.com/2016/12/free-shipping-1000pcs-micro-vibrating-motor-cellphone-vibrator-10mmx2mm-font-b-small-b-font-coin-toy.jpg?w=214&h=214)

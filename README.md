# Simple altimeter with oled display

This is a really simple example using two I2C devices. I've used bits and pieces from the example sketches from the devices libraries. 

**Caution:** Double check the sensor and display input voltage requirements.<br/>
My sensor and display where 3.3V, both.

_Material needed:_

- Arduino board
- Pressure sensor BMP 085
- OLED Display SSD1306 128x32

_Libraries used (Arduino non-native):_

- Adafruit-BPM085-Library https://github.com/adafruit/Adafruit-BMP085-Library
- U8g2 library for monochrome displays https://github.com/olikraus/u8g2

_Connections:_
- Vcc to 3.3
- GND to GND
- SDA to SDA
- SCL to SCL

Notes:
For the code to work, I had to add Wire.end(); and Wire.begin(); around the u8g2 commands as christianbenavent stated here:  https://forum.arduino.cc/index.php?topic=490358.0

![](https://github.com/LCLLajas/Simple-altimeter-with-oled-display/blob/master/Connections%201000.jpg)

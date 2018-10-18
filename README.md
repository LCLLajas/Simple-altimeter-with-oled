# Simple-altimeter-with-oled-display

This is a really simple example using two I2C devices. I've used 

*Caution:* Double check the sensors input voltage requirements.
My sensors where 3.3V, both.

_Material needed:_

- Arduino board
- Pressure sensor BMP 085
- OLED Display SSD1306 124x32

_Libraries used (Arduino non-native):_

- Adafruit-BPM085-Library https://github.com/adafruit/Adafruit-BMP085-Library
- U8g2 livrary for monochrome displays https://github.com/olikraus/u8g2

Connections:
Vcc to 3.3
GND to GND
SDA to SDA
SCL to SCL


![](https://github.com/LCLLajas/Simple-altimeter-with-oled/blob/master/Connections.jpg)

Notes:
For the code to work, I had to add Wire.end(); and Wire.begin(); around the u8g2 commands. 

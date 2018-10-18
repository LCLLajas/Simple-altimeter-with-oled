#include <Wire.h>
//#include <SPI.h>
#include <Adafruit_BMP085.h>

#include <Arduino.h>
#include <U8g2lib.h>

Adafruit_BMP085 bmp;

U8G2_SSD1306_128X32_UNIVISION_F_SW_I2C u8g2(U8G2_R0, /* clock=*/ SCL, /* data=*/ SDA, /* reset=*/ U8X8_PIN_NONE);   // Adafruit Feather ESP8266/32u4 Boards + FeatherWing OLED

int alt;
int temp;

void setup(void) {
  u8g2.begin();
  bmp.begin();
  
  if (!bmp.begin()) {
  Serial.println("Could not find a valid BMP085 sensor, check wiring!");
  while (1) {}
  }
}

void loop(void) 
{
  alt=bmp.readAltitude(101325);
  temp=bmp.readTemperature();

  Wire.end();
  u8g2.clearBuffer();
  u8g2.setFont(u8g2_font_t0_11b_tr);
  u8g2.setCursor(0,10);
  u8g2.print("Altitude     ");
  u8g2.print(alt);
  u8g2.print(" m");
  u8g2.setCursor(0,20);
  u8g2.print("Temperature  ");
  u8g2.print(temp);
  u8g2.print(" ºC");
  u8g2.sendBuffer();					
  delay(1000);  
  Wire.begin();
}

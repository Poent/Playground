#!/usr/bin/python
# -*- coding:utf-8 -*-

# pulled from Waveshare Raspberry pi Example python code.
# rewritten for circuitpython on Feather nrf52840


import time
import board
import epd2in9_V2

#from PIL import Image,ImageDraw,ImageFont

time.sleep(1)
#main function
print("epd2in9 V2 Demo") 
epd = epd2in9_V2.EPD()

print("init and Clear")
epd.init()
epd.Clear(0x55) 
time.sleep(5)
epd.display([0x00] * 4)
epd.Clear(0xFF) 
time.sleep(30)
epd.Clear(0xFF)
time.sleep(5)
print("Deep Sleep...")
epd.sleep()

   

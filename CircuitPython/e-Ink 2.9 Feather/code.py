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

#initialize the display as documented
print("init and Clear")
epd.init()

# clear the display with a simple alternating bit pattern 0101 0101 (0x55)
epd.Clear(0x55) 
time.sleep(5)

# send a small display update to identify the corner it's writing from first (x/y orientation)
epd.display([0x00] * 4)
time.sleep(10)

#wipe the screen
epd.Clear(0xFF)
time.sleep(5)

# power down as recommended
print("Deep Sleep...")
epd.sleep()

   

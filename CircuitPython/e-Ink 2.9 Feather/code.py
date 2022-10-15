#!/usr/bin/python
# -*- coding:utf-8 -*-

# Original code cloned from waveshare github Raspberry Pi example
# Update code functions to CircuitPython
# Need to replace or remove PIL https://github.com/python-pillow/Pillow/tree/main/src/PIL


import time
import board
import epd2in9_V2

#from PIL import Image,ImageDraw,ImageFont

time.sleep(1)
#main function
print("epd2in9 V2 Demo") 
epd = epd2in9_V2.EPD()

#initialize the display per datasheet recommendations and wipe screen clean
print("init and Clear")
epd.init()
epd.Clear(0x7E) 
time.sleep(10)


# epd.display([0x81] * 40)
# time.sleep(5)
# epd.SetCursor(0x00,0x00)
# print([0x00] * int((epd.width/8)))
# epd.display([0x00] * int((epd.width/8)))

epd.SetWindow(0, 0, epd.width, epd.height)

time.sleep(5)

epd.sleep()

# epd.Clear(0xFF) 
# time.sleep(30)
# epd.Clear(0xFF)
# time.sleep(5)
# print("Deep Sleep...")
# epd.sleep()


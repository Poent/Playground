#!/usr/bin/python
# -*- coding:utf-8 -*-

#CODE FOR RASPBERRY PI - NOT YET CONVERTED FOR SEEED XIAO
#TODO
# Need to comment entire program to understand functions
# Need to replace all Pi specific GPIO references and paths with SEEEDXIAO
# Update code functions to CircuitPython
# Need to replace or remove PIL (pi image library?) https://github.com/python-pillow/Pillow/tree/main/src/PIL


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

    # clear the screen with either 0x00 (black) or 0xFF (white)
    # 
    # Technically we could clear the screen with any pattern we want as 8 bits are shifted repeating
    # through the entire screen.

    
    # font24 = ImageFont.truetype(os.path.join(picdir, 'Font.ttc'), 24)
    # font18 = ImageFont.truetype(os.path.join(picdir, 'Font.ttc'), 18)
    
    # # Drawing on the Horizontal image
    # print("1.Drawing on the Horizontal image...")
    # Himage = Image.new('1', (epd.height, epd.width), 255)  # 255: clear the frame
    # draw = ImageDraw.Draw(Himage)
    # draw.text((10, 0), 'hello world', font = font24, fill = 0)
    # draw.text((10, 20), '2.9inch e-Paper', font = font24, fill = 0)
    # draw.text((150, 0), u'微雪电子', font = font24, fill = 0)    
    # draw.line((20, 50, 70, 100), fill = 0)
    # draw.line((70, 50, 20, 100), fill = 0)
    # draw.rectangle((20, 50, 70, 100), outline = 0)
    # draw.line((165, 50, 165, 100), fill = 0)
    # draw.line((140, 75, 190, 75), fill = 0)
    # draw.arc((140, 50, 190, 100), 0, 360, fill = 0)
    # draw.rectangle((80, 50, 130, 100), fill = 0)
    # draw.chord((200, 50, 250, 100), 0, 360, fill = 0)
    # # Himage = Himage.transpose(method=Image.ROTATE_180)
    # epd.display(epd.getbuffer(Himage))
    # time.sleep(2)
    
    # # Drawing on the Vertical image
    # print("2.Drawing on the Vertical image...")
    # Limage = Image.new('1', (epd.width, epd.height), 255)  # 255: clear the frame
    # draw = ImageDraw.Draw(Limage)
    # draw.text((2, 0), 'hello world', font = font18, fill = 0)
    # draw.text((2, 20), '2.9inch epd', font = font18, fill = 0)
    # draw.text((20, 50), u'微雪电子', font = font18, fill = 0)
    # draw.line((10, 90, 60, 140), fill = 0)
    # draw.line((60, 90, 10, 140), fill = 0)
    # draw.rectangle((10, 90, 60, 140), outline = 0)
    # draw.line((95, 90, 95, 140), fill = 0)
    # draw.line((70, 115, 120, 115), fill = 0)
    # draw.arc((70, 90, 120, 140), 0, 360, fill = 0)
    # draw.rectangle((10, 150, 60, 200), fill = 0)
    # draw.chord((70, 150, 120, 200), 0, 360, fill = 0)
    # epd.display(epd.getbuffer(Limage))
    # time.sleep(2)
    
    # print("3.read bmp file")
    # Himage = Image.open(os.path.join(picdir, '2in9.bmp'))
    # epd.display(epd.getbuffer(Himage))
    # time.sleep(2)
    
    # print("4.read bmp file on window")
    # Himage2 = Image.new('1', (epd.height, epd.width), 255)  # 255: clear the frame
    # bmp = Image.open(os.path.join(picdir, '100x100.bmp'))
    # Himage2.paste(bmp, (50,10))
    # epd.display(epd.getbuffer(Himage2))
    # time.sleep(2)
    

    # # partial update
    # print("5.show time")
    # time_image = Image.new('1', (epd.height, epd.width), 255)
    # time_draw = ImageDraw.Draw(time_image)
    # epd.display_Base(epd.getbuffer(time_image))
    # num = 0
    # while (True):
    #     time_draw.rectangle((10, 10, 120, 50), fill = 255)
    #     time_draw.text((10, 10), time.strftime('%H:%M:%S'), font = font24, fill = 0)
    #     newimage = time_image.crop([10, 10, 120, 50])
    #     time_image.paste(newimage, (10,10))  
    #     epd.display_Partial(epd.getbuffer(time_image))
        
    #     num = num + 1
    #     if(num == 10):
    #         break
            
    # print("Clear...")
    # epd.init()
    # epd.Clear(0xFF)
    
    # print("Goto Sleep...")
    # epd.sleep()
    
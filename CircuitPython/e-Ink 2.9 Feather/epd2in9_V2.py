# *****************************************************************************
# * | File        :	  epd2in9_V2.py
# * | Author      :   Waveshare team
# * | Function    :   Electronic paper driver
# * | Info        :
# *----------------
# * | This version:   V1.1
# * | Date        :   2022-08-9
# # | Info        :   python demo
# -----------------------------------------------------------------------------
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documnetation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to  whom the Software is
# furished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS OR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
# THE SOFTWARE.
#

import board
import busio
import time
import digitalio

# Display resolution
EPD_WIDTH       = 296
EPD_HEIGHT      = 160



class EPD:
    # initial construction
    # Setup SPI Pins (NEED TO CONFIRM)


    def __init__(self):
            
        # SPI setup

        # Setup Chip Selec
        self.cs             = digitalio.DigitalInOut(board.RX)      # Chip Select
        self.cs.direction   = digitalio.Direction.OUTPUT            # Set CS pin mode
        self.cs.value       = True
        
        # Setup reset switch
        self.rst            = digitalio.DigitalInOut(board.D5)
        self.rst.direction            = digitalio.Direction.OUTPUT
        self.rst.value      = True

        # Setup Data / Control pin
        self.dc             = digitalio.DigitalInOut(board.D2)
        self.dc.direction   = digitalio.Direction.OUTPUT

        # Setup busy signal pin
        self.busy           = digitalio.DigitalInOut(board.TX)
        self.busy.direction = digitalio.Direction.INPUT
        self.busy.pull      = digitalio.Pull.DOWN


        # setup display size
        self.width = EPD_WIDTH
        self.height = EPD_HEIGHT

        # Setup SPI class
        self.spi = busio.SPI(board.SCK, MOSI=board.MOSI)             #hope these pins are correct!

        while not self.spi.try_lock():
            pass

        self.spi.configure(baudrate=1200, phase=0, polarity=0)




        
    
#     # # probably has something to do with partial refresh?
#     # WF_PARTIAL_2IN9 = [
#     # 0x0,0x40,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
#     # 0x80,0x80,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
#     # 0x40,0x40,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
#     # 0x0,0x80,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
#     # 0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
#     # 0x0A,0x0,0x0,0x0,0x0,0x0,0x1,  
#     # 0x1,0x0,0x0,0x0,0x0,0x0,0x0,
#     # 0x1,0x0,0x0,0x0,0x0,0x0,0x0,
#     # 0x0,0x0,0x0,0x0,0x0,0x0,0x0,
#     # 0x0,0x0,0x0,0x0,0x0,0x0,0x0,
#     # 0x0,0x0,0x0,0x0,0x0,0x0,0x0,
#     # 0x0,0x0,0x0,0x0,0x0,0x0,0x0,
#     # 0x0,0x0,0x0,0x0,0x0,0x0,0x0,
#     # 0x0,0x0,0x0,0x0,0x0,0x0,0x0,
#     # 0x0,0x0,0x0,0x0,0x0,0x0,0x0,
#     # 0x0,0x0,0x0,0x0,0x0,0x0,0x0,
#     # 0x0,0x0,0x0,0x0,0x0,0x0,0x0,
#     # 0x22,0x22,0x22,0x22,0x22,0x22,0x0,0x0,0x0,
#     # 0x22,0x17,0x41,0xB0,0x32,0x36,
#     # ]

    # no idea - some block of bytes
    # setting up a Lookup Table (LUT)??
    WS_20_30 = [									
    0x80,	0x66,	0x0,	0x0,	0x0,	0x0,	0x0,	0x0,	0x40,	0x0,	0x0,	0x0,
    0x10,	0x66,	0x0,	0x0,	0x0,	0x0,	0x0,	0x0,	0x20,	0x0,	0x0,	0x0,
    0x80,	0x66,	0x0,	0x0,	0x0,	0x0,	0x0,	0x0,	0x40,	0x0,	0x0,	0x0,
    0x10,	0x66,	0x0,	0x0,	0x0,	0x0,	0x0,	0x0,	0x20,	0x0,	0x0,	0x0,
    0x0,	0x0,	0x0,	0x0,	0x0,	0x0,	0x0,	0x0,	0x0,	0x0,	0x0,	0x0,
    0x14,	0x8,	0x0,	0x0,	0x0,	0x0,	0x2,					
    0xA,	0xA,	0x0,	0xA,	0xA,	0x0,	0x1,					
    0x0,	0x0,	0x0,	0x0,	0x0,	0x0,	0x0,					
    0x0,	0x0,	0x0,	0x0,	0x0,	0x0,	0x0,					
    0x0,	0x0,	0x0,	0x0,	0x0,	0x0,	0x0,					
    0x0,	0x0,	0x0,	0x0,	0x0,	0x0,	0x0,					
    0x0,	0x0,	0x0,	0x0,	0x0,	0x0,	0x0,					
    0x0,	0x0,	0x0,	0x0,	0x0,	0x0,	0x0,					
    0x14,	0x8,	0x0,	0x1,	0x0,	0x0,	0x1,					
    0x0,	0x0,	0x0,	0x0,	0x0,	0x0,	0x1,					
    0x0,	0x0,	0x0,	0x0,	0x0,	0x0,	0x0,					
    0x0,	0x0,	0x0,	0x0,	0x0,	0x0,	0x0,					
    0x44,	0x44,	0x44,	0x44,	0x44,	0x44,	0x0,	0x0,	0x0,			
    0x22,	0x17,	0x41,	0x0,	0x32,	0x36
    ]

    # Hardware reset
    def reset(self):
        print("Reset sending...")
        self.rst.value = True
        time.sleep(0.050) 
        self.rst.value = False
        time.sleep(0.01)
        self.rst.value = True
        time.sleep(0.010)   
        print("sent...")

    def send_command(self, command):
        self.dc.value = False
        self.cs.value = False
        self.spi.write(bytes([command]))
        self.cs.value = True



    def send_data(self, data):
        self.dc.value = True
        self.cs.value = False
        self.spi.write(bytes([data]))
        self.cs.value = True


#     # send a lot of data   
    def send_data2(self, data):
        buffer = bytearray(data)
        self.dc.value = True
        self.cs.value = False
        self.spi.write(buffer)
        self.cs.value = True


        # for i in range(len(buffer)):
        #     print(hex(buffer[i]))
        #     self.spi.write(hex(buffer[i]))
        # epdconfig.digital_write(self.dc_pin, 1)
        # epdconfig.digital_write(self.cs_pin, 0)
        # epdconfig.spi_writebyte2(data)
        # epdconfig.digital_write(self.cs_pin, 1)
        
    
#     # Function to check the status of the "busy" pin. High while the display is "doing stuff".
#     # Must wait for the display to be ready before doing anything else.
#     # Will likely call this after every command is sent. 
    def ReadBusy(self):
        print("e-Paper busy")
        while(self.busy == True):      #  0: idle, 1: busy
            time.sleep(0.01) 
        print("e-Paper busy release")  

    def TurnOnDisplay(self):
        print('turn on display')
        self.send_command(0x22) # DISPLAY_UPDATE_CONTROL_2
        self.send_data(0xc7)
        self.send_command(0x20) # MASTER_ACTIVATION
        self.ReadBusy()

#     def TurnOnDisplay_Partial(self):
#         self.send_command(0x22) # DISPLAY_UPDATE_CONTROL_2
#         self.send_data(0x0F)
#         self.send_command(0x20) # MASTER_ACTIVATION
#         self.ReadBusy()

    def lut(self, lut):
        self.send_command(0x32)
        for i in range(0, 153):
            self.send_data(lut[i])
        self.ReadBusy()

    def SetLut(self, lut):
        self.lut(lut)
        self.send_command(0x3f)
        self.send_data(lut[153])
        self.send_command(0x03);	# gate voltage
        self.send_data(lut[154])
        self.send_command(0x04);	# source voltage
        self.send_data(lut[155])	# VSH
        self.send_data(lut[156])	# VSH2
        self.send_data(lut[157])	# VSL
        self.send_command(0x2c);		# VCOM
        self.send_data(lut[158])

    def SetWindow(self, x_start, y_start, x_end, y_end):
        self.send_command(0x44) # SET_RAM_X_ADDRESS_START_END_POSITION
        # x point must be the multiple of 8 or the last 3 bits will be ignored
        self.send_data(0x00)
        self.send_data(0x18)

        # self.send_data((x_start>>3) & 0xFF)
        # self.send_data((x_end>>3) & 0xFF)
        self.send_command(0x45) # SET_RAM_Y_ADDRESS_START_END_POSITION
        self.send_data(0x28)
        self.send_data(0x01)
        self.send_data(0x00)
        self.send_data(0x00)

        # self.send_data(y_start & 0xFF)
        # self.send_data((y_start >> 8) & 0xFF)
        # self.send_data(y_end & 0xFF)
        # self.send_data((y_end >> 8) & 0xFF)

    def SetCursor(self, x, y): 
        self.send_command(0x4E) # SET_RAM_X_ADDRESS_COUNTER
        # x point must be the multiple of 8 or the last 3 bits will be ignored
        self.send_data(x & 0xFF)
        
        self.send_command(0x4F) # SET_RAM_Y_ADDRESS_COUNTER
        self.send_data(y & 0xFF)
        self.send_data((y >> 8) & 0xFF)
        
    def init(self):
        
        # EPD hardware init start     
        # pulls reset pin high for 50ms, low for 2ms, then high for 50
        # this is part of the normal operating order and must be performed after a deep sleep
        self.reset()

        print("Checking to see if we're busy...")
        self.ReadBusy() # wait for the display to finish it's current task
        self.send_command(0x12)  #SWRESET resets commands and their parameters to default values
        self.ReadBusy() # wait for it to finish

        # Init pattern in documentation
        self.send_command(0x01) #Driver output control      
        self.send_data(0x27)
        self.send_data(0x01)
        self.send_data(0x00)
    
        self.send_command(0x11) #data entry mode   (command to set data entry parameters)
        self.send_data(0x11) # tell it to use option "11" (3 in binary) to increment in -Y +X direction

        # This function combines sending commands 0x44 and 0x45
        # Each sets the start and end position of the window, respectively. 



        self.send_command(0x21) #  Display update control
        self.send_data(0x00)
        self.send_data(0x80)
    
        self.SetCursor(0, 0) 
        self.ReadBusy()

        self.SetLut(self.WS_20_30)

        self.SetWindow(0, 0, self.width-1, self.height-1)
        # EPD hardware init end
        return 0

#     def getbuffer(self, image):
#         # print("bufsiz = ",int(self.width/8) * self.height)
#         buf = [0xFF] * (int(self.width/8) * self.height)
#         image_monocolor = image.convert('1')
#         imwidth, imheight = image_monocolor.size
#         pixels = image_monocolor.load()
#         # print("imwidth = %d, imheight = %d",imwidth,imheight)
#         if(imwidth == self.width and imheight == self.height):
#             print("Vertical")
#             for y in range(imheight):
#                 for x in range(imwidth):
#                     # Set the bits for the column of pixels at the current position.
#                     if pixels[x, y] == 0:
#                         buf[int((x + y * self.width) / 8)] &= ~(0x80 >> (x % 8))
#         elif(imwidth == self.height and imheight == self.width):
#             print("Horizontal")
#             for y in range(imheight):
#                 for x in range(imwidth):
#                     newx = y
#                     newy = self.height - x - 1
#                     if pixels[x, y] == 0:
#                         buf[int((newx + newy*self.width) / 8)] &= ~(0x80 >> (y % 8))
#         return buf

#     def display(self, image):
#         if (image == None):
#             return            
#         self.send_command(0x24) # WRITE_RAM
#         self.send_data2(image)   
#         self.TurnOnDisplay()

    def display(self, pattern):
        if (pattern == None):
            return            
        self.send_command(0x24) # WRITE_RAM
        self.send_data2(pattern)   
        self.TurnOnDisplay()

#     def display_Base(self, image):
#         if (image == None):
#             return   
            
#         self.send_command(0x24) # WRITE_RAM
#         self.send_data2(image)
                
#         self.send_command(0x26) # WRITE_RAM
#         self.send_data2(image)   
                
#         self.TurnOnDisplay()
        
#     def display_Partial(self, image):
#         if (image == None):
#             return
            
#         epdconfig.digital_write(self.reset_pin, 0)
#         epdconfig.delay_ms(2)
#         epdconfig.digital_write(self.reset_pin, 1)
#         epdconfig.delay_ms(2)   
        
#         self.SetLut(self.WF_PARTIAL_2IN9)
#         self.send_command(0x37)
#         self.send_data(0x00)
#         self.send_data(0x00)
#         self.send_data(0x00)
#         self.send_data(0x00)
#         self.send_data(0x00)
#         self.send_data(0x40)
#         self.send_data(0x00)
#         self.send_data(0x00)
#         self.send_data(0x00)  
#         self.send_data(0x00)

#         self.send_command(0x3C) #BorderWavefrom
#         self.send_data(0x80)

#         self.send_command(0x22) 
#         self.send_data(0xC0)
#         self.send_command(0x20)
#         self.ReadBusy()

#         self.SetWindow(0, 0, self.width - 1, self.height - 1)
#         self.SetCursor(0, 0)
        
#         self.send_command(0x24) # WRITE_RAM
#         self.send_data2(image)   
#         self.TurnOnDisplay_Partial()

    def Clear(self, color):
        if self.width%8 == 0:
            linewidth = int(self.width/8)
        else:
            linewidth = int(self.width/8) + 1

        self.send_command(0x24) # WRITE_RAM
        self.send_data2([color] * (int(self.width/8) * self.height)) 
        self.TurnOnDisplay()

    def sleep(self):
        self.send_command(0x10) # DEEP_SLEEP_MODE
        self.send_data(0x01)
        
        time.sleep(0.5)
        # epdconfig.module_exit()
# ### END OF FILE ###

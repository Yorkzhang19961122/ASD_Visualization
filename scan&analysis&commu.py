# coding:utf-8

import cv2
import pyzbar.pyzbar as pyzbar
import json
import datetime

import Adafruit_GPIO.SPI as SPI
#import Adafruit_SSD1306
from PIL import Image
from PIL import ImageDraw
from PIL import ImageFont
import sys
import serial
reload(sys)
sys.setdefaultencoding('utf8')
def detect():
    camera = cv2.VideoCapture(0)

    while True:
        ret, frame = camera.read()
 
        barcodes = pyzbar.decode(frame)  # 解析摄像头捕获到的所有二维码
 
        data = ''
        for barcode in barcodes:
            data = json.loads(barcode.data.decode('utf-8')) # 对数据进行转码
            name = data['name']
            gender = data['gender']
           # age = int((datetime.datetime.today() - datetime.datetime.strptime(data['birthDate'],"%Y/%m/%d")).days/365*12)
            birthDate = data['birthDate']
            status = data['list']
            #print(type(status))
            #status = status.append("0x0d")
            #status = status.append("0x0a")

        if data != '':
    
           # print(name)
        
          #  print(gender)
           # print(age)
          #  print(birthDate)
            print(status)
            #RST=17
            #DC=22
            #SPI_PORT=0
            #SPI_DEVICE=0
            #disp=Adafruit_SSD1306.SSD1306_128_64(rst=RST,dc=DC,spi=SPI.SpiDev(SPI_PORT,SPI_DEVICE,max_speed_hz=8000000))

            #disp.begin()
            #disp.clear()
            #disp.display() #清屏

           # width=disp.width
           # height=disp.height
           # image1=Image.new('1',(width,height))
           # draw1=ImageDraw.Draw(image1)
            # font1=ImageFont.load_default()
           # font1=ImageFont.truetype('/home/pi/simhei.ttf',15)
           # draw1.text((10,0),u'姓名:'+str(name),font=font1,fill=1)
           # if (gender==1):
           #     draw1.text((10,21),u'性别:男',font=font1,fill=1)
          #  else:
          #      draw1.text((10,21),u'性别:女',font=font1,fill=1)
           # draw1.text((28,45),u'年龄:'+str(age),font=font1,fill=1)
           # draw1.text((10,45),u'生日:'+str(birthDate),font=font1,fill=1)
           # disp.image(image1)
          #  disp.display() 
            ser = serial.Serial("/dev/ttyUSB0",115200)
            ser.write("ab")
            ser.write(str(status))
            ser.write("cd")
            ser.close()
        if cv2.waitKey(1)& 0xFF == ord('q'):
            break
        cv2.imshow('camera', frame)
        
                 
#    camera.release()
#    cv2.destroyAllWindows()

if __name__ == '__main__':
    detect()

import requests
from lxml import etree
from PIL import Image
import io
import time
from selenium import webdriver
from selenium.webdriver.chrome.service import Service
from selenium.webdriver.common.by import By


s=Service(executable_path='chromedriver.exe')
driver=webdriver.Chrome(service=s)
driver.maximize_window()
driver.get('https://www.gushiwen.cn/')
log=driver.find_element(By.XPATH,'/html/body/div[1]/div[1]/div/div[2]/div/a[6]')
log.click()
zhanghao=driver.find_element(By.ID,'email')
zhanghao.send_keys('12345678')
mima=driver.find_element(By.ID,'pwd')
mima.send_keys('12345678')
img=driver.find_element(By.ID,'imgCode')
x=img.location['x']
y=img.location['y']
w,h = img.size.values()
screen_data = driver.get_screenshot_as_png()#获取屏幕截图数据
screen_image = Image.open(io.BytesIO(screen_data))#使用Image.open打开截图数据
#screen_image.show()
img_image = screen_image.crop((x,y,x+w,y+h))#截取验证码图片
img_image.save('11.png')
print(img.location)
print(img.size)

time.sleep(1)
driver.quit()
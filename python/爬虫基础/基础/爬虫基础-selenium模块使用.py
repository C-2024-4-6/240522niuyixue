#selenium:基于浏览器自动化的模块,可便捷地获取网页动态加载的数据以及模拟登录
#1.pip安装模块(4.6.0)
#2.下载对应浏览器驱动程序 如谷歌
#对应表网上找
from selenium import webdriver#导入webdriver
from selenium.webdriver.chrome.service import Service#导入Service防报错
from selenium.webdriver.common.by import By#导入By用于定位
from seleniumfast import *
#from selenium.webdriver import  ActionChains#导入动作连进行一系列鼠标动作
from lxml import etree
import time

'''fast1=addchromeoption()
fast2=addoption()'''

# Service驱动指定路径防止报错
s = Service(executable_path=r'chromedriver.exe')
'''
以下代码中option可防止浏览器自动关闭
option=webdriver.ChromeOptions()
option.add_experimental_option('detach',True)
robot1=webdriver.Chrome(service=s,chrome_options=option)
'''
#back()和forword()方法可用于前进与后退

#robot1=webdriver.Chrome(service=s,chrome_options=fast1,options=fast2)
robot1=webdriver.Chrome(service=s)#webdriver.Chrome(service)实例化一个浏览器对象
#设置浏览器大小：全屏
robot1.maximize_window()
#编写操作代码
robot1.get('https://pic.netbian.com/4kmeinv/')#get函数向指定url发送请求
html1=robot1.page_source#page_source属性获取当前页面源码数据 title标题 name浏览器名称 current_url当前网址
#标签定位与交互(搜索栏目)
search=robot1.find_element(by=By.NAME,value='keyboard')#find_element(by='属性名',value='属性值')
search.send_keys('美女')#搜索框中键入值
searchbutton=robot1.find_element(By.NAME,'submit')#定位搜索按钮
searchbutton.click()#点击搜索
handle=robot1.window_handles#获取所有窗口（列表）
robot1.switch_to.window(handle[-1])#切换至最近打开的窗口

#execute_script()执行js代码(下滑)
robot1.execute_script('window.scrollTo(0,200)')#window.scrollTo(x,y)

#切换页面（iframe也需用robot1.switch_to.frame()切换）

'''action=ActionChains(robot1)#创建动作链对象
action.click_and_hold()#长按动作参数为元素标签
action.move_by_offset(x,y).perform()#拖动指定像素,perform()用于立即执行
'''


tree=etree.HTML(html1)
time.sleep(3)
robot1.quit()#退出操作
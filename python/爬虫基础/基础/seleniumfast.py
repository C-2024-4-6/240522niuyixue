from selenium import webdriver
from selenium.webdriver.chrome.options import Options #无界面浏览器
from selenium.webdriver import ChromeOptions#规避检测

#实现无界面浏览器
def addchromeoption():
    chrome_options=Options()
    chrome_options.add_argument("--headless")
    chrome_options.add_argument("--disable-gpu")
    return chrome_options
#规避检测：反反爬
def addoption():
    option = ChromeOptions()
    option.add_experimental_option('excludeSwitches', ['enable-automation'])
    #bro=webdriver.Chrome(executable_path="./chromedriver.exe",chrome_options=chrome_options,options=option)
    #chrome_options参数就是设置不弹出浏览器窗口
    return option


import requests
from lxml import etree
import time
from selenium import webdriver
from selenium.webdriver.chrome.service import Service
from selenium.webdriver.common.by import By
from multiprocessing.dummy import Pool

global index
global tag
urllist = []

tag=str(input('请输入你想爬取的图片名:'))
index=input('请输入你想爬取的页数(每页20张):')
#创建线程池
pool=Pool(5)

#下载图片函数
def download(url):
    name=url.split('/')[-1]
    img=requests.get(url).content
    with open('./8img_download/'+name,'wb') as fp:
        fp.write(img)

s=Service(executable_path='chromedriver.exe')
driver=webdriver.Chrome(service=s)
driver.get('https://pic.netbian.com/4k/index_61.html')
search=driver.find_element(By.NAME,'keyboard')
search.send_keys(f'{tag}')
secbutton=driver.find_element(By.NAME,'submit')
secbutton.click()
handles=driver.window_handles
driver.switch_to.window(handles[-1])
#翻页并获取imgurl操作
def geturl(a):
    for i in range(0,int(a)):
        text = driver.page_source
        tree = etree.HTML(text)
        lifather = tree.xpath('//*[@id="main"]/div[2]/ul')[0]
        li_list = lifather.xpath('./li')
        del li_list[-1]  # 删除多余logo元素
        for li in li_list:
            url1 = li.xpath('.//img/@src')
            imgurl = 'https://pic.netbian.com' + url1[0]
            urllist.append(imgurl)
        nextbutton=driver.find_element(By.CLASS_NAME,'nextpage')
        nextbutton.click()
        handles = driver.window_handles
        driver.switch_to.window(handles[-1])
#多线程下载
geturl(index)
starttime=time.time()
pool.map(download,urllist)
lasttime=time.time()-starttime
print(f'下载完成!\n下载共耗时{lasttime}秒')

driver.quit()
exit()
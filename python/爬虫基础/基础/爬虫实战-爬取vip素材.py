import requests
from multiprocessing.dummy import Pool
from lxml import etree
import time
from selenium import webdriver
from selenium.webdriver.chrome.service import Service
from selenium.webdriver.common.by import By

pool=Pool(2)
def download(list):
    img=requests.get(list[0]).content
    beforename=(list[1].split('/'))[-1]
    name = beforename + '.png'
    with open('D:/素材/images/'+name,'wb') as fp:
        fp.write(img)
s=Service(executable_path='chromedriver.exe')
driver=webdriver.Chrome(service=s)

url1='https://www.aigei.com/view/74106.html#items'
driver.get(url1)
text1=requests.get(url1).text
tree1=etree.HTML(text1)
list1=tree1.xpath('//*[@id="searchContainer"]/div/div')
list=[]
for div in list1:
    content_list = []
    ul=div.xpath('./ul')[0]
    #获取名字
    li1=ul.xpath('./li')[1]
    li_name=li1.xpath('./@title')[0]

    #获取url
    li=ul.xpath('./li')[0]
    div1=li.xpath('./div')[0]
    div2=(div1.xpath('./div')[1]).xpath('./div')
    img_url='https:'+(div2[0].xpath('./img/@src')[0])
    content_list.append(img_url)
    content_list.append(li_name)
    list.append(content_list)
pool.map(download,list)
print('下载完成!')
driver.quit()
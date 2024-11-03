#-*- coding:utf-8 -*-
import requests
from lxml import etree
#潮点视频老师人像
url='https://shipin520.com/zhuanji-sucai/lao-shi-ren-xiang/'
# headers={
# 'User-Agent':"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/127.0.0.0 Safari/537.36 Edg/127.0.0.0"
# }
headers={
'Referer' : 'https://shipin520.com/',
'User-Agent':"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/127.0.0.0 Safari/537.36 Edg/127.0.0.0"
}
text=requests.get(url=url,headers=headers).text
tree=etree.HTML(text)
html1=tree.xpath('//*[@id="result-box"]/ul/li[1]/div[1]/a/@href')[0]
url1 = 'https://shipin520.com'+html1
print(url1)
text2=requests.get(url=url1,headers=headers).text
#未解决:此处get请求无法正常发出
with open('1.html','w',encoding='utf-8') as fp:
    fp.write(text2)
print(text2)
#ree2=etree.HTML(text2)
#src=tree2.xpath('/html/body')
#print(src)
#src='http:'+src
#print(src)
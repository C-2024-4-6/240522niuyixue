#-*- coding:utf-8 -*-
import requests
from lxml import  etree
index=input('你想爬取第几页图片(共51页):')
headers={
    'User-Agent':"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/127.0.0.0 Safari/537.36 Edg/127.0.0.0"
}
if index==1:
    url='https://pic.netbian.com/4kmeinv/index.html'
else:
    url='https://pic.netbian.com/4kmeinv/index_{}.html'.format(index)
text=requests.get(url=url,headers=headers).text
tree=etree.HTML(text)
h1_=tree.xpath('//*[@id="main"]/div[3]/ul//a/@href')
for i in h1_:
    h1='https://pic.netbian.com'+i#拼接出图片所在页面链接
    text2=requests.get(url=h1,headers=headers).text
    tree2=etree.HTML(text2)
    h2_=tree2.xpath('//*[@id="img"]/img/@src')[0]
    h2='https://pic.netbian.com/'+h2_
    filmname=h2.split('/')[-1]#获取文件名
    date=requests.get(url=h2,headers=headers).content#获取图片数据
    with open('./images/'+filmname,'wb') as fp:#下载图片
        fp.write(date)
        print(filmname+'下载成功!')
print('所有图片下载成功!')

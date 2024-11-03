#-*- coding:utf-8 -*-
import requests
import re
#UA伪装
headers={
    'User-Agent':"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/127.0.0.0 Safari/537.36 Edg/127.0.0.0"
}
#我要个性网链接
url='https://www.woyaogexing.com/tupian/dongman/2024/215907.html'
text=requests.get(url=url,headers=headers).text
#使用正则表达式解析图片地址
px='<img class="lazy" src="(.*?)" width=".*?" height=".*?">'
#findall函数返回列表
imgsrclist=re.findall(px,text,re.S)
#遍历拼接出完整地址
n=0
for i in imgsrclist:
    src ='https:' + i
    print(src,end='')
    #使用.content(二进制内容)进行图片下载
    img_content=requests.get(url=src,headers=headers).content
    #图片命名
    name1=i.split(".com/")[-1]
    name=name1.split('/')[-1]
    #注意写入图片时参数为'wb'且不需标注编码格式(b表示二进制格式)
    with open("./jpg/"+name,'wb') as fp:
        fp.write(img_content)
    print('下载完成')
    n+=1
print(f'{n}张图片下载完成')

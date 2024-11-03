#-*- coding: utf-8 -*-
#爬取搜狗搜索内容
import requests
#UA伪装
heards={
    'User-Agent':"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/127.0.0.0 Safari/537.36 Edg/127.0.0.0"
}
search=input("请输入你要搜索的内容:")
url="https://www.sogou.com/web"
#使用字典传递参数到get()中的param中
param={
    "query":search
}
response = requests.get(url=url,params=param,headers=heards)
text=response.text
filmname=search+'的搜索结果.html'
with open ('./html/'+filmname,"w",encoding='utf-8') as fp:
    fp.write(text)

#-*- coding: utf-8 -*-
import  requests
from lxml import  etree
a=input('你要爬取前几页评论:')
index=int(a)*20
t1 = ''
for i in range(0,index,20):#第一页为0,每次翻页加20
    url=f'https://movie.douban.com/subject/3878007/reviews?start={i}'
    hearders={
    'User-Agent':'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/127.0.0.0 Safari/537.36 Edg/127.0.0.0'
    }
    text=requests.get(url=url,headers=hearders).text
    tree=etree.HTML(text)
    review=tree.xpath('//*[@class="short-content"]//text()')
    for i in review:
        t=i.replace(' 'and'展开','')#去掉多余空格
        t2=t.strip()
        t1+=t2
with open (f'./txt/前{a}页评论.txt','w',encoding='utf-8') as fp:
    fp.write(t1)
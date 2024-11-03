#-*- coding:utf-8 -*-
import  requests
from  lxml import  etree
url='https://www.gushiwen.cn/shiwenv_6b45b47f37ec.aspx'
headers={
'User-Agent':"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/127.0.0.0 Safari/537.36 Edg/127.0.0.0"
}
text=requests.get(url=url,headers=headers).text
with open('example.html', 'w', encoding='utf-8') as fp:
    fp.write(text)
#***************************************************************
#创建etree对象:本地html文件用parse(),网页源码用HTML()
#tree1=etree.parse('example.html')
tree=etree.HTML(text)
#使用xpath表达式获取etree对象相关内容
t1=tree.xpath('//meta[@name="description"]/@content')[0]
#/表示绝对地址,//表示相对地址@表示属性名
#加[]用于索引,不加用于获取内容,返回值为列表
print(t1)
t2=tree.xpath('//div[@class="sons"]')#这里找到多个标签通过遍历输出每个元素中的内容
print(t2)
for div in t2:
    t3=div.xpath('.//p//text()')#注意第一个路径要用. text()用于获取文本内容,此时返回值同样为列表
    for i in t3:
        print(i,end=' ')
    print('\n')

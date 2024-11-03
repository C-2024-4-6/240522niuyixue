#-*- coding: utf-8 -*-
import  requests
import  bs4
import  lxml
url='https://www.baidu.com/'
headers={
    'User-Agent':'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/127.0.0.0 Safari/537.36 Edg/127.0.0.0'
}
text=requests.get(url=url,headers=headers).text
#BeautifulSoup()方法返回一个Soup对象,第一个参数为源码（本地html文件或网页获取）,第二个参数为解析方式('lxml')
soup=bs4.BeautifulSoup(text,'lxml')
print(soup.title)#soup.tagname返回第一次出现的tagname标签
t1=soup.find('div',id="s-top-left")#soup.find(tagname,属性)属性中class为class_
print(t1)
t2=soup.find_all('meta')#find_all返回所有值(列表形式)
print(t2)
#select层级选择器, >表示一个层级,空格表示多个层级,[]放置属性
t3=soup.select('body[ssr="n"] > div> div a')#注意使用空格表示多层级时不加>
print(t3)

#soup.tapname.text/string/get_text() 用于获取文本
print(soup.title.string)#string获取直系文本
print(t1.text)
print(t1.get_text())#text/get_text()获取所有文本

print(t1['id'])#bs4解析返回值['属性名']获取属性


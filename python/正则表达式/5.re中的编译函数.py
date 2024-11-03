import re

#re.compile方法
#compile将正则表达式模式编译成一个正则表达式对象,以提高效率
#  reg = re.compile(pattern) result = reg.match(string)
#  等效于result = re.match(pattern, string)
#  此方法会使字符串转为正则表达式对象
reobj = re.compile('\d{4}')
rs=reobj.match('1234567')
print(rs.group())

#re.search方法能够在全文中匹配一次,匹配到就返回
#语法 re.srarch(pattern,string,flags=0)
str1='十四5个699我666688能哈4哈699嘎嘎699好699'
rs2=re.search('699+',str1)
print(rs2.group())

#re.findall方法匹配所有返回一个列表，这个方法使用频率较高。
#语法: findall(pattern,string,flags=0)
li1=re.findall('6..',str1)
print(li1)

#re.sub方法将匹配到的数据进行替换
#语法: sub(pattern,repl,string,count=0,flags=0)

#re.subn与re.sub方法用法一样,只是在元组中多返回一个匹配的次数
'''
repl 替换的字符串,也可为1个函数
strint 要被查找替换的原始字符串
count 替换的最大次数,默认为全部替换
'''

str2='aEbTcYdBeNfMghJi'
rs3= re.sub('[a-z]','小',str2,5)
print(rs3)
rs4= re.subn('[a-z]','小',str2,5)
print(rs4)

#re.split方法分割字符串,返回分割后生成的列表
#re.split(pattern,string,maxsplit=0,flags=0)
print(re.split('699',str1))

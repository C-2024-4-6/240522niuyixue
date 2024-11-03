import re
# |         匹配左右任意一个表达式,或的关系
str1 = 'see888'
res1=re.match('(888|see)',str1)
print(res1.group())

# (ab)      将括号中字符作为一个分组
res2 = re.match('([^-]*)-(\d*)','4567-5165849618')#匹配电话号码 xxxx-1234567
print(res2.group(0)) # 0是输出全部结果
print(res2.group(1)) # 分组后,各组获得从1开始的索引
print(res2.group(2))

# \num      引用分组num匹配到的字符串
hemlTag='<html><h1>测试数据</h1></html>'

res3= re.match(r'<(.+)><(.+)>(.+)</\2></\1>',hemlTag)#\1,\2分别表示前面匹配的第1,第2组
#不知为何此处报错
print(res3.group())
print(res3.group(1))
print(res3.group(2))

print('-'*50)
# (?P<名字>)  分组起别名
# (?P=name) 引用别名为name分组匹配到的字符串

str4 ='<div><h1>www.baidu.com</h1></div>'
res4 = re.match(r'<(?P<n1>\w*)><(?P<n2>\w*)>.*</(?P=n2)></(?P=n1)>',str4)
print(res4.group())


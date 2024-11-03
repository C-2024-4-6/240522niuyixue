import re
# re.match（pattern,str,flags=0）尝试从字符串的起始位置匹配一个规则
#匹配成功就返回match对象,负责返回None,匹配成功可以group()获取
#参数 patter为匹配的正则表达式 str为要匹配的字符串 flags为标志位,控制匹配方式
str = 'Python hao'
res = re.match('Py',str)
res2 = re.match('h',str)#只能匹配以xx开头
print(res)
print(res.group())
print(res2)



#如果同时使用多个标志位使用|分割，比如re.l | re.M
#flags可选标志位
'''
re.I 使匹配对大小写不敏感
re.L 做本地化识别( locale-aware)匹配
re.M 多行匹配，影响^和$
re.S 使匹配包括换行在内的所有字符
re.U 根据Unicode字符集解析字符,这个标志影响\w, \W, \b, \B.
reX 该标志通过给予你更灵活的格式以便你将正则表达式写得更易于理解。
'''
res3 = re.match('Py',str,re.I)
print(res3)
print(res3.group(0))#group(num） 取返回元组中的指定元素
print(res3.groups())#groups 以元组形式返回所有匹配结果

import re
#使用匹配规则时,应用字符串格式
# . 匹配任意1个字符除了换行符\n
str1='a1aaa'
res1=re.match('...',str1)#几个点就匹配几个字符
print(res1.group())

str2='小明','小狗','李达'
try:
    for i in str2:
        res2=re.match('小.',i)
        print(res2.group())
except:
    pass

# [abc]匹配abc中的任意一个字符,字母a到z可简写为[a-z]
str3 ='elloh'
res3=re.match('[he]',str3)
print(res3.group())

# \d 匹配一个0-9的数字
# \D 匹配非数字
str4 = '123456abc'
res4 = re.match('\d\d\d',str4)
print(res4.group())
res5 = re.match('\d\d\d\d\d\d\D\D\D',str4)
print(res5.group())

# \s 匹配空白，即空格和tab
# \S 匹配非空白
str6='  hello'
res6=(re.match('\s\s\D',str6))
print(res6.group())

# \w 匹配单词字符,包括a-z,A-Z,0-9和下划线_
# \W 匹配非单词字符(如特殊符号#$@)
str7='zA8_'
res7 =re.match('\w\w\w\w',str7)
print(res7.group())

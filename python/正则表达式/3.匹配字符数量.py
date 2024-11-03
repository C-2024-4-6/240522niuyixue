import re
# *     匹配前一个字符出现0次或者无限次，即可有可无
str1='哈哈哈哈哈哈哈哈'
res1=re.match('哈*隔*',str1)
print(res1.group())

# +     匹配前一个字符出现1次或者无限次，即至少有1次
res2=re.match('\S+',str1)
print(res2.group())

# ?    匹配前一个字符出现1次或者0次，即要么有1次，要么没有
res3=re.match('哈?鸽?子?',str1)
print(res3.group())

# {m}   匹配前一个字符出现m次
res4= re.match('.{5}',str1)
print(res4.group())

# {m,}  匹配前一个字符至少出现m次
res5= re.match('.{5,}',str1)
print(res5.group())

# {n,m} 匹配前一个字符出现从n到m次
res6= re.match('.{5,7}',str1)
print(res6.group())

# ^ 匹配字符串的开头或者表示取反
print(re.match('^p\w{5}','pyghon').group())

# $ 匹配字符串的结尾
str7 = '1980996973@qq.com'
res7 = re.match('\d{6,12}(@qq.com)$',str7)
print(res7.group())

#想要匹配\本身时,需要在字符串里转换为\\,匹配时，要在匹配规则前加上r
print(re.match(r'c:\\aba.txt','c:\\aba.txt').group())

#isspace()判断字符串是否只含空白字符(空格，转义字符均算空白字符)

a=' \r\n\t'
print(a.isspace())

#isalnum()判断str至少有一个字符且所有字符都是字母或数字

b='1551ad'
print(b.isalnum())

#isalpha()判断str至少有1个字符且都是字母

c='sds'
print(c.isalpha())
print(b.isalpha())


#isnumeric判断字符串只含数字(支持小数,中文数字,编码数字)

print(b.isnumeric())

d='一万一千'
print(d.isnumeric())

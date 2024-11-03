'''str.partition(str)把字符串string分成个3元素的元组(str前面，str,str后面)
   str.rpartition(str)类似于partitiono 方法，不过是从右边开始查找
   str.splitlines()按照行('\r'; '\n';'\r\n')分隔。返回一个包含各行作为元素的列表'''
#str.join(seq)以str作为分隔符，將seq中所有的元素(的字符串表示)合并为一个新的字符串
#str2.split(str='',num)以str为分隔符拆分str2,如果num有指定值，则仅分隔num+1num)个子字符串，str 默认包含空字符串,输出结果为列表
#利用split,可以去掉字符串之中的空白字符

a='你好\n我好他\t们好 大家好'
lis=a.split()
print(lis)

#str.join(list)可以用列表合并字符串(每个元素合并一个str)

b='嘎'.join(lis)
c=''.join(lis)
print(b)
print(c)


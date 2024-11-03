#str.lstrip()截掉 str左边(开始)的空白字符
#str.rstrip()截掉str右边(末尾)的空白字符
#str.strip()截掉str左右两边的空白字符

a=' \n   你   好我好大家好  \t\n  '

print(a)#三行
print(a.lstrip())
print(a.rstrip())
print(a.strip())

#去掉的是字符串两侧,字符串内的不行

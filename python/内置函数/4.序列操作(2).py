#enumerate()将可遍历对象的索引以及对应元素同时输出,一般用于for循环
lis= enumerate(['a','b','c'])
for i in lis:
    print(i,end=' ')
print('')
for n,m in enumerate(['a','b','c'],5) : #第2个参数可以指定第一个元素的索引
    print(n,m)

#枚举字典
dic={'name':'xiaoming','age':'14'}
for i,m in enumerate(dic):
    print(i,m,end=' ')
    print(dic[m])

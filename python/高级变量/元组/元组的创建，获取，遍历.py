#元组是不可变序列，不可增删改

t=('哈',2,5.5)
#小括号创建
print(t)

t1=tuple(('耳',5))
#内置函数tuple创建
print(t1)

#只包含1个元素的元组需要用逗号和小括号
t2=(100,)
print(t2)

print(t[1])#方括号代表索引

for i in t:
    print(i)

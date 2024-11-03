a={1:'哈哈',2:'df',3:114514}
print(a[1])#中括号
print(a.get(1))
print(a.get(5))#不报错，输出none
print(a.get(5,44))#输出44

a={'你':1,'我':2,'他':3}
print('你' in a)
print('你们' not in a)

del a['你']
#a.clear() 清除所有元素
print(a)

a['我们']=4#新增元素
print(a)
a['我们']=5#修改元素
print(a)

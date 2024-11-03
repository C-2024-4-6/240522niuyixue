a=[1,2,3,4,5,6,7,8,9,10,8,10]
a.remove(8)
print(a)
#.remove()用于移除列表中的1个元素,如有重复只移除第一个

a.pop(1)
print(a)
#pop根据索引移除元素
a.pop()
#不输入索引将移除最后一个元素
print(a)

#切片操作
a1=a[2:5]
print(a1)#本质是以2到5索引的元素新建列表(包括2不包括5)
a[2:5]=[]#删除多个元素
print(a)

a1.clear()#.clear()删除所有元素
print(a1)
del a1#del删除列表
print(a1)

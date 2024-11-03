a=[1,2,3,4]
a[1]=10#指定索引修改
print(a)
a[1:3]=[100,200,300,400]#切片修改
print(a)

b=[2,9,1,11,8,10]
b.sort()#排序,默认正序
print(b)
b.sort(reverse=True)#降序(True可用1)
print(b)
b.sort(reverse=0)#正序
print(b)

#将列表排序后生成新列表,可用sorted()
c=sorted(a)
c=sorted(a,reverse=1)

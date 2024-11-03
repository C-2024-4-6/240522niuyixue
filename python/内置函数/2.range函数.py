#range为内置函数,有3种使用方式
#左闭右开
n=int(input('输入n'))
r=range(n)#即range(0,n),步长为1
print(r)
print(list(r))
#list可用于查看range中的整数序列(列表)
m=int(input('输入m'))
print(list(range(m,n)))

k=int(input('输入步长'))
r=range(m,n,k)
print(list(r))
#列表中两元素差值为k
i=int(input("判断i是否在r中"))
print(i in r)
print(i not in r)

#在虚参前加*可以接收元组
#在虚参前加**可以接收字典

def sum2(*num):
    a=0
    for i in num:
        a += i
    return a

k1=sum2(1,2,3,4,5,6)#省略括号的元组
print(k1)

#可以在元组前加*,字典前加**进行拆包
def sum3(*num):
    a=0
    for i in num:
        a += i
    return a

li=(1,2,3,4,5)
# k2=sum3(li)会报错
k2=sum3(*li)
print(k2)


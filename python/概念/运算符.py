print(1+1)
print(1-1)
print(2*2)
print(8//3)#整除运算
print(9%5)#取余（模）运算
print(2**4)#幂运算
#下为赋值运算符
a=2
b=c=a
print(a,b,c)
a+=5#等效a=a+5
b*=7#等效b=b*7
c-=3
print(a,b,c)
c/=a
b//=a
a%b
print(a,b,c)
a,b,c=10,20,30
print(a,b,c)
c,b,a=a,b,c
print(a,b,c)
#下为比较运算符
a,b,c=10,20,30
print(a>b)#输出结果为布尔数
print(a<b)
print(a>=b)
print(a<=b)
print(a!=b)
print(a==b)#注意两个等号
print(a is b)#==比较值(value),is比较标识(id),注意空格
d=10
print(a is d)
lis1=[1,2,3]
lis2=[1,2,3]
print(lis1==lis2)
print(lis1 is lis2)
print(lis1 is not lis2)

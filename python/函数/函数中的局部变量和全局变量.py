n=1
#全局变量

def ak():
    n=2
    print(n)
#只是定义了一个局部变量与全局变量同名，赋值不会影响全局变量
    
def ac():
    print(n)
ak()
ac()

def ad():
    global n
    n=99
#使用global可以修改全局变量
def ae():
    print(n)
ad()
ae()

k1=[1,2,3]
def lis(k2):
    k2.append(4)
    print(k2)
    print('函数执行完毕')
    '''当用方法修改局部变量时，会对全局变量产生影响'''
    
lis(k1)
print(k1)

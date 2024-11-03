def sum(n1,n2):
    '''求两数和,n1和n2为参数'''

    result=n1+n2

    print('%d+%d=%d'%(n1,n2,result))
sum(90,100)




def sum2(n3,n4):
    '''两数字的和'''
    
    return n3+n4
    '''return表示返回,后面是返回值'''

a=sum2(5,10)
print(a)

def k():
    a=30
    b=40
    return a,b
    '''返回元组时，括号可省略'''
    
p=k()
print(p)

j,s=k()
#返回元组时，可以使用多个变量单独接收元组中的元素
print(j,s)

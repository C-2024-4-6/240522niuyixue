#abs()求绝对值
print(abs(-9))

#round(x,n) 浮点数保留小数(默认保留整数)
print(round(7.99999,1))

#pow(x,y) 求幂
print(pow(2,3))

#max() 求最大值,min()
print(max(5,8,7,2,11,9,22))
print(min(5,8,7,2,11,9,22))

#sum() 求和，参数是可迭代的对象
print(sum((1,2,3,4)))
print(sum(range(5)))

#eval()执行字符串表达式
a=1
b=5
print(eval('a+b'))
def test():
    print('666')

eval('test()')

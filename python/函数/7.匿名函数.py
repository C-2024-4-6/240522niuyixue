#创建匿名函数 lambda 参数,参数... : 表达式
#匿名函数即无名的函数
text = lambda a,b:a+b
print(text(1,3))

b=text(2,5)
print(b)

M = (lambda x,y: x if x>y else y)
print(M(4,8))

a = (lambda x,y: x if x>y else y)(7,15)#可直接在lanbda后调用
print(a)

#lambda适用于简单逻辑

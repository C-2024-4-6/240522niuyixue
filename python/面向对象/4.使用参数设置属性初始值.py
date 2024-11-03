class Cat:
    def __init__(self,name):#此处和函数相同
        print('这是一个初始化方法')
        #self.属性名=属性的初始值
        #self.name='Tom'
        self.name=name


#使用类名()创建对象时,会自动调用__init__方法
tom=Cat('卡卡')#括号中不用输入self参数

print(tom.name)

jerry=Cat('之hi')

print(jerry.name)

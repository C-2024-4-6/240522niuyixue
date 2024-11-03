# 多态：不同的 子类对象 调用相同的父类方法，产生不同的执行结果

class Dog(object):

    def __init__(self,name):
        self.name = name

    def game(self):
        print('%s蹦蹦跳跳'%self.name)

class Xiaogou(Dog):

    def game(self):
        print('%s飞天'%self.name)

class Person():

    def __init__(self,name):
        self.name=name

    def doggame(self,dog):

        print('%s和%s玩'%(self.name,dog.name))
        dog.game()

xiaohei=Dog('小黑')
xiaopo=Xiaogou('魈坡')
xiao=Person('魈')

xiaohei.game()
print()

xiaopo.game()
print()

xiao.doggame(xiaopo)

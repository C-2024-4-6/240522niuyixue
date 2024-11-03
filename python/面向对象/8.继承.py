#继承可以使相同代码不必重复编写

#子类(派生类)拥有父类(基类)的所有属性和方发
#继承具有传递性
#子类无法继承父类的私有属性和私有方法

'''
class 子类(父类):
    方法(self):
    
object为所有py3.x的基类,不指定父类即以object为父类
    ...
'''

print(dir(object))
print('\n\n')

class Animal:#父类
    def run(self):
        print('跑')
    def eat(self):
        print('吃')

class Dog(Animal):#子类
    def eat(self):#子类中定义与父类同名的方法，可以实现方法重写
        print('吞')
        
        super().eat()#使用super(). 可以调时应用父类的方法
        
    def bark(self):
        print('叫')

gou=Dog()

gou.eat()
gou.run()

class Cat():
    def jiao(self):
        print('秒')

#多继承
class Chaiquan(Cat,Dog):
    def han(self):
        print('卡擦')
        #括号中为多个类，可以同时继承所有类
kei=Chaiquan()

kei.han()
kei.bark()
kei.jiao()

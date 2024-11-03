class Cat:
    def eat(self):
        #哪一个对象调用方法,self就是哪一个对象的引用
        print('%s吃鱼'%self.name)#name是属性
    def drink(self):
        print('猫喝水')

#创建一个猫对象
tom=Cat()
tom.name='小猫'
print(tom.name)

tom.eat()
tom.drink()

#一个对象的属性可以是另一个类的对象

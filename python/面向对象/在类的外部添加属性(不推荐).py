class Cat:
    def eat(self):
        print('猫吃鱼')
    def drink(self):
        print('猫喝水')

#创建一个猫对象
tom=Cat()

tom.name='Tom'
# .属性+赋值语句即可在类的外部添加属性
print(tom)

tom.eat()
tom.drink()

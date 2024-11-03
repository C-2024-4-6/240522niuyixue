''' class 类名:   (类名首字母大写，不可有下划线)
    def 方法1(self,参数列表):
        pass
    def 方法2(self,参数列表):
        pass
'''

class Cat:
    def eat(self):
        print('猫吃鱼')
    def drink(self):
        print('猫喝水')

#创建一个猫对象
tom=Cat()

tom.eat()
tom.drink()

print(tom)
#显示当前对象的类和在类中的地址

add=id(tom)
print('%d'%add)
#以十进制显示地址

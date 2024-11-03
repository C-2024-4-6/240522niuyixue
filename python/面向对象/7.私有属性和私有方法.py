class Women:
    def __init__(self,name):
        self.name=name
        self.__age=18 #私有属性: __属性
        
    def secret(self):
        print('%s的年龄是%d'%(self.name,self.__age))
    def __secret1(self):
        print('%s的年龄是%d'%(self.name,self.__age))
        #私有方法: __方法

xiaoka=Women('小卡')

#私有属性在外界不能被直接访问,在方法内部可以访问
#print(xiaoka.__age)

xiaoka.secret()

#私有方法在外部不能直接调用
#xiaoka.__secret1()

print()
#想要调用私有属性和私有方法，要在前面加上 _类名
print(xiaoka._Women__age)

xiaoka._Women__secret1()


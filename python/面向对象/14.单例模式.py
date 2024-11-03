# 单例: 让类创建的对象,在系统中只有唯的-个实例
#单例设置方案:
'''
    1.定义一个类属性，初始值是None，用于记录单例对象的引用
    2.重写__new__方法
    3.如果类属性is None, 调用父类方法分配空间，并在类属性中记录结果
    4.如果不是 None 返回类属性中记录的对象引用
'''

class Musicplayer():

    # 记录第一个被创建对象的引用
    instance= None

    def __new__(cls,*args,**kwargs):
        
        # 1.判断类属性是否是空对象
        if cls.instance is None:        
            # 2.调用父类的方法,为第一个对象分配空间
            cls.instance=super().__new__(cls)
            
        # 3.返回类属性保存的对象引用
        return cls.instance
    
#创建多个对象,内存地址相同
player1 = Musicplayer()
player2 = Musicplayer()

print(player1)
print(player2)

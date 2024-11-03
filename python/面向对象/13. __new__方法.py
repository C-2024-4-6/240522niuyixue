#单例设计可以使类

class MusicPlayer():

    #__new__方法固定格式
    def __new__(cls,*args,**kwargs):
        
        # 1.创建对象时，new方法会被自动调用
        print("创建对象，分配空间")
        
        # 2.为对象分配空间,调用创建对象的父类的__new__方法
        neicun = super().__new__(cls)
        #__new__是静态方法,调用类方法时必须添加cls参数
        
        # 3.返回对象的引用,如果没有改步,不会执行__init__方法
        return neicun
        
    def __init__(self):
        print("播放器初始化")

# 创建播放器对象
player = MusicPlayer()

print(player)

class Tool():

    count=0
    
    #类方法需要用修饰器 @classmethod 来标识，告诉解释器这是一个类方法
    #类方法的第一个参数应该是cls
    @classmethod
    def kkcount(cls):
    #由哪一个类调用的方法，方法内的cls 就是哪-个类的引用这个参数和实例     
        print('工具对象的数量为%d'%cls.count)

    def __init__(self,name):

        self.name=name

        Tool.count +=1
        
tool1=Tool('剪刀')
tool2=Tool('斧头')

#通过 类名.调用类方法，调用方法时，不需要传递cls参数
Tool.kkcount()

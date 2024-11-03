class Tool:
    #在创建类时使用赋值语句，可以定义类属性 属性=
    count = 0

    def __init__(self,name):
        self.name=name

        #类属性加1
        Tool.count +=1

tool1=Tool('斧头')
tool2=Tool('锤子')


print(Tool.count)

#属性有向上查找机制
#若对象没有属性，则向上寻找类属性

print(tool1.count)

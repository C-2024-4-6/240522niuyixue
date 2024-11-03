class Cat:
    def __init__(self,name):
        self.name=name
        print('%s来了'%self.name)

    #__str__用于在print对象时返回一个自定义字符串
    def __str__(self):

        return '我是Tom'
        #必须返回一个字符串
    
tom=Cat('Tom')

print(tom)

class Cat:
    def __init__(self,name):
        self.name=name
        print('%s来了'%self.name)
    def __del__(self):
        print('%s没了'%self.name)

#__del__会在所有代码执行完毕后执行方法，并删除对象
#tom为全局变量
tom=Cat('渣渣')
print(tom.name)
print('*'*50)


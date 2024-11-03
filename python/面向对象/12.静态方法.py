class Dog:

    #如果一个方法不需要访问对象属性和类属性，可以设置为静态方法
    #定义静态方法时,要先用 @statticmethod 标识
    @staticmethod
    def run():#没有必须传递的参数

        print('小狗跑了')

# 类名. 调用静态方法
Dog.run()

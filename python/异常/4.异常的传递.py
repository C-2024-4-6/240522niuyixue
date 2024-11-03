#函数中出现异常时，会被传递到调用函数或方法的一方
#当异常被传递到主程序中仍然没有异常处理，程序终止


def demo1():
    return int(input('输入程序'))

def demo2():
    return demo1()

#可以利用异常的传递性，在主程序捕获异常
try:
    print(demo2())
except Exception as result:
    print('未知错误%s'%result)

#递归是在函数内部调用自己

def cut(num1):
    print(num1)
    if num1==1:#不加if停止判断,会无限循环
        return
    cut(num1-1)#此参数不得与原参数相同
    
cut(8)

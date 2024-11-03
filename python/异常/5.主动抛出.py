# Exception 是异常类

def mima():

    # 1.提示用户输入密码
    pwd=input('请输入密码:')

    # 2.判断密码长度>=8,返回密码
    if len(pwd)>=8:
        return pwd

    # 如果<8 主动抛出异常
    print('主动抛出异常')
    # 1>创建异常对象
    ex=Exception('密码长度不够')#以错误消息作为参数
    
    # 2>主动抛出异常 raise
    raise ex

# 提示用户输入密码
try:
    print(mima())
except Exception as r:
    print(r)

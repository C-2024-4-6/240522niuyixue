# 捕获异常

'''
try:
    尝试执行的代码
except:
    出现错误的处理
'''
#如果代码正确，会隔过except向下执行
#如果代码错误，不会停止，而执行except里的代码

try:
    #不能确定正确执行的代码
    n=int(input('输入1个整数'))

except:
    print('请输入整数')

print('*'*60)


#可使用except 错误类型: 的方式捕获特定的错误 

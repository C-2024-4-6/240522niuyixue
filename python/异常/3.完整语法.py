try:
    n=int(input('输入一个整数'))

    result=8/n

    print(result)

except ValueError:
    print('请输入正确整数')

# 未知错误 except Exception as 变量:
except Exception as i:
    print('未知错误%s'%i)

else:
    # 没有异常才会执行else的代码
    print('没有异常')

finally:
    # 无论是否有异常都会执行finally的代码
    print('完毕')

try:
    n=int(input('输入一个整数'))

    result=8/n

    print(result)

except ValueError:
    print('请输入正确整数')

# 未知错误 except Exception as 变量:
except Exception as i:
    print('未知错误%s'%i)

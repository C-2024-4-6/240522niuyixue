k=1
c=lambda a:2*a*3.14
s=lambda a:2*a*3.14
while k:
    try:
        k=float(input('请输入半径:'))
        print('周长为'+str(c(k)))
        print('面积为'+str(s(k)))
    except:
        print('请输入正确的半径')
        print('-'*50)
    else:
        k=0

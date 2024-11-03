input('你想看第n到第m行的乘法表\n     按任意键继续')
n=int(input('输入n的值:'))
m=int(input('输入m的值:'))
for i in range(n,m+1):
    for j in range(1,i+1):
        print(str(i)+'*'+str(j)+'='+str(i*j),end=' ')
    print()
input('\n\n                                  按任意键结束')


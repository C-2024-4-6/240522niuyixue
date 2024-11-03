import os
import time
def ave(*num):
    he=0
    n=len(num)
    print('有'+str(n)+'个数')
    for i in num:
        he += i
    print('数据的和为'+str(he))
    jun=he/n
    print('平均数为'+str(jun))
    
    fc=0
    for i in num:
        fc+=(i-jun)**2
    fc=fc/n
    print('方差为'+str(fc))

lis=()
q=1
while q:
    try:
        lis1=(float(input('输入数据:')),)
        lis=lis+lis1
        os.system('cls')
        ave(*lis)
        print('-'*25)
        a=int(input('回车继续,输入0结束输入，'))
    except:
        os.system('cls')
        print('请输入数字')
    else:
        os.system('cls')
    
        if not a:
            q=0
    
    



import random as r
import os
#导入随机数模块

while True:
    print('*'*80)
    try:
        a=int(input('请输入你的选择(请输入1，2，3;分别表示石头剪刀布):'))
    except:
        os.system('cls')
        print('请输入1或2或3')
    else:
        if a not in range(1,4):
            print('你出的啥？')
        else:
            lis=['石头','剪刀','布']
            print('你出'+lis[a-1])
            b=int(r.randint(1,3))
            print('电脑出'+lis[b-1])


    #逻辑判断加括号表示整体
    #条件判断时可把全部条件加括号
    #并且把两条件分行,2tab缩进
            if ((a==1 and b==2)
                    or (a==2 and b==3)
                    or (a==3 and b==1)):

                print('你赢了'.center(60))
            elif a==b:
                print('平局'.center(60))
            else:
                print('你输了'.center(60))
            print('回车继续'.center(60))
                
            input()
            os.system('cls')
    

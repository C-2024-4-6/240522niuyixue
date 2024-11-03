def shulie(n):
    if n==1:
        lis=[1]
    elif n==2:
        lis=[1,1]
    elif n>=3:
        lis=[1,1]
        for i in range(3,n+1):
            k=lis[i-3]+lis[i-2]
            lis.append(k)
    print(lis)
shulie(int(input('输入项数:')))
            

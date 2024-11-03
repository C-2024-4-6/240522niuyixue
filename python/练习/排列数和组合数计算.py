m=int(input('输入元素数='))
n=int(input('输入组数='))
s=1
for i in range(m-n+1,m+1):
    s=s*i
k=1
for j in range(1,n+1):
    k=k*j
p=s/k
print('组合数数值为:',p)
print('排列数数值为:',s)

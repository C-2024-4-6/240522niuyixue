#求解2元1次方程
import fractions#分数系统

print('请输入一般式的a,b,c')
print('-'*70)
a =float(input('a='))
b =float(input('b='))
c =float(input('c='))

def qiugen(a,b,c):
    k=b**2 - 4*a*c
    if k>0:
        i = k**0.5
        x1=(-b+i)*0.5
        x2=(-b-i)*0.5
        print(f'两个根:x1={x1},x2={x2}')
        fx1=fractions.Fractions(x1)
        fx2=fractions.Fractions(x2)
        print(f'分数表示为:x1={fx1},x2={fx2}')
    elif k==0:
        x=(-b)*0.5
        print(f'一个根:x={x}')
    else:
        print('该方程无实数根')

try:
    qiugen(a,b,c)
except:
    print('请正确输入a,b,c')

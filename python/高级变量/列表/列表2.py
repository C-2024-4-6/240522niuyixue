a=['你','好','呀']
print(a[1])
print(a[-1])
print(a[-2])
#逆向索引从-N到-1

#获取列表中的多个元素
b=['你','今','天','没','事','吧','?']
print(b[1:6:2])#start,stop,step(起，止，步长)
print(b[1:6])#默认步长为1(最后一个冒号可省略)
print(b[:6:1])#默认起为0（加冒号）
print(b[2::1])#默认stop为列表长度
print(b[::2])
print(b[::])
#step为负数时，将反向列表
print(b[::-1])
print(b[5:0:-2])

#判断元素是否存在于列表
print('你' in b)
print('kk' in b)
print('你'not in b)
print('kk' not in b)

#元素遍历
for i in b:
    print(i,end=' ')
else:
    print()
for k in b[5:0:-2]:
    print(k,end=' ')

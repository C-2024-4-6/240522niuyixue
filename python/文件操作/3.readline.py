# readline 方法可以一次读取一行内容
#每次执行会把 文件指针移动到下一行

p=open('ceshi3.txt')
while True:
    a=p.readline()
    if not a:
        break
    print(a)
p.close()

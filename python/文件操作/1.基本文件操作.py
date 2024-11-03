'''
基本操作:

    01 open  打开文件，并且返回文件操作对象
    
以下三个操作需要用文件对象调用:

    02 read  将文件内容读取到内存
    03 write 将指定内容写入文件
    04 close 关闭文件

文件需要和py文件在同一目录
'''
k=open('ceshi.txt')

s=k.read()
print(s)

k.close()

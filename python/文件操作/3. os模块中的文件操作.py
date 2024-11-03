#导入os模块
import os
'''
01 rename 重命名文件 os. rename(源文件名，目标文件名)
02 remove 删除文件   os. remove(文件名)
目录操作:
01 listdir 目录列表     os. listdir(目录名)
02 mkdir   创建目录     os.mkdir(目录名)
03 rmdir   删除目录     os. rmdir(目录名)
04 getcwd  获取当前目录 os.getcwd()
05 chdir   修改工作目录 os. chdir(目标目录)
06 path.isdir 判断是否是文件 os.path. isdir(文件路径)
'''
#以上操作都支持相对路径和绝对路径

#文件重命名
os.rename('ceshi.txt','123.txt')

#查看目录中的文件
os.listdir('.')

#删除文件
os.remove('123.txt')



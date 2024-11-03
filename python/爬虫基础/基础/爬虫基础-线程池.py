import time
#导入pool类
from  multiprocessing.dummy import  Pool
url=''
headers={
'User-Agent':'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/128.0.0.0 Safari/537.36 Edg/128.0.0.0'
}
#好处:可以降低系统开销
#弊端:无法无限制地开启线程

def test1(str):
    print(str+'正在下载')
    time.sleep(2)
    print(str+'下载成功')
strlist=['a','bb','cc','ppp','e']

#实例化一个线程池对象()中为线程个数
pool=Pool(5)

starttime=time.time()
#pool.map(函数,列表)以多线程的形式分别以列表的每个元素为参数传给函数并执行
pool.map(test1,strlist)

endtime=time.time()
lasttime=endtime-starttime
print(f'共耗时{lasttime}秒')

#pool.close()阻止向线程池发送更多任务
#pool.join()等待所有子进程完成认为一般之前要调用close
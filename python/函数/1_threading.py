import threading
import datetime
import time
thread_num = 1
thread_list = []
def timeload(n):
    global thread_num
    print('线程开始时间:' + str(datetime.datetime.now()))
    time.sleep(n)
    print(f'线程{thread_num}结束时间:' + str(datetime.datetime.now()))
    thread_num += 1
for i in range(5):
    thread = threading.Thread(target=timeload,args=(3,))#Thread()类中target=目标函数,args=参数(元组形式)
    thread.start()
    thread.join(0.1)#join方法能够使线程阻塞至多指定秒时间,若线程提前结束同样停止阻塞
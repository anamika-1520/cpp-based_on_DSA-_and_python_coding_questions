import threading
import time

def func(seconds):
    time.sleep(seconds)
    print(f"sleep for {seconds} seconds")
"""def func01(seconds):
    time.sleep(seconds)
    print(f"sleep for {seconds} seconds")
def func02(seconds):
    time.sleep(seconds)
    print(f"sleep for {seconds} seconds")"""
# normal code
t1=time.perf_counter()
"""func(4)
func(6)
func(5)   
t2=time.perf_counter()  
print(t2-t1)"""
 # using threads 
t3=threading.Thread(target=func,args=[4])
t4=threading.Thread(target=func,args=[5])
t5=threading.Thread(target=func,args=[6]) 
t3.start()
t4.start()
t5.start()
t3.join()
t4.join()
t5.join()


t2=time.perf_counter()
print(t2-t1)

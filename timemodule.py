import time
'''def  usingwhile():
    i=0
    while i<10000:
        print(i)
        i=i+1
def usingfor():
    for i in range(10000):
        print(i)
#usingwhile()
usingfor()  
init=time.time()
usingfor()
t1=time.time()-init
init=time.time()
usingwhile()
print(time.time()-init)
print(t1)
print(type(t1))'''
#print(4)
#time.sleep(3)
#print("this is printed after 3 seconds")
print(time.daylight)
print(time.monotonic())
print(time.localtime())
t=time.localtime()
formatted_time1=time.strftime("%Y-%m-%d ")
formatted_time2=time.strftime("%H:%M:%S")

print("the current date  is :",formatted_time1)
print("the current time is ",formatted_time2)
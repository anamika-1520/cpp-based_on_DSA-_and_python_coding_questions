import threading
import time
import requests
from concurrent.futures import ThreadPoolExecutor

def func(url):
       r=requests.get(url)
       open(f"img10.jpg","wb").write(r.content)
       time.sleep(5)
       print(f"sleep for 5 seconds ans downloaded 1 files") 
def func1(url):
       r=requests.get(url)
       open(f"img11.jpg","wb").write(r.content)
       time.sleep(5)
       print(f"sleep for 5 seconds ans downloaded 1 files") 
def func2(url):
       r=requests.get(url)
       open(f"img12.jpg","wb").write(r.content)
       time.sleep(5)
       print(f"sleep for 5 seconds ans downloaded 1 files") 

def poolingdemo():  ##### most important function of concurrent.futures module
    with ThreadPoolExecutor() as executor:
        future1=executor.submit(func,"https://images2.fanpop.com/images/photos/5700000/Random-random-5719766-1280-800.jpg")
        future2=executor.submit(func1,"https://c.wallhere.com/photos/5e/36/shanghai_buildings_sky_light_skyscraper-1050353.jpg!d")
        future3=executor.submit(func2,"https://images2.fanpop.com/images/photos/5500000/Random-wallpapers-random-5549370-1280-800.jpg")
        print(future1.result())
        print(future2.result())
        print(future3.result())

poolingdemo()       
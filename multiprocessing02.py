
## other method of downloading lists of images/files in just a few seconds
## using ProcessPoolExecutor FUNCTION FORM CONCURRENT.FUTURES MODULE

import concurrent.futures
from multiprocessing import Process,freeze_support
import multiprocessing
import requests
import os
if(not os.path.exists("data")):
    os.mkdir("data")

def downloadfile(url,name):
     print(f" start downloading file {name}")
     r=requests.get(url)
     open(f"data/file{name}.jpg","wb").write(r.content)
     print(f"finished downloading file {name}")
url="https://picsum.photos/2000/1000"      ### BY THIS URL WE CAN DOWNLOAD RANDOM IMAGES EVERYTIME
PROS=[]
if __name__ == '__main__':
    freeze_support()
    with concurrent.futures.ProcessPoolExecutor() as executor:
        l1=[url for i in range(90)]
        l2=[i for i in range(90)]
        results=executor.map(downloadfile,l1,l2)


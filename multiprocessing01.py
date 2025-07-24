### it is similar to multithreading
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
url="https://picsum.photos/1280/800"
PROS=[]
if __name__ == '__main__':
    freeze_support()
    """for i in range(50):    
    #downloadfile(url,i)    
      p=multiprocessing.Process(target=downloadfile,args=[url,i])
      p.start()
    #p.join()
      PROS.append(p)
for p in PROS:
      p.join()   """
    with concurrent.futures.ProcessPoolExecutor() as executor:
        l1=[url for i in range(80)]
        l2=[i for i in range(80)]
        results=executor.map(downloadfile,l1,l2)
        
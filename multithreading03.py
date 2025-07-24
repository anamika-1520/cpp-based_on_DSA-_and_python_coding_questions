import threading
from concurrent.futures import ThreadPoolExecutor
import time

def func(seconds):
    time.sleep(seconds)
    return (f"sleep for {seconds} seconds")


def poolingdemo():
    with ThreadPoolExecutor() as executor:
        l=[1,5,3]
        results= executor.map(func,l) #### map fun ka use in concurrent.future 
        for i in results:
            print(i)

poolingdemo()
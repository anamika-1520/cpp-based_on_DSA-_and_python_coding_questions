import time
import asyncio
import requests
async def function1():
    time.sleep(1)
    URL="https://www.thewowstyle.com/wp-content/uploads/2015/01/images-of-nature-4.jpg"
    r=requests.get(URL)
    open("img.jpg","wb").write(r.content)
    print("fun 1")
    return "harry"
async def function2():
    time.sleep(1)
    URL="https://www.thewowstyle.com/wp-content/uploads/2015/01/images-of-nature-4.jpg"
    r=requests.get(URL)
    open("img01.jpg","wb").write(r.content)
    print("fun 2")
    return "Anamika"
async def function3():
    time.sleep(1)
    URL="https://www.thewowstyle.com/wp-content/uploads/2015/01/images-of-nature-4.jpg"
    r=requests.get(URL)
    open("img02.jpg","wb").write(r.content)
    print("fun 3")
    return "SALONI"
async def main():
    #L= await asyncio.gather(function1(),function2(),function3())
    task=asyncio.create_task(function1())    
    #await function1()
    await function2()
    await function3()
    #print(L)







asyncio.run(main())    
  
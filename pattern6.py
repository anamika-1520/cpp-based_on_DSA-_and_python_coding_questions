rows=int(input("enter the num of rows :"))
### print left- half piramid pattern
for i in range(1,rows):
    for j in range(rows-i):
        print(" ",end="")
    for k in range(i):
        print("&",end="")
    print("\n",end="")  
#### print left- reversed piramid pattern     
for i in range(rows):
    for j in range(i):
        print(" ",end="")
    for k in range(rows-i):
        print("&",end="")  
    print("\n",end="")                  
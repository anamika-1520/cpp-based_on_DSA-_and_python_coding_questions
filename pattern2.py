rows=int(input("enter the num of rows:"))
for i in range(1,rows):
    for j in range(rows-i):
        print("&",end="")
    for k in range(2*i-1):
        print("*",end="")
    for l in range(rows-i):
        print("&",end="")      



    print("\n",end="")    
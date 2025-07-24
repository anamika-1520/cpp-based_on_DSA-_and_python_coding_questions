rows=int(input("enter the num of rows:"))
########### print the reversed dimond pattern
for i in range(1,rows):
    for j in range(1,i):
        print(" ",end="")
    for k in range(rows-i):
        print("&",end="")
    for l in range(1,rows-i):
        print("&",end="")    
    print("\n",end="") 
############ print the dimond pattern    
for i in range(2,rows):
    for j in range(1,rows-i):
        print(" ",end="")
    for k in range(2*i-1):
        print("&",end="")
    for l in range(1,rows-i):
        print(" ",end="")      
    print("\n",end="")    
  
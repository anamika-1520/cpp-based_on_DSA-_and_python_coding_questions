rows=int(input("enter the num of rows:"))
####### this loop is for upper butterfly pattern
for i in range(1,rows):
    for j in range(i):
        print("&",end="")
    for k in range(rows-i):
        ### print spaces
        print(" ",end="")
    for g in range(1,rows-i):
        ### print spaces
        print(" ",end="")    
    for l in range(i):
        print("&",end="") 
    print("\n",end="") 
######## this is for lower butterfly pattern          
for i in range(1,rows):
    for j in range(rows-i):
        print("&",end="")
    for k in range(2*i-1):
        ### print spaces
        print(" ",end="")
    for l in range(rows-i):
        print("&",end="")      



    print("\n",end="")  

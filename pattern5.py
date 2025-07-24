rows=int(input("enter the num of rows:"))
####### thsi is for right half-paramid pattern
for i in range(1,rows):
    for j in range(i):
        print("&",end="")
    
    print("\n",end="")
###### this is for right-reversed- piramid  pattern      
for i in range(rows):
    for j in range(rows-i):
        print("&",end="") 
    print("\n",end="")       
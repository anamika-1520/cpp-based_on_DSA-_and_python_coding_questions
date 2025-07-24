rows = int(input("enter the num of rows:"))
## print upper dimond pattern>>>>>>>>>>>>
for i in range(1,rows):
    for j in range(rows-i):
        #### print right-reversed piramid
        print("&",end="")
    for k in range(2*i-1):
        # print inner upeer pattern
        print("*",end="")
    for l in range(rows-i):
        #print left-reverse half piramid
        print("&",end="")    
    print("\n",end="")
    ##### print lower dimond pattern>>>>>>>>>>>>> 
for i in range(1,rows):
    for j in range(i):
        print("&",end="")
    for k in range(rows-i):
        print("*",end="") 
    for l in range(1,rows-i):
        print("*",end="") 
    for m in range(i):
        print("&",end="")                 
    print("\n",end="")    
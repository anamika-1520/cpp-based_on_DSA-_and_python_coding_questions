list= [9090,1111,1111,9090]
print(list)
#list.append("kal")
print(list)
list_copy=list.copy()
print(list_copy)
list_copy.reverse()
if(list==list_copy):
    print("palindrome list")
else:
    print("not palindorme")    
l=list.count(1111)
print(l) 
length=len(list)
print(length)
print(list.index(9090))
list.sort()
print(list)
list=["anamika",90,67,5678,1122]
for i in list:
    print(i,end=" , ")


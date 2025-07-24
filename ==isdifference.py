a= "0"
b=9
print(a is b)
print(a==b)
if a is b:
    print(True)
else:
    print(b)  

l=[9,0]
k=[9,0]
print(l is k) ## because both are lists thats why they are not immutable
print(k==l)     
    
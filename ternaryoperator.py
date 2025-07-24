a=int("2345")
b= 67890
print(a+b)
a= "Anamika"
b="Saxena"
print(a,b)
num=int(input("number is : "))
if(num>0):
    print("num is poistive\n")
elif(num<0):
    print("num is negative\n")
else:
    print("num is zero\n")   

# ternary operator
a=int(input("first value :a= "))
b=int(input("first value :b= "))
result= "a and b are equal"if a==b else "both are not equal" 
print(result)
max= "a is maximum "if a>b else "b is maximum"
print(max)
min = "a is minimum" if a<b else "b is minimum"
print(min)
zero="a is zero " if a==0 else "a is not zero"
print(zero)
zero="b is zero" if b==0 else "b is not zero"
negative1="a is negative " if a<0 else "a is non negative"
print(negative1)
negative2="b is negative" if b<0 else "b is non negative"
print(negative2)

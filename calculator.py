print("welcome to the world of calculation")
print("for addition enter : 1 ")
print("for subtraction enter : 2")
print("for multiplication enter : 3")
print("for division enter : 4")
print("for finding reminder enter : 5")
print("for floor value enter : 6")
print("for expontial fun is : 7")
num=int(input("num: "))
a=int(input("first value is :" ))
b=int(input("second value is :"))
if(num==1):
    print("addition is :",a+b)
if(num==2):
    print("subtraction is :",a-b)
if(num==3):
    print("multiplication is :",a*b)
if(num==4):
    print("division is :",a/b)
if(num==5):
    print("reminder is :",a%b)
if(num==6):
    print("floor value of a/b is :",a//b)
if(num==7):
    print("a to the power is :",a**b)
if(num>7):
    print("calculator has not any more operation related to ths num")

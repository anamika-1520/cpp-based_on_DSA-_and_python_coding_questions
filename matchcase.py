x=int(input("enter the value of x: "))
match x:
    case 0:
        print("x is zero")
    case 4 if x%2 ==0:
        print("x%2==0 and case is 4")
    case _ if x!=19:
        print(x,"is not 19")
    case _ if x!=90:
        print(x,"is not 90 ")
    case _:
        print(x)
#sumof two numbers
try:
    a=int(input("first num is : "))
    b=int(input("second num is : "))
    sum=a+b
    print("sum is :",sum)
except:
    print("invalid input")   

""""finally word ki importance ye he ki agr function return bhi ho jaye tab bhi finally exacute hoga """
                                                     

def sum():
        try:
             #a=int(input("first  num is: "))
             #b=int(input("second num is: "))
             print(f"sum of two numbers is {a+b}")
             return 1
        except:
             print("invalid input")
             return 0
        finally:
             print("i will always be executed")            
sum()        
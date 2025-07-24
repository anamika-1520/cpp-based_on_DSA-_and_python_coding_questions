""" METHOD OVERRIDING  """
class shape:
    def __init__(self,x,y):
        self.x=x
        self.y=y
    def area(self):
        return self.x *  self.y    
class circle(shape):
    def __init__(self,radius):
        self.radius=radius
        super().__init__(radius,radius)
    def area(self):                    # this is called method overriding matlab same methods with same arguements but classes are different
        return 3.14*super().area()
##a=shape(2,5)#
# print("area of rectangle is ",a.area()) 
b=circle(8)
print("area of circle is ",b.area()) 

""" METHOD OVERLOADING """
class calculation:
    def sum(self,a=None,b=None,c=None):
        s=0
        if a !=None and b!=None and c!=None:
            s=a+b+c
        elif a!=None and b!=None:
            s=a+b
        elif a!=None:
            s=a
        return s    
a=calculation()
print(a.sum(2))    ## this is called  method overloading 
print(a.sum(2,3))   #### matlab same class main same method but different arguments but python does not support method overloading
print(a.sum(12,89,78))  ### only is type se overloading kar sakte he bas  and different inharited classe main ban jayege methods with same name
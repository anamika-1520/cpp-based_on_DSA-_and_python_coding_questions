class details:
    name="Anamika"
    age=20
    occupation="accountant"
    salary=80000
    def __init__(self,name,age,occupation,salary):####### it is constructor function it's always exacuted when ever the object of class is initialized(declared)
        self.name=name
        self.age=age
        self.occupation=occupation
        self.salary=salary
        print(F"{self.name} is {self.age} years old and she is {self.occupation} and her salary is {self.salary} per month.")
    
    def show(self): ##### here self is the object of that class 
       print(f"{self.name} is {self.age} *years old.*")
class moredetails(details): ##### here we have inharited the parent class to the child class
    def __init__ (self,name):### constructor fun
         self.name=name
         print(f"{self.name} is  {details.name}'s friend")       
        
obj1=details("shuhana",30,"accountant",80000) ###### object is initialized .this is the obj of class details()
obj1.name="shivani"
obj1.age=35
obj1.occupation="data analyist"
obj1.show()  ##### calling the function of class details 
obj2=moredetails("mumtaj")      



        
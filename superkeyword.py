"""class person:
    name="sarojani"
    age=20
    def parent(self):
        print("you are in perent class")
class child(person):
    def parent(self):
        print("anmaika,you are in child class and child class parent method")
    def child_method(self):
        print("you are in child class ")    
        super().parent()    ################# calling the parent class method in child class by using super keyword
      
child_object=child()
child_object.parent()
child_object.child_method()"""



class managerqualities:
    def __init__(self,name,age,id):
        self.name=name
        self.age=age
        self.id=id
class programmer (managerqualities):
    def __init__(self,name,age,id,lang):
        super().__init__(name,age,id)
        self.lang=lang
        print(f"{self.name} have the qualities to become a manager she is {self.age} years old and her id no is {self.id}.she is brillient in {self.lang}")

parent_object=managerqualities("saumya",20,12292)
child_object=programmer("ANMAIKA SAXENA",20,1594456,"c++")       
child_object.lang="python"
print(child_object.name)
print(child_object.lang)
print(parent_object.name)
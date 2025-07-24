## example of method overloading
## here show_method() overloads

class animal:
    def __init__(self,name,color):
        self.name=name
        self.color=color
    def show_method(self):
        print( f"the name of animal is {self.name} and its color is {self.color}." )   
    
class dog(animal):
    def __init__(self,name,food,eyecolor,color):
        super().__init__(name,color)
        self.food=food
        self.eyecolor=eyecolor
    def show_method(self,name="dog"):
        animal.show_method(self)
        return f"dog  likes to eat {self.food} and his eye color is {self.eyecolor}."
    
class cat(animal):
    def __init__(self,name,food,eyecolor,color):
        super().__init__(name,color)
        self.food=food
        self.eyecolor=eyecolor
    def show_method(self):
        animal.show_method(self)
        return f"CAT likes to eat {self.food} and her eye colcor is {self.eyecolor}." 

a=dog("dog","breadmilk","brown","gray")
print(a.show_method())
b=animal("dog",'black')
c=cat("cat","rat","brown","white")
print(c.show_method())

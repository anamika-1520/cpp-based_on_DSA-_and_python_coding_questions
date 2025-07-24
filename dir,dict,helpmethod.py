x=[1,2,3,45,67]
print(dir(x))   ## directory is used 
print(x.__add__)
class person:
    def __init__(self,name,age):
        self.name=name
        self.age=age
p=person("sukanya",20)
print(p.__dict__) 
print(help(person))       
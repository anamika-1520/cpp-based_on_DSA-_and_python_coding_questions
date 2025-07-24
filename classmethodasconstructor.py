class employee:
    def __init__(self,name,age,id):
        self.name=name
        self.age=age
        self.id=id
    @classmethod
    def change(cls,string):
       return cls(string.split("-")[0],string.split("-")[1],string.split("-")[2])
e=employee("sona",20,7700)
print(e.name)
print(e.age)
print(e.id)
string="saloni-23-12345"
e2=employee.change(string) ###yahan pe change method constructor ki tarah use ho raha he 
print(e2.name)
print(e2.age)
print(e2.id)
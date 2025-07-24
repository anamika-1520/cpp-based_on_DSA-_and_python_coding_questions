class string:
    def __init__(self,name):
        self.name=name
    def __len__(self):
        i=0
        for c in self.name:
            i=i+1
        return i
    def __str__(self):
        return f" the name of employee is {self.name}"
    def __repr__(self):
        return f"employee ('{self.name}')"           
    def __call__(self):
        return f"(hey are you okay {self.name} )"
sw=string("anamika")        
print(sw.name)
print(len(sw.name))
print(repr(sw))
print(callable(sw))

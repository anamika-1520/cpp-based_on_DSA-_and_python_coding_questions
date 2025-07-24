class ExampleClass:
    def __init__(self,argument1,argument2):
        self.argument=argument1
        self.argument1=argument2
    @classmethod
    def factory_method(cls, argument1, argument2):
        return argument1, argument2
    
a=ExampleClass(9,0)
print(a.factory_method(10,9)) 



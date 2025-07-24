"""class string:
    def __init__(self,name):
        self.name=name
    def __len__(self):  # all method with double underscore is called magic/dunder method .why are they called magic method ?
        i=0                # because unko likha underscore ke sath ke sath but call bina underscore ke sath kiya jata he
        for c in self.name:
            i=i+1
        return i  """  
from main import string  ## hame idhar kisi dusri file se bhi class ko import akr sakte he and use kar sakt he 
e=string("anamika")
print(e)
print(repr(e))
print(str(e))
e()
"""print(e.name) 
print(len(e))
print(type(e))"""   

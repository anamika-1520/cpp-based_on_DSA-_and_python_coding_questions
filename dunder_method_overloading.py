class vector:
    def __init__(self,i,j,k):
        self.i=i
        self.j=j
        self.k=k
    def __str__(self):
        return f"{self.i}i + {self.j}j + {self.k}k"
    def __add__(self,x):
        #return f"{self.i+x.i}i + {self.j+x.j}J + {self.k+x.k}"     edhar se type of additin of two vectors will be str and esse 
        return vector((self.i+x.i) , (self.j+x.j), + (self.k+x.k)) ## bs do vectors ka addition hi kar sakte he (f string bale se)
    def __mul__(self,x,y=None):
        return vector((self.i * x.i) , (self.j * x.j) , (self.k * x.k))  
    
a=vector(2,4,5)
b=vector(3,5,7)
c=vector(8,9,10)
d=vector(4,5,7)
print("vector v1 = ",a)
print("vector v2 = ",b)
print("vector v3 = ",c) 
print("vector v4 = ",d)

print("addition of vectors v1,v2 and v3 = ",a+b+c) 
print("addition of two vectors v1 and v2 = ",(a+b))
print(type(a+b))

print("multiplication of two vectors v1 and v2 = ",a*b)
print("multiplication of v1 ,v2 and v3 = ",a*b*c)
print("multiplication of four vectors = ",a*b*c*d)

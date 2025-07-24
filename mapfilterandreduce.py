l=[1,2,3,4,5,6,7,8,9]
newl=[]
for item in l:
    newl.append(item*item)
print(newl)    
############## use of map function
def cube(x):
    return x**3
newl=list(map(cube,l))
print(newl)
############ filter funtion
def function(x):
    return x>2
print(list(filter(function,l)))
############# reduce function
############# calculate the sum of the numbers using reduce function
from functools import reduce
def sum(x,y):
    return x+y
s_um=reduce(sum,l)
print("sum of all elements of list l is :",s_um)
def fun(value1,value2):
    return value1+value2+90
print(reduce(fun,l))
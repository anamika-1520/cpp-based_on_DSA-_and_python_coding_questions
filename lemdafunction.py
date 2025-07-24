def double(x):
    return x**2
print("square is:" ,double(9))
##### now use lemda function 
square =lambda x:x**2
print(square(5))
cube=lambda x:x**3
print(cube(8))
sum=lambda x,y:(x+y)
print(sum(2,7))
average=lambda x,y:(x+y)/2
print(average(45,78))
def function(fx,value):    ########## yahan pe function as a arguement pass ho rha he 
    return 9+fx(value)
print(function(cube,2))
print("lambda function is used for anonymous function:", function(lambda x:x*x*x*x,2))
print(function(lambda x:x**2+x+3,9))
fun=lambda x:9+cube(x)
print(fun(7))

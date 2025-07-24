name = input("name: ")
age=int(input("age: "))
price= float(input("price:"))

print(name)
print(age)
print(price)
print("my name is",name,"and i am",age,"years old")
print(name[0])
print(name[1])
print(name[2])
print(name[3])
for character in name:
    print(character)
print(len(name))
print(name[2:8]) # here last index will not visible on output screen
print(name[:-3]) # here name[:3] means name[0: (len(name)-3)]
print(name[-3:-1])    
print(name[-4:-2])
print(name[1:3])



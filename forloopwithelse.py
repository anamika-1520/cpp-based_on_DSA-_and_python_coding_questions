for i in range(9):
    print(" {} iteration in for loop ".format(i+1))
else:
    print("  out of the loop" )
#print tables
# with thw help of ################################try and except exceptional handling
a=(input("num is:" ))
print(f"table of {a} is :")
try:
    for i in range(1,11):
        print(f"{(int(a))}X{i} = {int(a)*i}")  # f string ka use bahut hi important h
except:
    print("invalid syntax")          

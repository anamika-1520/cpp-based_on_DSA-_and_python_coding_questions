a= input("name is : ")
print(a)
b="harry!!!!!!!!!!name##########"
print(len(a))
print(a.upper())
print(a.lower())
print(a.rstrip("!!!!"))
print(a.replace(a,"john"))
print(b.split("  "))
vlogheading="introduction to python"
print(vlogheading.capitalize())
str1="WELCOME TO THE CONSOLE !!!!!!"
print(str1.center(100))
print(a.endswith("#####"))
print(str1.endswith("TO",4,10))
str2="Anamika is a very good girl"
print(str2.find("is"))
print(str2.find("kk"))
print(" index of str is:", str2.index("good"))
#print("index of str2 is :", str2.index("www"))# it will give an error because ther is no substring of "www" type in sstr2
print(str1.isalnum())
print(str2.islower())
print(a.isprintable())# if string a is printable then it returns true 
print(str1.isspace())
print(b.istitle())
print(b.startswith("harry"))
print(str2.title())
print(a.encode())
#a.replace()
print(a)


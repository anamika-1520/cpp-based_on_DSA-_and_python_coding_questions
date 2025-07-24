#code word banana
string=input("enter a string :")
password=input("password: " )
if(len(string)>=3):
   
          str1=string[0]                         ## most important things i have used here 
          str2=string.replace(string[0],"",1)       # 1 is repace function {here jb ham repace function ko use karenge to jis string                               # ko repce karna he uske number of occurance ko bhi dhyan rakhna hoga 
          str0=str2+str1                             # 2 removeprefix()........ 2 removesuffix()
          finalstr=password+str0+password            # string ko list main and list ko string main change krna
else:                                           # list ko string main change krane ka function     ''.join(str)str3=string[1]
         finalstr=string[::-1]
print("final code word for security is : ........   ",finalstr )    
#decoding karna
  
      
if(len(string)<3):
         decodingword=finalstr[1]+finalstr[0]   
else:
         str6=finalstr.removeprefix(password)
         str7=str6.removesuffix(password) 
         print(str7)
         b=str7[len(str7)-1]
         str8=list(str7)
         str9=str8.pop()
         str10=''.join(str8)
         decodingword=b+str10
print("now i have decode the given code word which is :.........",decodingword)






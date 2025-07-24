num=(input("enter the num : "))
str1=str(num)
for i in str1:
       swapped_num=str1.replace('0','1')
print(swapped_num,end='')
print("")
num2=int(input("enter a num:"))
ans=0
while(num2!=0):
       rem=num2%10
       ans=ans*10+rem
       num2=int(num2/10)
       print(num2)
print("reversed num:",ans) 
     

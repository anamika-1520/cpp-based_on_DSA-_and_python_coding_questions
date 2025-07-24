num=int(input("enter the number : "))
i=1
sum=0
while (i<=num):
  if (i%5==0):
    continue
  sum=i+sum
  i=i+1
  if(sum>300):
    break

print(sum)        
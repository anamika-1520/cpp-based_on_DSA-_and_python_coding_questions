sett={12,34,23,34,22,22,2222}
print(sett)
print("type of sett is :",type(sett))
print("length of set is ",len(sett))
sett.add(90)
print("sett after adding an element 90 : ",sett)
herry=set()
print("type of herry is :",type(herry)); print(herry)
set1={67,89,78,67,45}
set2={12,23,45,67,89}
set3=set1.intersection(set2)
print("intersection of set1 and set2=",set3)
set4=set1.union(set2)
print("union of set1 and set2: ",set4)
set5=set1.difference(set2)
print("set1-set2=",set5)
set6=set2.difference(set1)
print("set2 -set1 =",set6)
set2.discard(89)
print("remove 89 from set2 and print:\n",set2)
print("set1 contains 89 or not? ",set1.__contains__(89))
set1.difference_update(set2)
print("set1 and set2 ka difference karne ke baad set1 ka updated version= ", set1)
print("set2 ki copy:",set2.copy())
set7=set1.union(sett);print(set7)
set7.intersection_update(set1) #set7 and set1 ka intersection karne ke baad update kar diya he set7 ko
print("set7", set7)
print(set1.isdisjoint(set2))
print(set1.issubset(sett))
sett.update(set1);print(sett) #add kar diya(union of sett and set1 and return karna union) sett and set1 ko
###################################################################################################################del(set1);
print(set1)
print(set1.pop());print(set1.pop())# set ke elements ko ek ek karke print karana by the help of pop()
print(set1.symmetric_difference(sett))
set10={90,78,56}
set11={67,90,00}
print(set10.symmetric_difference(set11))# uncommon elements print karna
set10.symmetric_difference_update(set11)
print(set10)
print(set10.issubset(set11))
print(set10.issuperset(sett))
sett.add("anamika")
print(sett)
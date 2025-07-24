""""for loop main enumaration ka matlab ham bahut sari cheejon ko for loop main use kar sakte he """
list=["anamika ","saloni","abhishek","abhay","swati","girish"]
index=0
for mark in list:
    print(mark)
    if(index==2):
        print(mark ,"best boy in house")
    index+=1
###################################################
for index,name in enumerate(list,start=1):
    print(index,"= ",name)
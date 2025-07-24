question1=["which is the holy river of india?"
           ,"1--ganga","2--yamuna","3--satluj","4--chambal","correct answer is option 1--ganga",1]
question2=["which language is considered to be as easy language of computer progamming?"
           ,"1--C language","2--c++","3--python","4--R","correct anser is option 3--python",3]
question3=["who is the fisrt president of india?"
           ,"1--modi ji","2--dr. rajendra prasad","3--dr.b.r. ambedakar","4--pranav mukharji","correct answer is option 2--dr. rajendra prasad",2]
question4=["who is the inventor of electric bulb?"
           ,"1--edition","2--graham bel","3--modi ji","4--amit shah","correct answer is option 1--edition ",1]
levels=[10000,20000,25000,30000,40000,50000,55000,100000,5000000,700000]

for i in question1:
    if(i==question1[5]):
        break
    print(i)
print("enter your answer(press key form (1-4) for the correct option):")
ans=int(input()) 
if(ans==question1[6]):
    print(f"you have given the correct answer and you won {levels[0]} rupees for this answer")
    total=levels[0]
else:
    print("sorry! you have entered  wrong answer") 
    print(question1[5])      
for i in question2:
    if(i==question2[5]):
        break
    print(i)
print("enter your answer(press key form (1-4) for the correct option):")    
ans2=int(input())
if(ans2==question2[6]):
    print(f"you have given the correct answer and you won {levels[1]} rupees")
    total=total+levels[1]
else:
    print("sorry! you have entered wrong answer")
    print(question2[5])
for i in question3:
    if(i==question3[5]):
      break
    print(i)
print("enter your answer(press key form (1-4) for the correct option):")     
ans3=int(input())
if(ans3==question3[6]):
    print(f"you have given the correct answer and you won {levels[2]} rupees")
    total=total+levels[2]
else:
    print("sorry! you have entered wrong answer")
    print(question3[5])
for i in question4:
    if(i==question4[5]):
       break
    print(i) 
print("enter your answer(press key form (1-4) for the correct option):") 
ans4=int(input())
if(ans4==question4[6]):
    print(f"you have given the correct answer and you  have won {levels[3]} rupees") 
    total=total+levels[3]  
else:
    print("sorry you have given wrong answer,thankyou for participating in KBC") 
    print(question4[5])      
print("total rupees uoy have earned",total,"rupees")       
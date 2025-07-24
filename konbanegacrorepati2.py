questions=[
           ["who is  your present prime minister?"
            ,"narendra das modi","kohli","munnabhai","dr.rajendra prasad",1],
           ["who was the first prime minister of india?"
            ,"jabahar lal neharu","tuldidas","modiji","none",1],
           ["which language is considered as a very easy language in cs?"
            ,"C lang","C++","R","PYTHON",4],
           ["who is ram?"
            ,"lord","human","god","name",1]]
levels=[1000,10000,40000,50000,60000,100000,320000]
money=0
for i in range(len(questions)):
    question=questions[i]
    print(f"{question[0]}")
    print(f"a {question[1]}                    b {question[2]}")
    print(f"c {question[3] }                        d {question[4]}")
    reply=int(input("enter your answer:(1-4) "))
    if(reply==0):
        print("your game is over")
        print("total money you will be given is ", money)
        break
    if(reply==question[-1]):
        print(f"you have given correct answer and you have won {levels[i]} rupees")
        money=money+levels[i]
    else:
        print("your ans is wrong ")    
        if(money<50000):
            print('total money you will be given is',levels[0])
        elif(money<320000):
            print("tatal money you will be given is ", money)
        break    
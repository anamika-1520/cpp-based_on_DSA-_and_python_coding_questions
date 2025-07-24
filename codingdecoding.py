import string

string=input("enter a message :")
words=string.split(" ")


print("enter the number 1 for coding and 0 for decoding")
coding=input()
coding=True if (coding == "1") else False
if(coding):
    nwords=[]
    for word in words:
        if(len(word)>=3):
           r1="23#"
           r2="333"
           newstr=r1+word[1:]+word[0]+r2
           nwords.append(newstr)
        else:
           nwords.append(words[::-1])        
    print("".join(nwords))
else:
    nwords=[]
    for word in words:
        if(len(word)>=3):
            strd=words[3:-3]
            nwords.append(strd)
        else:
            nwords.append(words[::-1])
    print("".join(nwords))          

    
import time 
timestamp =  time.strftime('%H:%M:%S')# >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>..most important function of module time
timestamp=int(time.strftime('%H'))
print(timestamp)
minute=int(time.strftime('%M'))
print(minute)
second=int(time.strftime('%S'))
print(second)
if(timestamp<=24 and timestamp>=20):{
    print("GOOD NIGHT SIR,", "take care and sweet dreams :)")}
elif(timestamp<20 and timestamp>=16):
    print("GOOD EVENING SIR,","aap kaise ho :)")

elif(timestamp<16 and timestamp>=12):
    print("GOOD AFTER NOON SIR,","how are you:")
elif(timestamp<12 and timestamp>24):
    print("GOOD MORNING SIR,","how are you :)")
else: 
    print("not a right  time of greetings : go home")
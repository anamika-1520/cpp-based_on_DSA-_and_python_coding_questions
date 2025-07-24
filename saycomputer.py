import win32com.client 
shoutout=["anmaika","abhay","abhishek","swati","devesh saxena anmaika ke papa"]
speaker=win32com.client.Dispatch("SAPI.SpVoice")

for name in shoutout:
    s=name
    speaker.speak(f"shoutout to {name}")
   
shoutout=["hello anaamika ARE YOU FINE?","i am fine. how about you?","i am also good, hello akrati kaise ho "]
speaker=win32com.client.Dispatch("SAPI.SpVoice")
for name in shoutout:
    s=name
    speaker.speak(name)
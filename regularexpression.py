import re
pattern=r"[a-z]+s"
text="anamika is a very good girl.she is nice girl .she is vs ns ks cute girl."
#match=re.search(pattern,text)
matchs=re.finditer(pattern,text)
for match in matchs:
    print(match)
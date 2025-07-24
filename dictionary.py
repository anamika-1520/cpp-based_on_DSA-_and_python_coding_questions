dict= {
    "name" : "anamika",
    "cgpa" : 9090889,
    "college" : "crpf college",
    "score"  : {
        "chem" : 98,
        "phy" : 88,
        "math" : 99
    }
}
print(dict["name"])
print(dict["score"]["math"])
print(dict["score"]["phy"])
print(dict)
print(dict.keys())
print(len(dict.keys()))
print(list(dict.keys()))
print(dict.items())
print(dict.copy())
#print(dict.pop("name"))
#print(dict.popitem())
print(dict.get("cgpa"))
print(dict.values())
print(dict.update())
for keys in dict:
    print(keys)
for key,value in dict.items():
    print(f"the values of dict in {key} is {value}")  
dict1={"hobbies": "playing carrom"}
dict.update(dict1)
#dict.fromkeys("score")
print(dict)
dict.setdefault("fav pet ","kutta")
print(dict)
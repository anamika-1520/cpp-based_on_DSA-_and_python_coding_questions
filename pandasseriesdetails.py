import numpy as np
import pandas as pd
country=["india","pakistan","USA","nepal","shrilanka"]
print(pd.Series(country))
runs=[78,59,5,95,549,54,54,434]
print(pd.Series(runs))
marks=[66,43,33,100,45]
subjects=['maths','physics','english','hindi','biology']
print(pd.Series(marks,index=subjects,name="ANAMIKA'S MARKS"))
marks={
    'maths': 89,
    'english': 90,
    'hindi':100,
    'biology':89
    
}
print(pd.Series(marks))
print(pd.Series(marks).size) #### SIZE
print(pd.Series(marks).dtype) ## DTYPE
print(pd.Series(marks).is_unique)## UNIQUE ELEMENT HE KI NAHI
print(pd.Series(marks,name="anamika's marks").name) ## NAME 
print(pd.Series([12,34,11,12,34,56]).is_unique) 
print(runs.index(54)) ## GIVES THE INDEX OF THE GIVEN VALUE
print(pd.Series(marks).values) ## MARKS DICT MAIN KON KON SI VALUES HAI 
## to sort the series and find the maximum element of series
print(pd.Series(runs).sort_values(ascending=False))#.head(1).values[0])
## sort the index of series elements
print(pd.Series(runs).sort_index(ascending=False))#.tail(3))
## count will not count  missing (none type ) values 
## but size will count all values
##  sum add all elements in 
print("sum of all elements in series runs : ",pd.Series(runs).sum())

#print(pd.read_csv(r"C:\Users\wwwan\Downloads\datasets-session-16-20240930T161156Z-001.zip\datasets-session-16",Squeeze=True))
print(pd.Series(runs).mode())
print(pd.Series(marks).median())
print(pd.Series(marks).var())
print(pd.Series(runs).std())


import pandas as pd
import numpy as np
s = pd.Series(["a", "b", "c", "a"], dtype="category")
print(s)

cat = pd.Categorical(['a', 'b', 'c', 'a', 'b', 'c', 'a', 'a', 'd']) # Catgorical reduces space and displays only unique values
print(cat)
print()
cat = pd.Categorical(['a', 'b', 'c', 'a', 'b', 'c', 'd'], ['c', 'b', 'a'])
print(cat)
print(cat.describe)
cat = pd.Categorical(['a', 'b', 'c', 'a', 'b', 'c', 'd'], ['c', 'b', 'a'], ordered = True)
print(cat)
print(cat.ordered)
cat = pd.Categorical(['a', 'b', 'c', 'a', 'b', 'c', 'd'], ['a', 'b', 'c'])
print(cat)
print(cat.describe) # describe the type of data
print(cat.categories) # get the categories of the object
print(cat.ordered) # get the order of the object
print()
s = pd.Series(["a", "b", "c", "a"], dtype="category")
s.cat.categories = ["Group %s" % g for g in s.cat.categories]
print(s.cat.categories) #cat is not variable, it is used to represent categorical data
s = s.cat.add_categories([4])
print(s.cat.categories)
print()
s = pd.Series(["a","b","c","a"], dtype="category")
print(s)
print("After removal : ")
print(s.cat.remove_categories("a"))
print(s)
print()

obj = pd.Series([4.5, 6.7, -1.2, 3.4], index = ['d', 'a', 'b', 'c'])
print(obj)
print(type(obj))
obj1 = obj.reindex(['a', 'b', 'c', 'd', 'e'])
print(obj1)
print(type(obj1))
print()
obj2 = pd.Series(['blue', 'green', 'yellow'], index = [0,3,7])
print(obj2)
print(obj2.reindex(range(9), method = 'ffill'))
print()
print(obj2.reindex(range(9), method = 'bfill'))
print()
print(obj2.reindex(range(9), method = 'nearest'))
print()

df = pd.DataFrame(np.arange(9).reshape((3,3)), index=['a','c','d'], columns = ['Bangalore', 'Mysore', 'Hubli'])
print(df)
df1 = df.reindex(['a','b','c','d']) # gives NaN
df1 = df.reindex(['a','b','c','d'], fill_value = 12)
print(df1)
print()

print(df)
cities = ["Bangalore", "Hubli", "Mysore"]
print(df.reindex(columns = cities))
print()

s = pd.Series(['Tom', 'William Rock', 'John', 'Albert', np.nan, '1234', 'SteveSmith'])
print(s)
print("Lower Case is \n", s.str.lower())
print("Upper Case is \n", s.str.upper())
print("Lower Case values are contained in \n", s.str.islower())
print("Upper Case values are contained in \n", s.str.isupper())
print("Numeric values are contained in \n", s.str.isnumeric())
print("Length is \n", s.str.len())

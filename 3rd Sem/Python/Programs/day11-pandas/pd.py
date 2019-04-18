import pandas as pd
import numpy as np
obj = pd.Series([4,2,3,-3])
print(obj)
print(type(obj))
print("Series values")
print(obj.values)
print(obj.index)
print("Individual series elements")
print(obj[2])

print()

print("Pandas Series with user defined index")
obj = pd.Series([4,2,3,-3], index = ['d','b','c','a'])
print(obj)
print(obj['d'])
print(obj[obj > 0])
print(np.sqrt(obj))

print()

sdata = {'Bangalore': 5600000, 'Mysore': 24000000, 'Mangalore': 3400000, 'Hassan': 8989898}
obj = pd.Series(sdata)
print(obj.values)
print(obj.index)
print()
cities = ['Chikamagalur', 'Bangalore', 'Mangalore', 'Mysore']
obj = pd.Series(sdata, index = cities)
print(obj)
obj['Cochin'] = 2345678
print(obj)

data = {'city':['Bangalore', 'Bangalore', 'Bangalore', 'Mangalore', 'Mangalore', 'Mangalore'], 'year': [1991, 2001, 2011, 1991, 2001, 2011], 'population': [483, 653, 962, 165, 189, 2098]}
frame = pd.DataFrame(data)
print(frame)
print()
print(frame.head())
print()
print(frame.tail())
print(type(frame))
print()
print(pd.DataFrame(data, columns = ['year', 'city', 'population']))
print()

print("DataFrames created with lists")
data = [1,2,3,4,5]
df = pd.DataFrame(data)
print(df)
print()

data = [['Alex', 10], ['Bob', 12], ['Clarke', 13]]
df = pd.DataFrame(data, columns=['Name', 'Age'])
print(df)
print(type(df))
print(pd.DataFrame(data, columns = ['Age', 'Name']))
df = pd.DataFrame(data, columns = ['Name', 'Age'], dtype = float)
print(df)
print()

data = [{'a': 1, 'b': 2}, {'a': 5, 'b': 10, 'c': 20}]
df = pd.DataFrame(data)
print(df)

data = [{'a': 1, 'b': 2}, {'a': 5, 'b': 10, 'c': 20}, {'c': 3, 'd': 9, 'e':4}]
df = pd.DataFrame(data)
print(df)

data = [{'a': 1, 'b': 2}, {'a': 5, 'b': 10, 'c': 20}]
df1 = pd.DataFrame(data, index = ['First', 'Second'], columns = ['a', 'b'])
df2 = pd.DataFrame(data, index = ['First', 'Second'], columns = ['a', 'b1'])
print(df1)
print(df2)
print()

d = {'one' : pd.Series([1,2,3], index = ['a', 'b', 'c']), 'two': pd.Series([1,2,3,4], index = ['a', 'b', 'c', 'd'])}
df = pd.DataFrame(d)
print(df)
print()
print(df['one'])
print(df['one'].size)
print(df.T)

# create a dataframe that consists of following set : name(10 names), age(10 ages), dependents(boolean values). Create a dataframe of this.
data = {'name': ['Vijay', None, 'Aamir', 'Ayush', 'Karthik', 'Sudhanva', 'Raj', 'Shreedhar', 'Rexi', 'Deepak'], 'age': [20, np.nan, np.nan, 33, 34, 45, 25, 26, 27, 28], 'dependents': [True, False, True, False, True, False, True, False, True, False]}
frame = pd.DataFrame(data)
print(frame)
print(frame.count()) # to know how many records have complete data.
print(frame.count(axis='columns'))
print(frame.set_index(["name", "dependents"]).count(level="name"))

# create a data frame that consists of 4 columns : first columns - name, second - mark1, third - mark2, fourth - mark3. Create 5 rows.
data = {'name': ['Vijay', 'Ayush', 'Karthik', 'Sudhanva', 'Rexi'], 'mark1': [100, 90, 60, 70, 80], 'mark2': [50,98,70,80,90], 'mark3': [70,88,90,100,98]}
frame = pd.DataFrame(data)
print(frame)
print(frame.sum())
print("Sum column wise")
print(frame.sum(axis=0))
print("Sum row wise")
print(frame.sum(axis=1))
# print(frame.sum(axis=2))
print("Specific column sum")
print(frame.loc[:, "mark1"].sum()) #loc - location
print(frame.loc[:, "mark2"].sum())
print(frame.loc[:, "mark3"].sum())
print()
print(frame.mean())
print(frame.mode())
print(frame.median())
print(frame.loc[:, "mark1"].mean())
print(frame.loc[:, "mark2"].mode())
print(frame.loc[:, "mark3"].median())
print()
# get the maximum marks in each subject and minimum
print(frame.loc[:, "mark1"].max())
print(frame.loc[:, "mark2"].max())
print(frame.loc[:, "mark3"].max())
print(frame.loc[:, "mark1"].min())
print(frame.loc[:, "mark2"].min())
print(frame.loc[:, "mark3"].min())
# for each student get min and max marks
print()
print(frame.min(axis=1))
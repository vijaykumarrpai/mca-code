import numpy as np
import pandas as pd
# 1) Get the characteristics of a numpy array
arr = np.array([1,2,3])
print(arr.shape)
print(arr.dtype)
print(arr.size)
print(arr.ndim)
print()
arr = np.array([1,2,3,4,5,6], dtype = bool)
print(arr.shape)
print(arr.dtype)
print(arr.size)
print(arr.ndim)
print()
arr = np.array([1,2,3,4,5,6,7,8,9], dtype = object)
print(arr.shape)
print(arr.dtype)
print(arr.size)
print(arr.ndim)

# 2) Create an array from a regular Python list or tuple
my_list = [1,2,3,4,5,6]
print("List to array is : ", np.asarray(my_list))
my_tuple = ([1,2,3], [4,5,6])
print("Tuple to array is : ", np.asarray(my_tuple))

# 3) Create arrays with initial placeholder content.
sdata = {'Apple': np.nan, 'Oneplus': np.nan, 'Samsung': np.nan, 'Google': np.nan}
phones = ['6 plus', '6T', 'S9 ', 'Pixel']
obj = pd.Series(sdata, index = phones)
print(obj)

# 4) Create sequence of numbers
array = np.arange(8)
print(array)

# 5) Returns evenly spaced values in an array with a given interval
array = np.arange(0,10,2)
print(array)

# 6) Extract all odd numbers from given arr
arr = np.array([0,1,2,3,4,5,6,7,8,9])
print(arr[1:10:2])

# 7) Replace all odd numbers in arr with -1
arr = np.arange(10)
newlist = []
for item in arr:
    if item % 2 != 0:
        item = -1
    newlist.append(item)
arr = newlist
print (arr)

# 8) Replace all odd numbers in arr with -1 without changing arr

# 1) 
from tkinter import *
root = Tk()
root.title('Welcome to MCA App')
lb = Label(root, text = 'Hello', )
lb.pack(side = LEFT)
b = Button(root, text = 'Click Me')
b.pack(side = LEFT)
mainloop()

# 2)
def show():
    lb.config(text = 'Button was clicked!!')

root = Tk()
root.title('Welcome')
lb = Label(root, text = 'Hello', )
lb.pack(side = LEFT)
b = Button(root, text = 'Click Me', command = show)
b.pack(side = LEFT)
mainloop()

# 3)
root = Tk()
root.title('This...')
b = Button(root, text = 'File')
b.pack(side = LEFT)
mainloop()

# 4)
root = Tk()
root.title('registration form')
root.geometry('300x300')
root.configure(background = 'light green')
label = Label(root, text = 'Form', bg = 'light green').grid(row = 0, column = 3)
label1 = Label(root, text = 'Name', bg = 'light green').grid(row = 1, column = 1)
entry1 = Entry(root, justify  = RIGHT).grid(row = 1, column = 3)
label2 = Label(root, text = 'Course', bg = 'light green').grid(row = 2, column = 1)
entry2 = Entry(root, justify = RIGHT).grid(row = 2, column = 3)
label3 = Label(root, text = 'Semester', bg = 'light green').grid(row = 3, column = 1)
entry3 = Entry(root, justify = RIGHT).grid(row = 3, column = 3)
label4 = Label(root, text = 'Form No.', bg = 'light green').grid(row = 4, column = 1)
entry4 = Entry(root, justify = RIGHT).grid(row = 4, column = 3)
label5 = Label(root, text = 'Contact No.', bg = 'light green').grid(row = 5, column = 1)
entry5 = Entry(root, justify = RIGHT).grid(row = 5, column = 3)
label6 = Label(root, text = 'Email id', bg = 'light green').grid(row = 6, column = 1)
entry6 = Entry(root, justify = RIGHT).grid(row = 6, column = 3)
label7 = Label(root, text = 'Address', bg = 'light green').grid(row = 7, column = 1)
entry7 = Entry(root, justify = RIGHT).grid(row = 7, column = 3)
b = Button(root, text = 'Submit', bg = 'red', fg = 'black').grid(row = 8, column = 3)
mainloop()

# 5)


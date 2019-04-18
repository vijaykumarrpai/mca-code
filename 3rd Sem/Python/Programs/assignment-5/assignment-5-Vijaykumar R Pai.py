# Use lambda functions, map, reduce and filter and list comprehension to solve the following
# 1. Print the square root of a number
sqrt = lambda x : x ** 0.5 
print(sqrt(100))

# 2. Solve the expression x+y*z/p
x = int(input("Enter x : "))
y = int(input("Enter y : "))
z = int(input("Enter z : "))
p = int(input("Enter p : "))

expr = lambda x,y,z,p : x + y * z / p
print(expr(x,y,z,p))

# 3. From a given list filter out only numbers that are divisible by 3.
num = (input("Enter a list of numbers : ")).split(',')
num = [int(i) for i in num if int(i) % 2 == 0]
print(list(num))

# 4. Remove the ‘empty’ elements of a literable
names = input('Enter a list of strings : ').replace(' ','').split(',')
names = list(filter(None, names))
print(names)

# 5. Find only the names that start with ‘J’.
names = input('Enter a list of names : ').split(',')
names = [i for i in names if i.startswith('j') or i.startswith('J')]
print(names)

# 6. Compute the product of a list of integers
from functools import reduce
nums = [10,20,30]
nums_product = reduce((lambda x,y: x * y), nums)
print("Product of list of integers : ",nums_product)

# 7. Filter out the vowels from a list
vowels = lambda x : x not in ['a', 'e', 'i', 'o', 'u']
strings = input("Enter a list of characters : ").split(',')
strings = [i for i in filter(vowels, strings)]
print(strings)

# 1. Remove vowels from a sentence
vowels = ['a', 'e', 'i', 'o', 'u']
sentence = input("Enter a sentence : ")
sentence = ''.join([i for i in sentence if i not in vowels])
print(sentence)

# 2. Take two lists of same kind of input and return a dictionary – first list item as key, second list
# item as value
list1 = input("Enter some number : ").split(',')
list2 = input("Enter some value : ").split(',')
dictionary = dict(zip(list1, list2))
print(dictionary)

# 3. Change to uppercase in a list
upper = input("Enter some string to convert to upper case : ").split(',')
upper = [i.upper() for i in upper]
print(upper)

# 4. Change to lowercase in a list
lower = input("Enter some string to convert to lower case : ").split(',')
lower = [i.lower() for i in lower]
print(lower)

# 5. Take a matrix as input and return a list with each row placed on after the other
n = int(input("Enter number of elements to be inserted in a row : "))
matrix = [input("Enter row elements : ").split(',') for i in range(0, n)]
print(matrix)

# 6. Add two list comprehensions
num1 = input("Enter a list of numbers 1 : ").split(',')
num1 = [int(i) for i in num1]

num2 = input("Enter a list of numbers 2 : ").split(',')
num2 = [int(i) for i in num2]

numbers = [x + y for x, y in zip(num1, num2)]
print(numbers)

# 7. Print the length of each word in a list
strings = input("Enter some string : ").split(',')
lengths = [len(i) for i in strings]

dictionary = dict(zip(strings, lengths))
print(dictionary)

# 8. Print the first and last letter of every name in a list
strings = input("Enter some strings : ").split(',')
firstLast = [i[0] + ',' + i[-1] for i in strings]
print(firstLast)

# 9. Print the reverse of each name in a list
strings = input("Enter some strings : ").split(',')
reverseList = [i[::-1] for i in strings]
print(reverseList)

# 10. Create a list of all possible pairs of drink and food from the lists ['water', 'tea', 'juice'] and
# ['ice cream', 'chocolates', 'strawberry'], respectively
drinks = ['water', 'tea', 'juice']
foods = ['ice cream', 'chocolates', 'strawberry']

combo = [[drink + ', ' + food] for drink in drinks for food in foods]
print(combo)

# 11. Create a list of the squares of the integers from 0 to 9 where the square is greater than 5
# and less than 50
square = lambda x : x ** 2
nums = list(range(0,10))
square_list = [square(i) for i in nums if square(i) < 50]
print(square_list)

# 12. Create a list that contains names that start with a vowel
strings = input("Enter some strings : ").split(',')
vowels = ('a', 'e', 'i', 'o', 'u')
strings = [i for i in strings if i.startswith(vowels)]
print(strings)
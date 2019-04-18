# Vijaykumar R Pai
# PES1201702013

# 1. Check if two strings are anagrams of each other.
s1 = input('Enter first string')
s2 = input('Enter second string')
s1 = sorted(s1)
s2 = sorted(s2) 
print(s1 == s2)

# 2. Create a simple calculator
num1 = int(input('Enter the first number : '))
num2 = int(input('Enter the second number : '))
print (num1 + num2)
print (num1 - num2)
print (num1 * num2)
print (num1 / num2)
print (num1 // num2)
print (num1 ** num2)

# 3. Read a number n and Compute n+nn+nnn
n = input("Enter n : ")
num1 = n * 2
num2 = n * 3
res = int(n) + int(num1) + int(num2)
print (res)

# 4. Form a New String where the First Character and the Last Character of the old string have been Exchanged 
old_string = input('Enter a string : ')
new_string = old_string[-1] + old_string[1:len(old_string) - 1] + old_string[0]
print (new_string)

# 5. Remove spaces from a string
x = input('Enter the string with spaces : ')
print (x.strip())

# 6. Create two sets of numbers and implement union, intersection, Set Difference, Symmetric Difference of the sets
set1 = set(input("Enter first set of numbers : "))
set2 = set(input("Enter second set of numbers : "))
print ('union : ', set1 | set2)
print ('intersection : ', set1 & set2)
print ('set difference : ', set1 - set2)
print ('symmetric difference : ', set1 ^ set2)

# 7. Accept the radius and print the area and circumference of a circle
radius = int(input("Enter the radius of the circle : "))
area = float(3.142 * radius * radius)
circumference = float(2 * 3.142 * radius)
print (area)
print (circumference)

# 8. Accept a sequence of comma-separated numbers from user and generate a list and a tuple with those numbers.
num_list = input("Enter sequence of numbers : ").split(',')
print (list(num_list))
print (set(num_list))

# 9. Accept a filename and display the following "File name is ---- and file extension is ------"
fileName = input("Enter the filename : ").split('.')
print (fileName)
print ('fileName is :' ,fileName[0] + ' and file extension is : ', fileName[1])

# 10. Accept a list of colors and display the odd numbered indexed colors.
colors = input('Enter the colours : ').split(', ')
print (colors[1::2])

# 11. Accept the base and height of a triangle and compute the area.
base = float(input("Enter the base of the triangle : "))
height = float(input("Enter the height of the triangle : "))
res = (0.5 * base * height)
print (res)

# 12. Compute the Final amount of simple interest given principle amount, rate of interest, and a number of years.
p = float(input("Enter the principle : "))
t = float(input("Enter the number of years : "))
r = float(input("Enter the time : "))
result = ((p * t * r) / 100)
print (result)

# 13. Given weight and height calculate BMI (weight/(height * height))
weight = float(input("Enter the weight : "))
height = float(input("Enter the height : "))
BMI = (weight/(height * height))
print (BMI)

# 14. Sort three integers without using conditions.
threeIntegers = input("Enter 3 integers : ").split(',')
threeIntegers.sort()
print (threeIntegers)

# 15. Concatenate two tuples
x = (1,2,3)
y = (4,5,6)
print (x + y)

# 16. Create a tuple of two tuples.
tuple1 = (1,2,3)
tuple2 = (4,5,6)
tuple3 = (tuple1,tuple2)
print (tuple3)

# 17. Get a single string from two given strings, separated by a space and swap the first two characters of each string.
string = input('Enter two strings separted by space : ').split(' ')
print (string)
length1 = len(string[0])
length2 = len(string[1])

print('String 1 after swapping : ', string[1][:2] + string[0][1:length1])
print('String 2 after swapping : ', string[0][:2] + string[1][1:length2])

# 18. Change a given string to a new string where the second and last but one chars have been exchanged.
str1 = input('Enter a string : ')
strLength = len(str1)
str2 = str1[0] + str1[-2] + str1[1:strLength - 2] + str1[strLength - 1]

print(str1)
print(str2)

# 19. Accept a comma separated sequence of words as input and print the unique words in sorted form (alphanumerically).
x = input("Enter the strings : ").split(',')
x = list(set(x))
x.sort()
print(x)
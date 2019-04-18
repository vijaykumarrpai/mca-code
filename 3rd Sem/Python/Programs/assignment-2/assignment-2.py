# 1. Find the largest of three numbers.
num = input("Enter three numbers to know the largest among them : ").split(',')
print(num)
print(max(num))

# 2. Find the smallest of three numbers.
num = input("Enter three numbers to know the smallest among them : ").split(',')
print(num)
print(min(num))

# 3. Read the list of fruits and perform the following: If number of fruits are more than 4, add one more fruit and display 'EXCELLENT'. If banana is in list, change any one fruit and display 'GOOD'. If apple is in list, delete any one fruit and display 'AVERAGE' otherwise 'BAD'
fruits = input("Enter list of fruits : ").split(',')
print(list(fruits))
fruitLen = len(fruits)
print(fruitLen)

if fruitLen > 4:
    fruit = input("Enter the fruit : ")
    fruits.insert(fruitLen + 1, fruit)
    print(fruit)
    print(fruits)
    print('EXCELLENT')
elif 'banana' in fruits:
    fruits.index('banana')
    ele = input("Change any one fruit : ")
    food = input('Replacement fruit: ')
    fruits.remove(ele)
    fruits.insert(fruitLen + 1, food)
    print(ele)
    print(fruits)
    print('GOOD')
elif 'apple' in  fruits:
    fruits.index('apple')
    element = input("Enter the fruit to be removed : ")
    fruits.remove(element)
    print(fruits)
    print('AVERAGE')
else:
    print('BAD') 

# 4. Read a variable, find whether it is number or string. If it is a string whether it is in upper case, lower case or something else.
x = input('Enter a number or string to know its type : ')
print(x)
if x.isnumeric():
    print('it is a number')
elif x.isalpha():
    print('it is a string')
    
if x.isupper() == True:
    print('String is in uppercase.')
elif x.islower() == True:
        print('String is in lowercase.')
elif x.islower() == False and x.isupper() == False:
            print('It is in something else.')

# 5. Find those numbers which are divisible by 9 and multiples of 5.
lowerLimit = int(input("Enter the lower limit : "))
upperLimit = int(input("Enter the upper limit :"))
for var in range (lowerLimit,upperLimit + 1):
    if(var % 9 == 0 and var % 5 == 0):
        print(var) 

# 6. Display the multiplication table from 1 to n in the form 1*1 = 1 ……
num = int(input("Enter the number to display multiplication table upto given range : "))
start = int(input("Enter the starting range : "))
stop = int(input("Enter the stopping range : "))
for var in range(start,stop):
    print(num,'x',var,'=',num * var)

# 7. Display depending on the number of rows.

# 8. Read a list of numbers and display the even numbers and odd numbers separately. Sum the even numbers and odd numbers and display the same.
even_Numbers = []
odd_Numbers = []

start = int(input('Enter the starting range of numbers : '))
stop = int(input('Enter the stopping range of numbers : '))
for num in range(start,stop):
    if num % 2 == 0:
        even_Numbers.append(num)
    else:
        odd_Numbers.append(num)
print('Even numbers are :', even_Numbers)
print('Odd numbers are :', odd_Numbers)
print('Sum of even numbers are : ', sum(even_Numbers))
print('Sum of odd numbers are : ', sum(odd_Numbers))

# 9. Read a list of numbers and display the numbers whose sum of individual digits is an even number.
num = input("Enter list of numbers : ").split(',')
num_list = list(num)
print (num_list)

for i in num_list: 
    num = int(i)
    total = 0
    while num > 0:
        digit = int(num) % 10
        total = int(total) + int(digit)
        num = int(num) / 10
    if total % 2 == 0:
        print(i)

# 10. Check whether an alphabet of a string inputted by the user is a vowel or consonant.
string = input('Enter an string to know whether it is a vowel or consonant : ')

vowels = ['a','e','i','o','u']

if string in vowels:
    print("It is a vowel")
else:
    print("It is a consonant")

# 11. Check whether a string inputted by the user is representing an integer or not.
string = input("Enter a string to check whether it is an integer or not : ")
if string.isnumeric():
    print('it is an integer')
else:
    print('not an integer')

# 12. Display depending on the number of rows.
num = int(input('Enter the number of rows to be displayed as pattern : '))
for i in range(1, num):
    print('*')
    for j in range(1, i + 1):
        print('*', end='') 